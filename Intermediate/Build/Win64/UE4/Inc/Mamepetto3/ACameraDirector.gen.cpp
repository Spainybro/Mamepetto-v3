// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mamepetto3/ACameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeACameraDirector() {}
// Cross Module References
	MAMEPETTO3_API UClass* Z_Construct_UClass_AACameraDirector_NoRegister();
	MAMEPETTO3_API UClass* Z_Construct_UClass_AACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mamepetto3();
// End Cross Module References
	void AACameraDirector::StaticRegisterNativesAACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_AACameraDirector_NoRegister()
	{
		return AACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_AACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mamepetto3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ACameraDirector.h" },
		{ "ModuleRelativePath", "ACameraDirector.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AACameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AACameraDirector_Statics::ClassParams = {
		&AACameraDirector::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AACameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AACameraDirector, 2454474843);
	template<> MAMEPETTO3_API UClass* StaticClass<AACameraDirector>()
	{
		return AACameraDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AACameraDirector(Z_Construct_UClass_AACameraDirector, &AACameraDirector::StaticClass, TEXT("/Script/Mamepetto3"), TEXT("AACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
