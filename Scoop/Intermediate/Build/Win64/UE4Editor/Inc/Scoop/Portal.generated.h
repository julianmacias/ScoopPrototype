// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor; class AActor;
struct FVector;
struct FRotator;
class APortal;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef SCOOP_Portal_generated_h
#error "Portal.generated.h already included, missing '#pragma once' in Portal.h"
#endif
#define SCOOP_Portal_generated_h

#define Scoop_Source_Scoop_Portal_h_50_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPostPhysicsTick_Statics; \
	SCOOP_API static class UScriptStruct* StaticStruct(); \
	typedef FActorTickFunction Super;


template<> SCOOP_API UScriptStruct* StaticStruct<struct FPostPhysicsTick>();

#define Scoop_Source_Scoop_Portal_h_15_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FTrackedActor_Statics; \
	SCOOP_API static class UScriptStruct* StaticStruct();


template<> SCOOP_API UScriptStruct* StaticStruct<struct FTrackedActor>();

#define Scoop_Source_Scoop_Portal_h_70_SPARSE_DATA
#define Scoop_Source_Scoop_Portal_h_70_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDuplicateMap); \
	DECLARE_FUNCTION(execGetNumberOfTrackedActors); \
	DECLARE_FUNCTION(execLocationInsidePortal); \
	DECLARE_FUNCTION(execConvertRotationToPortal); \
	DECLARE_FUNCTION(execConvertLocationToPortal); \
	DECLARE_FUNCTION(execConvertDirectionToTarget); \
	DECLARE_FUNCTION(execIsInfront); \
	DECLARE_FUNCTION(execClearPortalView); \
	DECLARE_FUNCTION(execUpdatePortalView); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapStart); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapStart); \
	DECLARE_FUNCTION(execSetup);


#define Scoop_Source_Scoop_Portal_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDuplicateMap); \
	DECLARE_FUNCTION(execGetNumberOfTrackedActors); \
	DECLARE_FUNCTION(execLocationInsidePortal); \
	DECLARE_FUNCTION(execConvertRotationToPortal); \
	DECLARE_FUNCTION(execConvertLocationToPortal); \
	DECLARE_FUNCTION(execConvertDirectionToTarget); \
	DECLARE_FUNCTION(execIsInfront); \
	DECLARE_FUNCTION(execClearPortalView); \
	DECLARE_FUNCTION(execUpdatePortalView); \
	DECLARE_FUNCTION(execSetActive); \
	DECLARE_FUNCTION(execIsActive); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalMeshOverlapStart); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapEnd); \
	DECLARE_FUNCTION(execOnPortalBoxOverlapStart); \
	DECLARE_FUNCTION(execSetup);


#define Scoop_Source_Scoop_Portal_h_70_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define Scoop_Source_Scoop_Portal_h_70_INCLASS \
private: \
	static void StaticRegisterNativesAPortal(); \
	friend struct Z_Construct_UClass_APortal_Statics; \
public: \
	DECLARE_CLASS(APortal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(APortal)


#define Scoop_Source_Scoop_Portal_h_70_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public:


#define Scoop_Source_Scoop_Portal_h_70_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APortal(APortal&&); \
	NO_API APortal(const APortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APortal)


#define Scoop_Source_Scoop_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__portalController() { return STRUCT_OFFSET(APortal, portalController); } \
	FORCEINLINE static uint32 __PPO__portalChar() { return STRUCT_OFFSET(APortal, portalChar); } \
	FORCEINLINE static uint32 __PPO__renderTarget() { return STRUCT_OFFSET(APortal, renderTarget); } \
	FORCEINLINE static uint32 __PPO__renderTargets() { return STRUCT_OFFSET(APortal, renderTargets); } \
	FORCEINLINE static uint32 __PPO__portalMaterial() { return STRUCT_OFFSET(APortal, portalMaterial); } \
	FORCEINLINE static uint32 __PPO__trackedActors() { return STRUCT_OFFSET(APortal, trackedActors); } \
	FORCEINLINE static uint32 __PPO__duplicateMap() { return STRUCT_OFFSET(APortal, duplicateMap); }


#define Scoop_Source_Scoop_Portal_h_67_PROLOG
#define Scoop_Source_Scoop_Portal_h_70_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_Portal_h_70_SPARSE_DATA \
	Scoop_Source_Scoop_Portal_h_70_RPC_WRAPPERS \
	Scoop_Source_Scoop_Portal_h_70_INCLASS \
	Scoop_Source_Scoop_Portal_h_70_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Scoop_Source_Scoop_Portal_h_70_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_Portal_h_70_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_Portal_h_70_SPARSE_DATA \
	Scoop_Source_Scoop_Portal_h_70_RPC_WRAPPERS_NO_PURE_DECLS \
	Scoop_Source_Scoop_Portal_h_70_INCLASS_NO_PURE_DECLS \
	Scoop_Source_Scoop_Portal_h_70_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCOOP_API UClass* StaticClass<class APortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Scoop_Source_Scoop_Portal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
