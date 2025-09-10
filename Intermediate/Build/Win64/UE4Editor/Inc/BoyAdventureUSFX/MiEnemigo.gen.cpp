// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BoyAdventureUSFX/MiEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMiEnemigo() {}
// Cross Module References
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AMiEnemigo_NoRegister();
	BOYADVENTUREUSFX_API UClass* Z_Construct_UClass_AMiEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BoyAdventureUSFX();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMiEnemigo::execMoverse)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Moverse(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	void AMiEnemigo::StaticRegisterNativesAMiEnemigo()
	{
		UClass* Class = AMiEnemigo::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Moverse", &AMiEnemigo::execMoverse },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMiEnemigo_Moverse_Statics
	{
		struct MiEnemigo_eventMoverse_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MiEnemigo_eventMoverse_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::Function_MetaDataParams[] = {
		{ "Category", "Enemigo" },
		{ "Comment", "// M\xc3\xa9todo virtual puro para el polimorfismo\n" },
		{ "ModuleRelativePath", "MiEnemigo.h" },
		{ "ToolTip", "M\xc3\xa9todo virtual puro para el polimorfismo" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMiEnemigo, nullptr, "Moverse", nullptr, nullptr, sizeof(MiEnemigo_eventMoverse_Parms), Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMiEnemigo_Moverse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMiEnemigo_Moverse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMiEnemigo_NoRegister()
	{
		return AMiEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_AMiEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshEnemigo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshEnemigo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Velocidad_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Velocidad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMiEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BoyAdventureUSFX,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMiEnemigo_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMiEnemigo_Moverse, "Moverse" }, // 26795347
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiEnemigo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MiEnemigo.h" },
		{ "ModuleRelativePath", "MiEnemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiEnemigo_Statics::NewProp_MeshEnemigo_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "// Componente de mesh\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MiEnemigo.h" },
		{ "ToolTip", "Componente de mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMiEnemigo_Statics::NewProp_MeshEnemigo = { "MeshEnemigo", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiEnemigo, MeshEnemigo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMiEnemigo_Statics::NewProp_MeshEnemigo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiEnemigo_Statics::NewProp_MeshEnemigo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMiEnemigo_Statics::NewProp_Velocidad_MetaData[] = {
		{ "Category", "Movimiento" },
		{ "Comment", "// Velocidad base del enemigo\n" },
		{ "ModuleRelativePath", "MiEnemigo.h" },
		{ "ToolTip", "Velocidad base del enemigo" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMiEnemigo_Statics::NewProp_Velocidad = { "Velocidad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMiEnemigo, Velocidad), METADATA_PARAMS(Z_Construct_UClass_AMiEnemigo_Statics::NewProp_Velocidad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMiEnemigo_Statics::NewProp_Velocidad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMiEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiEnemigo_Statics::NewProp_MeshEnemigo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMiEnemigo_Statics::NewProp_Velocidad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMiEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMiEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMiEnemigo_Statics::ClassParams = {
		&AMiEnemigo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMiEnemigo_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMiEnemigo_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMiEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMiEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMiEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMiEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMiEnemigo, 142221696);
	template<> BOYADVENTUREUSFX_API UClass* StaticClass<AMiEnemigo>()
	{
		return AMiEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMiEnemigo(Z_Construct_UClass_AMiEnemigo, &AMiEnemigo::StaticClass, TEXT("/Script/BoyAdventureUSFX"), TEXT("AMiEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMiEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
