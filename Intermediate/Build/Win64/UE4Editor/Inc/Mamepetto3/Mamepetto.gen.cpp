// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mamepetto3/Mamepetto.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMamepetto() {}
// Cross Module References
	MAMEPETTO3_API UClass* Z_Construct_UClass_AMamepetto_NoRegister();
	MAMEPETTO3_API UClass* Z_Construct_UClass_AMamepetto();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mamepetto3();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMamepetto::StaticRegisterNativesAMamepetto()
	{
	}
	UClass* Z_Construct_UClass_AMamepetto_NoRegister()
	{
		return AMamepetto::StaticClass();
	}
	struct Z_Construct_UClass_AMamepetto_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MamepettoMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MamepettoMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MameUpdateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MameUpdateSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MameMoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MameMoveSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMamepetto_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mamepetto3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMamepetto_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Mamepetto.h" },
		{ "ModuleRelativePath", "Mamepetto.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMamepetto_Statics::NewProp_MamepettoMesh_MetaData[] = {
		{ "Category", "Mamepetto Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Mamepetto.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMamepetto_Statics::NewProp_MamepettoMesh = { "MamepettoMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMamepetto, MamepettoMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMamepetto_Statics::NewProp_MamepettoMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto_Statics::NewProp_MamepettoMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMamepetto_Statics::NewProp_MameUpdateSpeed_MetaData[] = {
		{ "Category", "Mamepetto Speed" },
		{ "ModuleRelativePath", "Mamepetto.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMamepetto_Statics::NewProp_MameUpdateSpeed = { "MameUpdateSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMamepetto, MameUpdateSpeed), METADATA_PARAMS(Z_Construct_UClass_AMamepetto_Statics::NewProp_MameUpdateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto_Statics::NewProp_MameUpdateSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMamepetto_Statics::NewProp_MameMoveSpeed_MetaData[] = {
		{ "Category", "Mamepetto Speed" },
		{ "ModuleRelativePath", "Mamepetto.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMamepetto_Statics::NewProp_MameMoveSpeed = { "MameMoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMamepetto, MameMoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AMamepetto_Statics::NewProp_MameMoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto_Statics::NewProp_MameMoveSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMamepetto_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMamepetto_Statics::NewProp_MamepettoMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMamepetto_Statics::NewProp_MameUpdateSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMamepetto_Statics::NewProp_MameMoveSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMamepetto_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMamepetto>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMamepetto_Statics::ClassParams = {
		&AMamepetto::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMamepetto_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMamepetto_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMamepetto()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMamepetto_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMamepetto, 3915331359);
	template<> MAMEPETTO3_API UClass* StaticClass<AMamepetto>()
	{
		return AMamepetto::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMamepetto(Z_Construct_UClass_AMamepetto, &AMamepetto::StaticClass, TEXT("/Script/Mamepetto3"), TEXT("AMamepetto"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMamepetto);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
