// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/Android/BleManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleManager() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager_NoRegister();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BleGoodies();
// End Cross Module References

// Begin Class UBleManager
void UBleManager::StaticRegisterNativesUBleManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBleManager);
UClass* Z_Construct_UClass_UBleManager_NoRegister()
{
	return UBleManager::StaticClass();
}
struct Z_Construct_UClass_UBleManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Android/BleManager.h" },
		{ "ModuleRelativePath", "Private/Android/BleManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBleManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBleManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UBleManager, IBleManagerInterface), false },  // 3517140980
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleManager_Statics::ClassParams = {
	&UBleManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleManager()
{
	if (!Z_Registration_Info_UClass_UBleManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleManager.OuterSingleton, Z_Construct_UClass_UBleManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleManager.OuterSingleton;
}
template<> BLEGOODIES_API UClass* StaticClass<UBleManager>()
{
	return UBleManager::StaticClass();
}
UBleManager::UBleManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleManager);
// End Class UBleManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_Android_BleManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleManager, UBleManager::StaticClass, TEXT("UBleManager"), &Z_Registration_Info_UClass_UBleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleManager), 3950741382U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_Android_BleManager_h_923736162(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_Android_BleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_Android_BleManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
