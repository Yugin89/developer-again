// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleSystemFunctions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSystemFunctions() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleSystemFunctions();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleSystemFunctions_NoRegister();
// End Cross Module References

// Begin Class UVehicleSystemFunctions Function AVS_ChaosAddForce
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms
	{
		UPrimitiveComponent* target;
		FVector Force;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread only */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosAddForce", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::VehicleSystemFunctions_eventAVS_ChaosAddForce_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosAddForce)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosAddForce(Z_Param_target,Z_Param_Force,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosAddForce

// Begin Class UVehicleSystemFunctions Function AVS_ChaosAddForceAtLocation
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms
	{
		UPrimitiveComponent* target;
		FVector Location;
		FVector Force;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread only */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::NewProp_Force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosAddForceAtLocation", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::VehicleSystemFunctions_eventAVS_ChaosAddForceAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosAddForceAtLocation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FVector,Z_Param_Force);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosAddForceAtLocation(Z_Param_target,Z_Param_Location,Z_Param_Force);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosAddForceAtLocation

// Begin Class UVehicleSystemFunctions Function AVS_ChaosAddTorque
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms
	{
		UPrimitiveComponent* target;
		FVector Torque;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread only */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Torque;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms, Torque), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosAddTorque", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::VehicleSystemFunctions_eventAVS_ChaosAddTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosAddTorque)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_STRUCT(FVector,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosAddTorque(Z_Param_target,Z_Param_Torque,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosAddTorque

// Begin Class UVehicleSystemFunctions Function AVS_ChaosAddWheelTorque
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms
	{
		UPrimitiveComponent* target;
		float Torque;
		bool bAccelChange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread :: Supplies torque around the targets Y axis */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread :: Supplies torque around the targets Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Torque;
	static void NewProp_bAccelChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAccelChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms, Torque), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_bAccelChange_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms*)Obj)->bAccelChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_bAccelChange = { "bAccelChange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_bAccelChange_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::NewProp_bAccelChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosAddWheelTorque", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::VehicleSystemFunctions_eventAVS_ChaosAddWheelTorque_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosAddWheelTorque)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Torque);
	P_GET_UBOOL(Z_Param_bAccelChange);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosAddWheelTorque(Z_Param_target,Z_Param_Torque,Z_Param_bAccelChange);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosAddWheelTorque

// Begin Class UVehicleSystemFunctions Function AVS_ChaosBrakes
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms
	{
		UPrimitiveComponent* target;
		float BrakeTorque;
		float ChaosDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread :: Adds braking torque isolated to the primitives local Y axis */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "NotBlueprintThreadSafe", "" },
		{ "ToolTip", "For use on the chaos physics thread :: Adds braking torque isolated to the primitives local Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaosDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms, BrakeTorque), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_ChaosDelta = { "ChaosDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms, ChaosDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_BrakeTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::NewProp_ChaosDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosBrakes", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::VehicleSystemFunctions_eventAVS_ChaosBrakes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosBrakes)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeTorque);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ChaosDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosBrakes(Z_Param_target,Z_Param_BrakeTorque,Z_Param_ChaosDelta);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosBrakes

// Begin Class UVehicleSystemFunctions Function AVS_ChaosGetVelocityAtLocation
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms
	{
		UPrimitiveComponent* Component;
		FVector Location;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread only */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Component_MetaData), NewProp_Component_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_Component,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosGetVelocityAtLocation", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::VehicleSystemFunctions_eventAVS_ChaosGetVelocityAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosGetVelocityAtLocation)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVehicleSystemFunctions::AVS_ChaosGetVelocityAtLocation(Z_Param_Component,Z_Param_Location);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosGetVelocityAtLocation

// Begin Class UVehicleSystemFunctions Function AVS_ChaosSetWheelAngularVelocity
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics
{
	struct VehicleSystemFunctions_eventAVS_ChaosSetWheelAngularVelocity_Parms
	{
		UPrimitiveComponent* target;
		float AngVel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread :: Sets angular velocity (rad/s) around the targets Y axis */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread :: Sets angular velocity (rad/s) around the targets Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngVel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosSetWheelAngularVelocity_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::NewProp_AngVel = { "AngVel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_ChaosSetWheelAngularVelocity_Parms, AngVel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::NewProp_AngVel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_ChaosSetWheelAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::VehicleSystemFunctions_eventAVS_ChaosSetWheelAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::VehicleSystemFunctions_eventAVS_ChaosSetWheelAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_ChaosSetWheelAngularVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngVel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_ChaosSetWheelAngularVelocity(Z_Param_target,Z_Param_AngVel);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_ChaosSetWheelAngularVelocity

// Begin Class UVehicleSystemFunctions Function AVS_GetChaosTransform
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics
{
	struct VehicleSystemFunctions_eventAVS_GetChaosTransform_Parms
	{
		UPrimitiveComponent* target;
		FTransform ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread only */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_GetChaosTransform_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_GetChaosTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_GetChaosTransform", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::VehicleSystemFunctions_eventAVS_GetChaosTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::VehicleSystemFunctions_eventAVS_GetChaosTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_GetChaosTransform)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FTransform*)Z_Param__Result=UVehicleSystemFunctions::AVS_GetChaosTransform(Z_Param_target);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_GetChaosTransform

// Begin Class UVehicleSystemFunctions Function AVS_SetWheelAngularVelocity
struct Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics
{
	struct VehicleSystemFunctions_eventAVS_SetWheelAngularVelocity_Parms
	{
		UPrimitiveComponent* target;
		float AngVel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin - Chaos Functions" },
		{ "Comment", "/** For use on the chaos physics thread :: Sets angular velocity (rad/s) around the targets Y axis */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "For use on the chaos physics thread :: Sets angular velocity (rad/s) around the targets Y axis" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngVel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_SetWheelAngularVelocity_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::NewProp_AngVel = { "AngVel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventAVS_SetWheelAngularVelocity_Parms, AngVel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::NewProp_AngVel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "AVS_SetWheelAngularVelocity", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::VehicleSystemFunctions_eventAVS_SetWheelAngularVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::VehicleSystemFunctions_eventAVS_SetWheelAngularVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execAVS_SetWheelAngularVelocity)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngVel);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::AVS_SetWheelAngularVelocity(Z_Param_target,Z_Param_AngVel);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function AVS_SetWheelAngularVelocity

// Begin Class UVehicleSystemFunctions Function GetMeshCenterOfMass
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics
{
	struct VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms
	{
		UPrimitiveComponent* target;
		FName BoneName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the Center of Mass for a body (In Relative Space) */" },
		{ "CPP_Default_BoneName", "None" },
		{ "Keywords", "COM" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the Center of Mass for a body (In Relative Space)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshCenterOfMass", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::VehicleSystemFunctions_eventGetMeshCenterOfMass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshCenterOfMass)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UVehicleSystemFunctions::GetMeshCenterOfMass(Z_Param_target,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetMeshCenterOfMass

// Begin Class UVehicleSystemFunctions Function GetMeshDiameter
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics
{
	struct VehicleSystemFunctions_eventGetMeshDiameter_Parms
	{
		UPrimitiveComponent* target;
		FName BoneName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the height of this body. */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the height of this body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshDiameter_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshDiameter", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::VehicleSystemFunctions_eventGetMeshDiameter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::VehicleSystemFunctions_eventGetMeshDiameter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshDiameter)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVehicleSystemFunctions::GetMeshDiameter(Z_Param_target,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetMeshDiameter

// Begin Class UVehicleSystemFunctions Function GetMeshRadius
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics
{
	struct VehicleSystemFunctions_eventGetMeshRadius_Parms
	{
		UPrimitiveComponent* target;
		FName BoneName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the half height of this body. */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the half height of this body." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetMeshRadius_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetMeshRadius", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::VehicleSystemFunctions_eventGetMeshRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::VehicleSystemFunctions_eventGetMeshRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetMeshRadius)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVehicleSystemFunctions::GetMeshRadius(Z_Param_target,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetMeshRadius

// Begin Class UVehicleSystemFunctions Function GetPluginVersion
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics
{
	struct VehicleSystemFunctions_eventGetPluginVersion_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Get the version of Advanced Vehicle System you are running, this function is expensive and not meant to be run on tick! */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Get the version of Advanced Vehicle System you are running, this function is expensive and not meant to be run on tick!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetPluginVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetPluginVersion", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::VehicleSystemFunctions_eventGetPluginVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::VehicleSystemFunctions_eventGetPluginVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetPluginVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UVehicleSystemFunctions::GetPluginVersion();
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetPluginVersion

// Begin Class UVehicleSystemFunctions Function GetUnrealEngineVersion
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics
{
	struct VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms
	{
		int32 Major;
		int32 Minor;
		int32 Patch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** AVS Simple Get Unreal Engine Version */" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "AVS Simple Get Unreal Engine Version" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Patch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Major), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Minor), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Patch = { "Patch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms, Patch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::NewProp_Patch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetUnrealEngineVersion", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::VehicleSystemFunctions_eventGetUnrealEngineVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetUnrealEngineVersion)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Patch);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::GetUnrealEngineVersion(Z_Param_Out_Major,Z_Param_Out_Minor,Z_Param_Out_Patch);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetUnrealEngineVersion

// Begin Class UVehicleSystemFunctions Function GetWheelInertia
struct Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics
{
	struct VehicleSystemFunctions_eventGetWheelInertia_Parms
	{
		UPrimitiveComponent* target;
		float MassKg;
		float RadiusCm;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MassKg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadiusCm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetWheelInertia_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_MassKg = { "MassKg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetWheelInertia_Parms, MassKg), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_RadiusCm = { "RadiusCm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetWheelInertia_Parms, RadiusCm), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventGetWheelInertia_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_MassKg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_RadiusCm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "GetWheelInertia", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::VehicleSystemFunctions_eventGetWheelInertia_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::VehicleSystemFunctions_eventGetWheelInertia_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execGetWheelInertia)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MassKg);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RadiusCm);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UVehicleSystemFunctions::GetWheelInertia(Z_Param_target,Z_Param_MassKg,Z_Param_RadiusCm);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function GetWheelInertia

// Begin Class UVehicleSystemFunctions Function LinearSpeedToRads
struct Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics
{
	struct VehicleSystemFunctions_eventLinearSpeedToRads_Parms
	{
		double cm_per_sec;
		float Radius;
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_cm_per_sec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_cm_per_sec = { "cm_per_sec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventLinearSpeedToRads_Parms, cm_per_sec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventLinearSpeedToRads_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventLinearSpeedToRads_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_cm_per_sec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "LinearSpeedToRads", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::VehicleSystemFunctions_eventLinearSpeedToRads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::VehicleSystemFunctions_eventLinearSpeedToRads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execLinearSpeedToRads)
{
	P_GET_PROPERTY(FDoubleProperty,Z_Param_cm_per_sec);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=UVehicleSystemFunctions::LinearSpeedToRads(Z_Param_cm_per_sec,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function LinearSpeedToRads

// Begin Class UVehicleSystemFunctions Function PrintToScreenWithTag
struct Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics
{
	struct VehicleSystemFunctions_eventPrintToScreenWithTag_Parms
	{
		FString InString;
		FLinearColor TextColor;
		float Duration;
		int32 Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Print to screen with updatable text */" },
		{ "CPP_Default_Duration", "1.000000" },
		{ "CPP_Default_Tag", "1" },
		{ "CPP_Default_TextColor", "(R=0.000000,G=1.000000,B=0.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Print to screen with updatable text" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InString;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString = { "InString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, InString), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InString_MetaData), NewProp_InString_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventPrintToScreenWithTag_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_InString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_TextColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "PrintToScreenWithTag", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::VehicleSystemFunctions_eventPrintToScreenWithTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::VehicleSystemFunctions_eventPrintToScreenWithTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execPrintToScreenWithTag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InString);
	P_GET_STRUCT(FLinearColor,Z_Param_TextColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FIntProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::PrintToScreenWithTag(Z_Param_InString,Z_Param_TextColor,Z_Param_Duration,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function PrintToScreenWithTag

// Begin Class UVehicleSystemFunctions Function RunningInEditor_World
struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics
{
	struct VehicleSystemFunctions_eventRunningInEditor_World_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in the Editor world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in the Editor world?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInEditor_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventRunningInEditor_World_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInEditor_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInEditor_World", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::VehicleSystemFunctions_eventRunningInEditor_World_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::VehicleSystemFunctions_eventRunningInEditor_World_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInEditor_World)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInEditor_World(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function RunningInEditor_World

// Begin Class UVehicleSystemFunctions Function RunningInGame_World
struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics
{
	struct VehicleSystemFunctions_eventRunningInGame_World_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in an actual independent game instance? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in an actual independent game instance?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInGame_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventRunningInGame_World_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInGame_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInGame_World", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::VehicleSystemFunctions_eventRunningInGame_World_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::VehicleSystemFunctions_eventRunningInGame_World_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInGame_World)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInGame_World(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function RunningInGame_World

// Begin Class UVehicleSystemFunctions Function RunningInPIE_World
struct Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics
{
	struct VehicleSystemFunctions_eventRunningInPIE_World_Parms
	{
		UObject* WorldContextObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Is this game logic running in the PIE world? */" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "HidePin", "WorldContextObject" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Is this game logic running in the PIE world?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventRunningInPIE_World_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemFunctions_eventRunningInPIE_World_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemFunctions_eventRunningInPIE_World_Parms), &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "RunningInPIE_World", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::VehicleSystemFunctions_eventRunningInPIE_World_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::VehicleSystemFunctions_eventRunningInPIE_World_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execRunningInPIE_World)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UVehicleSystemFunctions::RunningInPIE_World(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function RunningInPIE_World

// Begin Class UVehicleSystemFunctions Function SetAngularDamping
struct Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics
{
	struct VehicleSystemFunctions_eventSetAngularDamping_Parms
	{
		UPrimitiveComponent* target;
		float InDamping;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Sets the angular damping of this component on the named bone, or entire primitive if not specified */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Sets the angular damping of this component on the named bone, or entire primitive if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, InDamping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetAngularDamping_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_InDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "SetAngularDamping", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::VehicleSystemFunctions_eventSetAngularDamping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::VehicleSystemFunctions_eventSetAngularDamping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execSetAngularDamping)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::SetAngularDamping(Z_Param_target,Z_Param_InDamping,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function SetAngularDamping

// Begin Class UVehicleSystemFunctions Function SetLinearDamping
struct Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics
{
	struct VehicleSystemFunctions_eventSetLinearDamping_Parms
	{
		UPrimitiveComponent* target;
		float InDamping;
		FName BoneName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Sets the linear damping of this component on the named bone, or entire primitive if not specified */" },
		{ "CPP_Default_BoneName", "None" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "Sets the linear damping of this component on the named bone, or entire primitive if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDamping;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, target), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_target_MetaData), NewProp_target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_InDamping = { "InDamping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, InDamping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemFunctions_eventSetLinearDamping_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_InDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::NewProp_BoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleSystemFunctions, nullptr, "SetLinearDamping", nullptr, nullptr, Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::VehicleSystemFunctions_eventSetLinearDamping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::VehicleSystemFunctions_eventSetLinearDamping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleSystemFunctions::execSetLinearDamping)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDamping);
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVehicleSystemFunctions::SetLinearDamping(Z_Param_target,Z_Param_InDamping,Z_Param_BoneName);
	P_NATIVE_END;
}
// End Class UVehicleSystemFunctions Function SetLinearDamping

// Begin Class UVehicleSystemFunctions
void UVehicleSystemFunctions::StaticRegisterNativesUVehicleSystemFunctions()
{
	UClass* Class = UVehicleSystemFunctions::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AVS_ChaosAddForce", &UVehicleSystemFunctions::execAVS_ChaosAddForce },
		{ "AVS_ChaosAddForceAtLocation", &UVehicleSystemFunctions::execAVS_ChaosAddForceAtLocation },
		{ "AVS_ChaosAddTorque", &UVehicleSystemFunctions::execAVS_ChaosAddTorque },
		{ "AVS_ChaosAddWheelTorque", &UVehicleSystemFunctions::execAVS_ChaosAddWheelTorque },
		{ "AVS_ChaosBrakes", &UVehicleSystemFunctions::execAVS_ChaosBrakes },
		{ "AVS_ChaosGetVelocityAtLocation", &UVehicleSystemFunctions::execAVS_ChaosGetVelocityAtLocation },
		{ "AVS_ChaosSetWheelAngularVelocity", &UVehicleSystemFunctions::execAVS_ChaosSetWheelAngularVelocity },
		{ "AVS_GetChaosTransform", &UVehicleSystemFunctions::execAVS_GetChaosTransform },
		{ "AVS_SetWheelAngularVelocity", &UVehicleSystemFunctions::execAVS_SetWheelAngularVelocity },
		{ "GetMeshCenterOfMass", &UVehicleSystemFunctions::execGetMeshCenterOfMass },
		{ "GetMeshDiameter", &UVehicleSystemFunctions::execGetMeshDiameter },
		{ "GetMeshRadius", &UVehicleSystemFunctions::execGetMeshRadius },
		{ "GetPluginVersion", &UVehicleSystemFunctions::execGetPluginVersion },
		{ "GetUnrealEngineVersion", &UVehicleSystemFunctions::execGetUnrealEngineVersion },
		{ "GetWheelInertia", &UVehicleSystemFunctions::execGetWheelInertia },
		{ "LinearSpeedToRads", &UVehicleSystemFunctions::execLinearSpeedToRads },
		{ "PrintToScreenWithTag", &UVehicleSystemFunctions::execPrintToScreenWithTag },
		{ "RunningInEditor_World", &UVehicleSystemFunctions::execRunningInEditor_World },
		{ "RunningInGame_World", &UVehicleSystemFunctions::execRunningInGame_World },
		{ "RunningInPIE_World", &UVehicleSystemFunctions::execRunningInPIE_World },
		{ "SetAngularDamping", &UVehicleSystemFunctions::execSetAngularDamping },
		{ "SetLinearDamping", &UVehicleSystemFunctions::execSetLinearDamping },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleSystemFunctions);
UClass* Z_Construct_UClass_UVehicleSystemFunctions_NoRegister()
{
	return UVehicleSystemFunctions::StaticClass();
}
struct Z_Construct_UClass_UVehicleSystemFunctions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "VehicleSystemFunctions.h" },
		{ "ModuleRelativePath", "Public/VehicleSystemFunctions.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForce, "AVS_ChaosAddForce" }, // 3783566165
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddForceAtLocation, "AVS_ChaosAddForceAtLocation" }, // 1250809256
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddTorque, "AVS_ChaosAddTorque" }, // 3843298105
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosAddWheelTorque, "AVS_ChaosAddWheelTorque" }, // 3956647735
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosBrakes, "AVS_ChaosBrakes" }, // 2025039246
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosGetVelocityAtLocation, "AVS_ChaosGetVelocityAtLocation" }, // 416137042
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_ChaosSetWheelAngularVelocity, "AVS_ChaosSetWheelAngularVelocity" }, // 532998113
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_GetChaosTransform, "AVS_GetChaosTransform" }, // 3729010522
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_AVS_SetWheelAngularVelocity, "AVS_SetWheelAngularVelocity" }, // 3434859046
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshCenterOfMass, "GetMeshCenterOfMass" }, // 2305748628
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshDiameter, "GetMeshDiameter" }, // 2620095038
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetMeshRadius, "GetMeshRadius" }, // 836555092
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetPluginVersion, "GetPluginVersion" }, // 4223571323
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetUnrealEngineVersion, "GetUnrealEngineVersion" }, // 3455084632
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_GetWheelInertia, "GetWheelInertia" }, // 1401710751
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_LinearSpeedToRads, "LinearSpeedToRads" }, // 4268865337
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_PrintToScreenWithTag, "PrintToScreenWithTag" }, // 1052225941
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInEditor_World, "RunningInEditor_World" }, // 2777301313
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInGame_World, "RunningInGame_World" }, // 250627120
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_RunningInPIE_World, "RunningInPIE_World" }, // 1563035580
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_SetAngularDamping, "SetAngularDamping" }, // 921960705
		{ &Z_Construct_UFunction_UVehicleSystemFunctions_SetLinearDamping, "SetLinearDamping" }, // 3908664703
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleSystemFunctions>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVehicleSystemFunctions_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleSystemFunctions_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleSystemFunctions_Statics::ClassParams = {
	&UVehicleSystemFunctions::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleSystemFunctions_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleSystemFunctions_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVehicleSystemFunctions()
{
	if (!Z_Registration_Info_UClass_UVehicleSystemFunctions.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleSystemFunctions.OuterSingleton, Z_Construct_UClass_UVehicleSystemFunctions_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVehicleSystemFunctions.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleSystemFunctions>()
{
	return UVehicleSystemFunctions::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleSystemFunctions);
UVehicleSystemFunctions::~UVehicleSystemFunctions() {}
// End Class UVehicleSystemFunctions

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleSystemFunctions, UVehicleSystemFunctions::StaticClass, TEXT("UVehicleSystemFunctions"), &Z_Registration_Info_UClass_UVehicleSystemFunctions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleSystemFunctions), 2202162396U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_778149899(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
