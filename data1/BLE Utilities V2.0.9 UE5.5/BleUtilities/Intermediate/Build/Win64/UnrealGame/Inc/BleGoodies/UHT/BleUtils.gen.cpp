// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BleGoodies/Public/BleUtils.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleUtils() {}

// Begin Cross Module References
BLEGOODIES_API UClass* Z_Construct_UClass_UBleManagerInterface_NoRegister();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleUtils();
BLEGOODIES_API UClass* Z_Construct_UClass_UBleUtils_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
UPackage* Z_Construct_UPackage__Script_BleGoodies();
// End Cross Module References

// Begin Class UBleUtils Function ConvertBytesToHexString
struct Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics
{
	struct BleUtils_eventConvertBytesToHexString_Parms
	{
		TArray<uint8> Bytes;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09 * Convert an array of bytes to a hex string\n\x09 *\n\x09 * @return - Hex string representing array of bytes\n\x09 */" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Convert an array of bytes to a hex string\n\n@return - Hex string representing array of bytes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventConvertBytesToHexString_Parms, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bytes_MetaData), NewProp_Bytes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventConvertBytesToHexString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_Bytes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "ConvertBytesToHexString", nullptr, nullptr, Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::BleUtils_eventConvertBytesToHexString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::BleUtils_eventConvertBytesToHexString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtils::execConvertBytesToHexString)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Bytes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBleUtils::ConvertBytesToHexString(Z_Param_Out_Bytes);
	P_NATIVE_END;
}
// End Class UBleUtils Function ConvertBytesToHexString

// Begin Class UBleUtils Function CreateBleManager
struct Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics
{
	struct BleUtils_eventCreateBleManager_Parms
	{
		TScriptInterface<IBleManagerInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Create a BLE Manager\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Create a BLE Manager" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventCreateBleManager_Parms, ReturnValue), Z_Construct_UClass_UBleManagerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "CreateBleManager", nullptr, nullptr, Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::BleUtils_eventCreateBleManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::BleUtils_eventCreateBleManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtils_CreateBleManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtils_CreateBleManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtils::execCreateBleManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IBleManagerInterface>*)Z_Param__Result=UBleUtils::CreateBleManager();
	P_NATIVE_END;
}
// End Class UBleUtils Function CreateBleManager

// Begin Class UBleUtils Function HexToUUID
struct Z_Construct_UFunction_UBleUtils_HexToUUID_Statics
{
	struct BleUtils_eventHexToUUID_Parms
	{
		FString HexString;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Parse a 16 bit hex value into a UUID string\n\x09*\n\x09* @return - UUID string\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Parse a 16 bit hex value into a UUID string\n\n@return - UUID string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexString;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString = { "HexString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventHexToUUID_Parms, HexString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexString_MetaData), NewProp_HexString_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventHexToUUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_HexString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "HexToUUID", nullptr, nullptr, Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::BleUtils_eventHexToUUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::BleUtils_eventHexToUUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtils_HexToUUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtils_HexToUUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtils::execHexToUUID)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_HexString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UBleUtils::HexToUUID(Z_Param_HexString);
	P_NATIVE_END;
}
// End Class UBleUtils Function HexToUUID

// Begin Class UBleUtils Function HexToUUIDs
struct Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics
{
	struct BleUtils_eventHexToUUIDs_Parms
	{
		TArray<FString> HexStrings;
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Parse an array of 16 bit hex values into an array of UUID strings\n\x09*\n\x09* @return - Array of UUID strings\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Parse an array of 16 bit hex values into an array of UUID strings\n\n@return - Array of UUID strings" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HexStrings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_HexStrings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HexStrings;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_Inner = { "HexStrings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings = { "HexStrings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventHexToUUIDs_Parms, HexStrings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HexStrings_MetaData), NewProp_HexStrings_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventHexToUUIDs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_HexStrings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "HexToUUIDs", nullptr, nullptr, Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::BleUtils_eventHexToUUIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::BleUtils_eventHexToUUIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtils_HexToUUIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtils_HexToUUIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtils::execHexToUUIDs)
{
	P_GET_TARRAY_REF(FString,Z_Param_Out_HexStrings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=UBleUtils::HexToUUIDs(Z_Param_Out_HexStrings);
	P_NATIVE_END;
}
// End Class UBleUtils Function HexToUUIDs

// Begin Class UBleUtils Function IsUUIDValid
struct Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics
{
	struct BleUtils_eventIsUUIDValid_Parms
	{
		FString UUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "BLE Goodies" },
		{ "Comment", "/**\n\x09* Check if a provided UUID is a valid fully qualified UUID in the format XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX\n\x09* This will return false for short hex UUIDs.\n\x09*\n\x09* @return - True if the UUID string is valid, false otherwise\n\x09*/" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
		{ "ToolTip", "Check if a provided UUID is a valid fully qualified UUID in the format XXXXXXXX-XXXX-XXXX-XXXX-XXXXXXXXXXXX\nThis will return false for short hex UUIDs.\n\n@return - True if the UUID string is valid, false otherwise" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UUID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BleUtils_eventIsUUIDValid_Parms, UUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UUID_MetaData), NewProp_UUID_MetaData) };
void Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BleUtils_eventIsUUIDValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BleUtils_eventIsUUIDValid_Parms), &Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_UUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBleUtils, nullptr, "IsUUIDValid", nullptr, nullptr, Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::BleUtils_eventIsUUIDValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::BleUtils_eventIsUUIDValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBleUtils_IsUUIDValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBleUtils_IsUUIDValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBleUtils::execIsUUIDValid)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_UUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UBleUtils::IsUUIDValid(Z_Param_UUID);
	P_NATIVE_END;
}
// End Class UBleUtils Function IsUUIDValid

// Begin Class UBleUtils
void UBleUtils::StaticRegisterNativesUBleUtils()
{
	UClass* Class = UBleUtils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertBytesToHexString", &UBleUtils::execConvertBytesToHexString },
		{ "CreateBleManager", &UBleUtils::execCreateBleManager },
		{ "HexToUUID", &UBleUtils::execHexToUUID },
		{ "HexToUUIDs", &UBleUtils::execHexToUUIDs },
		{ "IsUUIDValid", &UBleUtils::execIsUUIDValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBleUtils);
UClass* Z_Construct_UClass_UBleUtils_NoRegister()
{
	return UBleUtils::StaticClass();
}
struct Z_Construct_UClass_UBleUtils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BleUtils.h" },
		{ "ModuleRelativePath", "Public/BleUtils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBleUtils_ConvertBytesToHexString, "ConvertBytesToHexString" }, // 3033389258
		{ &Z_Construct_UFunction_UBleUtils_CreateBleManager, "CreateBleManager" }, // 92663420
		{ &Z_Construct_UFunction_UBleUtils_HexToUUID, "HexToUUID" }, // 3756881406
		{ &Z_Construct_UFunction_UBleUtils_HexToUUIDs, "HexToUUIDs" }, // 3730940409
		{ &Z_Construct_UFunction_UBleUtils_IsUUIDValid, "IsUUIDValid" }, // 3906637481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBleUtils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBleUtils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_BleGoodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBleUtils_Statics::ClassParams = {
	&UBleUtils::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBleUtils_Statics::Class_MetaDataParams), Z_Construct_UClass_UBleUtils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBleUtils()
{
	if (!Z_Registration_Info_UClass_UBleUtils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBleUtils.OuterSingleton, Z_Construct_UClass_UBleUtils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBleUtils.OuterSingleton;
}
template<> BLEGOODIES_API UClass* StaticClass<UBleUtils>()
{
	return UBleUtils::StaticClass();
}
UBleUtils::UBleUtils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBleUtils);
UBleUtils::~UBleUtils() {}
// End Class UBleUtils

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBleUtils, UBleUtils::StaticClass, TEXT("UBleUtils"), &Z_Registration_Info_UClass_UBleUtils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBleUtils), 2291380454U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_3327008215(TEXT("/Script/BleGoodies"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
