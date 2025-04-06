// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/IOS/BleManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleManager() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDevice_NoRegister();
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
		{ "IncludePath", "IOS/BleManager.h" },
		{ "ModuleRelativePath", "Private/IOS/BleManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceTarget_MetaData[] = {
		{ "ModuleRelativePath", "Private/IOS/BleManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DeviceTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBleManager_Statics::NewProp_DeviceTarget = { "DeviceTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBleManager, DeviceTarget), Z_Construct_UClass_UBleDevice_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceTarget_MetaData), NewProp_DeviceTarget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBleManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBleManager_Statics::NewProp_DeviceTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleManager_Statics::PropPointers) < 2048);
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
	Z_Construct_UClass_UBleManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBleManager_Statics::PropPointers),
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
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleManager, UBleManager::StaticClass, TEXT("UBleManager"), &Z_Registration_Info_UClass_UBleManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleManager), 2340064630U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleManager_h_1876603595(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
