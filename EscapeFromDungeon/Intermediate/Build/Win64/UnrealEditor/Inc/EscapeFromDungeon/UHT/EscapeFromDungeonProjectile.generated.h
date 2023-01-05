// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EscapeFromDungeonProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef ESCAPEFROMDUNGEON_EscapeFromDungeonProjectile_generated_h
#error "EscapeFromDungeonProjectile.generated.h already included, missing '#pragma once' in EscapeFromDungeonProjectile.h"
#endif
#define ESCAPEFROMDUNGEON_EscapeFromDungeonProjectile_generated_h

#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_SPARSE_DATA
#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_ACCESSORS
#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscapeFromDungeonProjectile(); \
	friend struct Z_Construct_UClass_AEscapeFromDungeonProjectile_Statics; \
public: \
	DECLARE_CLASS(AEscapeFromDungeonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeFromDungeon"), NO_API) \
	DECLARE_SERIALIZER(AEscapeFromDungeonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEscapeFromDungeonProjectile(); \
	friend struct Z_Construct_UClass_AEscapeFromDungeonProjectile_Statics; \
public: \
	DECLARE_CLASS(AEscapeFromDungeonProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/EscapeFromDungeon"), NO_API) \
	DECLARE_SERIALIZER(AEscapeFromDungeonProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeFromDungeonProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeFromDungeonProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeFromDungeonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeFromDungeonProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeFromDungeonProjectile(AEscapeFromDungeonProjectile&&); \
	NO_API AEscapeFromDungeonProjectile(const AEscapeFromDungeonProjectile&); \
public: \
	NO_API virtual ~AEscapeFromDungeonProjectile();


#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeFromDungeonProjectile(AEscapeFromDungeonProjectile&&); \
	NO_API AEscapeFromDungeonProjectile(const AEscapeFromDungeonProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeFromDungeonProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeFromDungeonProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscapeFromDungeonProjectile) \
	NO_API virtual ~AEscapeFromDungeonProjectile();


#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_12_PROLOG
#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_SPARSE_DATA \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_RPC_WRAPPERS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_ACCESSORS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_INCLASS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_SPARSE_DATA \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_ACCESSORS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ESCAPEFROMDUNGEON_API UClass* StaticClass<class AEscapeFromDungeonProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
