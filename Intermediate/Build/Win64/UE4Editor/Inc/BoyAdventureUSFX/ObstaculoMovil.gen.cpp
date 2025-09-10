// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ObstaculoMovil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoMovil() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoMovil_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoMovil();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculo();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AObstaculoMovil::StaticRegisterNativesAObstaculoMovil()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoMovil_NoRegister()
	{
		return AObstaculoMovil::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoMovil_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoMovil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculo,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstaculoMovil.h" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_VelocidadMovimiento_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad de movimiento\n" },
		{ "ModuleRelativePath", "ObstaculoMovil.h" },
		{ "ToolTip", "Velocidad de movimiento" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_VelocidadMovimiento = { "VelocidadMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoMovil, VelocidadMovimiento), METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_VelocidadMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_VelocidadMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoMovil_Statics::NewProp_VelocidadMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoMovil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoMovil>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoMovil_Statics::ClassParams = {
		&AObstaculoMovil::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMovil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoMovil()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoMovil_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoMovil, 3702937705);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AObstaculoMovil>()
	{
		return AObstaculoMovil::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoMovil(Z_Construct_UClass_AObstaculoMovil, &AObstaculoMovil::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AObstaculoMovil"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoMovil);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
