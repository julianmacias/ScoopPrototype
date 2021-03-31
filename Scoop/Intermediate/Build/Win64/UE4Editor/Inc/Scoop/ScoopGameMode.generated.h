// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCOOP_ScoopGameMode_generated_h
#error "ScoopGameMode.generated.h already included, missing '#pragma once' in ScoopGameMode.h"
#endif
#define SCOOP_ScoopGameMode_generated_h

#define Scoop_Source_Scoop_ScoopGameMode_h_12_SPARSE_DATA
#define Scoop_Source_Scoop_ScoopGameMode_h_12_RPC_WRAPPERS
#define Scoop_Source_Scoop_ScoopGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Scoop_Source_Scoop_ScoopGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoopGameMode(); \
	friend struct Z_Construct_UClass_AScoopGameMode_Statics; \
public: \
	DECLARE_CLASS(AScoopGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), SCOOP_API) \
	DECLARE_SERIALIZER(AScoopGameMode)


#define Scoop_Source_Scoop_ScoopGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScoopGameMode(); \
	friend struct Z_Construct_UClass_AScoopGameMode_Statics; \
public: \
	DECLARE_CLASS(AScoopGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), SCOOP_API) \
	DECLARE_SERIALIZER(AScoopGameMode)


#define Scoop_Source_Scoop_ScoopGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	SCOOP_API AScoopGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScoopGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCOOP_API, AScoopGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoopGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCOOP_API AScoopGameMode(AScoopGameMode&&); \
	SCOOP_API AScoopGameMode(const AScoopGameMode&); \
public:


#define Scoop_Source_Scoop_ScoopGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	SCOOP_API AScoopGameMode(AScoopGameMode&&); \
	SCOOP_API AScoopGameMode(const AScoopGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(SCOOP_API, AScoopGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoopGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoopGameMode)


#define Scoop_Source_Scoop_ScoopGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Scoop_Source_Scoop_ScoopGameMode_h_9_PROLOG
#define Scoop_Source_Scoop_ScoopGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_ScoopGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_ScoopGameMode_h_12_SPARSE_DATA \
	Scoop_Source_Scoop_ScoopGameMode_h_12_RPC_WRAPPERS \
	Scoop_Source_Scoop_ScoopGameMode_h_12_INCLASS \
	Scoop_Source_Scoop_ScoopGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Scoop_Source_Scoop_ScoopGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_ScoopGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_ScoopGameMode_h_12_SPARSE_DATA \
	Scoop_Source_Scoop_ScoopGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Scoop_Source_Scoop_ScoopGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Scoop_Source_Scoop_ScoopGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCOOP_API UClass* StaticClass<class AScoopGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Scoop_Source_Scoop_ScoopGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
