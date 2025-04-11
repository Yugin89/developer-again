// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleSystemBase.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "UObject/CoreNet.h"
#include "VehicleSystemPlugin/Public/VehicleWheelBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSystemBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_AVehicleSystemBase();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_AVehicleSystemBase_NoRegister();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleWheelBase_NoRegister();
VEHICLESYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles();
VEHICLESYSTEMPLUGIN_API UEnum* Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FAVS_Inputs();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDebugForce();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FNetState();
VEHICLESYSTEMPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleGear();
// End Cross Module References

// Begin ScriptStruct FNetState
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NetState;
class UScriptStruct* FNetState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NetState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NetState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNetState, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("NetState"));
	}
	return Z_Registration_Info_UScriptStruct_NetState.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FNetState>()
{
	return FNetState::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetTimestamp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocalTimestamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_velocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_angularVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNetState>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_NetTimestamp = { "NetTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, NetTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetTimestamp_MetaData), NewProp_NetTimestamp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_LocalTimestamp = { "LocalTimestamp", nullptr, (EPropertyFlags)0x0010000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, LocalTimestamp), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTimestamp_MetaData), NewProp_LocalTimestamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_position_MetaData), NewProp_position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rotation_MetaData), NewProp_rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, velocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_velocity_MetaData), NewProp_velocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNetState, angularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_angularVelocity_MetaData), NewProp_angularVelocity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_NetTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_LocalTimestamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_velocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNetState_Statics::NewProp_angularVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNetState_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"NetState",
	Z_Construct_UScriptStruct_FNetState_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::PropPointers),
	sizeof(FNetState),
	alignof(FNetState),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNetState_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNetState_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNetState()
{
	if (!Z_Registration_Info_UScriptStruct_NetState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NetState.InnerSingleton, Z_Construct_UScriptStruct_FNetState_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NetState.InnerSingleton;
}
// End ScriptStruct FNetState

// Begin Enum NetworkRoles
static FEnumRegistrationInfo Z_Registration_Info_UEnum_NetworkRoles;
static UEnum* NetworkRoles_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_NetworkRoles.OuterSingleton)
	{
		Z_Registration_Info_UEnum_NetworkRoles.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("NetworkRoles"));
	}
	return Z_Registration_Info_UEnum_NetworkRoles.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<NetworkRoles>()
{
	return NetworkRoles_StaticEnum();
}
struct Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Client.Name", "NetworkRoles::Client" },
		{ "ClientSpawned.Name", "NetworkRoles::ClientSpawned" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "None.Name", "NetworkRoles::None" },
		{ "Owner.Name", "NetworkRoles::Owner" },
		{ "Server.Name", "NetworkRoles::Server" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NetworkRoles::None", (int64)NetworkRoles::None },
		{ "NetworkRoles::Owner", (int64)NetworkRoles::Owner },
		{ "NetworkRoles::Server", (int64)NetworkRoles::Server },
		{ "NetworkRoles::Client", (int64)NetworkRoles::Client },
		{ "NetworkRoles::ClientSpawned", (int64)NetworkRoles::ClientSpawned },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	"NetworkRoles",
	"NetworkRoles",
	Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles()
{
	if (!Z_Registration_Info_UEnum_NetworkRoles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_NetworkRoles.InnerSingleton, Z_Construct_UEnum_VehicleSystemPlugin_NetworkRoles_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_NetworkRoles.InnerSingleton;
}
// End Enum NetworkRoles

// Begin Enum SteeringSmoothingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_SteeringSmoothingType;
static UEnum* SteeringSmoothingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_SteeringSmoothingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_SteeringSmoothingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("SteeringSmoothingType"));
	}
	return Z_Registration_Info_UEnum_SteeringSmoothingType.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<SteeringSmoothingType>()
{
	return SteeringSmoothingType_StaticEnum();
}
struct Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Constant.Name", "SteeringSmoothingType::Constant" },
		{ "Ease.Name", "SteeringSmoothingType::Ease" },
		{ "Instant.Name", "SteeringSmoothingType::Instant" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "SteeringSmoothingType::Instant", (int64)SteeringSmoothingType::Instant },
		{ "SteeringSmoothingType::Constant", (int64)SteeringSmoothingType::Constant },
		{ "SteeringSmoothingType::Ease", (int64)SteeringSmoothingType::Ease },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	"SteeringSmoothingType",
	"SteeringSmoothingType",
	Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType()
{
	if (!Z_Registration_Info_UEnum_SteeringSmoothingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_SteeringSmoothingType.InnerSingleton, Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_SteeringSmoothingType.InnerSingleton;
}
// End Enum SteeringSmoothingType

// Begin ScriptStruct FVehicleGear
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VehicleGear;
class UScriptStruct* FVehicleGear::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleGear.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VehicleGear.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVehicleGear, (UObject*)Z_Construct_UPackage__Script_VehicleSystemPlugin(), TEXT("VehicleGear"));
	}
	return Z_Registration_Info_UScriptStruct_VehicleGear.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<FVehicleGear>()
{
	return FVehicleGear::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVehicleGear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndSpeed_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Maximum speed of the gear */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Maximum speed of the gear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartSpeed_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Speed at which this gear will be at its maximum torque */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Speed at which this gear will be at its maximum torque" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpShift_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Automatic Transmission Only, Transmission chooses a new gear when above this speed */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Automatic Transmission Only, Transmission chooses a new gear when above this speed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DownShift_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Automatic Transmission Only, Transmission chooses a new gear when below this speed */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Automatic Transmission Only, Transmission chooses a new gear when below this speed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighRPM_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** RPM at the EndSpeed of the gear */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "RPM at the EndSpeed of the gear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowRPM_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** RPM at the StartSpeed of the gear */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "RPM at the StartSpeed of the gear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTorque_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Torque at the StartSpeed of the gear */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Torque at the StartSpeed of the gear" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTorque_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "Comment", "/** Torque at the EndSpeed of the gear */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Torque at the EndSpeed of the gear" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EndSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpShift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownShift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LowRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVehicleGear>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed = { "EndSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, EndSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndSpeed_MetaData), NewProp_EndSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed = { "StartSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, StartSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartSpeed_MetaData), NewProp_StartSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift = { "UpShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, UpShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpShift_MetaData), NewProp_UpShift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift = { "DownShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, DownShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DownShift_MetaData), NewProp_DownShift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM = { "HighRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, HighRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighRPM_MetaData), NewProp_HighRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM = { "LowRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, LowRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowRPM_MetaData), NewProp_LowRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque = { "MaxTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, MaxTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTorque_MetaData), NewProp_MaxTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque = { "MinTorque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVehicleGear, MinTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTorque_MetaData), NewProp_MinTorque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_EndSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_StartSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_UpShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_DownShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_HighRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_LowRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MaxTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVehicleGear_Statics::NewProp_MinTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVehicleGear_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
	nullptr,
	&NewStructOps,
	"VehicleGear",
	Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::PropPointers),
	sizeof(FVehicleGear),
	alignof(FVehicleGear),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVehicleGear_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVehicleGear_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVehicleGear()
{
	if (!Z_Registration_Info_UScriptStruct_VehicleGear.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VehicleGear.InnerSingleton, Z_Construct_UScriptStruct_FVehicleGear_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VehicleGear.InnerSingleton;
}
// End ScriptStruct FVehicleGear

// Begin Class AVehicleSystemBase Function AVS_Tick
struct VehicleSystemBase_eventAVS_Tick_Parms
{
	float DeltaTime;
};
static const FName NAME_AVehicleSystemBase_AVS_Tick = FName(TEXT("AVS_Tick"));
void AVehicleSystemBase::AVS_Tick(float DeltaTime)
{
	VehicleSystemBase_eventAVS_Tick_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_AVS_Tick);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Internal AVS function! Tick used for AVS functions\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Internal AVS function! Tick used for AVS functions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventAVS_Tick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "AVS_Tick", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::PropPointers), sizeof(VehicleSystemBase_eventAVS_Tick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventAVS_Tick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function AVS_Tick

// Begin Class AVehicleSystemBase Function BlueprintDebugMessage
struct VehicleSystemBase_eventBlueprintDebugMessage_Parms
{
	FString text;
};
static const FName NAME_AVehicleSystemBase_BlueprintDebugMessage = FName(TEXT("BlueprintDebugMessage"));
void AVehicleSystemBase::BlueprintDebugMessage(const FString& text)
{
	VehicleSystemBase_eventBlueprintDebugMessage_Parms Parms;
	Parms.text=text;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_BlueprintDebugMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_text_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventBlueprintDebugMessage_Parms, text), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_text_MetaData), NewProp_text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::NewProp_text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "BlueprintDebugMessage", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::PropPointers), sizeof(VehicleSystemBase_eventBlueprintDebugMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventBlueprintDebugMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function BlueprintDebugMessage

// Begin Class AVehicleSystemBase Function Client_ReceiveNetState
struct VehicleSystemBase_eventClient_ReceiveNetState_Parms
{
	FNetState State;
};
static const FName NAME_AVehicleSystemBase_Client_ReceiveNetState = FName(TEXT("Client_ReceiveNetState"));
void AVehicleSystemBase::Client_ReceiveNetState(FNetState State)
{
	VehicleSystemBase_eventClient_ReceiveNetState_Parms Parms;
	Parms.State=State;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_Client_ReceiveNetState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventClient_ReceiveNetState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(0, nullptr) }; // 282958839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Client_ReceiveNetState", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::PropPointers), sizeof(VehicleSystemBase_eventClient_ReceiveNetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventClient_ReceiveNetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execClient_ReceiveNetState)
{
	P_GET_STRUCT(FNetState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Client_ReceiveNetState_Validate(Z_Param_State))
	{
		RPC_ValidateFailed(TEXT("Client_ReceiveNetState_Validate"));
		return;
	}
	P_THIS->Client_ReceiveNetState_Implementation(Z_Param_State);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function Client_ReceiveNetState

// Begin Class AVehicleSystemBase Function DeterminePassiveState
struct VehicleSystemBase_eventDeterminePassiveState_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	VehicleSystemBase_eventDeterminePassiveState_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_AVehicleSystemBase_DeterminePassiveState = FName(TEXT("DeterminePassiveState"));
bool AVehicleSystemBase::DeterminePassiveState()
{
	VehicleSystemBase_eventDeterminePassiveState_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_DeterminePassiveState);
	ProcessEvent(Func,&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Allows blueprint to determine the current passive state\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Allows blueprint to determine the current passive state" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemBase_eventDeterminePassiveState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemBase_eventDeterminePassiveState_Parms), &Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "DeterminePassiveState", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::PropPointers), sizeof(VehicleSystemBase_eventDeterminePassiveState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventDeterminePassiveState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function DeterminePassiveState

// Begin Class AVehicleSystemBase Function GetMaxSteeringInput
struct Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics
{
	struct VehicleSystemBase_eventGetMaxSteeringInput_Parms
	{
		float Speed;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetMaxSteeringInput_Parms, Speed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetMaxSteeringInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "GetMaxSteeringInput", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::VehicleSystemBase_eventGetMaxSteeringInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::VehicleSystemBase_eventGetMaxSteeringInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execGetMaxSteeringInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetMaxSteeringInput(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function GetMaxSteeringInput

// Begin Class AVehicleSystemBase Function GetSteeringSpeed
struct Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics
{
	struct VehicleSystemBase_eventGetSteeringSpeed_Parms
	{
		float OldSteering;
		float NewSteering;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldSteering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSteering;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_OldSteering = { "OldSteering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetSteeringSpeed_Parms, OldSteering), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_NewSteering = { "NewSteering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetSteeringSpeed_Parms, NewSteering), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventGetSteeringSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_OldSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_NewSteering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "GetSteeringSpeed", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::VehicleSystemBase_eventGetSteeringSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::VehicleSystemBase_eventGetSteeringSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execGetSteeringSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_OldSteering);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSteering);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSteeringSpeed(Z_Param_OldSteering,Z_Param_NewSteering);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function GetSteeringSpeed

// Begin Class AVehicleSystemBase Function IsTowardZero
struct Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics
{
	struct VehicleSystemBase_eventIsTowardZero_Parms
	{
		float Old;
		float New;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Returns true if the newer value is moving towards zero ( AKA -0.8 to -0.2 = true )\n" },
		{ "Keywords", "Torward Torwards" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Returns true if the newer value is moving towards zero ( AKA -0.8 to -0.2 = true )" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Old;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_New;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_Old = { "Old", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventIsTowardZero_Parms, Old), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_New = { "New", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventIsTowardZero_Parms, New), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemBase_eventIsTowardZero_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemBase_eventIsTowardZero_Parms), &Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_Old,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_New,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "IsTowardZero", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::VehicleSystemBase_eventIsTowardZero_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::VehicleSystemBase_eventIsTowardZero_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execIsTowardZero)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Old);
	P_GET_PROPERTY(FFloatProperty,Z_Param_New);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=AVehicleSystemBase::IsTowardZero(Z_Param_Old,Z_Param_New);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function IsTowardZero

// Begin Class AVehicleSystemBase Function Multicast_ChangedOwner
static const FName NAME_AVehicleSystemBase_Multicast_ChangedOwner = FName(TEXT("Multicast_ChangedOwner"));
void AVehicleSystemBase::Multicast_ChangedOwner()
{
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_Multicast_ChangedOwner);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Multicast_ChangedOwner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execMulticast_ChangedOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Multicast_ChangedOwner_Validate())
	{
		RPC_ValidateFailed(TEXT("Multicast_ChangedOwner_Validate"));
		return;
	}
	P_THIS->Multicast_ChangedOwner_Implementation();
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function Multicast_ChangedOwner

// Begin Class AVehicleSystemBase Function NetStateSend
struct Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "NetStateSend", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_NetStateSend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_NetStateSend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execNetStateSend)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NetStateSend();
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function NetStateSend

// Begin Class AVehicleSystemBase Function OnRep_RestState
struct Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "OnRep_RestState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execOnRep_RestState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_RestState();
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function OnRep_RestState

// Begin Class AVehicleSystemBase Function OwnerChanged
static const FName NAME_AVehicleSystemBase_OwnerChanged = FName(TEXT("OwnerChanged"));
void AVehicleSystemBase::OwnerChanged()
{
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_OwnerChanged);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/** Called when the owning client changes (Possessed or UnPossessed) */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Called when the owning client changes (Possessed or UnPossessed)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "OwnerChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function OwnerChanged

// Begin Class AVehicleSystemBase Function PassiveStateChanged
struct VehicleSystemBase_eventPassiveStateChanged_Parms
{
	bool NewPassiveState;
};
static const FName NAME_AVehicleSystemBase_PassiveStateChanged = FName(TEXT("PassiveStateChanged"));
void AVehicleSystemBase::PassiveStateChanged(bool NewPassiveState)
{
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_PassiveStateChanged);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		VehicleSystemBase_eventPassiveStateChanged_Parms Parms;
		Parms.NewPassiveState=NewPassiveState ? true : false;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PassiveStateChanged_Implementation(NewPassiveState);
	}
}
struct Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// Called whenever the passive state changes modes\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Called whenever the passive state changes modes" },
	};
#endif // WITH_METADATA
	static void NewProp_NewPassiveState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewPassiveState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit(void* Obj)
{
	((VehicleSystemBase_eventPassiveStateChanged_Parms*)Obj)->NewPassiveState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState = { "NewPassiveState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemBase_eventPassiveStateChanged_Parms), &Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::NewProp_NewPassiveState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "PassiveStateChanged", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::PropPointers), sizeof(VehicleSystemBase_eventPassiveStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventPassiveStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execPassiveStateChanged)
{
	P_GET_UBOOL(Z_Param_NewPassiveState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PassiveStateChanged_Implementation(Z_Param_NewPassiveState);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function PassiveStateChanged

// Begin Class AVehicleSystemBase Function PassiveTickBP
struct VehicleSystemBase_eventPassiveTickBP_Parms
{
	float DeltaTime;
};
static const FName NAME_AVehicleSystemBase_PassiveTickBP = FName(TEXT("PassiveTickBP"));
void AVehicleSystemBase::PassiveTickBP(float DeltaTime)
{
	VehicleSystemBase_eventPassiveTickBP_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_PassiveTickBP);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Called while the normal Tick function is disabled due to gatekeeping\n" },
		{ "DisplayName", "AVS_PassiveTick" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Called while the normal Tick function is disabled due to gatekeeping" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventPassiveTickBP_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "PassiveTickBP", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::PropPointers), sizeof(VehicleSystemBase_eventPassiveTickBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventPassiveTickBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function PassiveTickBP

// Begin Class AVehicleSystemBase Function PhysicsThreadInputs
struct Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics
{
	struct VehicleSystemBase_eventPhysicsThreadInputs_Parms
	{
		FAVS_Inputs NewInputs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewInputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::NewProp_NewInputs = { "NewInputs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventPhysicsThreadInputs_Parms, NewInputs), Z_Construct_UScriptStruct_FAVS_Inputs, METADATA_PARAMS(0, nullptr) }; // 839082944
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::NewProp_NewInputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "PhysicsThreadInputs", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::VehicleSystemBase_eventPhysicsThreadInputs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::VehicleSystemBase_eventPhysicsThreadInputs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execPhysicsThreadInputs)
{
	P_GET_STRUCT(FAVS_Inputs,Z_Param_NewInputs);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PhysicsThreadInputs(Z_Param_NewInputs);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function PhysicsThreadInputs

// Begin Class AVehicleSystemBase Function Server_ReceiveNetState
struct VehicleSystemBase_eventServer_ReceiveNetState_Parms
{
	FNetState State;
};
static const FName NAME_AVehicleSystemBase_Server_ReceiveNetState = FName(TEXT("Server_ReceiveNetState"));
void AVehicleSystemBase::Server_ReceiveNetState(FNetState State)
{
	VehicleSystemBase_eventServer_ReceiveNetState_Parms Parms;
	Parms.State=State;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_Server_ReceiveNetState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventServer_ReceiveNetState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(0, nullptr) }; // 282958839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Server_ReceiveNetState", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::PropPointers), sizeof(VehicleSystemBase_eventServer_ReceiveNetState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventServer_ReceiveNetState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execServer_ReceiveNetState)
{
	P_GET_STRUCT(FNetState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ReceiveNetState_Validate(Z_Param_State))
	{
		RPC_ValidateFailed(TEXT("Server_ReceiveNetState_Validate"));
		return;
	}
	P_THIS->Server_ReceiveNetState_Implementation(Z_Param_State);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function Server_ReceiveNetState

// Begin Class AVehicleSystemBase Function Server_ReceiveRestState
struct VehicleSystemBase_eventServer_ReceiveRestState_Parms
{
	FNetState State;
};
static const FName NAME_AVehicleSystemBase_Server_ReceiveRestState = FName(TEXT("Server_ReceiveRestState"));
void AVehicleSystemBase::Server_ReceiveRestState(FNetState State)
{
	VehicleSystemBase_eventServer_ReceiveRestState_Parms Parms;
	Parms.State=State;
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_Server_ReceiveRestState);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_State;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventServer_ReceiveRestState_Parms, State), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(0, nullptr) }; // 282958839
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::NewProp_State,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "Server_ReceiveRestState", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::PropPointers), sizeof(VehicleSystemBase_eventServer_ReceiveRestState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::Function_MetaDataParams) };
static_assert(sizeof(VehicleSystemBase_eventServer_ReceiveRestState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execServer_ReceiveRestState)
{
	P_GET_STRUCT(FNetState,Z_Param_State);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->Server_ReceiveRestState_Validate(Z_Param_State))
	{
		RPC_ValidateFailed(TEXT("Server_ReceiveRestState_Validate"));
		return;
	}
	P_THIS->Server_ReceiveRestState_Implementation(Z_Param_State);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function Server_ReceiveRestState

// Begin Class AVehicleSystemBase Function SetArrayDisabledCollisions
struct Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics
{
	struct VehicleSystemBase_eventSetArrayDisabledCollisions_Parms
	{
		TArray<UPrimitiveComponent*> Meshes;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// AVS internal use only! Sets array of meshes with collisions disabled against the VehicleMesh\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "AVS internal use only! Sets array of meshes with collisions disabled against the VehicleMesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0010008000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleSystemBase_eventSetArrayDisabledCollisions_Parms, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) };
void Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((VehicleSystemBase_eventSetArrayDisabledCollisions_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemBase_eventSetArrayDisabledCollisions_Parms), &Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "SetArrayDisabledCollisions", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::VehicleSystemBase_eventSetArrayDisabledCollisions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::VehicleSystemBase_eventSetArrayDisabledCollisions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execSetArrayDisabledCollisions)
{
	P_GET_TARRAY(UPrimitiveComponent*,Z_Param_Meshes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetArrayDisabledCollisions(Z_Param_Meshes);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function SetArrayDisabledCollisions

// Begin Class AVehicleSystemBase Function SetShouldSyncWithServer
struct Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics
{
	struct VehicleSystemBase_eventSetShouldSyncWithServer_Parms
	{
		bool ShouldSync;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "/**Used to temporarily disable movement replication, does not change ReplicateMovement */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Used to temporarily disable movement replication, does not change ReplicateMovement" },
	};
#endif // WITH_METADATA
	static void NewProp_ShouldSync_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldSync;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync_SetBit(void* Obj)
{
	((VehicleSystemBase_eventSetShouldSyncWithServer_Parms*)Obj)->ShouldSync = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync = { "ShouldSync", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleSystemBase_eventSetShouldSyncWithServer_Parms), &Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::NewProp_ShouldSync,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "SetShouldSyncWithServer", nullptr, nullptr, Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::VehicleSystemBase_eventSetShouldSyncWithServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::VehicleSystemBase_eventSetShouldSyncWithServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execSetShouldSyncWithServer)
{
	P_GET_UBOOL(Z_Param_ShouldSync);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShouldSyncWithServer(Z_Param_ShouldSync);
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function SetShouldSyncWithServer

// Begin Class AVehicleSystemBase Function TeleportWheels
static const FName NAME_AVehicleSystemBase_TeleportWheels = FName(TEXT("TeleportWheels"));
void AVehicleSystemBase::TeleportWheels()
{
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_TeleportWheels);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "TeleportWheels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AVehicleSystemBase Function TeleportWheels

// Begin Class AVehicleSystemBase Function UpdateInternalWheelArray
struct Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// ** Physics Thread ** //\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "** Physics Thread **" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "UpdateInternalWheelArray", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execUpdateInternalWheelArray)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateInternalWheelArray();
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function UpdateInternalWheelArray

// Begin Class AVehicleSystemBase Function WakeWheelsForMovement
static const FName NAME_AVehicleSystemBase_WakeWheelsForMovement = FName(TEXT("WakeWheelsForMovement"));
void AVehicleSystemBase::WakeWheelsForMovement()
{
	UFunction* Func = FindFunctionChecked(NAME_AVehicleSystemBase_WakeWheelsForMovement);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		WakeWheelsForMovement_Implementation();
	}
}
struct Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVehicleSystemBase, nullptr, "WakeWheelsForMovement", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AVehicleSystemBase::execWakeWheelsForMovement)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WakeWheelsForMovement_Implementation();
	P_NATIVE_END;
}
// End Class AVehicleSystemBase Function WakeWheelsForMovement

// Begin Class AVehicleSystemBase
void AVehicleSystemBase::StaticRegisterNativesAVehicleSystemBase()
{
	UClass* Class = AVehicleSystemBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Client_ReceiveNetState", &AVehicleSystemBase::execClient_ReceiveNetState },
		{ "GetMaxSteeringInput", &AVehicleSystemBase::execGetMaxSteeringInput },
		{ "GetSteeringSpeed", &AVehicleSystemBase::execGetSteeringSpeed },
		{ "IsTowardZero", &AVehicleSystemBase::execIsTowardZero },
		{ "Multicast_ChangedOwner", &AVehicleSystemBase::execMulticast_ChangedOwner },
		{ "NetStateSend", &AVehicleSystemBase::execNetStateSend },
		{ "OnRep_RestState", &AVehicleSystemBase::execOnRep_RestState },
		{ "PassiveStateChanged", &AVehicleSystemBase::execPassiveStateChanged },
		{ "PhysicsThreadInputs", &AVehicleSystemBase::execPhysicsThreadInputs },
		{ "Server_ReceiveNetState", &AVehicleSystemBase::execServer_ReceiveNetState },
		{ "Server_ReceiveRestState", &AVehicleSystemBase::execServer_ReceiveRestState },
		{ "SetArrayDisabledCollisions", &AVehicleSystemBase::execSetArrayDisabledCollisions },
		{ "SetShouldSyncWithServer", &AVehicleSystemBase::execSetShouldSyncWithServer },
		{ "UpdateInternalWheelArray", &AVehicleSystemBase::execUpdateInternalWheelArray },
		{ "WakeWheelsForMovement", &AVehicleSystemBase::execWakeWheelsForMovement },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicleSystemBase);
UClass* Z_Construct_UClass_AVehicleSystemBase_NoRegister()
{
	return AVehicleSystemBase::StaticClass();
}
struct Z_Construct_UClass_AVehicleSystemBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VehicleSystemBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleWheels_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactModMeshes_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReplicateMovement_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncLocation_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SyncRotation_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSendRate_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetTimeBehind_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetLerpStart_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetPositionTolerance_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetSmoothing_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestState_MetaData[] = {
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetworkAtRest_MetaData[] = {
		{ "Category", "Vehicle - Network" },
		{ "Comment", "// Vehicle is considered at rest for network purposes\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Vehicle is considered at rest for network purposes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestTimer_MetaData[] = {
		{ "Category", "Vehicle - Physics" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaosDeltaTime_MetaData[] = {
		{ "Category", "Vehicle - Physics" },
		{ "Comment", "/** Tick delta of the chaos physics thread (most recent output). Don't use in calculations, for display purposes only*/" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Tick delta of the chaos physics thread (most recent output). Don't use in calculations, for display purposes only" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputsForPhysicsThread_MetaData[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugTraces_MetaData[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "Comment", "// ** Debug ** //\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "** Debug **" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugForces_MetaData[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Vehicle - General" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveMode_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Low resource mode, should be active when completely idle\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Low resource mode, should be active when completely idle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PassiveTickGatekeeping_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Should passive mode gatekeep the standard Tick event, highly recommended to keep this true.\n// You can use the \"AVS_PassiveTick\" function for things that need to always tick\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Should passive mode gatekeep the standard Tick event, highly recommended to keep this true.\nYou can use the \"AVS_PassiveTick\" function for things that need to always tick" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestVelocityThreshold_MetaData[] = {
		{ "Category", "Vehicle - Physics" },
		{ "Comment", "// Velocity (cm) at which the vehicle is considered moving, used for network rest state and passive mode\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Velocity (cm) at which the vehicle is considered moving, used for network rest state and passive mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalVehicleAtRest_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Vehicle is at rest locally (not tied to networking)\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Vehicle is at rest locally (not tied to networking)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringFalloffCurve_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "/** Max steering input based on the vehicle speed */" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Max steering input based on the vehicle speed" },
		{ "XAxisName", "Speed" },
		{ "YAxisName", "Steering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringInputSmoothing_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Type of smoothing to apply to steering input\n" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Type of smoothing to apply to steering input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringSpeed_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Higher value = faster\n" },
		{ "EditCondition", "SteeringInputSmoothing != SteeringSmoothingType::Instant" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Higher value = faster" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringRecenterSpeed_MetaData[] = {
		{ "Category", "Vehicle - General" },
		{ "Comment", "// Special SteeringSpeed for when steering is being recentered, generally from a zero input\n" },
		{ "EditCondition", "SteeringInputSmoothing != SteeringSmoothingType::Instant" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
		{ "ToolTip", "Special SteeringSpeed for when steering is being recentered, generally from a zero input" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Gears_MetaData[] = {
		{ "Category", "Vehicle - Transmission" },
		{ "ModuleRelativePath", "Public/VehicleSystemBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleWheels_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VehicleWheels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContactModMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContactModMeshes;
	static void NewProp_ReplicateMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReplicateMovement;
	static void NewProp_SyncLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SyncLocation;
	static void NewProp_SyncRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SyncRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetSendRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetTimeBehind;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetLerpStart;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetPositionTolerance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NetSmoothing;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestState;
	static void NewProp_NetworkAtRest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NetworkAtRest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestTimer;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaosDeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputsForPhysicsThread;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugTraces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugTraces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugForces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugForces;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VehicleMesh;
	static void NewProp_PassiveMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PassiveMode;
	static void NewProp_PassiveTickGatekeeping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_PassiveTickGatekeeping;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestVelocityThreshold;
	static void NewProp_LocalVehicleAtRest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LocalVehicleAtRest;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteeringFalloffCurve;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SteeringInputSmoothing_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SteeringInputSmoothing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringRecenterSpeed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gears_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Gears;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AVehicleSystemBase_AVS_Tick, "AVS_Tick" }, // 987425915
		{ &Z_Construct_UFunction_AVehicleSystemBase_BlueprintDebugMessage, "BlueprintDebugMessage" }, // 2603468575
		{ &Z_Construct_UFunction_AVehicleSystemBase_Client_ReceiveNetState, "Client_ReceiveNetState" }, // 2038154183
		{ &Z_Construct_UFunction_AVehicleSystemBase_DeterminePassiveState, "DeterminePassiveState" }, // 1056253020
		{ &Z_Construct_UFunction_AVehicleSystemBase_GetMaxSteeringInput, "GetMaxSteeringInput" }, // 918069488
		{ &Z_Construct_UFunction_AVehicleSystemBase_GetSteeringSpeed, "GetSteeringSpeed" }, // 4121483467
		{ &Z_Construct_UFunction_AVehicleSystemBase_IsTowardZero, "IsTowardZero" }, // 2324797431
		{ &Z_Construct_UFunction_AVehicleSystemBase_Multicast_ChangedOwner, "Multicast_ChangedOwner" }, // 1345744137
		{ &Z_Construct_UFunction_AVehicleSystemBase_NetStateSend, "NetStateSend" }, // 307878103
		{ &Z_Construct_UFunction_AVehicleSystemBase_OnRep_RestState, "OnRep_RestState" }, // 866281570
		{ &Z_Construct_UFunction_AVehicleSystemBase_OwnerChanged, "OwnerChanged" }, // 1775600492
		{ &Z_Construct_UFunction_AVehicleSystemBase_PassiveStateChanged, "PassiveStateChanged" }, // 523373144
		{ &Z_Construct_UFunction_AVehicleSystemBase_PassiveTickBP, "PassiveTickBP" }, // 3292156518
		{ &Z_Construct_UFunction_AVehicleSystemBase_PhysicsThreadInputs, "PhysicsThreadInputs" }, // 1462332412
		{ &Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveNetState, "Server_ReceiveNetState" }, // 3941684216
		{ &Z_Construct_UFunction_AVehicleSystemBase_Server_ReceiveRestState, "Server_ReceiveRestState" }, // 3838270445
		{ &Z_Construct_UFunction_AVehicleSystemBase_SetArrayDisabledCollisions, "SetArrayDisabledCollisions" }, // 2061341044
		{ &Z_Construct_UFunction_AVehicleSystemBase_SetShouldSyncWithServer, "SetShouldSyncWithServer" }, // 1867690799
		{ &Z_Construct_UFunction_AVehicleSystemBase_TeleportWheels, "TeleportWheels" }, // 166839208
		{ &Z_Construct_UFunction_AVehicleSystemBase_UpdateInternalWheelArray, "UpdateInternalWheelArray" }, // 3751805718
		{ &Z_Construct_UFunction_AVehicleSystemBase_WakeWheelsForMovement, "WakeWheelsForMovement" }, // 2196514836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleSystemBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleWheels_Inner = { "VehicleWheels", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UVehicleWheelBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleWheels = { "VehicleWheels", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, VehicleWheels), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleWheels_MetaData), NewProp_VehicleWheels_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ContactModMeshes_Inner = { "ContactModMeshes", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ContactModMeshes = { "ContactModMeshes", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, ContactModMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactModMeshes_MetaData), NewProp_ContactModMeshes_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->ReplicateMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement = { "ReplicateMovement", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReplicateMovement_MetaData), NewProp_ReplicateMovement_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->SyncLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation = { "SyncLocation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncLocation_MetaData), NewProp_SyncLocation_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->SyncRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation = { "SyncRotation", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SyncRotation_MetaData), NewProp_SyncRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate = { "NetSendRate", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, NetSendRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSendRate_MetaData), NewProp_NetSendRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind = { "NetTimeBehind", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, NetTimeBehind), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetTimeBehind_MetaData), NewProp_NetTimeBehind_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart = { "NetLerpStart", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, NetLerpStart), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetLerpStart_MetaData), NewProp_NetLerpStart_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance = { "NetPositionTolerance", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, NetPositionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetPositionTolerance_MetaData), NewProp_NetPositionTolerance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing = { "NetSmoothing", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, NetSmoothing), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetSmoothing_MetaData), NewProp_NetSmoothing_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState = { "RestState", "OnRep_RestState", (EPropertyFlags)0x0020080100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, RestState), Z_Construct_UScriptStruct_FNetState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestState_MetaData), NewProp_RestState_MetaData) }; // 282958839
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->NetworkAtRest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest = { "NetworkAtRest", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetworkAtRest_MetaData), NewProp_NetworkAtRest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer = { "RestTimer", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, RestTimer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestTimer_MetaData), NewProp_RestTimer_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ChaosDeltaTime = { "ChaosDeltaTime", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, ChaosDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaosDeltaTime_MetaData), NewProp_ChaosDeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_InputsForPhysicsThread = { "InputsForPhysicsThread", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, InputsForPhysicsThread), Z_Construct_UScriptStruct_FAVS_Inputs, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputsForPhysicsThread_MetaData), NewProp_InputsForPhysicsThread_MetaData) }; // 839082944
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugTraces_Inner = { "DebugTraces", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugTraces = { "DebugTraces", nullptr, (EPropertyFlags)0x0020088000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, DebugTraces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugTraces_MetaData), NewProp_DebugTraces_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugForces_Inner = { "DebugForces", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDebugForce, METADATA_PARAMS(0, nullptr) }; // 3314495036
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugForces = { "DebugForces", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, DebugForces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugForces_MetaData), NewProp_DebugForces_MetaData) }; // 3314495036
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh = { "VehicleMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, VehicleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleMesh_MetaData), NewProp_VehicleMesh_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->PassiveMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode = { "PassiveMode", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveMode_MetaData), NewProp_PassiveMode_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->PassiveTickGatekeeping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping = { "PassiveTickGatekeeping", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PassiveTickGatekeeping_MetaData), NewProp_PassiveTickGatekeeping_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestVelocityThreshold = { "RestVelocityThreshold", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, RestVelocityThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestVelocityThreshold_MetaData), NewProp_RestVelocityThreshold_MetaData) };
void Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_LocalVehicleAtRest_SetBit(void* Obj)
{
	((AVehicleSystemBase*)Obj)->LocalVehicleAtRest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_LocalVehicleAtRest = { "LocalVehicleAtRest", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AVehicleSystemBase), &Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_LocalVehicleAtRest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalVehicleAtRest_MetaData), NewProp_LocalVehicleAtRest_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringFalloffCurve = { "SteeringFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringFalloffCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringFalloffCurve_MetaData), NewProp_SteeringFalloffCurve_MetaData) }; // 1495033350
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringInputSmoothing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringInputSmoothing = { "SteeringInputSmoothing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringInputSmoothing), Z_Construct_UEnum_VehicleSystemPlugin_SteeringSmoothingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringInputSmoothing_MetaData), NewProp_SteeringInputSmoothing_MetaData) }; // 2504325716
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed = { "SteeringSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringSpeed_MetaData), NewProp_SteeringSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringRecenterSpeed = { "SteeringRecenterSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, SteeringRecenterSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringRecenterSpeed_MetaData), NewProp_SteeringRecenterSpeed_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_Inner = { "Gears", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVehicleGear, METADATA_PARAMS(0, nullptr) }; // 2567676325
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears = { "Gears", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AVehicleSystemBase, Gears), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Gears_MetaData), NewProp_Gears_MetaData) }; // 2567676325
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleWheels_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleWheels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ContactModMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ContactModMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ReplicateMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SyncRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSendRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetTimeBehind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetLerpStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetPositionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_NetworkAtRest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_ChaosDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_InputsForPhysicsThread,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugTraces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugTraces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugForces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_DebugForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_VehicleMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_PassiveTickGatekeeping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_RestVelocityThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_LocalVehicleAtRest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringInputSmoothing_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringInputSmoothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_SteeringRecenterSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVehicleSystemBase_Statics::NewProp_Gears,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AVehicleSystemBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicleSystemBase_Statics::ClassParams = {
	&AVehicleSystemBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::PropPointers),
	0,
	0x009000A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleSystemBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AVehicleSystemBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AVehicleSystemBase()
{
	if (!Z_Registration_Info_UClass_AVehicleSystemBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicleSystemBase.OuterSingleton, Z_Construct_UClass_AVehicleSystemBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AVehicleSystemBase.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<AVehicleSystemBase>()
{
	return AVehicleSystemBase::StaticClass();
}
void AVehicleSystemBase::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_RestState(TEXT("RestState"));
	const bool bIsValid = true
		&& Name_RestState == ClassReps[(int32)ENetFields_Private::RestState].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AVehicleSystemBase"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleSystemBase);
AVehicleSystemBase::~AVehicleSystemBase() {}
// End Class AVehicleSystemBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ NetworkRoles_StaticEnum, TEXT("NetworkRoles"), &Z_Registration_Info_UEnum_NetworkRoles, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1772532876U) },
		{ SteeringSmoothingType_StaticEnum, TEXT("SteeringSmoothingType"), &Z_Registration_Info_UEnum_SteeringSmoothingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2504325716U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNetState::StaticStruct, Z_Construct_UScriptStruct_FNetState_Statics::NewStructOps, TEXT("NetState"), &Z_Registration_Info_UScriptStruct_NetState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNetState), 282958839U) },
		{ FVehicleGear::StaticStruct, Z_Construct_UScriptStruct_FVehicleGear_Statics::NewStructOps, TEXT("VehicleGear"), &Z_Registration_Info_UScriptStruct_VehicleGear, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVehicleGear), 2567676325U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AVehicleSystemBase, AVehicleSystemBase::StaticClass, TEXT("AVehicleSystemBase"), &Z_Registration_Info_UClass_AVehicleSystemBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicleSystemBase), 3378127291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_2679610882(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
