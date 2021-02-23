// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ImmersionTest/ImmersionTestGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImmersionTestGameModeBase() {}
// Cross Module References
	IMMERSIONTEST_API UClass* Z_Construct_UClass_AImmersionTestGameModeBase_NoRegister();
	IMMERSIONTEST_API UClass* Z_Construct_UClass_AImmersionTestGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ImmersionTest();
// End Cross Module References
	void AImmersionTestGameModeBase::StaticRegisterNativesAImmersionTestGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AImmersionTestGameModeBase_NoRegister()
	{
		return AImmersionTestGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AImmersionTestGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AImmersionTestGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ImmersionTest,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AImmersionTestGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ImmersionTestGameModeBase.h" },
		{ "ModuleRelativePath", "ImmersionTestGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AImmersionTestGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AImmersionTestGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AImmersionTestGameModeBase_Statics::ClassParams = {
		&AImmersionTestGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AImmersionTestGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AImmersionTestGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AImmersionTestGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AImmersionTestGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AImmersionTestGameModeBase, 4015267022);
	template<> IMMERSIONTEST_API UClass* StaticClass<AImmersionTestGameModeBase>()
	{
		return AImmersionTestGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AImmersionTestGameModeBase(Z_Construct_UClass_AImmersionTestGameModeBase, &AImmersionTestGameModeBase::StaticClass, TEXT("/Script/ImmersionTest"), TEXT("AImmersionTestGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AImmersionTestGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
