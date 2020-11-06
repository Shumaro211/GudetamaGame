// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Bowl/TP_2DSideScroller/TP_2DSideScrollerGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTP_2DSideScrollerGameMode() {}
// Cross Module References
	BOWL_API UClass* Z_Construct_UClass_ATP_2DSideScrollerGameMode_NoRegister();
	BOWL_API UClass* Z_Construct_UClass_ATP_2DSideScrollerGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Bowl();
// End Cross Module References
	void ATP_2DSideScrollerGameMode::StaticRegisterNativesATP_2DSideScrollerGameMode()
	{
	}
	UClass* Z_Construct_UClass_ATP_2DSideScrollerGameMode_NoRegister()
	{
		return ATP_2DSideScrollerGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Bowl,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The GameMode defines the game being played. It governs the game rules, scoring, what actors\n * are allowed to exist in this game type, and who may enter the game.\n *\n * This game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of TP_2DSideScrollerCharacter\n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "TP_2DSideScroller/TP_2DSideScrollerGameMode.h" },
		{ "ModuleRelativePath", "TP_2DSideScroller/TP_2DSideScrollerGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The GameMode defines the game being played. It governs the game rules, scoring, what actors\nare allowed to exist in this game type, and who may enter the game.\n\nThis game mode just sets the default pawn to be the MyCharacter asset, which is a subclass of TP_2DSideScrollerCharacter" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATP_2DSideScrollerGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::ClassParams = {
		&ATP_2DSideScrollerGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATP_2DSideScrollerGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATP_2DSideScrollerGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATP_2DSideScrollerGameMode, 3975342375);
	template<> BOWL_API UClass* StaticClass<ATP_2DSideScrollerGameMode>()
	{
		return ATP_2DSideScrollerGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATP_2DSideScrollerGameMode(Z_Construct_UClass_ATP_2DSideScrollerGameMode, &ATP_2DSideScrollerGameMode::StaticClass, TEXT("/Script/Bowl"), TEXT("ATP_2DSideScrollerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATP_2DSideScrollerGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
