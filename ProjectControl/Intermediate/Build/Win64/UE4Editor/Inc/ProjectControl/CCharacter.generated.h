// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCONTROL_CCharacter_generated_h
#error "CCharacter.generated.h already included, missing '#pragma once' in CCharacter.h"
#endif
#define PROJECTCONTROL_CCharacter_generated_h

#define ProjectControl_Source_ProjectControl_CCharacter_h_14_RPC_WRAPPERS
#define ProjectControl_Source_ProjectControl_CCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectControl_Source_ProjectControl_CCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACCharacter(); \
	friend struct Z_Construct_UClass_ACCharacter_Statics; \
public: \
	DECLARE_CLASS(ACCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(ACCharacter)


#define ProjectControl_Source_ProjectControl_CCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesACCharacter(); \
	friend struct Z_Construct_UClass_ACCharacter_Statics; \
public: \
	DECLARE_CLASS(ACCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(ACCharacter)


#define ProjectControl_Source_ProjectControl_CCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCharacter(ACCharacter&&); \
	NO_API ACCharacter(const ACCharacter&); \
public:


#define ProjectControl_Source_ProjectControl_CCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACCharacter(ACCharacter&&); \
	NO_API ACCharacter(const ACCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACCharacter)


#define ProjectControl_Source_ProjectControl_CCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(ACCharacter, CameraComp); }


#define ProjectControl_Source_ProjectControl_CCharacter_h_11_PROLOG
#define ProjectControl_Source_ProjectControl_CCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_RPC_WRAPPERS \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_INCLASS \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectControl_Source_ProjectControl_CCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_INCLASS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_CCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCONTROL_API UClass* StaticClass<class ACCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectControl_Source_ProjectControl_CCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
