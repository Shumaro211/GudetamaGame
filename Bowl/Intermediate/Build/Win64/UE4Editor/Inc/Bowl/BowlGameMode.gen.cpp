// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bowl/BowlGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBowlGameMode() {}
// Cross Module References
	BOWL_API UClass* Z_Construct_UClass_ABowlGameMode_NoRegister();
	BOWL_API UClass* Z_Construct_UClass_ABowlGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bowl();
// End Cross Module References
	void ABowlGameMode::StaticRegisterNativesABowlGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABowlGameMode_NoRegister()
	{
		return ABowlGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABowlGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABowlGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bowl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABowlGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BowlGameMode.h" },
		{ "ModuleRelativePath", "BowlGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABowlGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABowlGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABowlGameMode_Statics::ClassParams = {
		&ABowlGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ABowlGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABowlGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABowlGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABowlGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABowlGameMode, 1359309776);
	template<> BOWL_API UClass* StaticClass<ABowlGameMode>()
	{
		return ABowlGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABowlGameMode(Z_Construct_UClass_ABowlGameMode, &ABowlGameMode::StaticClass, TEXT("/Script/Bowl"), TEXT("ABowlGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABowlGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
