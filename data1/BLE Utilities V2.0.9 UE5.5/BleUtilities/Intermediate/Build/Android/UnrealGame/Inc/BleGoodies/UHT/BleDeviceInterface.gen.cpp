// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/Interface/BleDeviceInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleDeviceInterface() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature();
BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_BleGoodies();
// End Cross Module References

// Begin Delegate FBleDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleDelegate_DelegateWrapper(const FScriptDelegate& BleDelegate)
{
	BleDelegate.ProcessDelegate<UObject>(NULL);
}
// End Delegate FBleDelegate

// Begin Delegate FBleErrorDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleErrorDelegate_DelegateWrapper(const FScriptDelegate& BleErrorDelegate, const FString& ErrorMessage)
{
	struct _Script_BleGoodies_eventBleErrorDelegate_Parms
	{
		FString ErrorMessage;
	};
	_Script_BleGoodies_eventBleErrorDelegate_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	BleErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleErrorDelegate

// Begin Delegate FBleCharacteristicDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleCharacteristicDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDelegate_Parms, ServiceUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleCharacteristicDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID)
{
	struct _Script_BleGoodies_eventBleCharacteristicDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
	};
	_Script_BleGoodies_eventBleCharacteristicDelegate_Parms Parms;
	Parms.ServiceUUID=ServiceUUID;
	Parms.CharacteristicUUID=CharacteristicUUID;
	BleCharacteristicDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleCharacteristicDelegate

// Begin Delegate FBleCharacteristicDataDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, ServiceUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicDataDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleCharacteristicDataDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDataDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, TArray<uint8> const& Data)
{
	struct _Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		TArray<uint8> Data;
	};
	_Script_BleGoodies_eventBleCharacteristicDataDelegate_Parms Parms;
	Parms.ServiceUUID=ServiceUUID;
	Parms.CharacteristicUUID=CharacteristicUUID;
	Parms.Data=Data;
	BleCharacteristicDataDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleCharacteristicDataDelegate

// Begin Delegate FBleCharacteristicErrorDelegate
struct Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics
{
	struct _Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, ServiceUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, CharacteristicUUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms, ErrorMessage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_CharacteristicUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BleGoodies, nullptr, "BleCharacteristicErrorDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBleCharacteristicErrorDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicErrorDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, const FString& ErrorMessage)
{
	struct _Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		FString ErrorMessage;
	};
	_Script_BleGoodies_eventBleCharacteristicErrorDelegate_Parms Parms;
	Parms.ServiceUUID=ServiceUUID;
	Parms.CharacteristicUUID=CharacteristicUUID;
	Parms.ErrorMessage=ErrorMessage;
	BleCharacteristicErrorDelegate.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FBleCharacteristicErrorDelegate

// Begin Interface UBleDeviceInterface Function BindToCharacteristicErrorEvent
struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics
{
	struct BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms
	{
		FScriptDelegate OnError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic operation error events\n\x09*\n\x09* @param OnError - Called when any error occurs during read/write/subscribe\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic operation error events\n\n@param OnError - Called when any error occurs during read/write/subscribe" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError = { "OnError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms, OnError), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnError_MetaData), NewProp_OnError_MetaData) }; // 1741184082
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::NewProp_OnError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicErrorEvent", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::BleDeviceInterface_eventBindToCharacteristicErrorEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicErrorEvent)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacteristicErrorEvent(FBleCharacteristicErrorDelegate(Z_Param_Out_OnError));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function BindToCharacteristicErrorEvent

// Begin Interface UBleDeviceInterface Function BindToCharacteristicNotificationEvent
struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics
{
	struct BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms
	{
		FScriptDelegate OnNotification;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to subscribed characteristic notification events\n\x09*\n\x09* @param OnNotification - Called when a characteristic notification is received\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to subscribed characteristic notification events\n\n@param OnNotification - Called when a characteristic notification is received" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNotification_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnNotification;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification = { "OnNotification", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms, OnNotification), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNotification_MetaData), NewProp_OnNotification_MetaData) }; // 12924071
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::NewProp_OnNotification,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicNotificationEvent", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::BleDeviceInterface_eventBindToCharacteristicNotificationEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicNotificationEvent)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnNotification);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacteristicNotificationEvent(FBleCharacteristicDataDelegate(Z_Param_Out_OnNotification));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function BindToCharacteristicNotificationEvent

// Begin Interface UBleDeviceInterface Function BindToCharacteristicReadEvent
struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics
{
	struct BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms
	{
		FScriptDelegate OnRead;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic read events\n\x09*\n\x09* @param OnRead - Called when a characteristic was read\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic read events\n\n@param OnRead - Called when a characteristic was read" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnRead_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnRead;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead = { "OnRead", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms, OnRead), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnRead_MetaData), NewProp_OnRead_MetaData) }; // 12924071
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::NewProp_OnRead,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicReadEvent", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::BleDeviceInterface_eventBindToCharacteristicReadEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicReadEvent)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnRead);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacteristicReadEvent(FBleCharacteristicDataDelegate(Z_Param_Out_OnRead));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function BindToCharacteristicReadEvent

// Begin Interface UBleDeviceInterface Function BindToCharacteristicUnsubscribeEvent
struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics
{
	struct BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms
	{
		FScriptDelegate OnUnsubscribe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic unsubscribe events\n\x09*\n\x09* @param OnUnsubscribe - Called when unsubscribing from a characteristic\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic unsubscribe events\n\n@param OnUnsubscribe - Called when unsubscribing from a characteristic" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUnsubscribe_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnUnsubscribe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe = { "OnUnsubscribe", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms, OnUnsubscribe), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUnsubscribe_MetaData), NewProp_OnUnsubscribe_MetaData) }; // 4212510736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::NewProp_OnUnsubscribe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicUnsubscribeEvent", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::BleDeviceInterface_eventBindToCharacteristicUnsubscribeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicUnsubscribeEvent)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnUnsubscribe);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacteristicUnsubscribeEvent(FBleCharacteristicDelegate(Z_Param_Out_OnUnsubscribe));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function BindToCharacteristicUnsubscribeEvent

// Begin Interface UBleDeviceInterface Function BindToCharacteristicWriteEvent
struct Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics
{
	struct BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms
	{
		FScriptDelegate OnWrite;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Bind to characteristic write events\n\x09*\n\x09* @param OnWrite - Called when a characteristic was written to\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Bind to characteristic write events\n\n@param OnWrite - Called when a characteristic was written to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWrite_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnWrite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite = { "OnWrite", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms, OnWrite), Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWrite_MetaData), NewProp_OnWrite_MetaData) }; // 4212510736
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::NewProp_OnWrite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "BindToCharacteristicWriteEvent", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::BleDeviceInterface_eventBindToCharacteristicWriteEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execBindToCharacteristicWriteEvent)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnWrite);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BindToCharacteristicWriteEvent(FBleCharacteristicDelegate(Z_Param_Out_OnWrite));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function BindToCharacteristicWriteEvent

// Begin Interface UBleDeviceInterface Function Connect
struct Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics
{
	struct BleDeviceInterface_eventConnect_Parms
	{
		FScriptDelegate OnConnect;
		FScriptDelegate OnConnectError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnConnectError" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Connect to to a BLE device\n\x09*\n\x09* @param OnConnect - Called on successful connection\n\x09* @param OnConnectError - Called in case an error occurs during connection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Connect to to a BLE device\n\n@param OnConnect - Called on successful connection\n@param OnConnectError - Called in case an error occurs during connection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnConnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnect;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnConnectError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect = { "OnConnect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventConnect_Parms, OnConnect), Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnect_MetaData), NewProp_OnConnect_MetaData) }; // 3473425134
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError = { "OnConnectError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventConnect_Parms, OnConnectError), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnConnectError_MetaData), NewProp_OnConnectError_MetaData) }; // 1396618539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::NewProp_OnConnectError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "Connect", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::BleDeviceInterface_eventConnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::BleDeviceInterface_eventConnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_Connect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_Connect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execConnect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnect);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnConnectError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Connect(FBleDelegate(Z_Param_Out_OnConnect),FBleErrorDelegate(Z_Param_Out_OnConnectError));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function Connect

// Begin Interface UBleDeviceInterface Function Disconnect
struct Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics
{
	struct BleDeviceInterface_eventDisconnect_Parms
	{
		FScriptDelegate OnDisconnect;
		FScriptDelegate OnDisconnectError;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "OnDisconnectError" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Disconnect from a BLE device\n\x09*\n\x09* @param OnDisconnect - Called on successful disconnection\n\x09* @param OnDisconnectError - Called in case an error occurs during disconnection\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Disconnect from a BLE device\n\n@param OnDisconnect - Called on successful disconnection\n@param OnDisconnectError - Called in case an error occurs during disconnection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnect_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDisconnectError_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnect;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_OnDisconnectError;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect = { "OnDisconnect", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventDisconnect_Parms, OnDisconnect), Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisconnect_MetaData), NewProp_OnDisconnect_MetaData) }; // 3473425134
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError = { "OnDisconnectError", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventDisconnect_Parms, OnDisconnectError), Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDisconnectError_MetaData), NewProp_OnDisconnectError_MetaData) }; // 1396618539
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::NewProp_OnDisconnectError,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "Disconnect", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::BleDeviceInterface_eventDisconnect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::BleDeviceInterface_eventDisconnect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_Disconnect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_Disconnect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execDisconnect)
{
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnect);
	P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_OnDisconnectError);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Disconnect(FBleDelegate(Z_Param_Out_OnDisconnect),FBleErrorDelegate(Z_Param_Out_OnDisconnectError));
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function Disconnect

// Begin Interface UBleDeviceInterface Function GetDeviceId
struct Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics
{
	struct BleDeviceInterface_eventGetDeviceId_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device id\n\x09*\n\x09* @return - Device id\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device id\n\n@return - Device id" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetDeviceId_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetDeviceId", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::BleDeviceInterface_eventGetDeviceId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::BleDeviceInterface_eventGetDeviceId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execGetDeviceId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDeviceId();
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function GetDeviceId

// Begin Interface UBleDeviceInterface Function GetDeviceName
struct Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics
{
	struct BleDeviceInterface_eventGetDeviceName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device name\n\x09*\n\x09* @return - Device name\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device name\n\n@return - Device name" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetDeviceName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetDeviceName", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::BleDeviceInterface_eventGetDeviceName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::BleDeviceInterface_eventGetDeviceName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execGetDeviceName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDeviceName();
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function GetDeviceName

// Begin Interface UBleDeviceInterface Function GetServices
struct Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics
{
	struct BleDeviceInterface_eventGetServices_Parms
	{
		TArray<FString> FilterUUIDs;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "FilterUUIDs" },
		{ "AutoCreateRefTerm", "FilterUUIDs" },
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Get device service UUIDs\n\x09*\n\x09* @param FilterUUIDs - Array of UUIDs, the resulting list will only contain services that are specified here\n\x09* @return - An array of available service UUIDs\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Get device service UUIDs\n\n@param FilterUUIDs - Array of UUIDs, the resulting list will only contain services that are specified here\n@return - An array of available service UUIDs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterUUIDs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_FilterUUIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilterUUIDs;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_Inner = { "FilterUUIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs = { "FilterUUIDs", nullptr, (EPropertyFlags)0x0010040008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetServices_Parms, FilterUUIDs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterUUIDs_MetaData), NewProp_FilterUUIDs_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventGetServices_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_FilterUUIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "GetServices", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::BleDeviceInterface_eventGetServices_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::BleDeviceInterface_eventGetServices_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_GetServices()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_GetServices_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execGetServices)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_FilterUUIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetServices(Z_Param_Out_FilterUUIDs);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function GetServices

// Begin Interface UBleDeviceInterface Function IsConnected
struct Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics
{
	struct BleDeviceInterface_eventIsConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if this device is connected to\n\x09*\n\x09* @return - True if device is connected, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Check if this device is connected to\n\n@return - True if device is connected, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleDeviceInterface_eventIsConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleDeviceInterface_eventIsConnected_Parms), &Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "IsConnected", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::BleDeviceInterface_eventIsConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::BleDeviceInterface_eventIsConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_IsConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_IsConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execIsConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsConnected();
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function IsConnected

// Begin Interface UBleDeviceInterface Function IsServiceAvailable
struct Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics
{
	struct BleDeviceInterface_eventIsServiceAvailable_Parms
	{
		FString ServiceUUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if a service is available on the device\n\x09*\n\x09* @return - True if services is available on the device, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Check if a service is available on the device\n\n@return - True if services is available on the device, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventIsServiceAvailable_Parms, ServiceUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUID_MetaData), NewProp_ServiceUUID_MetaData) };
void Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleDeviceInterface_eventIsServiceAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleDeviceInterface_eventIsServiceAvailable_Parms), &Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "IsServiceAvailable", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::BleDeviceInterface_eventIsServiceAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::BleDeviceInterface_eventIsServiceAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execIsServiceAvailable)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsServiceAvailable(Z_Param_ServiceUUID);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function IsServiceAvailable

// Begin Interface UBleDeviceInterface Function ReadCharacteristic
struct Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics
{
	struct BleDeviceInterface_eventReadCharacteristic_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Read service characteristic value\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to read from\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Read service characteristic value\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to read from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventReadCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUID_MetaData), NewProp_ServiceUUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventReadCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacteristicUUID_MetaData), NewProp_CharacteristicUUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::NewProp_CharacteristicUUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "ReadCharacteristic", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::BleDeviceInterface_eventReadCharacteristic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::BleDeviceInterface_eventReadCharacteristic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execReadCharacteristic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReadCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function ReadCharacteristic

// Begin Interface UBleDeviceInterface Function SubscribeToCharacteristic
struct Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics
{
	struct BleDeviceInterface_eventSubscribeToCharacteristic_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		bool bIsIndicationCharacteristic;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Subscribe to a service characteristic to receive notifications\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to subscribe to\n\x09* @param IsIndicationCharacteristic - Specify if this characteristic is indicative (Android only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Subscribe to a service characteristic to receive notifications\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to subscribe to\n@param IsIndicationCharacteristic - Specify if this characteristic is indicative (Android only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static void NewProp_bIsIndicationCharacteristic_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsIndicationCharacteristic;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventSubscribeToCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUID_MetaData), NewProp_ServiceUUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventSubscribeToCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacteristicUUID_MetaData), NewProp_CharacteristicUUID_MetaData) };
void Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic_SetBit(void* Obj)
{
	((BleDeviceInterface_eventSubscribeToCharacteristic_Parms*)Obj)->bIsIndicationCharacteristic = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic = { "bIsIndicationCharacteristic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleDeviceInterface_eventSubscribeToCharacteristic_Parms), &Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_CharacteristicUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::NewProp_bIsIndicationCharacteristic,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "SubscribeToCharacteristic", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::BleDeviceInterface_eventSubscribeToCharacteristic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::BleDeviceInterface_eventSubscribeToCharacteristic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execSubscribeToCharacteristic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
	P_GET_UBOOL(Z_Param_bIsIndicationCharacteristic);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SubscribeToCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID,Z_Param_bIsIndicationCharacteristic);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function SubscribeToCharacteristic

// Begin Interface UBleDeviceInterface Function UnsubscribeFromCharacteristic
struct Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics
{
	struct BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Stop receiving service characteristic notifications\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to unsubscribe from\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Stop receiving service characteristic notifications\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to unsubscribe from" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUID_MetaData), NewProp_ServiceUUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacteristicUUID_MetaData), NewProp_CharacteristicUUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::NewProp_CharacteristicUUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "UnsubscribeFromCharacteristic", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::BleDeviceInterface_eventUnsubscribeFromCharacteristic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execUnsubscribeFromCharacteristic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnsubscribeFromCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function UnsubscribeFromCharacteristic

// Begin Interface UBleDeviceInterface Function WriteCharacteristic
struct Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics
{
	struct BleDeviceInterface_eventWriteCharacteristic_Parms
	{
		FString ServiceUUID;
		FString CharacteristicUUID;
		TArray<uint8> Data;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Write service characteristic value\n\x09*\n\x09* @param ServiceUUID - Service UUID that contains the specified characteristic\n\x09* @param CharacteristicUUID - Characteristic UUID to write to\n\x09* @param Data - Array of bytes tp write\n\x09*/" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
		{ "ToolTip", "Write service characteristic value\n\n@param ServiceUUID - Service UUID that contains the specified characteristic\n@param CharacteristicUUID - Characteristic UUID to write to\n@param Data - Array of bytes tp write" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServiceUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacteristicUUID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ServiceUUID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_CharacteristicUUID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID = { "ServiceUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, ServiceUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServiceUUID_MetaData), NewProp_ServiceUUID_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID = { "CharacteristicUUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, CharacteristicUUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacteristicUUID_MetaData), NewProp_CharacteristicUUID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleDeviceInterface_eventWriteCharacteristic_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_ServiceUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_CharacteristicUUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleDeviceInterface, nullptr, "WriteCharacteristic", nullptr, nullptr, Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::BleDeviceInterface_eventWriteCharacteristic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::BleDeviceInterface_eventWriteCharacteristic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IBleDeviceInterface::execWriteCharacteristic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ServiceUUID);
	P_GET_PROPERTY(FStrProperty,Z_Param_CharacteristicUUID);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteCharacteristic(Z_Param_ServiceUUID,Z_Param_CharacteristicUUID,Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Interface UBleDeviceInterface Function WriteCharacteristic

// Begin Interface UBleDeviceInterface
void UBleDeviceInterface::StaticRegisterNativesUBleDeviceInterface()
{
	UClass* Class = UBleDeviceInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BindToCharacteristicErrorEvent", &IBleDeviceInterface::execBindToCharacteristicErrorEvent },
		{ "BindToCharacteristicNotificationEvent", &IBleDeviceInterface::execBindToCharacteristicNotificationEvent },
		{ "BindToCharacteristicReadEvent", &IBleDeviceInterface::execBindToCharacteristicReadEvent },
		{ "BindToCharacteristicUnsubscribeEvent", &IBleDeviceInterface::execBindToCharacteristicUnsubscribeEvent },
		{ "BindToCharacteristicWriteEvent", &IBleDeviceInterface::execBindToCharacteristicWriteEvent },
		{ "Connect", &IBleDeviceInterface::execConnect },
		{ "Disconnect", &IBleDeviceInterface::execDisconnect },
		{ "GetDeviceId", &IBleDeviceInterface::execGetDeviceId },
		{ "GetDeviceName", &IBleDeviceInterface::execGetDeviceName },
		{ "GetServices", &IBleDeviceInterface::execGetServices },
		{ "IsConnected", &IBleDeviceInterface::execIsConnected },
		{ "IsServiceAvailable", &IBleDeviceInterface::execIsServiceAvailable },
		{ "ReadCharacteristic", &IBleDeviceInterface::execReadCharacteristic },
		{ "SubscribeToCharacteristic", &IBleDeviceInterface::execSubscribeToCharacteristic },
		{ "UnsubscribeFromCharacteristic", &IBleDeviceInterface::execUnsubscribeFromCharacteristic },
		{ "WriteCharacteristic", &IBleDeviceInterface::execWriteCharacteristic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBleDeviceInterface);
UClass* Z_Construct_UClass_UBleDeviceInterface_NoRegister()
{
	return UBleDeviceInterface::StaticClass();
}
struct Z_Construct_UClass_UBleDeviceInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Interface/BleDeviceInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicErrorEvent, "BindToCharacteristicErrorEvent" }, // 2911699577
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicNotificationEvent, "BindToCharacteristicNotificationEvent" }, // 60406983
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicReadEvent, "BindToCharacteristicReadEvent" }, // 2934813335
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicUnsubscribeEvent, "BindToCharacteristicUnsubscribeEvent" }, // 3996067746
		{ &Z_Construct_UFunction_UBleDeviceInterface_BindToCharacteristicWriteEvent, "BindToCharacteristicWriteEvent" }, // 2532966423
		{ &Z_Construct_UFunction_UBleDeviceInterface_Connect, "Connect" }, // 3191121626
		{ &Z_Construct_UFunction_UBleDeviceInterface_Disconnect, "Disconnect" }, // 4053051071
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetDeviceId, "GetDeviceId" }, // 1612354357
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetDeviceName, "GetDeviceName" }, // 3428259038
		{ &Z_Construct_UFunction_UBleDeviceInterface_GetServices, "GetServices" }, // 2513153219
		{ &Z_Construct_UFunction_UBleDeviceInterface_IsConnected, "IsConnected" }, // 3346176182
		{ &Z_Construct_UFunction_UBleDeviceInterface_IsServiceAvailable, "IsServiceAvailable" }, // 3852596678
		{ &Z_Construct_UFunction_UBleDeviceInterface_ReadCharacteristic, "ReadCharacteristic" }, // 2245338511
		{ &Z_Construct_UFunction_UBleDeviceInterface_SubscribeToCharacteristic, "SubscribeToCharacteristic" }, // 479015574
		{ &Z_Construct_UFunction_UBleDeviceInterface_UnsubscribeFromCharacteristic, "UnsubscribeFromCharacteristic" }, // 4225629123
		{ &Z_Construct_UFunction_UBleDeviceInterface_WriteCharacteristic, "WriteCharacteristic" }, // 655731694
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBleDeviceInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleDeviceInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleDeviceInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleDeviceInterface_Statics::ClassParams = {
	&UBleDeviceInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleDeviceInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleDeviceInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleDeviceInterface()
{
	if (!Z_Registration_Info_UClass_UBleDeviceInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleDeviceInterface.OuterSingleton, Z_Construct_UClass_UBleDeviceInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleDeviceInterface.OuterSingleton;
}
template<> BLEGOODIES_API UClass* StaticClass<UBleDeviceInterface>()
{
	return UBleDeviceInterface::StaticClass();
}
UBleDeviceInterface::UBleDeviceInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleDeviceInterface);
UBleDeviceInterface::~UBleDeviceInterface() {}
// End Interface UBleDeviceInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleDeviceInterface, UBleDeviceInterface::StaticClass, TEXT("UBleDeviceInterface"), &Z_Registration_Info_UClass_UBleDeviceInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleDeviceInterface), 819788255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_579759459(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
