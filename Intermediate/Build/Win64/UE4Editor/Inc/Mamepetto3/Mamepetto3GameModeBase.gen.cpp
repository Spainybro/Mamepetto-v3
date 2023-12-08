// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mamepetto3/Mamepetto3GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMamepetto3GameModeBase() {}
// Cross Module References
	MAMEPETTO3_API UClass* Z_Construct_UClass_AMamepetto3GameModeBase_NoRegister();
	MAMEPETTO3_API UClass* Z_Construct_UClass_AMamepetto3GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Mamepetto3();
// End Cross Module References
	void AMamepetto3GameModeBase::StaticRegisterNativesAMamepetto3GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMamepetto3GameModeBase_NoRegister()
	{
		return AMamepetto3GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMamepetto3GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMamepetto3GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Mamepetto3,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMamepetto3GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Mamepetto3GameModeBase.h" },
		{ "ModuleRelativePath", "Mamepetto3GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMamepetto3GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMamepetto3GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMamepetto3GameModeBase_Statics::ClassParams = {
		&AMamepetto3GameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMamepetto3GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMamepetto3GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMamepetto3GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMamepetto3GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMamepetto3GameModeBase, 409613976);
	template<> MAMEPETTO3_API UClass* StaticClass<AMamepetto3GameModeBase>()
	{
		return AMamepetto3GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMamepetto3GameModeBase(Z_Construct_UClass_AMamepetto3GameModeBase, &AMamepetto3GameModeBase::StaticClass, TEXT("/Script/Mamepetto3"), TEXT("AMamepetto3GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMamepetto3GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
