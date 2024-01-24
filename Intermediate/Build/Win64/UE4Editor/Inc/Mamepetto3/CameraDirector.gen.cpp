// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mamepetto3/CameraDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraDirector() {}
// Cross Module References
	MAMEPETTO3_API UClass* Z_Construct_UClass_ACameraDirector_NoRegister();
	MAMEPETTO3_API UClass* Z_Construct_UClass_ACameraDirector();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mamepetto3();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACameraDirector::StaticRegisterNativesACameraDirector()
	{
	}
	UClass* Z_Construct_UClass_ACameraDirector_NoRegister()
	{
		return ACameraDirector::StaticClass();
	}
	struct Z_Construct_UClass_ACameraDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraOne;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mamepetto3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CameraDirector.h" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData[] = {
		{ "Category", "CameraDirector" },
		{ "ModuleRelativePath", "CameraDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne = { "CameraOne", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACameraDirector, CameraOne), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraDirector_Statics::NewProp_CameraOne,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACameraDirector_Statics::ClassParams = {
		&ACameraDirector::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraDirector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACameraDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACameraDirector, 3669698827);
	template<> MAMEPETTO3_API UClass* StaticClass<ACameraDirector>()
	{
		return ACameraDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACameraDirector(Z_Construct_UClass_ACameraDirector, &ACameraDirector::StaticClass, TEXT("/Script/Mamepetto3"), TEXT("ACameraDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
