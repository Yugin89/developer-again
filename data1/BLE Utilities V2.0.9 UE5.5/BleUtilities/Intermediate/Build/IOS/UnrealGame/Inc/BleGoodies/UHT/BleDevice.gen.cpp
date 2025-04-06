// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Private/IOS/BleDevice.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleDevice() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDevice();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDevice_NoRegister();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManager_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_BleGoodies();
// End Cross Module References

// Begin Class UBleDevice
void UBleDevice::StaticRegisterNativesUBleDevice()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBleDevice);
UClass* Z_Construct_UClass_UBleDevice_NoRegister()
{
	return UBleDevice::StaticClass();
}
struct Z_Construct_UClass_UBleDevice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "IOS/BleDevice.h" },
		{ "ModuleRelativePath", "Private/IOS/BleDevice.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "ModuleRelativePath", "Private/IOS/BleDevice.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleDevice>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBleDevice, Manager), Z_Construct_UClass_UBleManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBleDevice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBleDevice_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBleDevice_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBleDevice_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UBleDeviceInterface_NoRegister, (int32)VTABLE_OFFSET(UBleDevice, IBleDeviceInterface), false },  // 819788255
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleDevice_Statics::ClassParams = {
	&UBleDevice::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBleDevice_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleDevice_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleDevice_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleDevice()
{
	if (!Z_Registration_Info_UClass_UBleDevice.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleDevice.OuterSingleton, Z_Construct_UClass_UBleDevice_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleDevice.OuterSingleton;
}
template<> BLEGOODIES_API UClass* StaticClass<UBleDevice>()
{
	return UBleDevice::StaticClass();
}
UBleDevice::UBleDevice(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleDevice);
// End Class UBleDevice

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleDevice_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleDevice, UBleDevice::StaticClass, TEXT("UBleDevice"), &Z_Registration_Info_UClass_UBleDevice, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleDevice), 2265425200U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleDevice_h_2599906762(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleDevice_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Private_IOS_BleDevice_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
