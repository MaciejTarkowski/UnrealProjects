// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeFromDungeon/EscapeFromDungeonGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeFromDungeonGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	ESCAPEFROMDUNGEON_API UClass* Z_Construct_UClass_AEscapeFromDungeonGameMode();
	ESCAPEFROMDUNGEON_API UClass* Z_Construct_UClass_AEscapeFromDungeonGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapeFromDungeon();
// End Cross Module References
	void AEscapeFromDungeonGameMode::StaticRegisterNativesAEscapeFromDungeonGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEscapeFromDungeonGameMode);
	UClass* Z_Construct_UClass_AEscapeFromDungeonGameMode_NoRegister()
	{
		return AEscapeFromDungeonGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeFromDungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EscapeFromDungeonGameMode.h" },
		{ "ModuleRelativePath", "EscapeFromDungeonGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeFromDungeonGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::ClassParams = {
		&AEscapeFromDungeonGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeFromDungeonGameMode()
	{
		if (!Z_Registration_Info_UClass_AEscapeFromDungeonGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEscapeFromDungeonGameMode.OuterSingleton, Z_Construct_UClass_AEscapeFromDungeonGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEscapeFromDungeonGameMode.OuterSingleton;
	}
	template<> ESCAPEFROMDUNGEON_API UClass* StaticClass<AEscapeFromDungeonGameMode>()
	{
		return AEscapeFromDungeonGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeFromDungeonGameMode);
	AEscapeFromDungeonGameMode::~AEscapeFromDungeonGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEscapeFromDungeonGameMode, AEscapeFromDungeonGameMode::StaticClass, TEXT("AEscapeFromDungeonGameMode"), &Z_Registration_Info_UClass_AEscapeFromDungeonGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEscapeFromDungeonGameMode), 1103825499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonGameMode_h_4136605609(TEXT("/Script/EscapeFromDungeon"),
		Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_EscapeFromDungeonGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
