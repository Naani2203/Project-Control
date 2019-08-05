// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCONTROL_CWeapon_generated_h
#error "CWeapon.generated.h already included, missing '#pragma once' in CWeapon.h"
#endif
#define PROJECTCONTROL_CWeapon_generated_h

#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACWeapon(); \
	friend struct Z_Construct_UClass_ACWeapon_Statics; \
public: \
	DECLARE_CLASS(ACWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(ACWeapon)


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public:


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACWeapon(ACWeapon&&); \
	NO_API ACWeapon(const ACWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACWeapon)


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComponent() { return STRUCT_OFFSET(ACWeapon, MeshComponent); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(ACWeapon, DamageType); } \
	FORCEINLINE static uint32 __PPO__MuzzleSocketName() { return STRUCT_OFFSET(ACWeapon, MuzzleSocketName); } \
	FORCEINLINE static uint32 __PPO__MuzzleEffect() { return STRUCT_OFFSET(ACWeapon, MuzzleEffect); } \
	FORCEINLINE static uint32 __PPO__ImpactEffect() { return STRUCT_OFFSET(ACWeapon, ImpactEffect); } \
	FORCEINLINE static uint32 __PPO__TrailEffect() { return STRUCT_OFFSET(ACWeapon, TrailEffect); }


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_11_PROLOG
#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_RPC_WRAPPERS \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_INCLASS \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_INCLASS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_Public_CWeapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCONTROL_API UClass* StaticClass<class ACWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectControl_Source_ProjectControl_Public_CWeapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
