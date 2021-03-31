// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SCOOP_ScoopCharacter_generated_h
#error "ScoopCharacter.generated.h already included, missing '#pragma once' in ScoopCharacter.h"
#endif
#define SCOOP_ScoopCharacter_generated_h

#define Scoop_Source_Scoop_ScoopCharacter_h_12_SPARSE_DATA
#define Scoop_Source_Scoop_ScoopCharacter_h_12_RPC_WRAPPERS
#define Scoop_Source_Scoop_ScoopCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Scoop_Source_Scoop_ScoopCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScoopCharacter(); \
	friend struct Z_Construct_UClass_AScoopCharacter_Statics; \
public: \
	DECLARE_CLASS(AScoopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(AScoopCharacter)


#define Scoop_Source_Scoop_ScoopCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAScoopCharacter(); \
	friend struct Z_Construct_UClass_AScoopCharacter_Statics; \
public: \
	DECLARE_CLASS(AScoopCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Scoop"), NO_API) \
	DECLARE_SERIALIZER(AScoopCharacter)


#define Scoop_Source_Scoop_ScoopCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AScoopCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AScoopCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoopCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoopCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScoopCharacter(AScoopCharacter&&); \
	NO_API AScoopCharacter(const AScoopCharacter&); \
public:


#define Scoop_Source_Scoop_ScoopCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScoopCharacter(AScoopCharacter&&); \
	NO_API AScoopCharacter(const AScoopCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScoopCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScoopCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScoopCharacter)


#define Scoop_Source_Scoop_ScoopCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AScoopCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AScoopCharacter, FollowCamera); }


#define Scoop_Source_Scoop_ScoopCharacter_h_9_PROLOG
#define Scoop_Source_Scoop_ScoopCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_ScoopCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_ScoopCharacter_h_12_SPARSE_DATA \
	Scoop_Source_Scoop_ScoopCharacter_h_12_RPC_WRAPPERS \
	Scoop_Source_Scoop_ScoopCharacter_h_12_INCLASS \
	Scoop_Source_Scoop_ScoopCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Scoop_Source_Scoop_ScoopCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Scoop_Source_Scoop_ScoopCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Scoop_Source_Scoop_ScoopCharacter_h_12_SPARSE_DATA \
	Scoop_Source_Scoop_ScoopCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Scoop_Source_Scoop_ScoopCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Scoop_Source_Scoop_ScoopCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SCOOP_API UClass* StaticClass<class AScoopCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Scoop_Source_Scoop_ScoopCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
