// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinkerSandbox/FPCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPCharacter() {}
// Cross Module References
	TINKERSANDBOX_API UClass* Z_Construct_UClass_AFPCharacter_NoRegister();
	TINKERSANDBOX_API UClass* Z_Construct_UClass_AFPCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_TinkerSandbox();
// End Cross Module References
	DEFINE_FUNCTION(AFPCharacter::execMoveLeftRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLeftRight(Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPCharacter::execMoveForwardBack)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveForwardBack(Z_Param_scale);
		P_NATIVE_END;
	}
	void AFPCharacter::StaticRegisterNativesAFPCharacter()
	{
		UClass* Class = AFPCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveForwardBack", &AFPCharacter::execMoveForwardBack },
			{ "MoveLeftRight", &AFPCharacter::execMoveLeftRight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics
	{
		struct FPCharacter_eventMoveForwardBack_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPCharacter_eventMoveForwardBack_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPCharacter, nullptr, "MoveForwardBack", nullptr, nullptr, sizeof(FPCharacter_eventMoveForwardBack_Parms), Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPCharacter_MoveForwardBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPCharacter_MoveForwardBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics
	{
		struct FPCharacter_eventMoveLeftRight_Parms
		{
			float scale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPCharacter_eventMoveLeftRight_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPCharacter, nullptr, "MoveLeftRight", nullptr, nullptr, sizeof(FPCharacter_eventMoveLeftRight_Parms), Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPCharacter_MoveLeftRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPCharacter_MoveLeftRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPCharacter_NoRegister()
	{
		return AFPCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_TinkerSandbox,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPCharacter_MoveForwardBack, "MoveForwardBack" }, // 416114318
		{ &Z_Construct_UFunction_AFPCharacter_MoveLeftRight, "MoveLeftRight" }, // 912629208
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPCharacter.h" },
		{ "ModuleRelativePath", "FPCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPCharacter_Statics::ClassParams = {
		&AFPCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPCharacter, 3108298373);
	template<> TINKERSANDBOX_API UClass* StaticClass<AFPCharacter>()
	{
		return AFPCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPCharacter(Z_Construct_UClass_AFPCharacter, &AFPCharacter::StaticClass, TEXT("/Script/TinkerSandbox"), TEXT("AFPCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
