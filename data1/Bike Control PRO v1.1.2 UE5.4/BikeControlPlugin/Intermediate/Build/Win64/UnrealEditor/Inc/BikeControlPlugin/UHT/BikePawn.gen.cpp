// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BikeControlPlugin/Public/BikePawn.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBikePawn() {}

// Begin Cross Module References
BIKECONTROLPLUGIN_API UClass* Z_Construct_UClass_ABikePawn();
BIKECONTROLPLUGIN_API UClass* Z_Construct_UClass_ABikePawn_NoRegister();
BIKECONTROLPLUGIN_API UClass* Z_Construct_UClass_UPIDCtrlComponent_NoRegister();
BIKECONTROLPLUGIN_API UEnum* Z_Construct_UEnum_BikeControlPlugin_EWheelPosition();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FBrakeStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDebugStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FDebugTraceStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FEngineStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FGearStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStruct();
BIKECONTROLPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FWheelStruct();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_BikeControlPlugin();
// End Cross Module References

// Begin Enum EWheelPosition
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWheelPosition;
static UEnum* EWheelPosition_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWheelPosition.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWheelPosition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("EWheelPosition"));
	}
	return Z_Registration_Info_UEnum_EWheelPosition.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UEnum* StaticEnum<EWheelPosition>()
{
	return EWheelPosition_StaticEnum();
}
struct Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FRONT.DisplayName", "Front" },
		{ "FRONT.Name", "EWheelPosition::FRONT" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "REAR.DisplayName", "Rear" },
		{ "REAR.Name", "EWheelPosition::REAR" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWheelPosition::FRONT", (int64)EWheelPosition::FRONT },
		{ "EWheelPosition::REAR", (int64)EWheelPosition::REAR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	"EWheelPosition",
	"EWheelPosition",
	Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_BikeControlPlugin_EWheelPosition()
{
	if (!Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton, Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton;
}
// End Enum EWheelPosition

// Begin ScriptStruct FSuspensionStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SuspensionStruct;
class UScriptStruct* FSuspensionStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSuspensionStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("SuspensionStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SuspensionStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FSuspensionStruct>()
{
	return FSuspensionStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSuspensionStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_restLength_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_travelDist_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damper_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forceMin_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMax", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forceMax_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentLength_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_lastLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_damperForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_restLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_travelDist;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damper;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_forceMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_forceMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_lastLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_damperForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_force;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuspensionStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength = { "restLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, restLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_restLength_MetaData), NewProp_restLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist = { "travelDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, travelDist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_travelDist_MetaData), NewProp_travelDist_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_stiffness_MetaData), NewProp_stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper = { "damper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, damper), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damper_MetaData), NewProp_damper_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin = { "forceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, forceMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forceMin_MetaData), NewProp_forceMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax = { "forceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, forceMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forceMax_MetaData), NewProp_forceMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength = { "currentLength", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, currentLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentLength_MetaData), NewProp_currentLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength = { "lastLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, lastLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_lastLength_MetaData), NewProp_lastLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce = { "damperForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, damperForce), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_damperForce_MetaData), NewProp_damperForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSuspensionStruct, force), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_force_MetaData), NewProp_force_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"SuspensionStruct",
	Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers),
	sizeof(FSuspensionStruct),
	alignof(FSuspensionStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton;
}
// End ScriptStruct FSuspensionStruct

// Begin ScriptStruct FWheelStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WheelStruct;
class UScriptStruct* FWheelStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWheelStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("WheelStruct"));
	}
	return Z_Registration_Info_UScriptStruct_WheelStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FWheelStruct>()
{
	return FWheelStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWheelStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tireWidth_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rRR_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wheelLocation_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wheelUpdateLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_linearVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_linearVelocityWorld_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWheelContact_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_deltaRotation_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inertia_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_driveTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_longSlipVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brakeTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_relaxationLenghtFront_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_relaxationLenghtSide_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slipPeak_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slipAngleDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forceX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_slip_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_absCapacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_toSpeedMultiply_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_speedFromWheelKMH_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sidePointNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tireWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_mass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rRR;
	static const UECodeGen_Private::FStructPropertyParams NewProp_wheelLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_wheelUpdateLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_linearVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_linearVelocityWorld;
	static void NewProp_bWheelContact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWheelContact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inertia;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_angularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_driveTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_longSlipVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeTorque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_relaxationLenghtFront;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_relaxationLenghtSide;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slipPeak;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_slipAngleDyn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_forceX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_slip;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_absCapacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_toSpeedMultiply;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_speedFromWheelKMH;
	static const UECodeGen_Private::FIntPropertyParams NewProp_sidePointNumber;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_radius_MetaData), NewProp_radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth = { "tireWidth", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, tireWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tireWidth_MetaData), NewProp_tireWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, mass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_mass_MetaData), NewProp_mass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR = { "rRR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, rRR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rRR_MetaData), NewProp_rRR_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation = { "wheelLocation", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, wheelLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wheelLocation_MetaData), NewProp_wheelLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation = { "wheelUpdateLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, wheelUpdateLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wheelUpdateLocation_MetaData), NewProp_wheelUpdateLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity = { "linearVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, linearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_linearVelocity_MetaData), NewProp_linearVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld = { "linearVelocityWorld", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, linearVelocityWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_linearVelocityWorld_MetaData), NewProp_linearVelocityWorld_MetaData) };
void Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_SetBit(void* Obj)
{
	((FWheelStruct*)Obj)->bWheelContact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact = { "bWheelContact", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStruct), &Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWheelContact_MetaData), NewProp_bWheelContact_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation = { "deltaRotation", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, deltaRotation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_deltaRotation_MetaData), NewProp_deltaRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia = { "inertia", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, inertia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inertia_MetaData), NewProp_inertia_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, angularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_angularVelocity_MetaData), NewProp_angularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque = { "driveTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, driveTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_driveTorque_MetaData), NewProp_driveTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity = { "longSlipVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, longSlipVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_longSlipVelocity_MetaData), NewProp_longSlipVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque = { "brakeTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, brakeTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brakeTorque_MetaData), NewProp_brakeTorque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront = { "relaxationLenghtFront", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, relaxationLenghtFront), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_relaxationLenghtFront_MetaData), NewProp_relaxationLenghtFront_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide = { "relaxationLenghtSide", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, relaxationLenghtSide), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_relaxationLenghtSide_MetaData), NewProp_relaxationLenghtSide_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak = { "slipPeak", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, slipPeak), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slipPeak_MetaData), NewProp_slipPeak_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn = { "slipAngleDyn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, slipAngleDyn), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slipAngleDyn_MetaData), NewProp_slipAngleDyn_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX = { "forceX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, forceX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forceX_MetaData), NewProp_forceX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip = { "slip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, slip), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_slip_MetaData), NewProp_slip_MetaData) };
void Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((FWheelStruct*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FWheelStruct), &Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity = { "absCapacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, absCapacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_absCapacity_MetaData), NewProp_absCapacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply = { "toSpeedMultiply", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, toSpeedMultiply), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_toSpeedMultiply_MetaData), NewProp_toSpeedMultiply_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH = { "speedFromWheelKMH", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, speedFromWheelKMH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_speedFromWheelKMH_MetaData), NewProp_speedFromWheelKMH_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber = { "sidePointNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWheelStruct, sidePointNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sidePointNumber_MetaData), NewProp_sidePointNumber_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"WheelStruct",
	Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers),
	sizeof(FWheelStruct),
	alignof(FWheelStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWheelStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton, Z_Construct_UScriptStruct_FWheelStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton;
}
// End ScriptStruct FWheelStruct

// Begin ScriptStruct FEngineStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EngineStruct;
class UScriptStruct* FEngineStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEngineStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("EngineStruct"));
	}
	return Z_Registration_Info_UScriptStruct_EngineStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FEngineStruct>()
{
	return FEngineStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FEngineStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_torqueCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_idleRPM_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxRPM_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_inertia_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rpm_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_torque_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_throttle_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_idleRpmRad_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxRpmRad_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startFriction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frictionCoefficient_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_effectiveTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_torqueCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_idleRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRPM;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_inertia;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rpm;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_torque;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_angularVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_throttle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_idleRpmRad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRpmRad;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_startFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frictionCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_effectiveTorque;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve = { "torqueCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, torqueCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_torqueCurve_MetaData), NewProp_torqueCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM = { "idleRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, idleRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_idleRPM_MetaData), NewProp_idleRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM = { "maxRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, maxRPM), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxRPM_MetaData), NewProp_maxRPM_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia = { "inertia", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, inertia), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_inertia_MetaData), NewProp_inertia_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm = { "rpm", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, rpm), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rpm_MetaData), NewProp_rpm_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque = { "torque", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, torque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_torque_MetaData), NewProp_torque_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, angularVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_angularVelocity_MetaData), NewProp_angularVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle = { "throttle", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, throttle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_throttle_MetaData), NewProp_throttle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad = { "idleRpmRad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, idleRpmRad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_idleRpmRad_MetaData), NewProp_idleRpmRad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad = { "maxRpmRad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, maxRpmRad), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxRpmRad_MetaData), NewProp_maxRpmRad_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction = { "startFriction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, startFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startFriction_MetaData), NewProp_startFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient = { "frictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, frictionCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frictionCoefficient_MetaData), NewProp_frictionCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque = { "effectiveTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FEngineStruct, effectiveTorque), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_effectiveTorque_MetaData), NewProp_effectiveTorque_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"EngineStruct",
	Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers),
	sizeof(FEngineStruct),
	alignof(FEngineStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FEngineStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton, Z_Construct_UScriptStruct_FEngineStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton;
}
// End ScriptStruct FEngineStruct

// Begin ScriptStruct FGearStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GearStruct;
class UScriptStruct* FGearStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GearStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GearStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGearStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("GearStruct"));
	}
	return Z_Registration_Info_UScriptStruct_GearStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FGearStruct>()
{
	return FGearStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGearStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gearSpeedMaxArr_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentGear_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gearShiftTime_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_targetGear_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gearSpeedMaxArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_gearSpeedMaxArr;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_currentGear;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_gearShiftTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_targetGear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGearStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_Inner = { "gearSpeedMaxArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr = { "gearSpeedMaxArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearStruct, gearSpeedMaxArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gearSpeedMaxArr_MetaData), NewProp_gearSpeedMaxArr_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearStruct, maxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSpeed_MetaData), NewProp_maxSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear = { "currentGear", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearStruct, currentGear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentGear_MetaData), NewProp_currentGear_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime = { "gearShiftTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearStruct, gearShiftTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gearShiftTime_MetaData), NewProp_gearShiftTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear = { "targetGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGearStruct, targetGear), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_targetGear_MetaData), NewProp_targetGear_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGearStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"GearStruct",
	Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers),
	sizeof(FGearStruct),
	alignof(FGearStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGearStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGearStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton, Z_Construct_UScriptStruct_FGearStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton;
}
// End ScriptStruct FGearStruct

// Begin ScriptStruct FDebugStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugStruct;
class UScriptStruct* FDebugStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("DebugStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DebugStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FDebugStruct>()
{
	return FDebugStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tireSlipForceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tireSlipForceEnd2_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suspensionForceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_tireSlipForceEnd;
	static const UECodeGen_Private::FStructPropertyParams NewProp_tireSlipForceEnd2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_suspensionForceEnd;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd = { "tireSlipForceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugStruct, tireSlipForceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tireSlipForceEnd_MetaData), NewProp_tireSlipForceEnd_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2 = { "tireSlipForceEnd2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugStruct, tireSlipForceEnd2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tireSlipForceEnd2_MetaData), NewProp_tireSlipForceEnd2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd = { "suspensionForceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugStruct, suspensionForceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suspensionForceEnd_MetaData), NewProp_suspensionForceEnd_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"DebugStruct",
	Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers),
	sizeof(FDebugStruct),
	alignof(FDebugStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton, Z_Construct_UScriptStruct_FDebugStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton;
}
// End ScriptStruct FDebugStruct

// Begin ScriptStruct FDebugTraceStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugTraceStruct;
class UScriptStruct* FDebugTraceStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugTraceStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugTraceStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugTraceStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("DebugTraceStruct"));
	}
	return Z_Registration_Info_UScriptStruct_DebugTraceStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FDebugTraceStruct>()
{
	return FDebugTraceStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDebugTraceStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_startV_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_endV_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sphereSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_startV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_endV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_sphereSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugTraceStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV = { "startV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugTraceStruct, startV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_startV_MetaData), NewProp_startV_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV = { "endV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugTraceStruct, endV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_endV_MetaData), NewProp_endV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize = { "sphereSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDebugTraceStruct, sphereSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sphereSize_MetaData), NewProp_sphereSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"DebugTraceStruct",
	Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers),
	sizeof(FDebugTraceStruct),
	alignof(FDebugTraceStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDebugTraceStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton, Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton;
}
// End ScriptStruct FDebugTraceStruct

// Begin ScriptStruct FBrakeStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BrakeStruct;
class UScriptStruct* FBrakeStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrakeStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BrakeStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBrakeStruct, (UObject*)Z_Construct_UPackage__Script_BikeControlPlugin(), TEXT("BrakeStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BrakeStruct.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<FBrakeStruct>()
{
	return FBrakeStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBrakeStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_torqueMax_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Max Brake Power.\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max Brake Power." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brakeBias_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_handBrakeTorqueMax_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontHandBrake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearHandBrake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_torqueMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_handBrakeTorqueMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_brake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frontHandBrake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rearHandBrake;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrakeStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax = { "torqueMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, torqueMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_torqueMax_MetaData), NewProp_torqueMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias = { "brakeBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, brakeBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brakeBias_MetaData), NewProp_brakeBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax = { "handBrakeTorqueMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, handBrakeTorqueMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_handBrakeTorqueMax_MetaData), NewProp_handBrakeTorqueMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake = { "brake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, brake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brake_MetaData), NewProp_brake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake = { "frontHandBrake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, frontHandBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontHandBrake_MetaData), NewProp_frontHandBrake_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake = { "rearHandBrake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBrakeStruct, rearHandBrake), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearHandBrake_MetaData), NewProp_rearHandBrake_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	nullptr,
	&NewStructOps,
	"BrakeStruct",
	Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers),
	sizeof(FBrakeStruct),
	alignof(FBrakeStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBrakeStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBrakeStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton, Z_Construct_UScriptStruct_FBrakeStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton;
}
// End ScriptStruct FBrakeStruct

// Begin Class ABikePawn Function AbsWheelEvent
struct BikePawn_eventAbsWheelEvent_Parms
{
	int32 wheelIndex;
};
static FName NAME_ABikePawn_AbsWheelEvent = FName(TEXT("AbsWheelEvent"));
void ABikePawn::AbsWheelEvent(int32 wheelIndex)
{
	BikePawn_eventAbsWheelEvent_Parms Parms;
	Parms.wheelIndex=wheelIndex;
	ProcessEvent(FindFunctionChecked(NAME_ABikePawn_AbsWheelEvent),&Parms);
}
struct Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_wheelIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::NewProp_wheelIndex = { "wheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAbsWheelEvent_Parms, wheelIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::NewProp_wheelIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AbsWheelEvent", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers), sizeof(BikePawn_eventAbsWheelEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(BikePawn_eventAbsWheelEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AbsWheelEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABikePawn Function AbsWheelEvent

// Begin Class ABikePawn Function AddBrake
struct Z_Construct_UFunction_ABikePawn_AddBrake_Statics
{
	struct BikePawn_eventAddBrake_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddBrake_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddBrake_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddBrake", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::BikePawn_eventAddBrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddBrake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::BikePawn_eventAddBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddBrake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddBrake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddBrake(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddBrake

// Begin Class ABikePawn Function AddForward
struct Z_Construct_UFunction_ABikePawn_AddForward_Statics
{
	struct BikePawn_eventAddForward_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddForward_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddForward_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddForward_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddForward", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddForward_Statics::BikePawn_eventAddForward_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddForward_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddForward_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddForward_Statics::BikePawn_eventAddForward_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddForward()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddForward_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddForward)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddForward(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddForward

// Begin Class ABikePawn Function AddFrontBrake
struct Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics
{
	struct BikePawn_eventAddFrontBrake_Parms
	{
		float axisValue;
		bool bSmoothBrake;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static void NewProp_bSmoothBrake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothBrake;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddFrontBrake_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake_SetBit(void* Obj)
{
	((BikePawn_eventAddFrontBrake_Parms*)Obj)->bSmoothBrake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake = { "bSmoothBrake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventAddFrontBrake_Parms), &Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_axisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddFrontBrake", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::BikePawn_eventAddFrontBrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::BikePawn_eventAddFrontBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddFrontBrake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddFrontBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_GET_UBOOL(Z_Param_bSmoothBrake);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddFrontBrake(Z_Param_axisValue,Z_Param_bSmoothBrake);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddFrontBrake

// Begin Class ABikePawn Function AddRearBrake
struct Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics
{
	struct BikePawn_eventAddRearBrake_Parms
	{
		float axisValue;
		bool bSmoothBrake;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static void NewProp_bSmoothBrake_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothBrake;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddRearBrake_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake_SetBit(void* Obj)
{
	((BikePawn_eventAddRearBrake_Parms*)Obj)->bSmoothBrake = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake = { "bSmoothBrake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventAddRearBrake_Parms), &Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_axisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddRearBrake", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::BikePawn_eventAddRearBrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::BikePawn_eventAddRearBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddRearBrake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddRearBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_GET_UBOOL(Z_Param_bSmoothBrake);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRearBrake(Z_Param_axisValue,Z_Param_bSmoothBrake);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddRearBrake

// Begin Class ABikePawn Function AddRight
struct Z_Construct_UFunction_ABikePawn_AddRight_Statics
{
	struct BikePawn_eventAddRight_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddRight_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRight_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddRight", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddRight_Statics::BikePawn_eventAddRight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRight_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddRight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddRight_Statics::BikePawn_eventAddRight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddRight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddRight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddRight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRight(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddRight

// Begin Class ABikePawn Function AddTurbo
struct Z_Construct_UFunction_ABikePawn_AddTurbo_Statics
{
	struct BikePawn_eventAddTurbo_Parms
	{
		float axisValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventAddTurbo_Parms, axisValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::NewProp_axisValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddTurbo", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::BikePawn_eventAddTurbo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::BikePawn_eventAddTurbo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_AddTurbo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execAddTurbo)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddTurbo(Z_Param_axisValue);
	P_NATIVE_END;
}
// End Class ABikePawn Function AddTurbo

// Begin Class ABikePawn Function GetEngineStatus
struct Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics
{
	struct BikePawn_eventGetEngineStatus_Parms
	{
		bool bIsWorking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsWorking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking_SetBit(void* Obj)
{
	((BikePawn_eventGetEngineStatus_Parms*)Obj)->bIsWorking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking = { "bIsWorking", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventGetEngineStatus_Parms), &Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "GetEngineStatus", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::BikePawn_eventGetEngineStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::BikePawn_eventGetEngineStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_GetEngineStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execGetEngineStatus)
{
	P_GET_UBOOL_REF(Z_Param_Out_bIsWorking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetEngineStatus(Z_Param_Out_bIsWorking);
	P_NATIVE_END;
}
// End Class ABikePawn Function GetEngineStatus

// Begin Class ABikePawn Function PhysicsTick
struct BikePawn_eventPhysicsTick_Parms
{
	float substepDeltaTime;
};
static FName NAME_ABikePawn_PhysicsTick = FName(TEXT("PhysicsTick"));
void ABikePawn::PhysicsTick(float substepDeltaTime)
{
	BikePawn_eventPhysicsTick_Parms Parms;
	Parms.substepDeltaTime=substepDeltaTime;
	ProcessEvent(FindFunctionChecked(NAME_ABikePawn_PhysicsTick),&Parms);
}
struct Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Parameters" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// This event is called on every physics tick, including sub-steps.\n" },
#endif
		{ "DisplayName", "Physics Tick" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event is called on every physics tick, including sub-steps." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_substepDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::NewProp_substepDeltaTime = { "substepDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventPhysicsTick_Parms, substepDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::NewProp_substepDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "PhysicsTick", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers), sizeof(BikePawn_eventPhysicsTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(BikePawn_eventPhysicsTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_PhysicsTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execPhysicsTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_substepDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PhysicsTick_Implementation(Z_Param_substepDeltaTime);
	P_NATIVE_END;
}
// End Class ABikePawn Function PhysicsTick

// Begin Class ABikePawn Function SetGear
struct Z_Construct_UFunction_ABikePawn_SetGear_Statics
{
	struct BikePawn_eventSetGear_Parms
	{
		int32 setGear;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_setGear;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_setGear = { "setGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventSetGear_Parms, setGear), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BikePawn_eventSetGear_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventSetGear_Parms), &Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_setGear,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "SetGear", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_SetGear_Statics::BikePawn_eventSetGear_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_SetGear_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_SetGear_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_SetGear_Statics::BikePawn_eventSetGear_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_SetGear()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_SetGear_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execSetGear)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_setGear);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetGear(Z_Param_setGear);
	P_NATIVE_END;
}
// End Class ABikePawn Function SetGear

// Begin Class ABikePawn Function ShiftGearDown
struct Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics
{
	struct BikePawn_eventShiftGearDown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BikePawn_eventShiftGearDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventShiftGearDown_Parms), &Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "ShiftGearDown", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::BikePawn_eventShiftGearDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::BikePawn_eventShiftGearDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_ShiftGearDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execShiftGearDown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShiftGearDown();
	P_NATIVE_END;
}
// End Class ABikePawn Function ShiftGearDown

// Begin Class ABikePawn Function ShiftGearUp
struct Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics
{
	struct BikePawn_eventShiftGearUp_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BikePawn_eventShiftGearUp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BikePawn_eventShiftGearUp_Parms), &Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "ShiftGearUp", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::BikePawn_eventShiftGearUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::BikePawn_eventShiftGearUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_ShiftGearUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execShiftGearUp)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ShiftGearUp();
	P_NATIVE_END;
}
// End Class ABikePawn Function ShiftGearUp

// Begin Class ABikePawn Function StartEngine
struct Z_Construct_UFunction_ABikePawn_StartEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_StartEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "StartEngine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_StartEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_StartEngine_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABikePawn_StartEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_StartEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execStartEngine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartEngine();
	P_NATIVE_END;
}
// End Class ABikePawn Function StartEngine

// Begin Class ABikePawn Function StopEngine
struct Z_Construct_UFunction_ABikePawn_StopEngine_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_StopEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "StopEngine", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_StopEngine_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_StopEngine_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABikePawn_StopEngine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_StopEngine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABikePawn::execStopEngine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopEngine();
	P_NATIVE_END;
}
// End Class ABikePawn Function StopEngine

// Begin Class ABikePawn Function TireBumpEvent
struct BikePawn_eventTireBumpEvent_Parms
{
	int32 tireIndex;
};
static FName NAME_ABikePawn_TireBumpEvent = FName(TEXT("TireBumpEvent"));
void ABikePawn::TireBumpEvent(int32 tireIndex)
{
	BikePawn_eventTireBumpEvent_Parms Parms;
	Parms.tireIndex=tireIndex;
	ProcessEvent(FindFunctionChecked(NAME_ABikePawn_TireBumpEvent),&Parms);
}
struct Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_tireIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::NewProp_tireIndex = { "tireIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BikePawn_eventTireBumpEvent_Parms, tireIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::NewProp_tireIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "TireBumpEvent", nullptr, nullptr, Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers), sizeof(BikePawn_eventTireBumpEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(BikePawn_eventTireBumpEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABikePawn_TireBumpEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ABikePawn Function TireBumpEvent

// Begin Class ABikePawn
void ABikePawn::StaticRegisterNativesABikePawn()
{
	UClass* Class = ABikePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBrake", &ABikePawn::execAddBrake },
		{ "AddForward", &ABikePawn::execAddForward },
		{ "AddFrontBrake", &ABikePawn::execAddFrontBrake },
		{ "AddRearBrake", &ABikePawn::execAddRearBrake },
		{ "AddRight", &ABikePawn::execAddRight },
		{ "AddTurbo", &ABikePawn::execAddTurbo },
		{ "GetEngineStatus", &ABikePawn::execGetEngineStatus },
		{ "PhysicsTick", &ABikePawn::execPhysicsTick },
		{ "SetGear", &ABikePawn::execSetGear },
		{ "ShiftGearDown", &ABikePawn::execShiftGearDown },
		{ "ShiftGearUp", &ABikePawn::execShiftGearUp },
		{ "StartEngine", &ABikePawn::execStartEngine },
		{ "StopEngine", &ABikePawn::execStopEngine },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABikePawn);
UClass* Z_Construct_UClass_ABikePawn_NoRegister()
{
	return ABikePawn::StaticClass();
}
struct Z_Construct_UClass_ABikePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BikePawn.h" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BikeSkeletalMesh_MetaData[] = {
		{ "Category", "Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//************************************************************************\n// Component                                                                  \n//************************************************************************\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PidCtrlComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PidPitchCtrlComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontLinkComponent_MetaData[] = {
		{ "Category", "Component" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//************************************************************************\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearLinkComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelMeasureComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelMeasureComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelWidthSphere_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelWidthSphere_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//////////////////////////////////// *** DEBUG ***/////////////////////////////////////////\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "*** DEBUG ***" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTelemetry_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugForces_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugWheels_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontSuspensionParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearSuspensionParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_suspensionsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wheelsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringAngle_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovingAxis_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphereTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexTrace_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_hitResultsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_engineSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////\n///\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_gearBoxSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brakeSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_additionalSidePoints_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_axisStep_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_tireTraceCorrect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_smoothSidePointsSelect_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\x09UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maxSteeringAngle_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnalogController_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringAngleBySpeed_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringSpeedCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bikeAngleSteeringCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringHelpMultiplyBySpeed_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_sideForceFromSpeedCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_steeringMultiplyCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAirControl_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Helps for jumping. The mtocycle remains in the same Pitch position as before the jump.\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helps for jumping. The mtocycle remains in the same Pitch position as before the jump." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRollAirControl_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Continue the motorcycle to balance the roll axis even if both wheels do not touch the surface.\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Continue the motorcycle to balance the roll axis even if both wheels do not touch the surface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_minSpeedAirControl_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Control\", meta = (ClampMin = 0, ClampMax = 100), meta = (EditCondition = \"bAirControl\", EditConditionHides))\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Control\", meta = (ClampMin = 0, ClampMax = 100), meta = (EditCondition = \"bAirControl\", EditConditionHides))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pidRollControlMaxPitch_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pidRollControlMaxRoll_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_maneuveringCenterMass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_defaultCenterMass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bikeForwardVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bikeForwardSpeedKMH_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBurnDetected_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_burnTime_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBikeInitialized_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsReverseDetected_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bodyRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_subStepDeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_linksArr_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Front and Rear links.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front and Rear links." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_wheelPositionArr_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Front and Rear Wheel.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front and Rear Wheel." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_forwardAxisValue_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rightAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_brakeAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_turboValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontSelected_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "///////////////// Find Additional Point\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find Additional Point" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_frontDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_rearDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_currentDeltaTime_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "////////////////////////////////////////\n" },
#endif
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_changeGear_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pidReset_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debugTelemetryArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_debugTraceArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsWheelieDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppieDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsEngineWorking_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_flyPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BikeSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PidCtrlComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PidPitchCtrlComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_frontLinkComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rearLinkComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_frontWheelMeasureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rearWheelMeasureComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_frontWheelWidthSphere;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_rearWheelWidthSphere;
	static void NewProp_bShowFPS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
	static void NewProp_bDebugTelemetry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTelemetry;
	static void NewProp_bDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
	static void NewProp_bDebugForces_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugForces;
	static void NewProp_bDebugWheels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugWheels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_frontSuspensionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rearSuspensionParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_suspensionsArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_suspensionsArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_wheelsArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_wheelsArr;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_steeringAngle;
	static void NewProp_bUseMovingAxis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovingAxis;
	static void NewProp_bUseSphereTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphereTrace;
	static void NewProp_bUseComplexTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexTrace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_hitResultsArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_hitResultsArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_engineSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_gearBoxSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_brakeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_frontWheelParameters;
	static const UECodeGen_Private::FStructPropertyParams NewProp_rearWheelParameters;
	static const UECodeGen_Private::FIntPropertyParams NewProp_additionalSidePoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_axisStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_tireTraceCorrect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothSidePointsSelect;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSteeringAngle;
	static void NewProp_bUseAnalogController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnalogController;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringAngleBySpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringSpeedCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bikeAngleSteeringCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringHelpMultiplyBySpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_sideForceFromSpeedCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringMultiplyCurve;
	static void NewProp_bAirControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirControl;
	static void NewProp_bRollAirControl_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_minSpeedAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pidRollControlMaxPitch;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_pidRollControlMaxRoll;
	static const UECodeGen_Private::FStructPropertyParams NewProp_maneuveringCenterMass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_defaultCenterMass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bikeForwardVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_bikeForwardSpeedKMH;
	static void NewProp_bIsBurnDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBurnDetected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_burnTime;
	static void NewProp_bIsBikeInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBikeInitialized;
	static void NewProp_bIsReverseDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReverseDetected;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyRootComponent;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_subStepDeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pawnTransform;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_linksArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_linksArr;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_wheelPositionArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_wheelPositionArr;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rightAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeAxisValue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_turboValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_frontSelected;
	static const UECodeGen_Private::FIntPropertyParams NewProp_rearSelected;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_frontDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_rearDistance;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_currentDeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_changeGear_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_pidReset_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_debugTelemetryArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_debugTelemetryArr;
	static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceArr_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_debugTraceArr;
	static void NewProp_bIsWheelieDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWheelieDetected;
	static void NewProp_bIsStoppieDetected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppieDetected;
	static void NewProp_bIsEngineWorking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEngineWorking;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_flyPitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABikePawn_AbsWheelEvent, "AbsWheelEvent" }, // 360652285
		{ &Z_Construct_UFunction_ABikePawn_AddBrake, "AddBrake" }, // 3780927012
		{ &Z_Construct_UFunction_ABikePawn_AddForward, "AddForward" }, // 2563928028
		{ &Z_Construct_UFunction_ABikePawn_AddFrontBrake, "AddFrontBrake" }, // 925524518
		{ &Z_Construct_UFunction_ABikePawn_AddRearBrake, "AddRearBrake" }, // 81640448
		{ &Z_Construct_UFunction_ABikePawn_AddRight, "AddRight" }, // 3337865946
		{ &Z_Construct_UFunction_ABikePawn_AddTurbo, "AddTurbo" }, // 3160928346
		{ &Z_Construct_UFunction_ABikePawn_GetEngineStatus, "GetEngineStatus" }, // 356427724
		{ &Z_Construct_UFunction_ABikePawn_PhysicsTick, "PhysicsTick" }, // 3182305863
		{ &Z_Construct_UFunction_ABikePawn_SetGear, "SetGear" }, // 3907924053
		{ &Z_Construct_UFunction_ABikePawn_ShiftGearDown, "ShiftGearDown" }, // 3015037362
		{ &Z_Construct_UFunction_ABikePawn_ShiftGearUp, "ShiftGearUp" }, // 3508300782
		{ &Z_Construct_UFunction_ABikePawn_StartEngine, "StartEngine" }, // 1931448690
		{ &Z_Construct_UFunction_ABikePawn_StopEngine, "StopEngine" }, // 134294488
		{ &Z_Construct_UFunction_ABikePawn_TireBumpEvent, "TireBumpEvent" }, // 2860188278
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABikePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh = { "BikeSkeletalMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, BikeSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BikeSkeletalMesh_MetaData), NewProp_BikeSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent = { "PidCtrlComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, PidCtrlComponent), Z_Construct_UClass_UPIDCtrlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PidCtrlComponent_MetaData), NewProp_PidCtrlComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent = { "PidPitchCtrlComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, PidPitchCtrlComponent), Z_Construct_UClass_UPIDCtrlComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PidPitchCtrlComponent_MetaData), NewProp_PidPitchCtrlComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent = { "frontLinkComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontLinkComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontLinkComponent_MetaData), NewProp_frontLinkComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent = { "rearLinkComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearLinkComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearLinkComponent_MetaData), NewProp_rearLinkComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent = { "steeringComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringComponent_MetaData), NewProp_steeringComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent = { "frontWheelMeasureComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontWheelMeasureComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontWheelMeasureComponent_MetaData), NewProp_frontWheelMeasureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent = { "rearWheelMeasureComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearWheelMeasureComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearWheelMeasureComponent_MetaData), NewProp_rearWheelMeasureComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere = { "frontWheelWidthSphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontWheelWidthSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontWheelWidthSphere_MetaData), NewProp_frontWheelWidthSphere_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere = { "rearWheelWidthSphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearWheelWidthSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearWheelWidthSphere_MetaData), NewProp_rearWheelWidthSphere_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bShowFPS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowFPS_MetaData), NewProp_bShowFPS_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bDebugTelemetry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry = { "bDebugTelemetry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTelemetry_MetaData), NewProp_bDebugTelemetry_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTrace_MetaData), NewProp_bDebugTrace_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bDebugForces = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces = { "bDebugForces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugForces_MetaData), NewProp_bDebugForces_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bDebugWheels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels = { "bDebugWheels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugWheels_MetaData), NewProp_bDebugWheels_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters = { "frontSuspensionParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontSuspensionParameters), Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontSuspensionParameters_MetaData), NewProp_frontSuspensionParameters_MetaData) }; // 3651203174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters = { "rearSuspensionParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearSuspensionParameters), Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearSuspensionParameters_MetaData), NewProp_rearSuspensionParameters_MetaData) }; // 3651203174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_Inner = { "suspensionsArr", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(0, nullptr) }; // 3651203174
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr = { "suspensionsArr", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, suspensionsArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_suspensionsArr_MetaData), NewProp_suspensionsArr_MetaData) }; // 3651203174
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_Inner = { "wheelsArr", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(0, nullptr) }; // 2028966533
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr = { "wheelsArr", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, wheelsArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wheelsArr_MetaData), NewProp_wheelsArr_MetaData) }; // 2028966533
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle = { "steeringAngle", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringAngle_MetaData), NewProp_steeringAngle_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bUseMovingAxis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis = { "bUseMovingAxis", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMovingAxis_MetaData), NewProp_bUseMovingAxis_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bUseSphereTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace = { "bUseSphereTrace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSphereTrace_MetaData), NewProp_bUseSphereTrace_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bUseComplexTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace = { "bUseComplexTrace", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseComplexTrace_MetaData), NewProp_bUseComplexTrace_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_Inner = { "hitResultsArr", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr = { "hitResultsArr", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, hitResultsArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_hitResultsArr_MetaData), NewProp_hitResultsArr_MetaData) }; // 4100991306
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings = { "engineSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, engineSettings), Z_Construct_UScriptStruct_FEngineStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_engineSettings_MetaData), NewProp_engineSettings_MetaData) }; // 2775858194
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings = { "gearBoxSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, gearBoxSettings), Z_Construct_UScriptStruct_FGearStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_gearBoxSettings_MetaData), NewProp_gearBoxSettings_MetaData) }; // 3887526120
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings = { "brakeSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, brakeSettings), Z_Construct_UScriptStruct_FBrakeStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brakeSettings_MetaData), NewProp_brakeSettings_MetaData) }; // 365250314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters = { "frontWheelParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontWheelParameters), Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontWheelParameters_MetaData), NewProp_frontWheelParameters_MetaData) }; // 2028966533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters = { "rearWheelParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearWheelParameters), Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearWheelParameters_MetaData), NewProp_rearWheelParameters_MetaData) }; // 2028966533
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints = { "additionalSidePoints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, additionalSidePoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_additionalSidePoints_MetaData), NewProp_additionalSidePoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep = { "axisStep", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, axisStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_axisStep_MetaData), NewProp_axisStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect = { "tireTraceCorrect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, tireTraceCorrect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_tireTraceCorrect_MetaData), NewProp_tireTraceCorrect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect = { "smoothSidePointsSelect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, smoothSidePointsSelect), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_smoothSidePointsSelect_MetaData), NewProp_smoothSidePointsSelect_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle = { "maxSteeringAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, maxSteeringAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maxSteeringAngle_MetaData), NewProp_maxSteeringAngle_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bUseAnalogController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController = { "bUseAnalogController", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAnalogController_MetaData), NewProp_bUseAnalogController_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed = { "steeringAngleBySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringAngleBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringAngleBySpeed_MetaData), NewProp_steeringAngleBySpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve = { "steeringSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringSpeedCurve_MetaData), NewProp_steeringSpeedCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve = { "bikeAngleSteeringCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, bikeAngleSteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bikeAngleSteeringCurve_MetaData), NewProp_bikeAngleSteeringCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed = { "steeringHelpMultiplyBySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringHelpMultiplyBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringHelpMultiplyBySpeed_MetaData), NewProp_steeringHelpMultiplyBySpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve = { "sideForceFromSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, sideForceFromSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_sideForceFromSpeedCurve_MetaData), NewProp_sideForceFromSpeedCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve = { "steeringMultiplyCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, steeringMultiplyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_steeringMultiplyCurve_MetaData), NewProp_steeringMultiplyCurve_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bAirControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl = { "bAirControl", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAirControl_MetaData), NewProp_bAirControl_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bRollAirControl = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl = { "bRollAirControl", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRollAirControl_MetaData), NewProp_bRollAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl = { "minSpeedAirControl", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, minSpeedAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_minSpeedAirControl_MetaData), NewProp_minSpeedAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch = { "pidRollControlMaxPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, pidRollControlMaxPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pidRollControlMaxPitch_MetaData), NewProp_pidRollControlMaxPitch_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll = { "pidRollControlMaxRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, pidRollControlMaxRoll), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pidRollControlMaxRoll_MetaData), NewProp_pidRollControlMaxRoll_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass = { "maneuveringCenterMass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, maneuveringCenterMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_maneuveringCenterMass_MetaData), NewProp_maneuveringCenterMass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass = { "defaultCenterMass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, defaultCenterMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_defaultCenterMass_MetaData), NewProp_defaultCenterMass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity = { "bikeForwardVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, bikeForwardVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bikeForwardVelocity_MetaData), NewProp_bikeForwardVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH = { "bikeForwardSpeedKMH", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, bikeForwardSpeedKMH), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bikeForwardSpeedKMH_MetaData), NewProp_bikeForwardSpeedKMH_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsBurnDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected = { "bIsBurnDetected", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBurnDetected_MetaData), NewProp_bIsBurnDetected_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime = { "burnTime", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, burnTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_burnTime_MetaData), NewProp_burnTime_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsBikeInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized = { "bIsBikeInitialized", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBikeInitialized_MetaData), NewProp_bIsBikeInitialized_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsReverseDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected = { "bIsReverseDetected", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsReverseDetected_MetaData), NewProp_bIsReverseDetected_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent = { "bodyRootComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, bodyRootComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bodyRootComponent_MetaData), NewProp_bodyRootComponent_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime = { "subStepDeltaTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, subStepDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_subStepDeltaTime_MetaData), NewProp_subStepDeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform = { "pawnTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, pawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pawnTransform_MetaData), NewProp_pawnTransform_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_Inner = { "linksArr", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr = { "linksArr", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, linksArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_linksArr_MetaData), NewProp_linksArr_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_Inner = { "wheelPositionArr", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr = { "wheelPositionArr", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, wheelPositionArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_wheelPositionArr_MetaData), NewProp_wheelPositionArr_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue = { "forwardAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, forwardAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_forwardAxisValue_MetaData), NewProp_forwardAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue = { "rightAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rightAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rightAxisValue_MetaData), NewProp_rightAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue = { "brakeAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, brakeAxisValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_brakeAxisValue_MetaData), NewProp_brakeAxisValue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue = { "turboValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, turboValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_turboValue_MetaData), NewProp_turboValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected = { "frontSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontSelected_MetaData), NewProp_frontSelected_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected = { "rearSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearSelected), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearSelected_MetaData), NewProp_rearSelected_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance = { "frontDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, frontDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_frontDistance_MetaData), NewProp_frontDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance = { "rearDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, rearDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_rearDistance_MetaData), NewProp_rearDistance_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime = { "currentDeltaTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, currentDeltaTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_currentDeltaTime_MetaData), NewProp_currentDeltaTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle = { "changeGear_Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, changeGear_Handle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_changeGear_Handle_MetaData), NewProp_changeGear_Handle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle = { "pidReset_Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, pidReset_Handle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pidReset_Handle_MetaData), NewProp_pidReset_Handle_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_Inner = { "debugTelemetryArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDebugStruct, METADATA_PARAMS(0, nullptr) }; // 3188853617
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr = { "debugTelemetryArr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, debugTelemetryArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debugTelemetryArr_MetaData), NewProp_debugTelemetryArr_MetaData) }; // 3188853617
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_Inner = { "debugTraceArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDebugTraceStruct, METADATA_PARAMS(0, nullptr) }; // 3926717105
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr = { "debugTraceArr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, debugTraceArr), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_debugTraceArr_MetaData), NewProp_debugTraceArr_MetaData) }; // 3926717105
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsWheelieDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected = { "bIsWheelieDetected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsWheelieDetected_MetaData), NewProp_bIsWheelieDetected_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsStoppieDetected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected = { "bIsStoppieDetected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsStoppieDetected_MetaData), NewProp_bIsStoppieDetected_MetaData) };
void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_SetBit(void* Obj)
{
	((ABikePawn*)Obj)->bIsEngineWorking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking = { "bIsEngineWorking", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsEngineWorking_MetaData), NewProp_bIsEngineWorking_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch = { "flyPitch", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABikePawn, flyPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_flyPitch_MetaData), NewProp_flyPitch_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABikePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABikePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABikePawn_Statics::ClassParams = {
	&ABikePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABikePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ABikePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABikePawn()
{
	if (!Z_Registration_Info_UClass_ABikePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABikePawn.OuterSingleton, Z_Construct_UClass_ABikePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABikePawn.OuterSingleton;
}
template<> BIKECONTROLPLUGIN_API UClass* StaticClass<ABikePawn>()
{
	return ABikePawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABikePawn);
ABikePawn::~ABikePawn() {}
// End Class ABikePawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EWheelPosition_StaticEnum, TEXT("EWheelPosition"), &Z_Registration_Info_UEnum_EWheelPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3227074244U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSuspensionStruct::StaticStruct, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewStructOps, TEXT("SuspensionStruct"), &Z_Registration_Info_UScriptStruct_SuspensionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuspensionStruct), 3651203174U) },
		{ FWheelStruct::StaticStruct, Z_Construct_UScriptStruct_FWheelStruct_Statics::NewStructOps, TEXT("WheelStruct"), &Z_Registration_Info_UScriptStruct_WheelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheelStruct), 2028966533U) },
		{ FEngineStruct::StaticStruct, Z_Construct_UScriptStruct_FEngineStruct_Statics::NewStructOps, TEXT("EngineStruct"), &Z_Registration_Info_UScriptStruct_EngineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineStruct), 2775858194U) },
		{ FGearStruct::StaticStruct, Z_Construct_UScriptStruct_FGearStruct_Statics::NewStructOps, TEXT("GearStruct"), &Z_Registration_Info_UScriptStruct_GearStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGearStruct), 3887526120U) },
		{ FDebugStruct::StaticStruct, Z_Construct_UScriptStruct_FDebugStruct_Statics::NewStructOps, TEXT("DebugStruct"), &Z_Registration_Info_UScriptStruct_DebugStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugStruct), 3188853617U) },
		{ FDebugTraceStruct::StaticStruct, Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewStructOps, TEXT("DebugTraceStruct"), &Z_Registration_Info_UScriptStruct_DebugTraceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugTraceStruct), 3926717105U) },
		{ FBrakeStruct::StaticStruct, Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewStructOps, TEXT("BrakeStruct"), &Z_Registration_Info_UScriptStruct_BrakeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrakeStruct), 365250314U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABikePawn, ABikePawn::StaticClass, TEXT("ABikePawn"), &Z_Registration_Info_UClass_ABikePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABikePawn), 1188389779U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_3321108798(TEXT("/Script/BikeControlPlugin"),
	Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
