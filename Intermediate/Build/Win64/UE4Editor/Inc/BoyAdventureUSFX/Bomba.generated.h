// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOYADVENTUREUSFX_Bomba_generated_h
#error "Bomba.generated.h already included, missing '#pragma once' in Bomba.h"
#endif
#define BOYADVENTUREUSFX_Bomba_generated_h

#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_SPARSE_DATA
#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execExplodeBomb); \
	DECLARE_FUNCTION(execGrowBomb);


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execExplodeBomb); \
	DECLARE_FUNCTION(execGrowBomb);


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoyAdventureUSFX"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABomba(); \
	friend struct Z_Construct_UClass_ABomba_Statics; \
public: \
	DECLARE_CLASS(ABomba, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BoyAdventureUSFX"), NO_API) \
	DECLARE_SERIALIZER(ABomba)


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABomba(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABomba) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public:


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABomba(ABomba&&); \
	NO_API ABomba(const ABomba&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABomba)


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BombMesh() { return STRUCT_OFFSET(ABomba, BombMesh); } \
	FORCEINLINE static uint32 __PPO__OwnerCharacter() { return STRUCT_OFFSET(ABomba, OwnerCharacter); }


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_12_PROLOG
#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_PRIVATE_PROPERTY_OFFSET \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_SPARSE_DATA \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_RPC_WRAPPERS \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_INCLASS \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_PRIVATE_PROPERTY_OFFSET \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_SPARSE_DATA \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_INCLASS_NO_PURE_DECLS \
	BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOYADVENTUREUSFX_API UClass* StaticClass<class ABomba>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BoyAdventureSIS457_Source_BoyAdventureUSFX_Bomba_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
