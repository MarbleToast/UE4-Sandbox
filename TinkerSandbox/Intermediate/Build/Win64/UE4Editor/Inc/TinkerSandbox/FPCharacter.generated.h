// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TINKERSANDBOX_FPCharacter_generated_h
#error "FPCharacter.generated.h already included, missing '#pragma once' in FPCharacter.h"
#endif
#define TINKERSANDBOX_FPCharacter_generated_h

#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_SPARSE_DATA
#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveLeftRight); \
	DECLARE_FUNCTION(execMoveForwardBack);


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveLeftRight); \
	DECLARE_FUNCTION(execMoveForwardBack);


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPCharacter(); \
	friend struct Z_Construct_UClass_AFPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TinkerSandbox"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacter)


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAFPCharacter(); \
	friend struct Z_Construct_UClass_AFPCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TinkerSandbox"), NO_API) \
	DECLARE_SERIALIZER(AFPCharacter)


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPCharacter(AFPCharacter&&); \
	NO_API AFPCharacter(const AFPCharacter&); \
public:


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPCharacter(AFPCharacter&&); \
	NO_API AFPCharacter(const AFPCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPCharacter)


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_PRIVATE_PROPERTY_OFFSET
#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_9_PROLOG
#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_SPARSE_DATA \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_RPC_WRAPPERS \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_INCLASS \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_SPARSE_DATA \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_INCLASS_NO_PURE_DECLS \
	TinkerSandbox_Source_TinkerSandbox_FPCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TINKERSANDBOX_API UClass* StaticClass<class AFPCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TinkerSandbox_Source_TinkerSandbox_FPCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
