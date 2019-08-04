// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTCONTROL_ProjectControlGameModeBase_generated_h
#error "ProjectControlGameModeBase.generated.h already included, missing '#pragma once' in ProjectControlGameModeBase.h"
#endif
#define PROJECTCONTROL_ProjectControlGameModeBase_generated_h

#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_RPC_WRAPPERS
#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectControlGameModeBase(); \
	friend struct Z_Construct_UClass_AProjectControlGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AProjectControlGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(AProjectControlGameModeBase)


#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectControlGameModeBase(); \
	friend struct Z_Construct_UClass_AProjectControlGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AProjectControlGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ProjectControl"), NO_API) \
	DECLARE_SERIALIZER(AProjectControlGameModeBase)


#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectControlGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectControlGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectControlGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectControlGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectControlGameModeBase(AProjectControlGameModeBase&&); \
	NO_API AProjectControlGameModeBase(const AProjectControlGameModeBase&); \
public:


#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectControlGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectControlGameModeBase(AProjectControlGameModeBase&&); \
	NO_API AProjectControlGameModeBase(const AProjectControlGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectControlGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectControlGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectControlGameModeBase)


#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_12_PROLOG
#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_RPC_WRAPPERS \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_INCLASS \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTCONTROL_API UClass* StaticClass<class AProjectControlGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectControl_Source_ProjectControl_ProjectControlGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
