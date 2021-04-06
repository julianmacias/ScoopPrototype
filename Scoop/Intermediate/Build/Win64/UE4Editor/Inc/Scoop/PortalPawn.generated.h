// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FHitResult;
struct FVector;
#ifdef SCOOP_PortalPawn_generated_h
#error "PortalPawn.generated.h already included, missing '#pragma once' in PortalPawn.h"
#endif
#define SCOOP_PortalPawn_generated_h

#define Scoop_Source_Scoop_PortalPawn_h_292_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterDebugSettings_Statics; \
	SCOOP_API static class UScriptStruct* StaticStruct();


template<> SCOOP_API UScriptStruct* StaticStruct<struct FCharacterDebugSettings>();

#define Scoop_Source_Scoop_PortalPawn_h_262_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCrouchLerp_Statics; \
	SCOOP_API static class UScriptStruct* StaticStruct();


template<> SCOOP_API UScriptStruct* StaticStruct<struct FCrouchLerp>();

#define Scoop_Source_Scoop_PortalPawn_h_26_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCharacterSettings_Statics; \
	SCOOP_API static class UScriptStruct* StaticStruct();


template<> SCOOP_API UScriptStruct* StaticStruct<struct FCharacterSettings>();

#define Scoop_Source_Scoop_PortalPawn_h_324_SPARSE_DATA
#define Scoop_Source_Scoop_PortalPawn_h_324_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPortalTraceSingleExample); \
	DECLARE_FUNCTION(execReturnToOrientation); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward); \
	DECLARE_FUNCTION(execFireAction); \
	DECLARE_FUNCTION(execReleaseInteractable); \
	DECLARE_FUNCTION(execInteractAction); \
	DECLARE_FUNCTION(execCrouchLerp); \
	DECLARE_FUNCTION(execCrouchAction); \
	DECLARE_FUNCTION(execRunAction); \
	DECLARE_FUNCTION(execJumpAction);


#define Scoop_Source_Scoop_PortalPawn_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPortalTraceSingleExample); \
	DECLARE_FUNCTION(execReturnToOrientation); \
	DECLARE_FUNCTION(execLookUp); \
	DECLARE_FUNCTION(execTurn); \
	DECLARE_FUNCTION(execRight); \
	DECLARE_FUNCTION(execForward); \
	DECLARE_FUNCTION(execFireAction); \
	DECLARE_FUNCTION(execReleaseInteractable); \
	DECLARE_FUNCTION(execInteractAction); \
	DECLARE_FUNCTION(execCrouchLerp); \
	DECLARE_FUNCTION(execCrouchAction); \
	DECLARE_FUNCTION(execRunAction); \
	DECLARE_FUNCTION(execJumpAction);


#define Scoop_Source_Scoop_PortalPawn_h_324_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortalPawn(); \
	friend struct Z_Construct_UClass_APortalPawn_Statics; \
public: \
	DECLARE_CLASS(APortalPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(APortalPawn)


#define Scoop_Source_Scoop_PortalPawn_h_324_INCLASS \
private: \
	static void StaticRegisterNativesAPortalPawn(); \
	friend struct Z_Construct_UClass_APortalPawn_Statics; \
public: \
	DECLARE_CLASS(APortalPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(APortalPawn)


#define Scoop_Source_Scoop_PortalPawn_h_324_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortalPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortalPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalPawn(APortalPawn&&); \
	NO_API APortalPawn(const APortalPawn&); \
public:


#define Scoop_Source_Scoop_PortalPawn_h_324_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortalPawn(APortalPawn&&); \
	NO_API APortalPawn(const APortalPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortalPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortalPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortalPawn)


#define Scoop_Source_Scoop_PortalPawn_h_324_PRIVATE_PROPERTY_OFFSET
#define Scoop_Source_Scoop_PortalPawn_h_321_PROLOG
#define Scoop_Source_Scoop_PortalPawn_h_324_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_PortalPawn_h_324_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_PortalPawn_h_324_SPARSE_DATA \
	Scoop_Source_Scoop_PortalPawn_h_324_RPC_WRAPPERS \
	Scoop_Source_Scoop_PortalPawn_h_324_INCLASS \
	Scoop_Source_Scoop_PortalPawn_h_324_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Scoop_Source_Scoop_PortalPawn_h_324_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_PortalPawn_h_324_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_PortalPawn_h_324_SPARSE_DATA \
	Scoop_Source_Scoop_PortalPawn_h_324_RPC_WRAPPERS_NO_PURE_DECLS \
	Scoop_Source_Scoop_PortalPawn_h_324_INCLASS_NO_PURE_DECLS \
	Scoop_Source_Scoop_PortalPawn_h_324_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCOOP_API UClass* StaticClass<class APortalPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Scoop_Source_Scoop_PortalPawn_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::RUNNING) \
	op(EMovementState::WALKING) \
	op(EMovementState::CROUCHING) \
	op(EMovementState::FALLING) 

enum class EMovementState : uint8;
template<> SCOOP_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
