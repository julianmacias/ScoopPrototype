// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Scoop/ScoopGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoopGameMode() {}
// Cross Module References
	SCOOP_API UClass* Z_Construct_UClass_AScoopGameMode_NoRegister();
	SCOOP_API UClass* Z_Construct_UClass_AScoopGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Scoop();
// End Cross Module References
	void AScoopGameMode::StaticRegisterNativesAScoopGameMode()
	{
	}
	UClass* Z_Construct_UClass_AScoopGameMode_NoRegister()
	{
		return AScoopGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AScoopGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScoopGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Scoop,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScoopGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ScoopGameMode.h" },
		{ "ModuleRelativePath", "ScoopGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScoopGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScoopGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AScoopGameMode_Statics::ClassParams = {
		&AScoopGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AScoopGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AScoopGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AScoopGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AScoopGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AScoopGameMode, 1690328204);
	template<> SCOOP_API UClass* StaticClass<AScoopGameMode>()
	{
		return AScoopGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AScoopGameMode(Z_Construct_UClass_AScoopGameMode, &AScoopGameMode::StaticClass, TEXT("/Script/Scoop"), TEXT("AScoopGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScoopGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
