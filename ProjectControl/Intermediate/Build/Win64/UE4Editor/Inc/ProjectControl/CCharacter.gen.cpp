// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectControl/CCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCharacter() {}
// Cross Module References
	PROJECTCONTROL_API UClass* Z_Construct_UClass_ACCharacter_NoRegister();
	PROJECTCONTROL_API UClass* Z_Construct_UClass_ACCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectControl();
// End Cross Module References
	void ACCharacter::StaticRegisterNativesACCharacter()
	{
	}
	UClass* Z_Construct_UClass_ACCharacter_NoRegister()
	{
		return ACCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectControl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CCharacter.h" },
		{ "ModuleRelativePath", "CCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACCharacter_Statics::ClassParams = {
		&ACCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACCharacter, 2167331942);
	template<> PROJECTCONTROL_API UClass* StaticClass<ACCharacter>()
	{
		return ACCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACCharacter(Z_Construct_UClass_ACCharacter, &ACCharacter::StaticClass, TEXT("/Script/ProjectControl"), TEXT("ACCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
