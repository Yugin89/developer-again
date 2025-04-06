// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C3_RSP/Public/C3_RSP_FunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC3_RSP_FunctionLibrary() {}

// Begin Cross Module References
C3_RSP_API UClass* Z_Construct_UClass_AC3_RSP_ManagerBase_NoRegister();
C3_RSP_API UClass* Z_Construct_UClass_UC3_RSP_FunctionLibrary();
C3_RSP_API UClass* Z_Construct_UClass_UC3_RSP_FunctionLibrary_NoRegister();
C3_RSP_API UEnum* Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_C3_RSP();
// End Cross Module References

// Begin Class UC3_RSP_FunctionLibrary Function ConvertImageToTexture
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics
{
	struct C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms
	{
		int32 InSizeX;
		int32 InSizeY;
		TArray<FColor> InImageData;
		UTexture2D* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * Convert the image data to a texture.\n\x09 */" },
		{ "DisplayName", "Convert Image To Texture" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Convert the image data to a texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSizeX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSizeY_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InImageData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InImageData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InSizeX = { "InSizeX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms, InSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeX_MetaData), NewProp_InSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InSizeY = { "InSizeY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms, InSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeY_MetaData), NewProp_InSizeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InImageData_Inner = { "InImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InImageData = { "InImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms, InImageData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageData_MetaData), NewProp_InImageData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InImageData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_InImageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "ConvertImageToTexture", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::C3_RSP_FunctionLibrary_eventConvertImageToTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execConvertImageToTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeY);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InImageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture2D**)Z_Param__Result=UC3_RSP_FunctionLibrary::ConvertImageToTexture(Z_Param_InSizeX,Z_Param_InSizeY,Z_Param_Out_InImageData);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function ConvertImageToTexture

// Begin Class UC3_RSP_FunctionLibrary Function FL_EnablePathTracer
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms
	{
		const UObject* WorldContextObject;
		bool Enable;
		bool ProgressDisplay;
		bool Denoiser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/** Enable the Path Tracer. Need to enable \"Support Hardware Ray Tracing\" before. */" },
		{ "CPP_Default_Denoiser", "true" },
		{ "CPP_Default_Enable", "true" },
		{ "CPP_Default_ProgressDisplay", "true" },
		{ "DisplayName", "Enable Path Tracer" },
		{ "Keywords", "Path Tracer, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Enable the Path Tracer. Need to enable \"Support Hardware Ray Tracing\" before." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_Enable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Enable;
	static void NewProp_ProgressDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProgressDisplay;
	static void NewProp_Denoiser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Denoiser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Enable_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms*)Obj)->Enable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Enable = { "Enable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Enable_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_ProgressDisplay_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms*)Obj)->ProgressDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_ProgressDisplay = { "ProgressDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_ProgressDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Denoiser_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms*)Obj)->Denoiser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Denoiser = { "Denoiser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Denoiser_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Enable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_ProgressDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::NewProp_Denoiser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_EnablePathTracer", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::C3_RSP_FunctionLibrary_eventFL_EnablePathTracer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_EnablePathTracer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_Enable);
	P_GET_UBOOL(Z_Param_ProgressDisplay);
	P_GET_UBOOL(Z_Param_Denoiser);
	P_FINISH;
	P_NATIVE_BEGIN;
	UC3_RSP_FunctionLibrary::FL_EnablePathTracer(Z_Param_WorldContextObject,Z_Param_Enable,Z_Param_ProgressDisplay,Z_Param_Denoiser);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_EnablePathTracer

// Begin Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Lite
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Take a quick screenshot with 1x resolution. The easiest & lite way to screenshot.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09*/" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "DisplayName", "Instant Screenshot (Lite)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Take a quick screenshot with 1x resolution. The easiest & lite way to screenshot.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_InstantScreenshot_Lite", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Lite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Lite)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Lite(Z_Param_WorldContextObject,Z_Param_Filename);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Lite

// Begin Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Pro
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		bool InShowNotifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Can set resolution multiplier or exact resolution parameter for screenshot.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n\x09*/" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "CPP_Default_InShowNotifications", "false" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Instant Screenshot (Pro)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Can set resolution multiplier or exact resolution parameter for screenshot.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param InShowNotifications - Show the notifications when captured in Unreal Editor?" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InShowNotifications_MetaData[] = {
		{ "DisplayName", "Show Notifications" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_Y;
	static void NewProp_InShowNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowNotifications;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_InShowNotifications_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms*)Obj)->InShowNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_InShowNotifications = { "InShowNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_InShowNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InShowNotifications_MetaData), NewProp_InShowNotifications_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_InShowNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_InstantScreenshot_Pro", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Pro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Pro)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_UBOOL(Z_Param_InShowNotifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Pro(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_InShowNotifications);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Pro

// Begin Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Ultra
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		bool MaskUsingCustomDepth;
		bool CaptureHDR;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		bool InShowNotifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Can set all parameter for screenshot.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n\x09*/" },
		{ "CPP_Default_CaptureHDR", "false" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "CPP_Default_InShowNotifications", "false" },
		{ "CPP_Default_MaskUsingCustomDepth", "false" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Instant Screenshot (Ultra)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Can set all parameter for screenshot.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param InShowNotifications - Show the notifications when captured in Unreal Editor?" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InShowNotifications_MetaData[] = {
		{ "DisplayName", "Show Notifications" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_MaskUsingCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaskUsingCustomDepth;
	static void NewProp_CaptureHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureHDR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_Y;
	static void NewProp_InShowNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowNotifications;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_MaskUsingCustomDepth_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms*)Obj)->MaskUsingCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_MaskUsingCustomDepth = { "MaskUsingCustomDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_MaskUsingCustomDepth_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_CaptureHDR_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms*)Obj)->CaptureHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_CaptureHDR = { "CaptureHDR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_CaptureHDR_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_InShowNotifications_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms*)Obj)->InShowNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_InShowNotifications = { "InShowNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_InShowNotifications_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InShowNotifications_MetaData), NewProp_InShowNotifications_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_MaskUsingCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_CaptureHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_InShowNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_InstantScreenshot_Ultra", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::C3_RSP_FunctionLibrary_eventFL_InstantScreenshot_Ultra_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Ultra)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_UBOOL(Z_Param_MaskUsingCustomDepth);
	P_GET_UBOOL(Z_Param_CaptureHDR);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_UBOOL(Z_Param_InShowNotifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_InstantScreenshot_Ultra(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_MaskUsingCustomDepth,Z_Param_CaptureHDR,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_InShowNotifications);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_InstantScreenshot_Ultra

// Begin Class UC3_RSP_FunctionLibrary Function FL_LumenUseHardwareRaytracing
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms
	{
		const UObject* WorldContextObject;
		bool UseHardware;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/** Let Lumen use hardware ray tracing. */" },
		{ "DisplayName", "Lumen Use Hardware Raytracing" },
		{ "Keywords", "Hardware Raytracing, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Let Lumen use hardware ray tracing." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseHardware_MetaData[] = {
		{ "DisplayName", "Use Hardware?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_UseHardware_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseHardware;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_UseHardware_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms*)Obj)->UseHardware = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_UseHardware = { "UseHardware", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_UseHardware_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseHardware_MetaData), NewProp_UseHardware_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::NewProp_UseHardware,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_LumenUseHardwareRaytracing", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::C3_RSP_FunctionLibrary_eventFL_LumenUseHardwareRaytracing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_LumenUseHardwareRaytracing)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_UseHardware);
	P_FINISH;
	P_NATIVE_BEGIN;
	UC3_RSP_FunctionLibrary::FL_LumenUseHardwareRaytracing(Z_Param_WorldContextObject,Z_Param_UseHardware);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_LumenUseHardwareRaytracing

// Begin Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Lite
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Take a quick screenshot for path tracer rendering with 1x resolution. The easiest & lite way to screenshot.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09*/" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "DisplayName", "Path Tracer Screenshot (Lite)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Take a quick screenshot for path tracer rendering with 1x resolution. The easiest & lite way to screenshot.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_PathTracerShot_Lite", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Lite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Lite)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_PathTracerShot_Lite(Z_Param_WorldContextObject,Z_Param_Filename);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Lite

// Begin Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Pro
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		int32 DelayForSampling;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y, InShowNotifications" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Take a screenshot for path tracer rendering.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n\x09*///, UPARAM(DisplayName = \"Show Notifications\") bool InShowNotifications = false\n" },
		{ "CPP_Default_DelayForSampling", "-1" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Path Tracer Screenshot (Pro)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Take a screenshot for path tracer rendering.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n       //, UPARAM(DisplayName = \"Show Notifications\") bool InShowNotifications = false" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayForSampling;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_DelayForSampling = { "DelayForSampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms, DelayForSampling), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_DelayForSampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_PathTracerShot_Pro", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Pro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Pro)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_DelayForSampling);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_PathTracerShot_Pro(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_DelayForSampling);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Pro

// Begin Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Ultra
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms
	{
		UObject* WorldContextObject;
		FString Filename;
		bool MaskUsingCustomDepth;
		bool CaptureHDR;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		int32 DelayForSampling;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y, InShowNotifications" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot" },
		{ "Comment", "/**\n\x09* Take a screenshot for path tracer rendering. Can set all parameter for screenshot.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n\x09*///, UPARAM(DisplayName = \"Show Notifications\") bool InShowNotifications = false\n" },
		{ "CPP_Default_CaptureHDR", "false" },
		{ "CPP_Default_DelayForSampling", "-1" },
		{ "CPP_Default_Filename", "D:/Folder/screenshot.png" },
		{ "CPP_Default_MaskUsingCustomDepth", "false" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Path Tracer Screenshot (Ultra)" },
		{ "Keywords", "Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Take a screenshot for path tracer rendering. Can set all parameter for screenshot.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param InShowNotifications - Show the notifications when captured in Unreal Editor?\n       //, UPARAM(DisplayName = \"Show Notifications\") bool InShowNotifications = false" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "DisplayName", "Full Filename" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static void NewProp_MaskUsingCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MaskUsingCustomDepth;
	static void NewProp_CaptureHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CaptureHDR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Multiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Res_Y;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayForSampling;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_MaskUsingCustomDepth_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms*)Obj)->MaskUsingCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_MaskUsingCustomDepth = { "MaskUsingCustomDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_MaskUsingCustomDepth_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_CaptureHDR_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms*)Obj)->CaptureHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_CaptureHDR = { "CaptureHDR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_CaptureHDR_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_DelayForSampling = { "DelayForSampling", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms, DelayForSampling), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_MaskUsingCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_CaptureHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_DelayForSampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_PathTracerShot_Ultra", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::C3_RSP_FunctionLibrary_eventFL_PathTracerShot_Ultra_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Ultra)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_UBOOL(Z_Param_MaskUsingCustomDepth);
	P_GET_UBOOL(Z_Param_CaptureHDR);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_DelayForSampling);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_PathTracerShot_Ultra(Z_Param_WorldContextObject,Z_Param_Filename,Z_Param_MaskUsingCustomDepth,Z_Param_CaptureHDR,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_DelayForSampling);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_PathTracerShot_Ultra

// Begin Class UC3_RSP_FunctionLibrary Function FL_RandomString
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_RandomString_Parms
	{
		FString ValidChars;
		int32 NumChars;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * Get random string from \"Valid Chars\". If you input more same Char, it will have more chance to show up.\n\x09 */" },
		{ "CPP_Default_NumChars", "1" },
		{ "DisplayName", "Random String" },
		{ "Keywords", "Random String, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Get random string from \"Valid Chars\". If you input more same Char, it will have more chance to show up." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ValidChars;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChars;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_ValidChars = { "ValidChars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_RandomString_Parms, ValidChars), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_NumChars = { "NumChars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_RandomString_Parms, NumChars), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_RandomString_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_ValidChars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_NumChars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_RandomString", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::C3_RSP_FunctionLibrary_eventFL_RandomString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::C3_RSP_FunctionLibrary_eventFL_RandomString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_RandomString)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ValidChars);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChars);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_RandomString(Z_Param_ValidChars,Z_Param_NumChars);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_RandomString

// Begin Class UC3_RSP_FunctionLibrary Function FL_RandomString_Pro
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms
	{
		int32 NumChars;
		bool UpperLetters;
		bool LowerLetters;
		bool Numbers;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * Smart random string. Use RandomString() as base.\n\x09 */" },
		{ "CPP_Default_LowerLetters", "true" },
		{ "CPP_Default_Numbers", "true" },
		{ "CPP_Default_NumChars", "1" },
		{ "CPP_Default_UpperLetters", "true" },
		{ "DisplayName", "Random String (Pro)" },
		{ "Keywords", "Random String, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Smart random string. Use RandomString() as base." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumChars;
	static void NewProp_UpperLetters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpperLetters;
	static void NewProp_LowerLetters_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LowerLetters;
	static void NewProp_Numbers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Numbers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_NumChars = { "NumChars", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms, NumChars), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_UpperLetters_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms*)Obj)->UpperLetters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_UpperLetters = { "UpperLetters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_UpperLetters_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_LowerLetters_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms*)Obj)->LowerLetters = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_LowerLetters = { "LowerLetters", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_LowerLetters_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_Numbers_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms*)Obj)->Numbers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_Numbers = { "Numbers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_Numbers_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_NumChars,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_UpperLetters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_LowerLetters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_Numbers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_RandomString_Pro", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::C3_RSP_FunctionLibrary_eventFL_RandomString_Pro_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_RandomString_Pro)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NumChars);
	P_GET_UBOOL(Z_Param_UpperLetters);
	P_GET_UBOOL(Z_Param_LowerLetters);
	P_GET_UBOOL(Z_Param_Numbers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UC3_RSP_FunctionLibrary::FL_RandomString_Pro(Z_Param_NumChars,Z_Param_UpperLetters,Z_Param_LowerLetters,Z_Param_Numbers);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_RandomString_Pro

// Begin Class UC3_RSP_FunctionLibrary Function FL_SetRenderingMethod
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_SetRenderingMethod_Parms
	{
		const UObject* WorldContextObject;
		ERSP_RenderingMethod InMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/**\n\x09* Set rendering method.\n\x09* Raster:\x09\x09\x09The normal method. Can be Lumen if you using UE5 & enabled in Project Settings.\n\x09* RTX:\x09\x09\x09""Fully Ray Tracing. Turn everything to ray tracing. Need to enable \"Support Hardware Ray Tracing\" before.\n\x09* Path Tracing:\x09Need to enable \"Support Hardware Ray Tracing\" before.\n\x09*/" },
		{ "CPP_Default_InMethod", "Raster" },
		{ "DisplayName", "Set Rendering Method" },
		{ "Keywords", "Rendering Method, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Set rendering method.\nRaster:                       The normal method. Can be Lumen if you using UE5 & enabled in Project Settings.\nRTX:                  Fully Ray Tracing. Turn everything to ray tracing. Need to enable \"Support Hardware Ray Tracing\" before.\nPath Tracing: Need to enable \"Support Hardware Ray Tracing\" before." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMethod_MetaData[] = {
		{ "DisplayName", "Method" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_SetRenderingMethod_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_InMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_InMethod = { "InMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_SetRenderingMethod_Parms, InMethod), Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMethod_MetaData), NewProp_InMethod_MetaData) }; // 3703407950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_InMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::NewProp_InMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_SetRenderingMethod", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::C3_RSP_FunctionLibrary_eventFL_SetRenderingMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::C3_RSP_FunctionLibrary_eventFL_SetRenderingMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_SetRenderingMethod)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_ENUM(ERSP_RenderingMethod,Z_Param_InMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	UC3_RSP_FunctionLibrary::FL_SetRenderingMethod(Z_Param_WorldContextObject,ERSP_RenderingMethod(Z_Param_InMethod));
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_SetRenderingMethod

// Begin Class UC3_RSP_FunctionLibrary Function FL_ShowAllNotifications
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_ShowAllNotifications_Parms
	{
		bool InShow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * *WARNING, USE CAREFULLY* Set to show all notification when screenshot was ended.\n\x09 * * It will disable all notification! Not only this screenshot notification! *\n\x09 */" },
		{ "CPP_Default_InShow", "true" },
		{ "DisplayName", "Show All Notifications Pop Up" },
		{ "Keywords", "RSP, Notification" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "*WARNING, USE CAREFULLY* Set to show all notification when screenshot was ended.\n* It will disable all notification! Not only this screenshot notification! *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InShow_MetaData[] = {
		{ "DisplayName", "Show" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_InShow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InShow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::NewProp_InShow_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventFL_ShowAllNotifications_Parms*)Obj)->InShow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::NewProp_InShow = { "InShow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventFL_ShowAllNotifications_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::NewProp_InShow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InShow_MetaData), NewProp_InShow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::NewProp_InShow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_ShowAllNotifications", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::C3_RSP_FunctionLibrary_eventFL_ShowAllNotifications_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::C3_RSP_FunctionLibrary_eventFL_ShowAllNotifications_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_ShowAllNotifications)
{
	P_GET_UBOOL(Z_Param_InShow);
	P_FINISH;
	P_NATIVE_BEGIN;
	UC3_RSP_FunctionLibrary::FL_ShowAllNotifications(Z_Param_InShow);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_ShowAllNotifications

// Begin Class UC3_RSP_FunctionLibrary Function FL_SolvePathTraceCrash
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics
{
	struct C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms
	{
		UObject* WorldContextObject;
		int32 InMaxDispatchSize;
		int32 InFlushDispatch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/**\n\x09* Solution for \"D3D Device Removed Crashes\". Higher value result less chance to get this error.\n\x09* @Param InMaxDispatchSize - Controls the maximum width and height in pixels for the path-traced render. If this value is lower than your viewport or image resolution, the render may take place in several steps, which increases the amount of times Windows can verify that the GPU is still responsive. The system default is 2048.\n\x09* @Param InFlushDispatch - Controls how frequently to flush the command list during the path tracing process. Setting this to 1 gives Windows more chances to verify the GPU is still responsive. By system default, this is set to 2.\n\x09*/" },
		{ "CPP_Default_InFlushDispatch", "1" },
		{ "CPP_Default_InMaxDispatchSize", "8000" },
		{ "DisplayName", "Solve Path Trace Crash" },
		{ "Keywords", "Pixels, RSP, D3D Device Removed Crashes" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Solution for \"D3D Device Removed Crashes\". Higher value result less chance to get this error.\n@Param InMaxDispatchSize - Controls the maximum width and height in pixels for the path-traced render. If this value is lower than your viewport or image resolution, the render may take place in several steps, which increases the amount of times Windows can verify that the GPU is still responsive. The system default is 2048.\n@Param InFlushDispatch - Controls how frequently to flush the command list during the path tracing process. Setting this to 1 gives Windows more chances to verify the GPU is still responsive. By system default, this is set to 2." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMaxDispatchSize_MetaData[] = {
		{ "DisplayName", "Max Dispatch Size" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFlushDispatch_MetaData[] = {
		{ "DisplayName", "Flush Dispatch" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InMaxDispatchSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InFlushDispatch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_InMaxDispatchSize = { "InMaxDispatchSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms, InMaxDispatchSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMaxDispatchSize_MetaData), NewProp_InMaxDispatchSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_InFlushDispatch = { "InFlushDispatch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms, InFlushDispatch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFlushDispatch_MetaData), NewProp_InFlushDispatch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_InMaxDispatchSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::NewProp_InFlushDispatch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "FL_SolvePathTraceCrash", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::C3_RSP_FunctionLibrary_eventFL_SolvePathTraceCrash_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execFL_SolvePathTraceCrash)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_InMaxDispatchSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_InFlushDispatch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UC3_RSP_FunctionLibrary::FL_SolvePathTraceCrash(Z_Param_WorldContextObject,Z_Param_InMaxDispatchSize,Z_Param_InFlushDispatch);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function FL_SolvePathTraceCrash

// Begin Class UC3_RSP_FunctionLibrary Function GetRSPManager
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics
{
	struct C3_RSP_FunctionLibrary_eventGetRSPManager_Parms
	{
		const UObject* WorldContextObject;
		AC3_RSP_ManagerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/**\n\x09* *INTERNAL USE ONLY*\n\x09* Get RSP manager for more advanced usage.\n\x09*/" },
		{ "DisplayName", "Get RSP Manager" },
		{ "Keywords", "Get RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "*INTERNAL USE ONLY*\nGet RSP manager for more advanced usage." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventGetRSPManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventGetRSPManager_Parms, ReturnValue), Z_Construct_UClass_AC3_RSP_ManagerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "GetRSPManager", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::C3_RSP_FunctionLibrary_eventGetRSPManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::C3_RSP_FunctionLibrary_eventGetRSPManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execGetRSPManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AC3_RSP_ManagerBase**)Z_Param__Result=UC3_RSP_FunctionLibrary::GetRSPManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function GetRSPManager

// Begin Class UC3_RSP_FunctionLibrary Function IsValidFilename
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics
{
	struct C3_RSP_FunctionLibrary_eventIsValidFilename_Parms
	{
		FString InFilename;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.\n\x09 * @param InFilename \n\x09 * @return \n\x09 */" },
		{ "DisplayName", "Is Valid Filename" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.\n@param InFilename\n@return" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[] = {
		{ "DisplayName", "Filename" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventIsValidFilename_Parms, InFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilename_MetaData), NewProp_InFilename_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventIsValidFilename_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventIsValidFilename_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_InFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "IsValidFilename", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::C3_RSP_FunctionLibrary_eventIsValidFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::C3_RSP_FunctionLibrary_eventIsValidFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execIsValidFilename)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::IsValidFilename(Z_Param_InFilename);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function IsValidFilename

// Begin Class UC3_RSP_FunctionLibrary Function SaveImageFileFromColorData
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics
{
	struct C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms
	{
		FString Filename;
		int32 InSizeX;
		int32 InSizeY;
		TArray<FColor> InImageData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "DisplayName", "Save Image File from Color Data" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSizeX_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InSizeY_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InImageData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Filename;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSizeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InImageData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InImageData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms, Filename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filename_MetaData), NewProp_Filename_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InSizeX = { "InSizeX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms, InSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeX_MetaData), NewProp_InSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InSizeY = { "InSizeY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms, InSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeY_MetaData), NewProp_InSizeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InImageData_Inner = { "InImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InImageData = { "InImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms, InImageData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageData_MetaData), NewProp_InImageData_MetaData) };
void Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms), &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InImageData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_InImageData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "SaveImageFileFromColorData", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::C3_RSP_FunctionLibrary_eventSaveImageFileFromColorData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execSaveImageFileFromColorData)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeY);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InImageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UC3_RSP_FunctionLibrary::SaveImageFileFromColorData(Z_Param_Filename,Z_Param_InSizeX,Z_Param_InSizeY,Z_Param_Out_InImageData);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function SaveImageFileFromColorData

// Begin Class UC3_RSP_FunctionLibrary Function TryCorrectFilename
struct Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics
{
	struct C3_RSP_FunctionLibrary_eventTryCorrectFilename_Parms
	{
		FString InFilename;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Misc" },
		{ "Comment", "/**\n\x09 * Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.\n\x09 * @param InFilename \n\x09 * @return \n\x09 */" },
		{ "DisplayName", "Try Correct Filename" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
		{ "ToolTip", "Validate the filename. If the filename is invalid, it will return false. And it will auto correct the filename.\n@param InFilename\n@return" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFilename_MetaData[] = {
		{ "DisplayName", "Filename" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InFilename;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::NewProp_InFilename = { "InFilename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventTryCorrectFilename_Parms, InFilename), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFilename_MetaData), NewProp_InFilename_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_FunctionLibrary_eventTryCorrectFilename_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::NewProp_InFilename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UC3_RSP_FunctionLibrary, nullptr, "TryCorrectFilename", nullptr, nullptr, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::C3_RSP_FunctionLibrary_eventTryCorrectFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::C3_RSP_FunctionLibrary_eventTryCorrectFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UC3_RSP_FunctionLibrary::execTryCorrectFilename)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InFilename);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UC3_RSP_FunctionLibrary::TryCorrectFilename(Z_Param_InFilename);
	P_NATIVE_END;
}
// End Class UC3_RSP_FunctionLibrary Function TryCorrectFilename

// Begin Class UC3_RSP_FunctionLibrary
void UC3_RSP_FunctionLibrary::StaticRegisterNativesUC3_RSP_FunctionLibrary()
{
	UClass* Class = UC3_RSP_FunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConvertImageToTexture", &UC3_RSP_FunctionLibrary::execConvertImageToTexture },
		{ "FL_EnablePathTracer", &UC3_RSP_FunctionLibrary::execFL_EnablePathTracer },
		{ "FL_InstantScreenshot_Lite", &UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Lite },
		{ "FL_InstantScreenshot_Pro", &UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Pro },
		{ "FL_InstantScreenshot_Ultra", &UC3_RSP_FunctionLibrary::execFL_InstantScreenshot_Ultra },
		{ "FL_LumenUseHardwareRaytracing", &UC3_RSP_FunctionLibrary::execFL_LumenUseHardwareRaytracing },
		{ "FL_PathTracerShot_Lite", &UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Lite },
		{ "FL_PathTracerShot_Pro", &UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Pro },
		{ "FL_PathTracerShot_Ultra", &UC3_RSP_FunctionLibrary::execFL_PathTracerShot_Ultra },
		{ "FL_RandomString", &UC3_RSP_FunctionLibrary::execFL_RandomString },
		{ "FL_RandomString_Pro", &UC3_RSP_FunctionLibrary::execFL_RandomString_Pro },
		{ "FL_SetRenderingMethod", &UC3_RSP_FunctionLibrary::execFL_SetRenderingMethod },
		{ "FL_ShowAllNotifications", &UC3_RSP_FunctionLibrary::execFL_ShowAllNotifications },
		{ "FL_SolvePathTraceCrash", &UC3_RSP_FunctionLibrary::execFL_SolvePathTraceCrash },
		{ "GetRSPManager", &UC3_RSP_FunctionLibrary::execGetRSPManager },
		{ "IsValidFilename", &UC3_RSP_FunctionLibrary::execIsValidFilename },
		{ "SaveImageFileFromColorData", &UC3_RSP_FunctionLibrary::execSaveImageFileFromColorData },
		{ "TryCorrectFilename", &UC3_RSP_FunctionLibrary::execTryCorrectFilename },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UC3_RSP_FunctionLibrary);
UClass* Z_Construct_UClass_UC3_RSP_FunctionLibrary_NoRegister()
{
	return UC3_RSP_FunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "C3_RSP_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/C3_RSP_FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_ConvertImageToTexture, "ConvertImageToTexture" }, // 3491737814
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_EnablePathTracer, "FL_EnablePathTracer" }, // 3956761628
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Lite, "FL_InstantScreenshot_Lite" }, // 918074858
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Pro, "FL_InstantScreenshot_Pro" }, // 2628795091
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_InstantScreenshot_Ultra, "FL_InstantScreenshot_Ultra" }, // 3283708379
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_LumenUseHardwareRaytracing, "FL_LumenUseHardwareRaytracing" }, // 3059906387
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Lite, "FL_PathTracerShot_Lite" }, // 1852167159
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Pro, "FL_PathTracerShot_Pro" }, // 3176989213
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_PathTracerShot_Ultra, "FL_PathTracerShot_Ultra" }, // 2739531091
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString, "FL_RandomString" }, // 2833477638
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_RandomString_Pro, "FL_RandomString_Pro" }, // 258400040
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SetRenderingMethod, "FL_SetRenderingMethod" }, // 2431598156
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_ShowAllNotifications, "FL_ShowAllNotifications" }, // 1600787547
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_FL_SolvePathTraceCrash, "FL_SolvePathTraceCrash" }, // 904552303
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_GetRSPManager, "GetRSPManager" }, // 3269056478
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_IsValidFilename, "IsValidFilename" }, // 1246883367
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_SaveImageFileFromColorData, "SaveImageFileFromColorData" }, // 3813357180
		{ &Z_Construct_UFunction_UC3_RSP_FunctionLibrary_TryCorrectFilename, "TryCorrectFilename" }, // 54670615
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UC3_RSP_FunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_C3_RSP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::ClassParams = {
	&UC3_RSP_FunctionLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UC3_RSP_FunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UC3_RSP_FunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UC3_RSP_FunctionLibrary.OuterSingleton, Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UC3_RSP_FunctionLibrary.OuterSingleton;
}
template<> C3_RSP_API UClass* StaticClass<UC3_RSP_FunctionLibrary>()
{
	return UC3_RSP_FunctionLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UC3_RSP_FunctionLibrary);
UC3_RSP_FunctionLibrary::~UC3_RSP_FunctionLibrary() {}
// End Class UC3_RSP_FunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UC3_RSP_FunctionLibrary, UC3_RSP_FunctionLibrary::StaticClass, TEXT("UC3_RSP_FunctionLibrary"), &Z_Registration_Info_UClass_UC3_RSP_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UC3_RSP_FunctionLibrary), 2875508936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_2370515475(TEXT("/Script/C3_RSP"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
