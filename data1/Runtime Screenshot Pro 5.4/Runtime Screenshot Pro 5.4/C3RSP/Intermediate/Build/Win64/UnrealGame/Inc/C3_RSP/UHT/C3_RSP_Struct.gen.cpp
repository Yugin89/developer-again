// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C3_RSP/Public/C3_RSP_Struct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC3_RSP_Struct() {}

// Begin Cross Module References
C3_RSP_API UScriptStruct* Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings();
UPackage* Z_Construct_UPackage__Script_C3_RSP();
// End Cross Module References

// Begin ScriptStruct FC3_RSP_CaptureSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings;
class UScriptStruct* FC3_RSP_CaptureSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings, (UObject*)Z_Construct_UPackage__Script_C3_RSP(), TEXT("C3_RSP_CaptureSettings"));
	}
	return Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.OuterSingleton;
}
template<> C3_RSP_API UScriptStruct* StaticStruct<FC3_RSP_CaptureSettings>()
{
	return FC3_RSP_CaptureSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskUsingCustomDepth_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureHDR_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Multiplier_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Res_X_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Resolution X" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Res_Y_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ClampMin", "1" },
		{ "DisplayName", "Resolution Y" },
		{ "ModuleRelativePath", "Public/C3_RSP_Struct.h" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_MaskUsingCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaskUsingCustomDepth;
	static void NewProp_CaptureHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureHDR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FC3_RSP_CaptureSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC3_RSP_CaptureSettings, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_MaskUsingCustomDepth_SetBit(void* Obj)
{
	((FC3_RSP_CaptureSettings*)Obj)->MaskUsingCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_MaskUsingCustomDepth = { "MaskUsingCustomDepth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FC3_RSP_CaptureSettings), &Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_MaskUsingCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskUsingCustomDepth_MetaData), NewProp_MaskUsingCustomDepth_MetaData) };
void Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_CaptureHDR_SetBit(void* Obj)
{
	((FC3_RSP_CaptureSettings*)Obj)->CaptureHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_CaptureHDR = { "CaptureHDR", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FC3_RSP_CaptureSettings), &Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_CaptureHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureHDR_MetaData), NewProp_CaptureHDR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC3_RSP_CaptureSettings, Multiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Multiplier_MetaData), NewProp_Multiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC3_RSP_CaptureSettings, Res_X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Res_X_MetaData), NewProp_Res_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FC3_RSP_CaptureSettings, Res_Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Res_Y_MetaData), NewProp_Res_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_MaskUsingCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_CaptureHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewProp_Res_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_C3_RSP,
	nullptr,
	&NewStructOps,
	"C3_RSP_CaptureSettings",
	Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::PropPointers),
	sizeof(FC3_RSP_CaptureSettings),
	alignof(FC3_RSP_CaptureSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings()
{
	if (!Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.InnerSingleton, Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings.InnerSingleton;
}
// End ScriptStruct FC3_RSP_CaptureSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_Struct_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FC3_RSP_CaptureSettings::StaticStruct, Z_Construct_UScriptStruct_FC3_RSP_CaptureSettings_Statics::NewStructOps, TEXT("C3_RSP_CaptureSettings"), &Z_Registration_Info_UScriptStruct_C3_RSP_CaptureSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FC3_RSP_CaptureSettings), 3640492273U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_Struct_h_306738962(TEXT("/Script/C3_RSP"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_Struct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_Struct_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
