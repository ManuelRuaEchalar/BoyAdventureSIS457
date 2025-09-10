// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/ObstaculoRotatorio.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoRotatorio() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoRotatorio_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoRotatorio();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AObstaculoMovil();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
// End Cross Module References
	void AObstaculoRotatorio::StaticRegisterNativesAObstaculoRotatorio()
	{
	}
	UClass* Z_Construct_UClass_AObstaculoRotatorio_NoRegister()
	{
		return AObstaculoRotatorio::StaticClass();
	}
	struct Z_Construct_UClass_AObstaculoRotatorio_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VelocidadRotacion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VelocidadRotacion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadioMovimiento_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RadioMovimiento;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstaculoRotatorio_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstaculoMovil,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoRotatorio_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstaculoRotatorio.h" },
		{ "ModuleRelativePath", "ObstaculoRotatorio.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_VelocidadRotacion_MetaData[] = {
		{ "Category", "Rotacion" },
		{ "Comment", "// Velocidad de rotaci\xc3\xb3n\n" },
		{ "ModuleRelativePath", "ObstaculoRotatorio.h" },
		{ "ToolTip", "Velocidad de rotaci\xc3\xb3n" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_VelocidadRotacion = { "VelocidadRotacion", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoRotatorio, VelocidadRotacion), METADATA_PARAMS(Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_VelocidadRotacion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_VelocidadRotacion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_RadioMovimiento_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Radio de movimiento circular\n" },
		{ "ModuleRelativePath", "ObstaculoRotatorio.h" },
		{ "ToolTip", "Radio de movimiento circular" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_RadioMovimiento = { "RadioMovimiento", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstaculoRotatorio, RadioMovimiento), METADATA_PARAMS(Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_RadioMovimiento_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_RadioMovimiento_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculoRotatorio_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_VelocidadRotacion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculoRotatorio_Statics::NewProp_RadioMovimiento,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstaculoRotatorio_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoRotatorio>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoRotatorio_Statics::ClassParams = {
		&AObstaculoRotatorio::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstaculoRotatorio_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRotatorio_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstaculoRotatorio_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoRotatorio_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstaculoRotatorio()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstaculoRotatorio_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstaculoRotatorio, 3930089667);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AObstaculoRotatorio>()
	{
		return AObstaculoRotatorio::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstaculoRotatorio(Z_Construct_UClass_AObstaculoRotatorio, &AObstaculoRotatorio::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AObstaculoRotatorio"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoRotatorio);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
