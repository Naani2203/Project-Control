// Fill out your copyright notice in the Description page of Project Settings.


#include "CCharacter.h"
#include "Camera/CameraComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "GameFramework/Pawn.h"


// Sets default values
ACCharacter::ACCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComponent = GetMesh();
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->bUsePawnControlRotation = true;
	SpringArmComp->SetupAttachment(RootComponent);

	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
	CameraComp->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ACCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACCharacter::MoveForward(float Value)
{
	AddMovementInput(CameraComp->GetForwardVector()*Value);
}

void ACCharacter::MoveRight(float Value)
{
	AddMovementInput(CameraComp->GetRightVector() * Value);
}

void ACCharacter::StartAim()
{
	GetCharacterMovement()->bOrientRotationToMovement = false;
	bUseControllerRotationYaw = true;
	
}

void ACCharacter::StopAim()
{
	GetCharacterMovement()->bOrientRotationToMovement = true;
	bUseControllerRotationYaw = false;
}

void ACCharacter::Dash()
{
	GetCharacterMovement()->AddImpulse(FVector(GetActorForwardVector().X*2000,GetActorForwardVector().Y*2000,GetActorForwardVector().Z+100) , true);
	if (DashEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(DashEffect, MeshComponent, ForceFieldSocketName);
	}
}

void ACCharacter::ForceField()
{
	TArray<FHitResult> OutHits;

	FVector MyLocation = GetActorLocation();

	FCollisionShape MyColSphere = FCollisionShape::MakeSphere(500.0f);

	//DrawDebugSphere(GetWorld(), GetActorLocation(), MyColSphere.GetSphereRadius(), 50, FColor::Cyan, true);
	bool isHit = GetWorld()->SweepMultiByChannel(OutHits, MyLocation, MyLocation, FQuat::Identity, ECC_WorldStatic, MyColSphere);

	if (isHit)
	{
		for (auto& Hit : OutHits)
		{
			UStaticMeshComponent* MeshCom = Cast<UStaticMeshComponent>((Hit.GetActor())->GetRootComponent());
			if (MeshCom)
			{
				MeshCom->AddRadialForce(Hit.Actor->GetActorLocation(), 10000.f, 200000.f, ERadialImpulseFalloff::RIF_Linear, true);
				
			}
		}
	}
	
	if (ForceFieldEffect)
	{
		UGameplayStatics::SpawnEmitterAttached(ForceFieldEffect, MeshComponent, ForceFieldSocketName);
	}
}


// Called every frame
void ACCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward",this,&ACCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACCharacter::MoveRight);

	PlayerInputComponent->BindAxis("LookUp", this, &ACCharacter::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn", this, &ACCharacter::AddControllerYawInput);

	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("StartAim", IE_Pressed, this, &ACCharacter::StartAim);
	PlayerInputComponent->BindAction("StopAim", IE_Released, this, &ACCharacter::StopAim);
	PlayerInputComponent->BindAction("Dash", IE_Pressed, this, &ACCharacter::Dash);
	PlayerInputComponent->BindAction("ForceField", IE_Pressed, this, &ACCharacter::ForceField);
}

FVector ACCharacter::GetPawnViewLocation() const
{
	if (CameraComp)
	{
		return CameraComp->GetComponentLocation();
	}

	return Super::GetPawnViewLocation();
}

