// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleWheelBase.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleWheelBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleWheelBase();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleWheelBase_NoRegister();
VEHICLESYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_Config();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_Output();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_State();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAVS_Inputs();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDebugForce();
// End Cross Module References

// Begin Enum EWheelMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWheelMode;
static UEnum* EWheelMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWheelMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWheelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("EWheelMode"));
	}
	return Z_Registration_Info_UEnum_EWheelMode.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<EWheelMode>()
{
	return EWheelMode_StaticEnum();
}
struct Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "Physics.Name", "EWheelMode::Physics" },
		{ "Raycast.Name", "EWheelMode::Raycast" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWheelMode::Raycast", (int64)EWheelMode::Raycast },
		{ "EWheelMode::Physics", (int64)EWheelMode::Physics },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	"EWheelMode",
	"EWheelMode",
	Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode()
{
	if (!Z_Registration_Info_UEnum_EWheelMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWheelMode.InnerSingleton, Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWheelMode.InnerSingleton;
}
// End Enum EWheelMode

// Begin ScriptStruct FDebugForce
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugForce;
class UScriptStruct* FDebugForce::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugForce.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugForce.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugForce, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("DebugForce"));
	}
	return Z_Registration_Info_UScriptStruct_DebugForce.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FDebugForce>()
{
	return FDebugForce::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Vehicle - Debug" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Force_MetaData[] = {
		{ "Category", "Vehicle - Debug" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMode_MetaData[] = {
		{ "Category", "Vehicle - Debug" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Force;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WheelMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WheelMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugForce>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugForce, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_Force = { "Force", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugForce, Force), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Force_MetaData), NewProp_Force_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_WheelMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_WheelMode = { "WheelMode", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugForce, WheelMode), Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMode_MetaData), NewProp_WheelMode_MetaData) }; // 216274440
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_Force,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_WheelMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugForce_Statics::NewProp_WheelMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugForce_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugForce_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"DebugForce",
	Z_Construct_UScriptStruct_FDebugForce_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugForce_Statics::PropPointers),
	sizeof(FDebugForce),
	alignof(FDebugForce),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugForce_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugForce_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugForce()
{
	if (!Z_Registration_Info_UScriptStruct_DebugForce.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugForce.InnerSingleton, Z_Construct_UScriptStruct_FDebugForce_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugForce.InnerSingleton;
}
// End ScriptStruct FDebugForce

// Begin ScriptStruct FAVS_Inputs
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AVS_Inputs;
class UScriptStruct* FAVS_Inputs::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AVS_Inputs.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AVS_Inputs.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAVS_Inputs, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("AVS_Inputs"));
	}
	return Z_Registration_Info_UScriptStruct_AVS_Inputs.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAVS_Inputs>()
{
	return FAVS_Inputs::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAVS_Inputs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Input data to sent to physics thread each game tick\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Input data to sent to physics thread each game tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Steering_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Throttle_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brake_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handbrake_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Torque_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReverseTorque_MetaData[] = {
		{ "Category", "Vehicle - Input" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Throttle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brake;
	static void NewProp_Handbrake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Handbrake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Torque;
	static void NewProp_ReverseTorque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReverseTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAVS_Inputs>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS_Inputs, Steering), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Steering_MetaData), NewProp_Steering_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Throttle = { "Throttle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS_Inputs, Throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Throttle_MetaData), NewProp_Throttle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Brake = { "Brake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS_Inputs, Brake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brake_MetaData), NewProp_Brake_MetaData) };
void Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Handbrake_SetBit(void* Obj)
{
	((FAVS_Inputs*)Obj)->Handbrake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Handbrake = { "Handbrake", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS_Inputs), &Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Handbrake_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handbrake_MetaData), NewProp_Handbrake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Torque = { "Torque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS_Inputs, Torque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Torque_MetaData), NewProp_Torque_MetaData) };
void Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_ReverseTorque_SetBit(void* Obj)
{
	((FAVS_Inputs*)Obj)->ReverseTorque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_ReverseTorque = { "ReverseTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS_Inputs), &Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_ReverseTorque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReverseTorque_MetaData), NewProp_ReverseTorque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAVS_Inputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Steering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Brake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Handbrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_Torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewProp_ReverseTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS_Inputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAVS_Inputs_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"AVS_Inputs",
	Z_Construct_UScriptStruct_FAVS_Inputs_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS_Inputs_Statics::PropPointers),
	sizeof(FAVS_Inputs),
	alignof(FAVS_Inputs),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS_Inputs_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAVS_Inputs_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAVS_Inputs()
{
	if (!Z_Registration_Info_UScriptStruct_AVS_Inputs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AVS_Inputs.InnerSingleton, Z_Construct_UScriptStruct_FAVS_Inputs_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AVS_Inputs.InnerSingleton;
}
// End ScriptStruct FAVS_Inputs

// Begin ScriptStruct FAVS1_Wheel_State
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AVS1_Wheel_State;
class UScriptStruct* FAVS1_Wheel_State::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAVS1_Wheel_State, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("AVS1_Wheel_State"));
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAVS1_Wheel_State>()
{
	return FAVS1_Wheel_State::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Physics thread wheel state\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Physics thread wheel state" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAVS1_Wheel_State>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"AVS1_Wheel_State",
	nullptr,
	0,
	sizeof(FAVS1_Wheel_State),
	alignof(FAVS1_Wheel_State),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_State()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.InnerSingleton, Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_State.InnerSingleton;
}
// End ScriptStruct FAVS1_Wheel_State

// Begin ScriptStruct FAVS1_Wheel_Output
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output;
class UScriptStruct* FAVS1_Wheel_Output::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAVS1_Wheel_Output, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("AVS1_Wheel_Output"));
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAVS1_Wheel_Output>()
{
	return FAVS1_Wheel_Output::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Data output from the physics thread\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Data output from the physics thread" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastTrace_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Last trace\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Last trace" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AngularVelocity_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Wheel's angular velocity in Rad/s\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel's angular velocity in Rad/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSpringLength_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Length of the spring at the current compression\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Length of the spring at the current compression" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastTrace;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentSpringLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAVS1_Wheel_Output>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_LastTrace = { "LastTrace", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Output, LastTrace), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastTrace_MetaData), NewProp_LastTrace_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_AngularVelocity = { "AngularVelocity", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Output, AngularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AngularVelocity_MetaData), NewProp_AngularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_CurrentSpringLength = { "CurrentSpringLength", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Output, CurrentSpringLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSpringLength_MetaData), NewProp_CurrentSpringLength_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_LastTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_AngularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewProp_CurrentSpringLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"AVS1_Wheel_Output",
	Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::PropPointers),
	sizeof(FAVS1_Wheel_Output),
	alignof(FAVS1_Wheel_Output),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_Output()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.InnerSingleton, Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output.InnerSingleton;
}
// End ScriptStruct FAVS1_Wheel_Output

// Begin ScriptStruct FAVS1_Wheel_Config
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config;
class UScriptStruct* FAVS1_Wheel_Config::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAVS1_Wheel_Config, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("AVS1_Wheel_Config"));
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FAVS1_Wheel_Config>()
{
	return FAVS1_Wheel_Config::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Configuration data to sent to physics thread each game tick //TODO: Split into WheelConfig & SimulationConfig\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Configuration data to sent to physics thread each game tick TODO: Split into WheelConfig & SimulationConfig" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelLocalTransform_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Cached wheel position relative to Vehicle (Not relative to parent)\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Cached wheel position relative to Vehicle (Not relative to parent)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelPrim_MetaData[] = {
		{ "Comment", "// Wheel physics object\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel physics object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMode_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel|Raycast Settings" },
		{ "EditCondition", "WheelMode==EWheelMode::Raycast" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceIgnoreActors_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel|Raycast Settings" },
		{ "EditCondition", "WheelMode==EWheelMode::Raycast" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMass_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel" },
		{ "Comment", "// (Rim+Tire) Wheel Mass in Kg\n// Used in wheel simulation, not the actual mass of the wheel mesh physics object\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "(Rim+Tire) Wheel Mass in Kg\nUsed in wheel simulation, not the actual mass of the wheel mesh physics object" },
		{ "Units", "Kg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoWheelRadius_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel" },
		{ "Comment", "// Use the wheel mesh bounds to determine WheelRadius\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Use the wheel mesh bounds to determine WheelRadius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadius_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel" },
		{ "Comment", "// Wheel mesh Radius in cm\n" },
		{ "EditCondition", "AutoWheelRadius==false" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel mesh Radius in cm" },
		{ "Units", "cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFriction_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel" },
		{ "Comment", "// Friction Coefficient\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Friction Coefficient" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsDrivingWheel_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Drive/Steer" },
		{ "Comment", "// Wheel receives torque\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel receives torque" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSteerableWheel_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Drive/Steer" },
		{ "Comment", "// Wheel rotates around Yaw with the steering input, if this is false you can still control steer manually with \"SetCurrentSteering\"\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel rotates around Yaw with the steering input, if this is false you can still control steer manually with \"SetCurrentSteering\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSteeringAngle_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Drive/Steer" },
		{ "Comment", "// Maximum angle (in degrees) that the wheel steers\n" },
		{ "EditCondition", "IsSteerableWheel" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Maximum angle (in degrees) that the wheel steers" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertTorque_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Drive/Steer" },
		{ "Comment", "// Reverse direction of torque (usually for wheel's facing the opposite direction)\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Reverse direction of torque (usually for wheel's facing the opposite direction)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertSteering_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Drive/Steer" },
		{ "Comment", "// Reverse direction of steering\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Reverse direction of steering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsBrakingWheel_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Brakes" },
		{ "Comment", "// Wheel stops with handbrake\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel stops with handbrake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeTorque_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Brakes" },
		{ "Comment", "// Brake torque applied to wheel (Nm)\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Brake torque applied to wheel (Nm)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RollingResistance_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Brakes" },
		{ "Comment", "// Constant resistance applied to wheel (0 - 1)\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Constant resistance applied to wheel (0 - 1)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsHandbrakeWheel_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Brakes" },
		{ "Comment", "// Wheel stops with handbrake\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel stops with handbrake" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorPreview_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension" },
		{ "Comment", "// Show a preview of wheel travel, can be helpful while configuring suspension\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Show a preview of wheel travel, can be helpful while configuring suspension" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringLength_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension" },
		{ "Comment", "// Length of Spring in cm\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Length of Spring in cm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringStrength_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension" },
		{ "Comment", "// Spring rate in N/mm\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Spring rate in N/mm" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringDamping_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension" },
		{ "Comment", "// Damper force in kNs/m\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Damper force in kNs/m" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRadiusM_MetaData[] = {
		{ "Comment", "// Constants\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Constants" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inertia_MetaData[] = {
		{ "Comment", "// Radius of wheel in meters\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Radius of wheel in meters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WheelLocalTransform;
	static void NewProp_isLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLocked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelPrim;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WheelMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WheelMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TraceIgnoreActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraceIgnoreActors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelMass;
	static void NewProp_AutoWheelRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AutoWheelRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TireFriction;
	static void NewProp_IsDrivingWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsDrivingWheel;
	static void NewProp_IsSteerableWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSteerableWheel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSteeringAngle;
	static void NewProp_InvertTorque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertTorque;
	static void NewProp_InvertSteering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertSteering;
	static void NewProp_IsBrakingWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsBrakingWheel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RollingResistance;
	static void NewProp_IsHandbrakeWheel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsHandbrakeWheel;
	static void NewProp_EditorPreview_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_EditorPreview;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpringDamping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WheelRadiusM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Inertia;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAVS1_Wheel_Config>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelLocalTransform = { "WheelLocalTransform", nullptr, (EPropertyFlags)0x0010000000002014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelLocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelLocalTransform_MetaData), NewProp_WheelLocalTransform_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_isLocked_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->isLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLocked_MetaData), NewProp_isLocked_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelPrim = { "WheelPrim", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelPrim), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelPrim_MetaData), NewProp_WheelPrim_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMode = { "WheelMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelMode), Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMode_MetaData), NewProp_WheelMode_MetaData) }; // 216274440
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceIgnoreActors_Inner = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceIgnoreActors = { "TraceIgnoreActors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, TraceIgnoreActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceIgnoreActors_MetaData), NewProp_TraceIgnoreActors_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMass = { "WheelMass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelMass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMass_MetaData), NewProp_WheelMass_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_AutoWheelRadius_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->AutoWheelRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_AutoWheelRadius = { "AutoWheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_AutoWheelRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoWheelRadius_MetaData), NewProp_AutoWheelRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelRadius = { "WheelRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRadius_MetaData), NewProp_WheelRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TireFriction = { "TireFriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, TireFriction), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFriction_MetaData), NewProp_TireFriction_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsDrivingWheel_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->IsDrivingWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsDrivingWheel = { "IsDrivingWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsDrivingWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsDrivingWheel_MetaData), NewProp_IsDrivingWheel_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsSteerableWheel_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->IsSteerableWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsSteerableWheel = { "IsSteerableWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsSteerableWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSteerableWheel_MetaData), NewProp_IsSteerableWheel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_MaxSteeringAngle = { "MaxSteeringAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, MaxSteeringAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSteeringAngle_MetaData), NewProp_MaxSteeringAngle_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertTorque_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->InvertTorque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertTorque = { "InvertTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertTorque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertTorque_MetaData), NewProp_InvertTorque_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertSteering_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->InvertSteering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertSteering = { "InvertSteering", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertSteering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertSteering_MetaData), NewProp_InvertSteering_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsBrakingWheel_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->IsBrakingWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsBrakingWheel = { "IsBrakingWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsBrakingWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsBrakingWheel_MetaData), NewProp_IsBrakingWheel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_BrakeTorque = { "BrakeTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, BrakeTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeTorque_MetaData), NewProp_BrakeTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_RollingResistance = { "RollingResistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, RollingResistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RollingResistance_MetaData), NewProp_RollingResistance_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsHandbrakeWheel_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->IsHandbrakeWheel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsHandbrakeWheel = { "IsHandbrakeWheel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsHandbrakeWheel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsHandbrakeWheel_MetaData), NewProp_IsHandbrakeWheel_MetaData) };
void Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_EditorPreview_SetBit(void* Obj)
{
	((FAVS1_Wheel_Config*)Obj)->EditorPreview = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_EditorPreview = { "EditorPreview", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAVS1_Wheel_Config), &Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_EditorPreview_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorPreview_MetaData), NewProp_EditorPreview_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringLength = { "SpringLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, SpringLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringLength_MetaData), NewProp_SpringLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringStrength = { "SpringStrength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, SpringStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringStrength_MetaData), NewProp_SpringStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringDamping = { "SpringDamping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, SpringDamping), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringDamping_MetaData), NewProp_SpringDamping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelRadiusM = { "WheelRadiusM", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, WheelRadiusM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRadiusM_MetaData), NewProp_WheelRadiusM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_Inertia = { "Inertia", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAVS1_Wheel_Config, Inertia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inertia_MetaData), NewProp_Inertia_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelLocalTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_isLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelPrim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceIgnoreActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TraceIgnoreActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_AutoWheelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_TireFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsDrivingWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsSteerableWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_MaxSteeringAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_InvertSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsBrakingWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_BrakeTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_RollingResistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_IsHandbrakeWheel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_EditorPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_SpringDamping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_WheelRadiusM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewProp_Inertia,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"AVS1_Wheel_Config",
	Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::PropPointers),
	sizeof(FAVS1_Wheel_Config),
	alignof(FAVS1_Wheel_Config),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAVS1_Wheel_Config()
{
	if (!Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.InnerSingleton, Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config.InnerSingleton;
}
// End ScriptStruct FAVS1_Wheel_Config

// Begin Class UVehicleWheelBase Function GetHasContact
struct Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics
{
	struct VehicleWheelBase_eventGetHasContact_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleWheelBase_eventGetHasContact_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventGetHasContact_Parms), &Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetHasContact", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::VehicleWheelBase_eventGetHasContact_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::VehicleWheelBase_eventGetHasContact_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetHasContact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetHasContact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetHasContact)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHasContact();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetHasContact

// Begin Class UVehicleWheelBase Function GetIsAttached
struct Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics
{
	struct VehicleWheelBase_eventGetIsAttached_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleWheelBase_eventGetIsAttached_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventGetIsAttached_Parms), &Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetIsAttached", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::VehicleWheelBase_eventGetIsAttached_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::VehicleWheelBase_eventGetIsAttached_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetIsAttached)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAttached();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetIsAttached

// Begin Class UVehicleWheelBase Function GetIsSimulatingSuspension
struct Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics
{
	struct VehicleWheelBase_eventGetIsSimulatingSuspension_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleWheelBase_eventGetIsSimulatingSuspension_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventGetIsSimulatingSuspension_Parms), &Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetIsSimulatingSuspension", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::VehicleWheelBase_eventGetIsSimulatingSuspension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::VehicleWheelBase_eventGetIsSimulatingSuspension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetIsSimulatingSuspension)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsSimulatingSuspension();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetIsSimulatingSuspension

// Begin Class UVehicleWheelBase Function GetSteeringAngle
struct Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics
{
	struct VehicleWheelBase_eventGetSteeringAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventGetSteeringAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetSteeringAngle", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::VehicleWheelBase_eventGetSteeringAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::VehicleWheelBase_eventGetSteeringAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetSteeringAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSteeringAngle();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetSteeringAngle

// Begin Class UVehicleWheelBase Function GetSteeringInput
struct Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics
{
	struct VehicleWheelBase_eventGetSteeringInput_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventGetSteeringInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::VehicleWheelBase_eventGetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::VehicleWheelBase_eventGetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetSteeringInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSteeringInput();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetSteeringInput

// Begin Class UVehicleWheelBase Function GetWheelAngVelInRadians
struct Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics
{
	struct VehicleWheelBase_eventGetWheelAngVelInRadians_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventGetWheelAngVelInRadians_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetWheelAngVelInRadians", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::VehicleWheelBase_eventGetWheelAngVelInRadians_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::VehicleWheelBase_eventGetWheelAngVelInRadians_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetWheelAngVelInRadians)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWheelAngVelInRadians();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetWheelAngVelInRadians

// Begin Class UVehicleWheelBase Function GetWheelMode
struct Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics
{
	struct VehicleWheelBase_eventGetWheelMode_Parms
	{
		EWheelMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventGetWheelMode_Parms, ReturnValue), Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode, METADATA_PARAMS(0, nullptr) }; // 216274440
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetWheelMode", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::VehicleWheelBase_eventGetWheelMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::VehicleWheelBase_eventGetWheelMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetWheelMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EWheelMode*)Z_Param__Result=P_THIS->GetWheelMode();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetWheelMode

// Begin Class UVehicleWheelBase Function GetWheelVelocity
struct Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics
{
	struct VehicleWheelBase_eventGetWheelVelocity_Parms
	{
		bool Local;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "CPP_Default_Local", "false" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Local_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Local;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_Local_SetBit(void* Obj)
{
	((VehicleWheelBase_eventGetWheelVelocity_Parms*)Obj)->Local = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_Local = { "Local", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventGetWheelVelocity_Parms), &Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_Local_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventGetWheelVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_Local,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "GetWheelVelocity", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::VehicleWheelBase_eventGetWheelVelocity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::VehicleWheelBase_eventGetWheelVelocity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execGetWheelVelocity)
{
	P_GET_UBOOL(Z_Param_Local);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetWheelVelocity(Z_Param_Local);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function GetWheelVelocity

// Begin Class UVehicleWheelBase Function PassiveStateChanged
struct VehicleWheelBase_eventPassiveStateChanged_Parms
{
	bool NewPassiveState;
};
static const FName NAME_UVehicleWheelBase_PassiveStateChanged = FName(TEXT("PassiveStateChanged"));
void UVehicleWheelBase::PassiveStateChanged(bool NewPassiveState)
{
	VehicleWheelBase_eventPassiveStateChanged_Parms Parms;
	Parms.NewPassiveState=NewPassiveState ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UVehicleWheelBase_PassiveStateChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Called whenever the passive state changes modes\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Called whenever the passive state changes modes" },
	};
#endif // WITH_METADATA
	static void NewProp_NewPassiveState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewPassiveState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit(void* Obj)
{
	((VehicleWheelBase_eventPassiveStateChanged_Parms*)Obj)->NewPassiveState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::NewProp_NewPassiveState = { "NewPassiveState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventPassiveStateChanged_Parms), &Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::NewProp_NewPassiveState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "PassiveStateChanged", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::PropPointers), sizeof(VehicleWheelBase_eventPassiveStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleWheelBase_eventPassiveStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UVehicleWheelBase Function PassiveStateChanged

// Begin Class UVehicleWheelBase Function ResetWheelCollisions
struct Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "ResetWheelCollisions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execResetWheelCollisions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetWheelCollisions();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function ResetWheelCollisions

// Begin Class UVehicleWheelBase Function SetIsSimulatingSuspension
struct Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics
{
	struct VehicleWheelBase_eventSetIsSimulatingSuspension_Parms
	{
		bool NewSimulate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_NewSimulate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewSimulate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::NewProp_NewSimulate_SetBit(void* Obj)
{
	((VehicleWheelBase_eventSetIsSimulatingSuspension_Parms*)Obj)->NewSimulate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::NewProp_NewSimulate = { "NewSimulate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventSetIsSimulatingSuspension_Parms), &Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::NewProp_NewSimulate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::NewProp_NewSimulate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetIsSimulatingSuspension", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::VehicleWheelBase_eventSetIsSimulatingSuspension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::VehicleWheelBase_eventSetIsSimulatingSuspension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetIsSimulatingSuspension)
{
	P_GET_UBOOL(Z_Param_NewSimulate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsSimulatingSuspension(Z_Param_NewSimulate);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetIsSimulatingSuspension

// Begin Class UVehicleWheelBase Function SetPassiveMode
struct Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics
{
	struct VehicleWheelBase_eventSetPassiveMode_Parms
	{
		bool NewPassive;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "/*UFUNCTION(BlueprintPure, Category = \"Vehicle System Plugin|Wheel State\")\n\x09""bool LockedByBrake(float BrakeTorque, float DeltaTime);*/// ** Inputs ** //\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "UFUNCTION(BlueprintPure, Category = \"Vehicle System Plugin|Wheel State\")\n       bool LockedByBrake(float BrakeTorque, float DeltaTime);// ** Inputs ** //" },
	};
#endif // WITH_METADATA
	static void NewProp_NewPassive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewPassive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::NewProp_NewPassive_SetBit(void* Obj)
{
	((VehicleWheelBase_eventSetPassiveMode_Parms*)Obj)->NewPassive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::NewProp_NewPassive = { "NewPassive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventSetPassiveMode_Parms), &Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::NewProp_NewPassive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::NewProp_NewPassive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetPassiveMode", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::VehicleWheelBase_eventSetPassiveMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::VehicleWheelBase_eventSetPassiveMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetPassiveMode)
{
	P_GET_UBOOL(Z_Param_NewPassive);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPassiveMode(Z_Param_NewPassive);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetPassiveMode

// Begin Class UVehicleWheelBase Function SetRaycastWheelMass
struct Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics
{
	struct VehicleWheelBase_eventSetRaycastWheelMass_Parms
	{
		float NewMass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle Wheel - Config" },
		{ "Comment", "// Update this wheel's mass (Rim+Tire) in Kg\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Update this wheel's mass (Rim+Tire) in Kg" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::NewProp_NewMass = { "NewMass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventSetRaycastWheelMass_Parms, NewMass), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::NewProp_NewMass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetRaycastWheelMass", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::VehicleWheelBase_eventSetRaycastWheelMass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::VehicleWheelBase_eventSetRaycastWheelMass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetRaycastWheelMass)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRaycastWheelMass(Z_Param_NewMass);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetRaycastWheelMass

// Begin Class UVehicleWheelBase Function SetSteeringInput
struct Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics
{
	struct VehicleWheelBase_eventSetSteeringInput_Parms
	{
		float Steering;
		bool InvertSteering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "CPP_Default_InvertSteering", "false" },
		{ "CPP_Default_Steering", "0.000000" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Steering;
	static void NewProp_InvertSteering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertSteering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_Steering = { "Steering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventSetSteeringInput_Parms, Steering), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_InvertSteering_SetBit(void* Obj)
{
	((VehicleWheelBase_eventSetSteeringInput_Parms*)Obj)->InvertSteering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_InvertSteering = { "InvertSteering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleWheelBase_eventSetSteeringInput_Parms), &Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_InvertSteering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_Steering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::NewProp_InvertSteering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetSteeringInput", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::VehicleWheelBase_eventSetSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::VehicleWheelBase_eventSetSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetSteeringInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Steering);
	P_GET_UBOOL(Z_Param_InvertSteering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSteeringInput(Z_Param_Steering,Z_Param_InvertSteering);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetSteeringInput

// Begin Class UVehicleWheelBase Function SetWheelMeshComponent
struct Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics
{
	struct VehicleWheelBase_eventSetWheelMeshComponent_Parms
	{
		UPrimitiveComponent* NewComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::NewProp_NewComponent = { "NewComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventSetWheelMeshComponent_Parms, NewComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewComponent_MetaData), NewProp_NewComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::NewProp_NewComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetWheelMeshComponent", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::VehicleWheelBase_eventSetWheelMeshComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::VehicleWheelBase_eventSetWheelMeshComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetWheelMeshComponent)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_NewComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWheelMeshComponent(Z_Param_NewComponent);
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetWheelMeshComponent

// Begin Class UVehicleWheelBase Function SetWheelMode
struct VehicleWheelBase_eventSetWheelMode_Parms
{
	EWheelMode NewMode;
};
static const FName NAME_UVehicleWheelBase_SetWheelMode = FName(TEXT("SetWheelMode"));
void UVehicleWheelBase::SetWheelMode(EWheelMode NewMode)
{
	UFunction* Func = FindFunctionChecked(NAME_UVehicleWheelBase_SetWheelMode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VehicleWheelBase_eventSetWheelMode_Parms Parms;
		Parms.NewMode=NewMode;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetWheelMode_Implementation(NewMode);
	}
}
struct Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// ** Config ** //\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "** Config **" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::NewProp_NewMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleWheelBase_eventSetWheelMode_Parms, NewMode), Z_Construct_UEnum_VehicleSystemPlugin_EWheelMode, METADATA_PARAMS(0, nullptr) }; // 216274440
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::NewProp_NewMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "SetWheelMode", nullptr, nullptr, Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::PropPointers), sizeof(VehicleWheelBase_eventSetWheelMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleWheelBase_eventSetWheelMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execSetWheelMode)
{
	P_GET_ENUM(EWheelMode,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetWheelMode_Implementation(EWheelMode(Z_Param_NewMode));
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function SetWheelMode

// Begin Class UVehicleWheelBase Function UpdateLocalTransformCache
struct Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Updates the transform cache used for suspension simulation\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Updates the transform cache used for suspension simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "UpdateLocalTransformCache", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execUpdateLocalTransformCache)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateLocalTransformCache();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function UpdateLocalTransformCache

// Begin Class UVehicleWheelBase Function UpdateWheelRadius
struct Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Updates the WheelRadius if AutoWheelRadius is true\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Updates the WheelRadius if AutoWheelRadius is true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleWheelBase, nullptr, "UpdateWheelRadius", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleWheelBase::execUpdateWheelRadius)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWheelRadius();
	P_NATIVE_END;
}
// End Class UVehicleWheelBase Function UpdateWheelRadius

// Begin Class UVehicleWheelBase
void UVehicleWheelBase::StaticRegisterNativesUVehicleWheelBase()
{
	UClass* Class = UVehicleWheelBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHasContact", &UVehicleWheelBase::execGetHasContact },
		{ "GetIsAttached", &UVehicleWheelBase::execGetIsAttached },
		{ "GetIsSimulatingSuspension", &UVehicleWheelBase::execGetIsSimulatingSuspension },
		{ "GetSteeringAngle", &UVehicleWheelBase::execGetSteeringAngle },
		{ "GetSteeringInput", &UVehicleWheelBase::execGetSteeringInput },
		{ "GetWheelAngVelInRadians", &UVehicleWheelBase::execGetWheelAngVelInRadians },
		{ "GetWheelMode", &UVehicleWheelBase::execGetWheelMode },
		{ "GetWheelVelocity", &UVehicleWheelBase::execGetWheelVelocity },
		{ "ResetWheelCollisions", &UVehicleWheelBase::execResetWheelCollisions },
		{ "SetIsSimulatingSuspension", &UVehicleWheelBase::execSetIsSimulatingSuspension },
		{ "SetPassiveMode", &UVehicleWheelBase::execSetPassiveMode },
		{ "SetRaycastWheelMass", &UVehicleWheelBase::execSetRaycastWheelMass },
		{ "SetSteeringInput", &UVehicleWheelBase::execSetSteeringInput },
		{ "SetWheelMeshComponent", &UVehicleWheelBase::execSetWheelMeshComponent },
		{ "SetWheelMode", &UVehicleWheelBase::execSetWheelMode },
		{ "UpdateLocalTransformCache", &UVehicleWheelBase::execUpdateLocalTransformCache },
		{ "UpdateWheelRadius", &UVehicleWheelBase::execUpdateWheelRadius },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleWheelBase);
UClass* Z_Construct_UClass_UVehicleWheelBase_NoRegister()
{
	return UVehicleWheelBase::StaticClass();
}
struct Z_Construct_UClass_UVehicleWheelBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "VehicleSystem" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "VehicleWheelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulateSuspension_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isAttached_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_isLocked_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetAngVel_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Target wheel angular velocity in rad/s\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Target wheel angular velocity in rad/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveMode_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Low resource mode, should be active when completely idle\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Low resource mode, should be active when completely idle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelStaticMesh_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config" },
		{ "Comment", "// Mesh used to represent the wheel\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Mesh used to represent the wheel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelConfig_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config" },
		{ "Comment", "// Current configuration of this wheel, this is the data sent to the physics simulation\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Current configuration of this wheel, this is the data sent to the physics simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConnectToBone_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel|Skeletal Mesh" },
		{ "Comment", "/** Creates a constraint between the skeletal mesh bone and this wheel's collision or mesh component */" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Creates a constraint between the skeletal mesh bone and this wheel's collision or mesh component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Wheel|Skeletal Mesh" },
		{ "Comment", "/** Bone to snap to if we are a child of a skeletal mesh */" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Bone to snap to if we are a child of a skeletal mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelData_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "Comment", "// Current wheel data output from the simulation\n" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Current wheel data output from the simulation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WheelMeshComponent_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HasSpring_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension|Physics Mode" },
		{ "Comment", "/** Wheel's Physics Constraint has a spring */" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Wheel's Physics Constraint has a spring" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringHardLock_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension|Physics Mode" },
		{ "Comment", "/**\n\x09 * True: Do not let wheel exceed spring bounds (WheelTravel)\n\x09 * False: Soft-Lock (Damp) wheel past spring bounds (WheelTravel)\n\x09 */" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "True: Do not let wheel exceed spring bounds (WheelTravel)\nFalse: Soft-Lock (Damp) wheel past spring bounds (WheelTravel)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicsDownforce_MetaData[] = {
		{ "Category", "Vehicle Wheel - Config|Suspension|Physics Mode" },
		{ "Comment", "/** Force applied down -Z on the wheel at all times */" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
		{ "ToolTip", "Force applied down -Z on the wheel at all times" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringInput_MetaData[] = {
		{ "Category", "Vehicle System Plugin|Wheel State" },
		{ "ModuleRelativePath", "Public/VehicleWheelBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SimulateSuspension_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SimulateSuspension;
	static void NewProp_isAttached_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttached;
	static void NewProp_isLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_isLocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetAngVel;
	static void NewProp_PassiveMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PassiveMode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelStaticMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WheelConfig;
	static void NewProp_ConnectToBone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ConnectToBone;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WheelData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WheelRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WheelMeshComponent;
	static void NewProp_HasSpring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_HasSpring;
	static void NewProp_SpringHardLock_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SpringHardLock;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_PhysicsDownforce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetHasContact, "GetHasContact" }, // 3720074673
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetIsAttached, "GetIsAttached" }, // 299082420
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetIsSimulatingSuspension, "GetIsSimulatingSuspension" }, // 3250628406
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetSteeringAngle, "GetSteeringAngle" }, // 2802579035
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetSteeringInput, "GetSteeringInput" }, // 1490127815
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetWheelAngVelInRadians, "GetWheelAngVelInRadians" }, // 181439670
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetWheelMode, "GetWheelMode" }, // 1967414855
		{ &Z_Construct_UFunction_UVehicleWheelBase_GetWheelVelocity, "GetWheelVelocity" }, // 3533781907
		{ &Z_Construct_UFunction_UVehicleWheelBase_PassiveStateChanged, "PassiveStateChanged" }, // 2675667600
		{ &Z_Construct_UFunction_UVehicleWheelBase_ResetWheelCollisions, "ResetWheelCollisions" }, // 1537820306
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetIsSimulatingSuspension, "SetIsSimulatingSuspension" }, // 428000832
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetPassiveMode, "SetPassiveMode" }, // 2863014405
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetRaycastWheelMass, "SetRaycastWheelMass" }, // 241538540
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetSteeringInput, "SetSteeringInput" }, // 1049899004
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetWheelMeshComponent, "SetWheelMeshComponent" }, // 390073392
		{ &Z_Construct_UFunction_UVehicleWheelBase_SetWheelMode, "SetWheelMode" }, // 553165882
		{ &Z_Construct_UFunction_UVehicleWheelBase_UpdateLocalTransformCache, "UpdateLocalTransformCache" }, // 2763039769
		{ &Z_Construct_UFunction_UVehicleWheelBase_UpdateWheelRadius, "UpdateWheelRadius" }, // 2707261284
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleWheelBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SimulateSuspension_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->SimulateSuspension = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SimulateSuspension = { "SimulateSuspension", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SimulateSuspension_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulateSuspension_MetaData), NewProp_SimulateSuspension_MetaData) };
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isAttached_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->isAttached = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isAttached = { "isAttached", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isAttached_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isAttached_MetaData), NewProp_isAttached_MetaData) };
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isLocked_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->isLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isLocked = { "isLocked", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_isLocked_MetaData), NewProp_isLocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_TargetAngVel = { "TargetAngVel", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, TargetAngVel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetAngVel_MetaData), NewProp_TargetAngVel_MetaData) };
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PassiveMode_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->PassiveMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PassiveMode = { "PassiveMode", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PassiveMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveMode_MetaData), NewProp_PassiveMode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelStaticMesh = { "WheelStaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, WheelStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelStaticMesh_MetaData), NewProp_WheelStaticMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelConfig = { "WheelConfig", nullptr, (EPropertyFlags)0x0010008000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, WheelConfig), Z_Construct_UScriptStruct_FAVS1_Wheel_Config, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelConfig_MetaData), NewProp_WheelConfig_MetaData) }; // 870071455
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_ConnectToBone_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->ConnectToBone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_ConnectToBone = { "ConnectToBone", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_ConnectToBone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConnectToBone_MetaData), NewProp_ConnectToBone_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelData = { "WheelData", nullptr, (EPropertyFlags)0x0010008000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, WheelData), Z_Construct_UScriptStruct_FAVS1_Wheel_Output, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelData_MetaData), NewProp_WheelData_MetaData) }; // 1119367851
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelRotation = { "WheelRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, WheelRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelRotation_MetaData), NewProp_WheelRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelMeshComponent = { "WheelMeshComponent", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, WheelMeshComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WheelMeshComponent_MetaData), NewProp_WheelMeshComponent_MetaData) };
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_HasSpring_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->HasSpring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_HasSpring = { "HasSpring", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_HasSpring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HasSpring_MetaData), NewProp_HasSpring_MetaData) };
void Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SpringHardLock_SetBit(void* Obj)
{
	((UVehicleWheelBase*)Obj)->SpringHardLock = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SpringHardLock = { "SpringHardLock", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UVehicleWheelBase), &Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SpringHardLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringHardLock_MetaData), NewProp_SpringHardLock_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PhysicsDownforce = { "PhysicsDownforce", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, PhysicsDownforce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicsDownforce_MetaData), NewProp_PhysicsDownforce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SteeringInput = { "SteeringInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UVehicleWheelBase, SteeringInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringInput_MetaData), NewProp_SteeringInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVehicleWheelBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SimulateSuspension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isAttached,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_isLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_TargetAngVel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PassiveMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelConfig,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_ConnectToBone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_WheelMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_HasSpring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SpringHardLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_PhysicsDownforce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVehicleWheelBase_Statics::NewProp_SteeringInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheelBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UVehicleWheelBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheelBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleWheelBase_Statics::ClassParams = {
	&UVehicleWheelBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UVehicleWheelBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheelBase_Statics::PropPointers),
	0,
	0x00B000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleWheelBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleWheelBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVehicleWheelBase()
{
	if (!Z_Registration_Info_UClass_UVehicleWheelBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleWheelBase.OuterSingleton, Z_Construct_UClass_UVehicleWheelBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVehicleWheelBase.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleWheelBase>()
{
	return UVehicleWheelBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleWheelBase);
UVehicleWheelBase::~UVehicleWheelBase() {}
// End Class UVehicleWheelBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWheelMode_StaticEnum, TEXT("EWheelMode"), &Z_Registration_Info_UEnum_EWheelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 216274440U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDebugForce::StaticStruct, Z_Construct_UScriptStruct_FDebugForce_Statics::NewStructOps, TEXT("DebugForce"), &Z_Registration_Info_UScriptStruct_DebugForce, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugForce), 3314495036U) },
		{ FAVS_Inputs::StaticStruct, Z_Construct_UScriptStruct_FAVS_Inputs_Statics::NewStructOps, TEXT("AVS_Inputs"), &Z_Registration_Info_UScriptStruct_AVS_Inputs, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAVS_Inputs), 839082944U) },
		{ FAVS1_Wheel_State::StaticStruct, Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics::NewStructOps, TEXT("AVS1_Wheel_State"), &Z_Registration_Info_UScriptStruct_AVS1_Wheel_State, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAVS1_Wheel_State), 44119320U) },
		{ FAVS1_Wheel_Output::StaticStruct, Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics::NewStructOps, TEXT("AVS1_Wheel_Output"), &Z_Registration_Info_UScriptStruct_AVS1_Wheel_Output, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAVS1_Wheel_Output), 1119367851U) },
		{ FAVS1_Wheel_Config::StaticStruct, Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics::NewStructOps, TEXT("AVS1_Wheel_Config"), &Z_Registration_Info_UScriptStruct_AVS1_Wheel_Config, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAVS1_Wheel_Config), 870071455U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleWheelBase, UVehicleWheelBase::StaticClass, TEXT("UVehicleWheelBase"), &Z_Registration_Info_UClass_UVehicleWheelBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleWheelBase), 1513979471U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_3412373528(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
