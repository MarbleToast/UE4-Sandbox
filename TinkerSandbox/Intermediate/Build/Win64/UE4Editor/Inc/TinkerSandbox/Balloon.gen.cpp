// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TinkerSandbox/Balloon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBalloon() {}
// Cross Module References
	TINKERSANDBOX_API UClass* Z_Construct_UClass_ABalloon_NoRegister();
	TINKERSANDBOX_API UClass* Z_Construct_UClass_ABalloon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_TinkerSandbox();
// End Cross Module References
	void ABalloon::StaticRegisterNativesABalloon()
	{
	}
	UClass* Z_Construct_UClass_ABalloon_NoRegister()
	{
		return ABalloon::StaticClass();
	}
	struct Z_Construct_UClass_ABalloon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABalloon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_TinkerSandbox,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Balloon.h" },
		{ "ModuleRelativePath", "Balloon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABalloon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABalloon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABalloon_Statics::ClassParams = {
		&ABalloon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABalloon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABalloon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABalloon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABalloon, 2233163517);
	template<> TINKERSANDBOX_API UClass* StaticClass<ABalloon>()
	{
		return ABalloon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABalloon(Z_Construct_UClass_ABalloon, &ABalloon::StaticClass, TEXT("/Script/TinkerSandbox"), TEXT("ABalloon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABalloon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
