// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/AVS_DEBUG.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAVS_DEBUG() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAVS_DEBUG();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UAVS_DEBUG_NoRegister();
// End Cross Module References

// Begin Class UAVS_DEBUG
void UAVS_DEBUG::StaticRegisterNativesUAVS_DEBUG()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAVS_DEBUG);
UClass* Z_Construct_UClass_UAVS_DEBUG_NoRegister()
{
	return UAVS_DEBUG::StaticClass();
}
struct Z_Construct_UClass_UAVS_DEBUG_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "AVS_DEBUG.h" },
		{ "ModuleRelativePath", "Public/AVS_DEBUG.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAVS_DEBUG>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAVS_DEBUG_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAVS_DEBUG_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAVS_DEBUG_Statics::ClassParams = {
	&UAVS_DEBUG::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAVS_DEBUG_Statics::Class_MetaDataParams), Z_Construct_UClass_UAVS_DEBUG_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAVS_DEBUG()
{
	if (!Z_Registration_Info_UClass_UAVS_DEBUG.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAVS_DEBUG.OuterSingleton, Z_Construct_UClass_UAVS_DEBUG_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAVS_DEBUG.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UAVS_DEBUG>()
{
	return UAVS_DEBUG::StaticClass();
}
UAVS_DEBUG::UAVS_DEBUG(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAVS_DEBUG);
UAVS_DEBUG::~UAVS_DEBUG() {}
// End Class UAVS_DEBUG

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_AVS_DEBUG_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAVS_DEBUG, UAVS_DEBUG::StaticClass, TEXT("UAVS_DEBUG"), &Z_Registration_Info_UClass_UAVS_DEBUG, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAVS_DEBUG), 2254993422U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_AVS_DEBUG_h_3729645670(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_AVS_DEBUG_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_AVS_DEBUG_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
