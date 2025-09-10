// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/EnemigoPrueba.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemigoPrueba() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AEnemigoPrueba_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AEnemigoPrueba();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AMiEnemigo();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
	void AEnemigoPrueba::StaticRegisterNativesAEnemigoPrueba()
	{
	}
	UClass* Z_Construct_UClass_AEnemigoPrueba_NoRegister()
	{
		return AEnemigoPrueba::StaticClass();
	}
	struct Z_Construct_UClass_AEnemigoPrueba_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WolfMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WolfMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WalkAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WalkAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RunAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RunAnim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentAnim_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentAnim;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemigoPrueba_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMiEnemigo,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnemigoPrueba.h" },
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WolfMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "EnemigoPrueba" },
		{ "Comment", "// Componente esquel\xc3\xa9tico propio (no tocar MeshEnemigo de la base)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
		{ "ToolTip", "Componente esquel\xc3\xa9tico propio (no tocar MeshEnemigo de la base)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WolfMesh = { "WolfMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoPrueba, WolfMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WolfMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WolfMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_IdleAnim_MetaData[] = {
		{ "Comment", "// Animaciones (las cargamos en constructor por simplicidad)\n" },
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
		{ "ToolTip", "Animaciones (las cargamos en constructor por simplicidad)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_IdleAnim = { "IdleAnim", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoPrueba, IdleAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_IdleAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_IdleAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WalkAnim_MetaData[] = {
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WalkAnim = { "WalkAnim", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoPrueba, WalkAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WalkAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WalkAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_RunAnim_MetaData[] = {
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_RunAnim = { "RunAnim", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoPrueba, RunAnim), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_RunAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_RunAnim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_CurrentAnim_MetaData[] = {
		{ "Comment", "// Puntero al asset de animaci\xc3\xb3n actualmente reproducido (para no reiniciarlo cada Tick)\n" },
		{ "ModuleRelativePath", "EnemigoPrueba.h" },
		{ "ToolTip", "Puntero al asset de animaci\xc3\xb3n actualmente reproducido (para no reiniciarlo cada Tick)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_CurrentAnim = { "CurrentAnim", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemigoPrueba, CurrentAnim), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_CurrentAnim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_CurrentAnim_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemigoPrueba_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WolfMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_IdleAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_WalkAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_RunAnim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemigoPrueba_Statics::NewProp_CurrentAnim,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemigoPrueba_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemigoPrueba>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemigoPrueba_Statics::ClassParams = {
		&AEnemigoPrueba::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemigoPrueba_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemigoPrueba_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemigoPrueba_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemigoPrueba()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemigoPrueba_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemigoPrueba, 2833802306);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AEnemigoPrueba>()
	{
		return AEnemigoPrueba::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemigoPrueba(Z_Construct_UClass_AEnemigoPrueba, &AEnemigoPrueba::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AEnemigoPrueba"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemigoPrueba);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
