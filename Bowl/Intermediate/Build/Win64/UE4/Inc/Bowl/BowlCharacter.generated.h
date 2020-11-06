// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOWL_BowlCharacter_generated_h
#error "BowlCharacter.generated.h already included, missing '#pragma once' in BowlCharacter.h"
#endif
#define BOWL_BowlCharacter_generated_h

#define Bowl_Source_Bowl_BowlCharacter_h_12_SPARSE_DATA
#define Bowl_Source_Bowl_BowlCharacter_h_12_RPC_WRAPPERS
#define Bowl_Source_Bowl_BowlCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Bowl_Source_Bowl_BowlCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABowlCharacter(); \
	friend struct Z_Construct_UClass_ABowlCharacter_Statics; \
public: \
	DECLARE_CLASS(ABowlCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bowl"), NO_API) \
	DECLARE_SERIALIZER(ABowlCharacter)


#define Bowl_Source_Bowl_BowlCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABowlCharacter(); \
	friend struct Z_Construct_UClass_ABowlCharacter_Statics; \
public: \
	DECLARE_CLASS(ABowlCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Bowl"), NO_API) \
	DECLARE_SERIALIZER(ABowlCharacter)


#define Bowl_Source_Bowl_BowlCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABowlCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABowlCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABowlCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABowlCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABowlCharacter(ABowlCharacter&&); \
	NO_API ABowlCharacter(const ABowlCharacter&); \
public:


#define Bowl_Source_Bowl_BowlCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABowlCharacter(ABowlCharacter&&); \
	NO_API ABowlCharacter(const ABowlCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABowlCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABowlCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABowlCharacter)


#define Bowl_Source_Bowl_BowlCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABowlCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABowlCharacter, FollowCamera); }


#define Bowl_Source_Bowl_BowlCharacter_h_9_PROLOG
#define Bowl_Source_Bowl_BowlCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bowl_Source_Bowl_BowlCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Bowl_Source_Bowl_BowlCharacter_h_12_SPARSE_DATA \
	Bowl_Source_Bowl_BowlCharacter_h_12_RPC_WRAPPERS \
	Bowl_Source_Bowl_BowlCharacter_h_12_INCLASS \
	Bowl_Source_Bowl_BowlCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Bowl_Source_Bowl_BowlCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Bowl_Source_Bowl_BowlCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Bowl_Source_Bowl_BowlCharacter_h_12_SPARSE_DATA \
	Bowl_Source_Bowl_BowlCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Bowl_Source_Bowl_BowlCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Bowl_Source_Bowl_BowlCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOWL_API UClass* StaticClass<class ABowlCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Bowl_Source_Bowl_BowlCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
