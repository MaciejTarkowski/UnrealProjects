// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EscapeFromDungeon/Mover.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMover() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ESCAPEFROMDUNGEON_API UClass* Z_Construct_UClass_UMover();
	ESCAPEFROMDUNGEON_API UClass* Z_Construct_UClass_UMover_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EscapeFromDungeon();
// End Cross Module References
	void UMover::StaticRegisterNativesUMover()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMover);
	UClass* Z_Construct_UClass_UMover_NoRegister()
	{
		return UMover::StaticClass();
	}
	struct Z_Construct_UClass_UMover_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_targetOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_moveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_moveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isMoving_MetaData[];
#endif
		static void NewProp_isMoving_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isMoving;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMover_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_EscapeFromDungeon,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMover_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Mover.h" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMover_Statics::NewProp_targetOffset_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_targetOffset = { "targetOffset", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMover, targetOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMover_Statics::NewProp_targetOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::NewProp_targetOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMover_Statics::NewProp_moveSpeed_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_moveSpeed = { "moveSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMover, moveSpeed), METADATA_PARAMS(Z_Construct_UClass_UMover_Statics::NewProp_moveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::NewProp_moveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMover_Statics::NewProp_isMoving_MetaData[] = {
		{ "Category", "Mover" },
		{ "ModuleRelativePath", "Mover.h" },
	};
#endif
	void Z_Construct_UClass_UMover_Statics::NewProp_isMoving_SetBit(void* Obj)
	{
		((UMover*)Obj)->isMoving = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMover_Statics::NewProp_isMoving = { "isMoving", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMover), &Z_Construct_UClass_UMover_Statics::NewProp_isMoving_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMover_Statics::NewProp_isMoving_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::NewProp_isMoving_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMover_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_targetOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_moveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMover_Statics::NewProp_isMoving,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMover_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMover>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMover_Statics::ClassParams = {
		&UMover::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMover_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMover_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMover_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMover()
	{
		if (!Z_Registration_Info_UClass_UMover.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMover.OuterSingleton, Z_Construct_UClass_UMover_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMover.OuterSingleton;
	}
	template<> ESCAPEFROMDUNGEON_API UClass* StaticClass<UMover>()
	{
		return UMover::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMover);
	UMover::~UMover() {}
	struct Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_Mover_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_Mover_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMover, UMover::StaticClass, TEXT("UMover"), &Z_Registration_Info_UClass_UMover, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMover), 622537059U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_Mover_h_235817858(TEXT("/Script/EscapeFromDungeon"),
		Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_Mover_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_mtark_Documents_Unreal_UnrealProjects_EscapeFromDungeon_Source_EscapeFromDungeon_Mover_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
