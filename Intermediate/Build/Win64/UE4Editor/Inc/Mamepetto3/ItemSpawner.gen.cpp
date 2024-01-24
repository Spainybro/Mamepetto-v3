// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mamepetto3/ItemSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSpawner() {}
// Cross Module References
	MAMEPETTO3_API UClass* Z_Construct_UClass_AItemSpawner_NoRegister();
	MAMEPETTO3_API UClass* Z_Construct_UClass_AItemSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mamepetto3();
// End Cross Module References
	void AItemSpawner::StaticRegisterNativesAItemSpawner()
	{
	}
	UClass* Z_Construct_UClass_AItemSpawner_NoRegister()
	{
		return AItemSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AItemSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AItemSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mamepetto3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ItemSpawner.h" },
		{ "ModuleRelativePath", "ItemSpawner.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AItemSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AItemSpawner_Statics::ClassParams = {
		&AItemSpawner::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AItemSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AItemSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AItemSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AItemSpawner, 3652719882);
	template<> MAMEPETTO3_API UClass* StaticClass<AItemSpawner>()
	{
		return AItemSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AItemSpawner(Z_Construct_UClass_AItemSpawner, &AItemSpawner::StaticClass, TEXT("/Script/Mamepetto3"), TEXT("AItemSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AItemSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
