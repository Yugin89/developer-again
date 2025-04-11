// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleComponent();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleComponent_NoRegister();
// End Cross Module References

// Begin Class UVehicleComponent
void UVehicleComponent::StaticRegisterNativesUVehicleComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleComponent);
UClass* Z_Construct_UClass_UVehicleComponent_NoRegister()
{
	return UVehicleComponent::StaticClass();
}
struct Z_Construct_UClass_UVehicleComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VehicleSystem" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VehicleComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVehicleComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleComponent_Statics::ClassParams = {
	&UVehicleComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVehicleComponent()
{
	if (!Z_Registration_Info_UClass_UVehicleComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleComponent.OuterSingleton, Z_Construct_UClass_UVehicleComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVehicleComponent.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleComponent>()
{
	return UVehicleComponent::StaticClass();
}
UVehicleComponent::UVehicleComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleComponent);
UVehicleComponent::~UVehicleComponent() {}
// End Class UVehicleComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleComponent, UVehicleComponent::StaticClass, TEXT("UVehicleComponent"), &Z_Registration_Info_UClass_UVehicleComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleComponent), 587175900U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleComponent_h_3397770907(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
