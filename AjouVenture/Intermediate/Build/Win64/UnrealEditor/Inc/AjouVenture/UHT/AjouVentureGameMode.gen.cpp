// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AjouVenture/AjouVentureGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAjouVentureGameMode() {}
// Cross Module References
	AJOUVENTURE_API UClass* Z_Construct_UClass_AAjouVentureGameMode();
	AJOUVENTURE_API UClass* Z_Construct_UClass_AAjouVentureGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_AjouVenture();
// End Cross Module References
	void AAjouVentureGameMode::StaticRegisterNativesAAjouVentureGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAjouVentureGameMode);
	UClass* Z_Construct_UClass_AAjouVentureGameMode_NoRegister()
	{
		return AAjouVentureGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AAjouVentureGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAjouVentureGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AjouVenture,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAjouVentureGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAjouVentureGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "AjouVentureGameMode.h" },
		{ "ModuleRelativePath", "AjouVentureGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAjouVentureGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAjouVentureGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AAjouVentureGameMode_Statics::ClassParams = {
		&AAjouVentureGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAjouVentureGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AAjouVentureGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AAjouVentureGameMode()
	{
		if (!Z_Registration_Info_UClass_AAjouVentureGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAjouVentureGameMode.OuterSingleton, Z_Construct_UClass_AAjouVentureGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AAjouVentureGameMode.OuterSingleton;
	}
	template<> AJOUVENTURE_API UClass* StaticClass<AAjouVentureGameMode>()
	{
		return AAjouVentureGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAjouVentureGameMode);
	AAjouVentureGameMode::~AAjouVentureGameMode() {}
	struct Z_CompiledInDeferFile_FID_Unreal_Projects_AjouVenture_AjouVenture_Source_AjouVenture_AjouVentureGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AjouVenture_AjouVenture_Source_AjouVenture_AjouVentureGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AAjouVentureGameMode, AAjouVentureGameMode::StaticClass, TEXT("AAjouVentureGameMode"), &Z_Registration_Info_UClass_AAjouVentureGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAjouVentureGameMode), 4245184476U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_AjouVenture_AjouVenture_Source_AjouVenture_AjouVentureGameMode_h_1299665358(TEXT("/Script/AjouVenture"),
		Z_CompiledInDeferFile_FID_Unreal_Projects_AjouVenture_AjouVenture_Source_AjouVenture_AjouVentureGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_AjouVenture_AjouVenture_Source_AjouVenture_AjouVentureGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
