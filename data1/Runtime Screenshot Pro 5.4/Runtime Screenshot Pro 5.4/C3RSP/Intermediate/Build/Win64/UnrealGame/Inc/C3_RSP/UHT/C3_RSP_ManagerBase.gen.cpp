// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "C3_RSP/Public/C3_RSP_ManagerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC3_RSP_ManagerBase() {}

// Begin Cross Module References
C3_RSP_API UClass* Z_Construct_UClass_AC3_RSP_ManagerBase();
C3_RSP_API UClass* Z_Construct_UClass_AC3_RSP_ManagerBase_NoRegister();
C3_RSP_API UEnum* Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod();
C3_RSP_API UEnum* Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod();
C3_RSP_API UFunction* Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature();
C3_RSP_API UScriptStruct* Z_Construct_UScriptStruct_FRSP_Stru1();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_AInfo();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
UPackage* Z_Construct_UPackage__Script_C3_RSP();
// End Cross Module References

// Begin ScriptStruct FRSP_Stru1
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RSP_Stru1;
class UScriptStruct* FRSP_Stru1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RSP_Stru1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RSP_Stru1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRSP_Stru1, (UObject*)Z_Construct_UPackage__Script_C3_RSP(), TEXT("RSP_Stru1"));
	}
	return Z_Registration_Info_UScriptStruct_RSP_Stru1.OuterSingleton;
}
template<> C3_RSP_API UScriptStruct* StaticStruct<FRSP_Stru1>()
{
	return FRSP_Stru1::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRSP_Stru1_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Struct" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_Bool_MetaData[] = {
		{ "Category", "Cyrus 365|Kickstart Blueprint Library|Struct" },
		{ "DisplayName", "Bool" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_A_Byte_MetaData[] = {
		{ "Category", "Cyrus 365|Kickstart Blueprint Library|Struct" },
		{ "DisplayName", "Byte" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_A_Bool_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_A_Bool;
	static const UECodeGen_Private::FBytePropertyParams NewProp_A_Byte;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRSP_Stru1>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Bool_SetBit(void* Obj)
{
	((FRSP_Stru1*)Obj)->A_Bool = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Bool = { "A_Bool", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRSP_Stru1), &Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Bool_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_Bool_MetaData), NewProp_A_Bool_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Byte = { "A_Byte", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRSP_Stru1, A_Byte), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_A_Byte_MetaData), NewProp_A_Byte_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRSP_Stru1_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Bool,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewProp_A_Byte,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSP_Stru1_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRSP_Stru1_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_C3_RSP,
	nullptr,
	&NewStructOps,
	"RSP_Stru1",
	Z_Construct_UScriptStruct_FRSP_Stru1_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSP_Stru1_Statics::PropPointers),
	sizeof(FRSP_Stru1),
	alignof(FRSP_Stru1),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRSP_Stru1_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRSP_Stru1_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRSP_Stru1()
{
	if (!Z_Registration_Info_UScriptStruct_RSP_Stru1.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RSP_Stru1.InnerSingleton, Z_Construct_UScriptStruct_FRSP_Stru1_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RSP_Stru1.InnerSingleton;
}
// End ScriptStruct FRSP_Stru1

// Begin Enum ERSP_RenderingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERSP_RenderingMethod;
static UEnum* ERSP_RenderingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERSP_RenderingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERSP_RenderingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod, (UObject*)Z_Construct_UPackage__Script_C3_RSP(), TEXT("ERSP_RenderingMethod"));
	}
	return Z_Registration_Info_UEnum_ERSP_RenderingMethod.OuterSingleton;
}
template<> C3_RSP_API UEnum* StaticEnum<ERSP_RenderingMethod>()
{
	return ERSP_RenderingMethod_StaticEnum();
}
struct Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ERSP_RenderingMethod::None" },
		{ "PathTracing.DisplayName", "Path Tracing Pro" },
		{ "PathTracing.Name", "ERSP_RenderingMethod::PathTracing" },
		{ "Raster.DisplayName", "Raster" },
		{ "Raster.Name", "ERSP_RenderingMethod::Raster" },
		{ "RTX.DisplayName", "Fully Ray Tracing" },
		{ "RTX.Hidden", "" },
		{ "RTX.Name", "ERSP_RenderingMethod::RTX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERSP_RenderingMethod::None", (int64)ERSP_RenderingMethod::None },
		{ "ERSP_RenderingMethod::Raster", (int64)ERSP_RenderingMethod::Raster },
		{ "ERSP_RenderingMethod::RTX", (int64)ERSP_RenderingMethod::RTX },
		{ "ERSP_RenderingMethod::PathTracing", (int64)ERSP_RenderingMethod::PathTracing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_C3_RSP,
	nullptr,
	"ERSP_RenderingMethod",
	"ERSP_RenderingMethod",
	Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod()
{
	if (!Z_Registration_Info_UEnum_ERSP_RenderingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERSP_RenderingMethod.InnerSingleton, Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERSP_RenderingMethod.InnerSingleton;
}
// End Enum ERSP_RenderingMethod

// Begin Enum ERSP_ScreenshotMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERSP_ScreenshotMethod;
static UEnum* ERSP_ScreenshotMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod, (UObject*)Z_Construct_UPackage__Script_C3_RSP(), TEXT("ERSP_ScreenshotMethod"));
	}
	return Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.OuterSingleton;
}
template<> C3_RSP_API UEnum* StaticEnum<ERSP_ScreenshotMethod>()
{
	return ERSP_ScreenshotMethod_StaticEnum();
}
struct Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AdvancedShot.Comment", "// Basic Screenshot in UE\n" },
		{ "AdvancedShot.DisplayName", "Advanced Shot" },
		{ "AdvancedShot.Name", "ERSP_ScreenshotMethod::AdvancedShot" },
		{ "AdvancedShot.ToolTip", "Basic Screenshot in UE" },
		{ "BlueprintType", "true" },
		{ "InstantShot.DisplayName", "Instant Shot" },
		{ "InstantShot.Name", "ERSP_ScreenshotMethod::InstantShot" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ERSP_ScreenshotMethod::None" },
		{ "PathTracerShot.Comment", "//  More function, use another screenshot method\n" },
		{ "PathTracerShot.DisplayName", "Path Tracer Specialised Shot" },
		{ "PathTracerShot.Name", "ERSP_ScreenshotMethod::PathTracerShot" },
		{ "PathTracerShot.ToolTip", "More function, use another screenshot method" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERSP_ScreenshotMethod::None", (int64)ERSP_ScreenshotMethod::None },
		{ "ERSP_ScreenshotMethod::InstantShot", (int64)ERSP_ScreenshotMethod::InstantShot },
		{ "ERSP_ScreenshotMethod::AdvancedShot", (int64)ERSP_ScreenshotMethod::AdvancedShot },
		{ "ERSP_ScreenshotMethod::PathTracerShot", (int64)ERSP_ScreenshotMethod::PathTracerShot },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_C3_RSP,
	nullptr,
	"ERSP_ScreenshotMethod",
	"ERSP_ScreenshotMethod",
	Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod()
{
	if (!Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.InnerSingleton, Z_Construct_UEnum_C3_RSP_ERSP_ScreenshotMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERSP_ScreenshotMethod.InnerSingleton;
}
// End Enum ERSP_ScreenshotMethod

// Begin Delegate FC3_RSP_OnScreenshotCaptured
struct Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics
{
	struct _Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms
	{
		int32 SizeX;
		int32 SizeY;
		UTexture2D* Texture;
		TArray<FColor> RawData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RawData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_RawData_Inner = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms, RawData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawData_MetaData), NewProp_RawData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_Texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_RawData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::NewProp_RawData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_C3_RSP, nullptr, "C3_RSP_OnScreenshotCaptured__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FC3_RSP_OnScreenshotCaptured_DelegateWrapper(const FMulticastScriptDelegate& C3_RSP_OnScreenshotCaptured, int32 SizeX, int32 SizeY, UTexture2D* Texture, TArray<FColor> const& RawData)
{
	struct _Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms
	{
		int32 SizeX;
		int32 SizeY;
		UTexture2D* Texture;
		TArray<FColor> RawData;
	};
	_Script_C3_RSP_eventC3_RSP_OnScreenshotCaptured_Parms Parms;
	Parms.SizeX=SizeX;
	Parms.SizeY=SizeY;
	Parms.Texture=Texture;
	Parms.RawData=RawData;
	C3_RSP_OnScreenshotCaptured.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FC3_RSP_OnScreenshotCaptured

// Begin Class AC3_RSP_ManagerBase Function InstantShot_Capture_Core
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics
{
	struct C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms
	{
		FString Filename;
		bool MaskUsingCustomDepth;
		bool CaptureHDR;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		bool IsPathTracerShot;
		bool InShowNotifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot|Instant Shot" },
		{ "Comment", "/** \n\x09* Take a quick screenshot. The easiest & lite way to screenshot. \n\x09* Can set resolution multiplier or exact resolution parameter for screenshot.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09*/" },
		{ "CPP_Default_InShowNotifications", "false" },
		{ "CPP_Default_IsPathTracerShot", "false" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Take Shot Core" },
		{ "Keywords", "Take Shot Core, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Take a quick screenshot. The easiest & lite way to screenshot.\nCan set resolution multiplier or exact resolution parameter for screenshot.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***" },
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
	static void NewProp_IsPathTracerShot_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsPathTracerShot;
	static void NewProp_InShowNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowNotifications;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms, Filename), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms*)Obj)->MaskUsingCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth = { "MaskUsingCustomDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_CaptureHDR_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms*)Obj)->CaptureHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_CaptureHDR = { "CaptureHDR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_CaptureHDR_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_IsPathTracerShot_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms*)Obj)->IsPathTracerShot = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_IsPathTracerShot = { "IsPathTracerShot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_IsPathTracerShot_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_InShowNotifications_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms*)Obj)->InShowNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_InShowNotifications = { "InShowNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_InShowNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_CaptureHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_IsPathTracerShot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_InShowNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "InstantShot_Capture_Core", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::C3_RSP_ManagerBase_eventInstantShot_Capture_Core_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execInstantShot_Capture_Core)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_UBOOL(Z_Param_MaskUsingCustomDepth);
	P_GET_UBOOL(Z_Param_CaptureHDR);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_UBOOL(Z_Param_IsPathTracerShot);
	P_GET_UBOOL(Z_Param_InShowNotifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InstantShot_Capture_Core(Z_Param_Filename,Z_Param_MaskUsingCustomDepth,Z_Param_CaptureHDR,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_IsPathTracerShot,Z_Param_InShowNotifications);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function InstantShot_Capture_Core

// Begin Class AC3_RSP_ManagerBase Function OnScreenshotCapturedInternal
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics
{
	struct C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms
	{
		int32 InSizeX;
		int32 InSizeY;
		TArray<FColor> InImageData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Function that will be called when the screenshot is captured\n\x09 * @param InSizeX \n\x09 * @param InSizeY \n\x09 * @param InImageData \n\x09 */" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Function that will be called when the screenshot is captured\n@param InSizeX\n@param InSizeY\n@param InImageData" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InSizeX = { "InSizeX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms, InSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeX_MetaData), NewProp_InSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InSizeY = { "InSizeY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms, InSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InSizeY_MetaData), NewProp_InSizeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InImageData_Inner = { "InImageData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InImageData = { "InImageData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms, InImageData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InImageData_MetaData), NewProp_InImageData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InImageData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::NewProp_InImageData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "OnScreenshotCapturedInternal", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::C3_RSP_ManagerBase_eventOnScreenshotCapturedInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execOnScreenshotCapturedInternal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeX);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSizeY);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_InImageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnScreenshotCapturedInternal(Z_Param_InSizeX,Z_Param_InSizeY,Z_Param_Out_InImageData);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function OnScreenshotCapturedInternal

// Begin Class AC3_RSP_ManagerBase Function PathTracerShot_Capture_Core
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics
{
	struct C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms
	{
		FString Filename;
		bool MaskUsingCustomDepth;
		bool CaptureHDR;
		int32 Multiplier;
		int32 Res_X;
		int32 Res_Y;
		int32 Delay;
		bool InShowNotifications;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Res_X, Res_Y" },
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot|Path Tracer" },
		{ "Comment", "/** \n\x09* Take a Path Tracer screenshot. \n\x09* Can set resolution multiplier or exact resolution parameter for screenshot.\n\x09* Set either Multiplier or Resolution.\n\x09* @Param Filename - The whole file path. Not only the screenshot name.\n\x09* Example:  C:/_Workspace/Cyrus365/screenshot1.png\n\x09* @Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n\x09* @Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n\x09* @Param Delay - Leave -1 equal to auto find the right time to perform a screenshot. Or you can set a value larger than the \"Sample Per Pixel\" in path tarcer.\n\x09*/" },
		{ "CPP_Default_Delay", "-1" },
		{ "CPP_Default_InShowNotifications", "false" },
		{ "CPP_Default_Multiplier", "1" },
		{ "CPP_Default_Res_X", "-1" },
		{ "CPP_Default_Res_Y", "-1" },
		{ "DisplayName", "Take Path Tracer Shot" },
		{ "Keywords", "Path Tracer Screenshot, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Take a Path Tracer screenshot.\nCan set resolution multiplier or exact resolution parameter for screenshot.\nSet either Multiplier or Resolution.\n@Param Filename - The whole file path. Not only the screenshot name.\nExample:  C:/_Workspace/Cyrus365/screenshot1.png\n@Param Multiplier - For screen multiplier. E.g. 1x / 2x / 3x... Set either Multiplier or Resolution. *** If you set multiplier, the Resolution must be -1. ***\n@Param Res_X - Exact resolution X. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Res_Y - Exact resolution Y. Set either Multiplier or Resolution. *** If you set resolution, the Multiplier must be -1. ***\n@Param Delay - Leave -1 equal to auto find the right time to perform a screenshot. Or you can set a value larger than the \"Sample Per Pixel\" in path tarcer." },
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
	static const UECodeGen_Private::FIntPropertyParams NewProp_Delay;
	static void NewProp_InShowNotifications_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InShowNotifications;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms, Filename), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms*)Obj)->MaskUsingCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth = { "MaskUsingCustomDepth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_CaptureHDR_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms*)Obj)->CaptureHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_CaptureHDR = { "CaptureHDR", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_CaptureHDR_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Multiplier = { "Multiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms, Multiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Res_X = { "Res_X", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms, Res_X), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Res_Y = { "Res_Y", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms, Res_Y), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Delay = { "Delay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms, Delay), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_InShowNotifications_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms*)Obj)->InShowNotifications = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_InShowNotifications = { "InShowNotifications", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_InShowNotifications_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Filename,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_MaskUsingCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_CaptureHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Multiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Res_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Res_Y,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_Delay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_InShowNotifications,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "PathTracerShot_Capture_Core", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::C3_RSP_ManagerBase_eventPathTracerShot_Capture_Core_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execPathTracerShot_Capture_Core)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
	P_GET_UBOOL(Z_Param_MaskUsingCustomDepth);
	P_GET_UBOOL(Z_Param_CaptureHDR);
	P_GET_PROPERTY(FIntProperty,Z_Param_Multiplier);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Res_Y);
	P_GET_PROPERTY(FIntProperty,Z_Param_Delay);
	P_GET_UBOOL(Z_Param_InShowNotifications);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PathTracerShot_Capture_Core(Z_Param_Filename,Z_Param_MaskUsingCustomDepth,Z_Param_CaptureHDR,Z_Param_Multiplier,Z_Param_Res_X,Z_Param_Res_Y,Z_Param_Delay,Z_Param_InShowNotifications);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function PathTracerShot_Capture_Core

// Begin Class AC3_RSP_ManagerBase Function RestartPathTracer
struct C3_RSP_ManagerBase_eventRestartPathTracer_Parms
{
	UObject* WorldContextObject;
};
static FName NAME_AC3_RSP_ManagerBase_RestartPathTracer = FName(TEXT("RestartPathTracer"));
void AC3_RSP_ManagerBase::RestartPathTracer(UObject* WorldContextObject)
{
	C3_RSP_ManagerBase_eventRestartPathTracer_Parms Parms;
	Parms.WorldContextObject=WorldContextObject;
	ProcessEvent(FindFunctionChecked(NAME_AC3_RSP_ManagerBase_RestartPathTracer),&Parms);
}
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracing" },
		{ "Comment", "/** Useful for reset the Path Tracer progress. */" },
		{ "DisplayName", "Restart Path Tracer" },
		{ "Keywords", "Restart, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Useful for reset the Path Tracer progress." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventRestartPathTracer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "RestartPathTracer", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::PropPointers), sizeof(C3_RSP_ManagerBase_eventRestartPathTracer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::Function_MetaDataParams) };
static_assert(sizeof(C3_RSP_ManagerBase_eventRestartPathTracer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execRestartPathTracer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartPathTracer_Implementation(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function RestartPathTracer

// Begin Class AC3_RSP_ManagerBase Function ResumeNotification
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot|Path Tracer" },
		{ "Comment", "/**\n\x09 * @brief Resume notification. For stop it in before. \n\x09 */" },
		{ "DisplayName", "Resume Notification" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "@brief Resume notification. For stop it in before." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "ResumeNotification", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execResumeNotification)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResumeNotification();
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function ResumeNotification

// Begin Class AC3_RSP_ManagerBase Function SetRenderingMethod
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics
{
	struct C3_RSP_ManagerBase_eventSetRenderingMethod_Parms
	{
		ERSP_RenderingMethod InMethod;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/**\n\x09* Set Rendering Method. \n\x09* Don't set to \"None\".\n\x09*/" },
		{ "CPP_Default_InMethod", "Raster" },
		{ "DisplayName", "Set Render Method" },
		{ "Keywords", "Render Method, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Set Rendering Method.\nDon't set to \"None\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InMethod_MetaData[] = {
		{ "DisplayName", "Method" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InMethod_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InMethod;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::NewProp_InMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::NewProp_InMethod = { "InMethod", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventSetRenderingMethod_Parms, InMethod), Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InMethod_MetaData), NewProp_InMethod_MetaData) }; // 3703407950
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::NewProp_InMethod_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::NewProp_InMethod,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "SetRenderingMethod", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::C3_RSP_ManagerBase_eventSetRenderingMethod_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::C3_RSP_ManagerBase_eventSetRenderingMethod_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execSetRenderingMethod)
{
	P_GET_ENUM(ERSP_RenderingMethod,Z_Param_InMethod);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderingMethod(ERSP_RenderingMethod(Z_Param_InMethod));
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function SetRenderingMethod

// Begin Class AC3_RSP_ManagerBase Function ShowLitMode
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics
{
	struct C3_RSP_ManagerBase_eventShowLitMode_Parms
	{
		const UObject* WorldContextObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Raster" },
		{ "Comment", "/** Turn off Path Tracer. And resume to Lit Mode. */" },
		{ "DisplayName", "Show Lit Mode" },
		{ "Keywords", "Path Tracer, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Turn off Path Tracer. And resume to Lit Mode." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventShowLitMode_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::NewProp_WorldContextObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "ShowLitMode", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::C3_RSP_ManagerBase_eventShowLitMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::C3_RSP_ManagerBase_eventShowLitMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execShowLitMode)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowLitMode(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function ShowLitMode

// Begin Class AC3_RSP_ManagerBase Function ShowPathTracer
struct Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics
{
	struct C3_RSP_ManagerBase_eventShowPathTracer_Parms
	{
		const UObject* WorldContextObject;
		bool ProgressDisplay;
		bool Denoiser;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracing" },
		{ "Comment", "/** Turn on Path Tracer. */" },
		{ "CPP_Default_Denoiser", "true" },
		{ "CPP_Default_ProgressDisplay", "true" },
		{ "DisplayName", "Show Path Tracer" },
		{ "Keywords", "Path Tracer, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Turn on Path Tracer." },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ProgressDisplay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ProgressDisplay;
	static void NewProp_Denoiser_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Denoiser;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C3_RSP_ManagerBase_eventShowPathTracer_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_ProgressDisplay_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventShowPathTracer_Parms*)Obj)->ProgressDisplay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_ProgressDisplay = { "ProgressDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventShowPathTracer_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_ProgressDisplay_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_Denoiser_SetBit(void* Obj)
{
	((C3_RSP_ManagerBase_eventShowPathTracer_Parms*)Obj)->Denoiser = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_Denoiser = { "Denoiser", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(C3_RSP_ManagerBase_eventShowPathTracer_Parms), &Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_Denoiser_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_ProgressDisplay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::NewProp_Denoiser,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC3_RSP_ManagerBase, nullptr, "ShowPathTracer", nullptr, nullptr, Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::C3_RSP_ManagerBase_eventShowPathTracer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::C3_RSP_ManagerBase_eventShowPathTracer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AC3_RSP_ManagerBase::execShowPathTracer)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_ProgressDisplay);
	P_GET_UBOOL(Z_Param_Denoiser);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowPathTracer(Z_Param_WorldContextObject,Z_Param_ProgressDisplay,Z_Param_Denoiser);
	P_NATIVE_END;
}
// End Class AC3_RSP_ManagerBase Function ShowPathTracer

// Begin Class AC3_RSP_ManagerBase
void AC3_RSP_ManagerBase::StaticRegisterNativesAC3_RSP_ManagerBase()
{
	UClass* Class = AC3_RSP_ManagerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "InstantShot_Capture_Core", &AC3_RSP_ManagerBase::execInstantShot_Capture_Core },
		{ "OnScreenshotCapturedInternal", &AC3_RSP_ManagerBase::execOnScreenshotCapturedInternal },
		{ "PathTracerShot_Capture_Core", &AC3_RSP_ManagerBase::execPathTracerShot_Capture_Core },
		{ "RestartPathTracer", &AC3_RSP_ManagerBase::execRestartPathTracer },
		{ "ResumeNotification", &AC3_RSP_ManagerBase::execResumeNotification },
		{ "SetRenderingMethod", &AC3_RSP_ManagerBase::execSetRenderingMethod },
		{ "ShowLitMode", &AC3_RSP_ManagerBase::execShowLitMode },
		{ "ShowPathTracer", &AC3_RSP_ManagerBase::execShowPathTracer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC3_RSP_ManagerBase);
UClass* Z_Construct_UClass_AC3_RSP_ManagerBase_NoRegister()
{
	return AC3_RSP_ManagerBase::StaticClass();
}
struct Z_Construct_UClass_AC3_RSP_ManagerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "C3_RSP_ManagerBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingMethod_Current_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/** Current Rendering Method. */" },
		{ "DisplayName", "Current Rendering Method" },
		{ "Keywords", "Render Method, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Current Rendering Method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderingMethod_Previous_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro" },
		{ "Comment", "/** Previous Rendering Method. */" },
		{ "DisplayName", "Previous Rednering Method" },
		{ "Keywords", "Render Method, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Previous Rendering Method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerEnable_Last_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer" },
		{ "Comment", "/** Can use path tracer? */" },
		{ "DisplayName", "Path Tracer Enabled?" },
		{ "Keywords", "Enable, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Can use path tracer?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerActive_Last_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer" },
		{ "Comment", "/** Is path tracer current active? */" },
		{ "DisplayName", "Active?" },
		{ "Keywords", "Enable, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Is path tracer current active?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerProgressDisplay_Last_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer" },
		{ "Comment", "/** Show progress bar in path tracer? */" },
		{ "DisplayName", "Progress Display?" },
		{ "Keywords", "Enable, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Show progress bar in path tracer?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathTracerDenoiser_Last_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Render Pro|Path Tracer" },
		{ "Comment", "/** Enable denoiser in path tracer? */" },
		{ "DisplayName", "Denoiser?" },
		{ "Keywords", "Enable, RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
		{ "ToolTip", "Enable denoiser in path tracer?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScreenshotCaptured_MetaData[] = {
		{ "Category", "Cyrus 365|Runtime Screenshot Pro|Screenshot|Event" },
		{ "DisplayName", "On Screenshot Captured" },
		{ "Keywords", "RSP" },
		{ "ModuleRelativePath", "Public/C3_RSP_ManagerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderingMethod_Current_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderingMethod_Current;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderingMethod_Previous_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RenderingMethod_Previous;
	static void NewProp_PathTracerEnable_Last_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracerEnable_Last;
	static void NewProp_PathTracerActive_Last_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracerActive_Last;
	static void NewProp_PathTracerProgressDisplay_Last_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracerProgressDisplay_Last;
	static void NewProp_PathTracerDenoiser_Last_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PathTracerDenoiser_Last;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScreenshotCaptured;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_InstantShot_Capture_Core, "InstantShot_Capture_Core" }, // 404122031
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_OnScreenshotCapturedInternal, "OnScreenshotCapturedInternal" }, // 3094114156
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_PathTracerShot_Capture_Core, "PathTracerShot_Capture_Core" }, // 2958783697
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_RestartPathTracer, "RestartPathTracer" }, // 4146362030
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_ResumeNotification, "ResumeNotification" }, // 167924110
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_SetRenderingMethod, "SetRenderingMethod" }, // 1110459080
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowLitMode, "ShowLitMode" }, // 2425424396
		{ &Z_Construct_UFunction_AC3_RSP_ManagerBase_ShowPathTracer, "ShowPathTracer" }, // 2948807674
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC3_RSP_ManagerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Current_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Current = { "RenderingMethod_Current", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC3_RSP_ManagerBase, RenderingMethod_Current), Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingMethod_Current_MetaData), NewProp_RenderingMethod_Current_MetaData) }; // 3703407950
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Previous_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Previous = { "RenderingMethod_Previous", nullptr, (EPropertyFlags)0x0010000000030015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC3_RSP_ManagerBase, RenderingMethod_Previous), Z_Construct_UEnum_C3_RSP_ERSP_RenderingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderingMethod_Previous_MetaData), NewProp_RenderingMethod_Previous_MetaData) }; // 3703407950
void Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerEnable_Last_SetBit(void* Obj)
{
	((AC3_RSP_ManagerBase*)Obj)->PathTracerEnable_Last = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerEnable_Last = { "PathTracerEnable_Last", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC3_RSP_ManagerBase), &Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerEnable_Last_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracerEnable_Last_MetaData), NewProp_PathTracerEnable_Last_MetaData) };
void Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerActive_Last_SetBit(void* Obj)
{
	((AC3_RSP_ManagerBase*)Obj)->PathTracerActive_Last = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerActive_Last = { "PathTracerActive_Last", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC3_RSP_ManagerBase), &Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerActive_Last_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracerActive_Last_MetaData), NewProp_PathTracerActive_Last_MetaData) };
void Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerProgressDisplay_Last_SetBit(void* Obj)
{
	((AC3_RSP_ManagerBase*)Obj)->PathTracerProgressDisplay_Last = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerProgressDisplay_Last = { "PathTracerProgressDisplay_Last", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC3_RSP_ManagerBase), &Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerProgressDisplay_Last_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracerProgressDisplay_Last_MetaData), NewProp_PathTracerProgressDisplay_Last_MetaData) };
void Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerDenoiser_Last_SetBit(void* Obj)
{
	((AC3_RSP_ManagerBase*)Obj)->PathTracerDenoiser_Last = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerDenoiser_Last = { "PathTracerDenoiser_Last", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC3_RSP_ManagerBase), &Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerDenoiser_Last_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathTracerDenoiser_Last_MetaData), NewProp_PathTracerDenoiser_Last_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_OnScreenshotCaptured = { "OnScreenshotCaptured", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC3_RSP_ManagerBase, OnScreenshotCaptured), Z_Construct_UDelegateFunction_C3_RSP_C3_RSP_OnScreenshotCaptured__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScreenshotCaptured_MetaData), NewProp_OnScreenshotCaptured_MetaData) }; // 3603937791
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Current_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Previous_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_RenderingMethod_Previous,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerEnable_Last,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerActive_Last,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerProgressDisplay_Last,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_PathTracerDenoiser_Last,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::NewProp_OnScreenshotCaptured,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AInfo,
	(UObject* (*)())Z_Construct_UPackage__Script_C3_RSP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::ClassParams = {
	&AC3_RSP_ManagerBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AC3_RSP_ManagerBase()
{
	if (!Z_Registration_Info_UClass_AC3_RSP_ManagerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC3_RSP_ManagerBase.OuterSingleton, Z_Construct_UClass_AC3_RSP_ManagerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AC3_RSP_ManagerBase.OuterSingleton;
}
template<> C3_RSP_API UClass* StaticClass<AC3_RSP_ManagerBase>()
{
	return AC3_RSP_ManagerBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AC3_RSP_ManagerBase);
AC3_RSP_ManagerBase::~AC3_RSP_ManagerBase() {}
// End Class AC3_RSP_ManagerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERSP_RenderingMethod_StaticEnum, TEXT("ERSP_RenderingMethod"), &Z_Registration_Info_UEnum_ERSP_RenderingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3703407950U) },
		{ ERSP_ScreenshotMethod_StaticEnum, TEXT("ERSP_ScreenshotMethod"), &Z_Registration_Info_UEnum_ERSP_ScreenshotMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1873954579U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRSP_Stru1::StaticStruct, Z_Construct_UScriptStruct_FRSP_Stru1_Statics::NewStructOps, TEXT("RSP_Stru1"), &Z_Registration_Info_UScriptStruct_RSP_Stru1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRSP_Stru1), 1168006002U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AC3_RSP_ManagerBase, AC3_RSP_ManagerBase::StaticClass, TEXT("AC3_RSP_ManagerBase"), &Z_Registration_Info_UClass_AC3_RSP_ManagerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC3_RSP_ManagerBase), 461270453U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_3356743706(TEXT("/Script/C3_RSP"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
