// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/Interface/BleManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleManagerInterface() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BleGoodies();
// End Cross Module References

// Begin Delegate FBleOnDeviceFoundDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms
	{
		TScriptInterface<IBleDeviceInterface> Device;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Device;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::NewProp_Device = { "Device", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms, Device), Z_Construct_UClass_UBleDeviceInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::NewProp_Device,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleOnDeviceFoundDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleOnDeviceFoundDelegate_DelegateWrapper(const FScriptDelegate& BleOnDeviceFoundDelegate, const TScriptInterface<IBleDeviceInterface>& Device)
{
	struct _Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms
	{
		TScriptInterface<IBleDeviceInterface> Device;
	};
	_Script_BleGoodies_eventBleOnDeviceFoundDelegate_Parms Parms;
	Parms.Device=Device;
	BleOnDeviceFoundDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleOnDeviceFoundDelegate

// Begin Delegate FBleOnAdvertisementDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms
	{
		FString DeviceName;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms, DeviceName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleOnAdvertisementDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleOnAdvertisementDelegate_DelegateWrapper(const FScriptDelegate& BleOnAdvertisementDelegate, const FString& DeviceName, TArray<uint8> const& Data)
{
	struct _Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms
	{
		FString DeviceName;
		TArray<uint8> Data;
	};
	_Script_BleGoodies_eventBleOnAdvertisementDelegate_Parms Parms;
	Parms.DeviceName=DeviceName;
	Parms.Data=Data;
	BleOnAdvertisementDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleOnAdvertisementDelegate

// Begin Interface UBleManagerInterface Function IsBleSupported
struct Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics
{
	struct BleManagerInterface_eventIsBleSupported_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if Bluetooth Low Energy is supported\n\x09*\n\x09* @return - True if BLE is supported, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if Bluetooth Low Energy is supported\n\n@return - True if BLE is supported, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleManagerInterface_eventIsBleSupported_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsBleSupported_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsBleSupported", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::BleManagerInterface_eventIsBleSupported_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::BleManagerInterface_eventIsBleSupported_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_IsBleSupported()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsBleSupported_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execIsBleSupported)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBleSupported();
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function IsBleSupported

// Begin Interface UBleManagerInterface Function IsBluetoothEnabled
struct Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics
{
	struct BleManagerInterface_eventIsBluetoothEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if Bluetooth is enabled\n\x09*\n\x09* @return - True if Bluetooth is enabled, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if Bluetooth is enabled\n\n@return - True if Bluetooth is enabled, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleManagerInterface_eventIsBluetoothEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsBluetoothEnabled_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsBluetoothEnabled", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::BleManagerInterface_eventIsBluetoothEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::BleManagerInterface_eventIsBluetoothEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execIsBluetoothEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsBluetoothEnabled();
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function IsBluetoothEnabled

// Begin Interface UBleManagerInterface Function IsScanning
struct Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics
{
	struct BleManagerInterface_eventIsScanning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if scan is in progress\n\x09*\n\x09* @return - True if the subsystem is currently scanning for devices/advertisements\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Check if scan is in progress\n\n@return - True if the subsystem is currently scanning for devices/advertisements" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleManagerInterface_eventIsScanning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleManagerInterface_eventIsScanning_Parms), &Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "IsScanning", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::BleManagerInterface_eventIsScanning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::BleManagerInterface_eventIsScanning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_IsScanning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_IsScanning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execIsScanning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsScanning();
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function IsScanning

// Begin Interface UBleManagerInterface Function ScanForAdvertisements
struct Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics
{
	struct BleManagerInterface_eventScanForAdvertisements_Parms
	{
		TArray<FString> NameFilters;
		FScriptDelegate OnAdvertisement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "NameFilters" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Start listening for advertisements\n\x09*\n\x09* @param NameFilters - An array of device names to listen to for advertisements\n\x09* @param OnAdvertisement - Called when an advertisement is picked up\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Start listening for advertisements\n\n@param NameFilters - An array of device names to listen to for advertisements\n@param OnAdvertisement - Called when an advertisement is picked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NameFilters_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAdvertisement_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_NameFilters_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NameFilters;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnAdvertisement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_Inner = { "NameFilters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters = { "NameFilters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForAdvertisements_Parms, NameFilters), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NameFilters_MetaData), NewProp_NameFilters_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement = { "OnAdvertisement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForAdvertisements_Parms, OnAdvertisement), Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAdvertisement_MetaData), NewProp_OnAdvertisement_MetaData) }; // 1485080676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_NameFilters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::NewProp_OnAdvertisement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "ScanForAdvertisements", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::BleManagerInterface_eventScanForAdvertisements_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::BleManagerInterface_eventScanForAdvertisements_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execScanForAdvertisements)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_NameFilters);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnAdvertisement);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanForAdvertisements(Z_Param_Out_NameFilters,FBleOnAdvertisementDelegate(Z_Param_Out_OnAdvertisement));
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function ScanForAdvertisements

// Begin Interface UBleManagerInterface Function ScanForDevices
struct Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics
{
	struct BleManagerInterface_eventScanForDevices_Parms
	{
		TArray<FString> ServiceUUIDs;
		FScriptDelegate OnDeviceFound;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "ServiceUUIDs" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Start searching for nearby BLE devices\n\x09*\n\x09* @param ServiceUUIDs - An array of service UUIDs to filter devices\n\x09* @param OnDeviceFound - Called when a new device is found\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Start searching for nearby BLE devices\n\n@param ServiceUUIDs - An array of service UUIDs to filter devices\n@param OnDeviceFound - Called when a new device is found" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDeviceFound_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ServiceUUIDs;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDeviceFound;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_Inner = { "ServiceUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs = { "ServiceUUIDs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForDevices_Parms, ServiceUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUIDs_MetaData), NewProp_ServiceUUIDs_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound = { "OnDeviceFound", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleManagerInterface_eventScanForDevices_Parms, OnDeviceFound), Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDeviceFound_MetaData), NewProp_OnDeviceFound_MetaData) }; // 4260181370
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_ServiceUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::NewProp_OnDeviceFound,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "ScanForDevices", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::BleManagerInterface_eventScanForDevices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::BleManagerInterface_eventScanForDevices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_ScanForDevices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_ScanForDevices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execScanForDevices)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_ServiceUUIDs);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDeviceFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ScanForDevices(Z_Param_Out_ServiceUUIDs,FBleOnDeviceFoundDelegate(Z_Param_Out_OnDeviceFound));
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function ScanForDevices

// Begin Interface UBleManagerInterface Function SetBluetoothState
struct Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics
{
	struct BleManagerInterface_eventSetBluetoothState_Parms
	{
		bool bState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Enable/disable Bluetooth (Android only)\n\x09*\n\x09* @param bState - New Bluetooth state\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Enable/disable Bluetooth (Android only)\n\n@param bState - New Bluetooth state" },
	};
#endif // WITH_METADATA
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState_SetBit(void* Obj)
{
	((BleManagerInterface_eventSetBluetoothState_Parms*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleManagerInterface_eventSetBluetoothState_Parms), &Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::NewProp_bState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "SetBluetoothState", nullptr, nullptr, Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::BleManagerInterface_eventSetBluetoothState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::BleManagerInterface_eventSetBluetoothState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execSetBluetoothState)
{
	P_GET_UBOOL(Z_Param_bState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBluetoothState(Z_Param_bState);
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function SetBluetoothState

// Begin Interface UBleManagerInterface Function StopScan
struct Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Stop searching for nearby BLE devices\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
		{ "ToolTip", "Stop searching for nearby BLE devices" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleManagerInterface, nullptr, "StopScan", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBleManagerInterface_StopScan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleManagerInterface_StopScan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleManagerInterface::execStopScan)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopScan();
	P_NATIVE_END;
}
// End Interface UBleManagerInterface Function StopScan

// Begin Interface UBleManagerInterface
void UBleManagerInterface::StaticRegisterNativesUBleManagerInterface()
{
	UClass* Class = UBleManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsBleSupported", &IBleManagerInterface::execIsBleSupported },
		{ "IsBluetoothEnabled", &IBleManagerInterface::execIsBluetoothEnabled },
		{ "IsScanning", &IBleManagerInterface::execIsScanning },
		{ "ScanForAdvertisements", &IBleManagerInterface::execScanForAdvertisements },
		{ "ScanForDevices", &IBleManagerInterface::execScanForDevices },
		{ "SetBluetoothState", &IBleManagerInterface::execSetBluetoothState },
		{ "StopScan", &IBleManagerInterface::execStopScan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBleManagerInterface);
UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister()
{
	return UBleManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UBleManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/BleManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleManagerInterface_IsBleSupported, "IsBleSupported" }, // 460474908
		{ &Z_Construct_UFunction_UBleManagerInterface_IsBluetoothEnabled, "IsBluetoothEnabled" }, // 4086521816
		{ &Z_Construct_UFunction_UBleManagerInterface_IsScanning, "IsScanning" }, // 1563061882
		{ &Z_Construct_UFunction_UBleManagerInterface_ScanForAdvertisements, "ScanForAdvertisements" }, // 3377172099
		{ &Z_Construct_UFunction_UBleManagerInterface_ScanForDevices, "ScanForDevices" }, // 3302778983
		{ &Z_Construct_UFunction_UBleManagerInterface_SetBluetoothState, "SetBluetoothState" }, // 1278860125
		{ &Z_Construct_UFunction_UBleManagerInterface_StopScan, "StopScan" }, // 3171275721
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBleManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleManagerInterface_Statics::ClassParams = {
	&UBleManagerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleManagerInterface()
{
	if (!Z_Registration_Info_UClass_UBleManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleManagerInterface.OuterSingleton, Z_Construct_UClass_UBleManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleManagerInterface.OuterSingleton;
}
template<> BLEGOODIES_API UClass* StaticClass<UBleManagerInterface>()
{
	return UBleManagerInterface::StaticClass();
}
UBleManagerInterface::UBleManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleManagerInterface);
UBleManagerInterface::~UBleManagerInterface() {}
// End Interface UBleManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleManagerInterface, UBleManagerInterface::StaticClass, TEXT("UBleManagerInterface"), &Z_Registration_Info_UClass_UBleManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleManagerInterface), 3517140980U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_1059715962(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
