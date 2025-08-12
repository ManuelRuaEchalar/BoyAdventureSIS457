// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ParedMetal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParedMetal() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AParedMetal_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AParedMetal();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoPared();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AParedMetal::StaticRegisterNativesAParedMetal()
	{
	}
	UClass* Z_Construct_UClass_AParedMetal_NoRegister()
	{
		return AParedMetal::StaticClass();
	}
	struct Z_Construct_UClass_AParedMetal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParedMetal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoPared,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ParedMetal.h" },
		{ "ModuleRelativePath", "ParedMetal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParedMetal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParedMetal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParedMetal_Statics::ClassParams = {
		&AParedMetal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AParedMetal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParedMetal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParedMetal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParedMetal, 548682502);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AParedMetal>()
	{
		return AParedMetal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParedMetal(Z_Construct_UClass_AParedMetal, &AParedMetal::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AParedMetal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParedMetal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
