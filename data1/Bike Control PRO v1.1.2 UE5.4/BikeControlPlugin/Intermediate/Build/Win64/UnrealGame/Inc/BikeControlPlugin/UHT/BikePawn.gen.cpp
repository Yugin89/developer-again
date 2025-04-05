// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BikeControlPlugin/Public/BikePawn.h"
#include "../../Source/Runtime/Engine/Classes/Engine/HitResult.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBikePawn() {}
// Cross Module References
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
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enumerators[] = {
		{ "EWheelPosition::FRONT", (int64)EWheelPosition::FRONT },
		{ "EWheelPosition::REAR", (int64)EWheelPosition::REAR },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enum_MetaDataParams[] = {
		{ "FRONT.DisplayName", "Front" },
		{ "FRONT.Name", "EWheelPosition::FRONT" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "REAR.DisplayName", "Rear" },
		{ "REAR.Name", "EWheelPosition::REAR" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		"EWheelPosition",
		"EWheelPosition",
		Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_BikeControlPlugin_EWheelPosition()
	{
		if (!Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton, Z_Construct_UEnum_BikeControlPlugin_EWheelPosition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWheelPosition.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_restLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_restLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_travelDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_travelDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damper_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damper;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forceMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forceMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lastLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_damperForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damperForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_force;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSuspensionStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength = { "restLength", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, restLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_restLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist = { "travelDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, travelDist), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_travelDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper = { "damper", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, damper), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damper_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMax", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin = { "forceMin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, forceMin), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax = { "forceMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, forceMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_forceMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength_MetaData[] = {
		{ "Category", "Bike Parameters" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength = { "currentLength", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, currentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_currentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength = { "lastLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, lastLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_lastLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce = { "damperForce", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, damperForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_damperForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSuspensionStruct, force), METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewProp_force_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSuspensionStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"SuspensionStruct",
		sizeof(FSuspensionStruct),
		alignof(FSuspensionStruct),
		Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSuspensionStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSuspensionStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SuspensionStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tireWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tireWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rRR_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rRR;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wheelLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelUpdateLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_wheelUpdateLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_linearVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_linearVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_linearVelocityWorld_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_linearVelocityWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWheelContact_MetaData[];
#endif
		static void NewProp_bWheelContact_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWheelContact;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_deltaRotation_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inertia_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inertia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_driveTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_driveTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_longSlipVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_longSlipVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_brakeTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeTorque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relaxationLenghtFront_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_relaxationLenghtFront;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_relaxationLenghtSide_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_relaxationLenghtSide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slipPeak_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slipPeak;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slipAngleDyn_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slipAngleDyn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forceX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forceX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slip_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_slip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[];
#endif
		static void NewProp_bIsLocked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_absCapacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_absCapacity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_toSpeedMultiply_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_toSpeedMultiply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_speedFromWheelKMH_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_speedFromWheelKMH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sidePointNumber_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_sidePointNumber;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWheelStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWheelStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth = { "tireWidth", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, tireWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_tireWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass = { "mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, mass), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR = { "rRR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, rRR), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_rRR_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation = { "wheelLocation", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, wheelLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation = { "wheelUpdateLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, wheelUpdateLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_wheelUpdateLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity = { "linearVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, linearVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld = { "linearVelocityWorld", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, linearVelocityWorld), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_linearVelocityWorld_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_SetBit(void* Obj)
	{
		((FWheelStruct*)Obj)->bWheelContact = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact = { "bWheelContact", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWheelStruct), &Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bWheelContact_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation = { "deltaRotation", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, deltaRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_deltaRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia = { "inertia", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, inertia), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_inertia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, angularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_angularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque = { "driveTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, driveTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_driveTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity = { "longSlipVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, longSlipVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_longSlipVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque = { "brakeTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, brakeTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_brakeTorque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront = { "relaxationLenghtFront", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, relaxationLenghtFront), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtFront_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide = { "relaxationLenghtSide", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, relaxationLenghtSide), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_relaxationLenghtSide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak = { "slipPeak", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, slipPeak), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipPeak_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn = { "slipAngleDyn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, slipAngleDyn), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slipAngleDyn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX = { "forceX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, forceX), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_forceX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip = { "slip", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, slip), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_slip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_SetBit(void* Obj)
	{
		((FWheelStruct*)Obj)->bIsLocked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWheelStruct), &Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_bIsLocked_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity = { "absCapacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, absCapacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_absCapacity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply = { "toSpeedMultiply", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, toSpeedMultiply), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_toSpeedMultiply_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH = { "speedFromWheelKMH", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, speedFromWheelKMH), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_speedFromWheelKMH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber = { "sidePointNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWheelStruct, sidePointNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::NewProp_sidePointNumber_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWheelStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"WheelStruct",
		sizeof(FWheelStruct),
		alignof(FWheelStruct),
		Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWheelStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWheelStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton, Z_Construct_UScriptStruct_FWheelStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WheelStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_torqueCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_torqueCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idleRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_idleRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRPM_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRPM;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inertia_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_inertia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rpm_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rpm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_torque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_torque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_angularVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_angularVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_throttle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_throttle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_idleRpmRad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_idleRpmRad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxRpmRad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxRpmRad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startFriction_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_startFriction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frictionCoefficient_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frictionCoefficient;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effectiveTorque_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_effectiveTorque;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEngineStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEngineStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve = { "torqueCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, torqueCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torqueCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM = { "idleRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, idleRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM = { "maxRPM", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, maxRPM), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRPM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia = { "inertia", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, inertia), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_inertia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm = { "rpm", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, rpm), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_rpm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque = { "torque", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, torque), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_torque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity = { "angularVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, angularVelocity), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_angularVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle = { "throttle", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, throttle), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_throttle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad = { "idleRpmRad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, idleRpmRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_idleRpmRad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad = { "maxRpmRad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, maxRpmRad), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_maxRpmRad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction = { "startFriction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, startFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_startFriction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient = { "frictionCoefficient", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, frictionCoefficient), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_frictionCoefficient_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque = { "effectiveTorque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEngineStruct, effectiveTorque), METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::NewProp_effectiveTorque_MetaData)) };
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
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEngineStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"EngineStruct",
		sizeof(FEngineStruct),
		alignof(FEngineStruct),
		Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEngineStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEngineStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton, Z_Construct_UScriptStruct_FEngineStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EngineStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gearSpeedMaxArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gearSpeedMaxArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_gearSpeedMaxArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentGear_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_currentGear;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gearShiftTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gearShiftTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_targetGear_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_targetGear;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGearStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGearStruct>();
	}
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_Inner = { "gearSpeedMaxArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr = { "gearSpeedMaxArr", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGearStruct, gearSpeedMaxArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGearStruct, maxSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear = { "currentGear", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGearStruct, currentGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime = { "gearShiftTime", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGearStruct, gearShiftTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear = { "targetGear", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGearStruct, targetGear), METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearSpeedMaxArr,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_maxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_currentGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_gearShiftTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGearStruct_Statics::NewProp_targetGear,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGearStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"GearStruct",
		sizeof(FGearStruct),
		alignof(FGearStruct),
		Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGearStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGearStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGearStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton, Z_Construct_UScriptStruct_FGearStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GearStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tireSlipForceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tireSlipForceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tireSlipForceEnd2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tireSlipForceEnd2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_suspensionForceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_suspensionForceEnd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd = { "tireSlipForceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugStruct, tireSlipForceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2 = { "tireSlipForceEnd2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugStruct, tireSlipForceEnd2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd = { "suspensionForceEnd", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugStruct, suspensionForceEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_tireSlipForceEnd2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugStruct_Statics::NewProp_suspensionForceEnd,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"DebugStruct",
		sizeof(FDebugStruct),
		alignof(FDebugStruct),
		Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton, Z_Construct_UScriptStruct_FDebugStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_startV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_startV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_endV_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_endV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sphereSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_sphereSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugTraceStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV = { "startV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTraceStruct, startV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV = { "endV", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTraceStruct, endV), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize = { "sphereSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugTraceStruct, sphereSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_startV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_endV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewProp_sphereSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"DebugTraceStruct",
		sizeof(FDebugTraceStruct),
		alignof(FDebugTraceStruct),
		Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugTraceStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton, Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugTraceStruct.InnerSingleton;
	}
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
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_torqueMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_torqueMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_brakeBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeBias;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_handBrakeTorqueMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_handBrakeTorqueMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_brake_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_brake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontHandBrake_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frontHandBrake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearHandBrake_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rearHandBrake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBrakeStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "// Max Brake Power.\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Max Brake Power." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax = { "torqueMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, torqueMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias = { "brakeBias", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, brakeBias), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax = { "handBrakeTorqueMax", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, handBrakeTorqueMax), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake = { "brake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, brake), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake = { "frontHandBrake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, frontHandBrake), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake = { "rearHandBrake", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBrakeStruct, rearHandBrake), METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_torqueMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brakeBias,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_handBrakeTorqueMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_brake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_frontHandBrake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewProp_rearHandBrake,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBrakeStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
		nullptr,
		&NewStructOps,
		"BrakeStruct",
		sizeof(FBrakeStruct),
		alignof(FBrakeStruct),
		Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBrakeStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBrakeStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBrakeStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton, Z_Construct_UScriptStruct_FBrakeStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BrakeStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(ABikePawn::execGetEngineStatus)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bIsWorking);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetEngineStatus(Z_Param_Out_bIsWorking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execAddTurbo)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTurbo(Z_Param_axisValue);
		P_NATIVE_END;
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
	DEFINE_FUNCTION(ABikePawn::execAddFrontBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_GET_UBOOL(Z_Param_bSmoothBrake);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddFrontBrake(Z_Param_axisValue,Z_Param_bSmoothBrake);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execAddBrake)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddBrake(Z_Param_axisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execStopEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execStartEngine)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartEngine();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execSetGear)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_setGear);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetGear(Z_Param_setGear);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execShiftGearDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShiftGearDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execShiftGearUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShiftGearUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execAddRight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRight(Z_Param_axisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execAddForward)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_axisValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddForward(Z_Param_axisValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABikePawn::execPhysicsTick)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_substepDeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PhysicsTick_Implementation(Z_Param_substepDeltaTime);
		P_NATIVE_END;
	}
	struct BikePawn_eventAbsWheelEvent_Parms
	{
		int32 wheelIndex;
	};
	struct BikePawn_eventPhysicsTick_Parms
	{
		float substepDeltaTime;
	};
	struct BikePawn_eventTireBumpEvent_Parms
	{
		int32 tireIndex;
	};
	static FName NAME_ABikePawn_AbsWheelEvent = FName(TEXT("AbsWheelEvent"));
	void ABikePawn::AbsWheelEvent(int32 wheelIndex)
	{
		BikePawn_eventAbsWheelEvent_Parms Parms;
		Parms.wheelIndex=wheelIndex;
		ProcessEvent(FindFunctionChecked(NAME_ABikePawn_AbsWheelEvent),&Parms);
	}
	static FName NAME_ABikePawn_PhysicsTick = FName(TEXT("PhysicsTick"));
	void ABikePawn::PhysicsTick(float substepDeltaTime)
	{
		BikePawn_eventPhysicsTick_Parms Parms;
		Parms.substepDeltaTime=substepDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_ABikePawn_PhysicsTick),&Parms);
	}
	static FName NAME_ABikePawn_TireBumpEvent = FName(TEXT("TireBumpEvent"));
	void ABikePawn::TireBumpEvent(int32 tireIndex)
	{
		BikePawn_eventTireBumpEvent_Parms Parms;
		Parms.tireIndex=tireIndex;
		ProcessEvent(FindFunctionChecked(NAME_ABikePawn_TireBumpEvent),&Parms);
	}
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
	struct Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_wheelIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::NewProp_wheelIndex = { "wheelIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAbsWheelEvent_Parms, wheelIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::NewProp_wheelIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AbsWheelEvent", nullptr, nullptr, sizeof(BikePawn_eventAbsWheelEvent_Parms), Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AbsWheelEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AbsWheelEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddBrake_Statics
	{
		struct BikePawn_eventAddBrake_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddBrake_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddBrake_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddBrake", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::BikePawn_eventAddBrake_Parms), Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddForward_Statics
	{
		struct BikePawn_eventAddForward_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddForward_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddForward_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddForward_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddForward_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddForward_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddForward", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddForward_Statics::BikePawn_eventAddForward_Parms), Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddForward_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddForward_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddForward_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddForward()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddForward_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics
	{
		struct BikePawn_eventAddFrontBrake_Parms
		{
			float axisValue;
			bool bSmoothBrake;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static void NewProp_bSmoothBrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothBrake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddFrontBrake_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake_SetBit(void* Obj)
	{
		((BikePawn_eventAddFrontBrake_Parms*)Obj)->bSmoothBrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake = { "bSmoothBrake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventAddFrontBrake_Parms), &Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::NewProp_bSmoothBrake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddFrontBrake", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::BikePawn_eventAddFrontBrake_Parms), Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddFrontBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddFrontBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics
	{
		struct BikePawn_eventAddRearBrake_Parms
		{
			float axisValue;
			bool bSmoothBrake;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static void NewProp_bSmoothBrake_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSmoothBrake;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddRearBrake_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake_SetBit(void* Obj)
	{
		((BikePawn_eventAddRearBrake_Parms*)Obj)->bSmoothBrake = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake = { "bSmoothBrake", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventAddRearBrake_Parms), &Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_axisValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::NewProp_bSmoothBrake,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddRearBrake", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::BikePawn_eventAddRearBrake_Parms), Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddRearBrake()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddRearBrake_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddRight_Statics
	{
		struct BikePawn_eventAddRight_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddRight_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddRight_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddRight_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddRight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddRight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddRight", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddRight_Statics::BikePawn_eventAddRight_Parms), Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddRight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddRight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddRight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddRight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_AddTurbo_Statics
	{
		struct BikePawn_eventAddTurbo_Parms
		{
			float axisValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::NewProp_axisValue = { "axisValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventAddTurbo_Parms, axisValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::NewProp_axisValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "AddTurbo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::BikePawn_eventAddTurbo_Parms), Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_AddTurbo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_AddTurbo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics
	{
		struct BikePawn_eventGetEngineStatus_Parms
		{
			bool bIsWorking;
		};
		static void NewProp_bIsWorking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWorking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking_SetBit(void* Obj)
	{
		((BikePawn_eventGetEngineStatus_Parms*)Obj)->bIsWorking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking = { "bIsWorking", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventGetEngineStatus_Parms), &Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::NewProp_bIsWorking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "GetEngineStatus", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::BikePawn_eventGetEngineStatus_Parms), Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_GetEngineStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_GetEngineStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_substepDeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::NewProp_substepDeltaTime = { "substepDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventPhysicsTick_Parms, substepDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::NewProp_substepDeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Parameters" },
		{ "Comment", "// This event is called on every physics tick, including sub-steps.\n" },
		{ "DisplayName", "Physics Tick" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "This event is called on every physics tick, including sub-steps." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "PhysicsTick", nullptr, nullptr, sizeof(BikePawn_eventPhysicsTick_Parms), Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_PhysicsTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_PhysicsTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_SetGear_Statics
	{
		struct BikePawn_eventSetGear_Parms
		{
			int32 setGear;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_setGear;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_setGear = { "setGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventSetGear_Parms, setGear), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BikePawn_eventSetGear_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventSetGear_Parms), &Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_setGear,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_SetGear_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_SetGear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_SetGear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "SetGear", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_SetGear_Statics::BikePawn_eventSetGear_Parms), Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_SetGear_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_SetGear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_SetGear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_SetGear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_SetGear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics
	{
		struct BikePawn_eventShiftGearDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BikePawn_eventShiftGearDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventShiftGearDown_Parms), &Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "ShiftGearDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::BikePawn_eventShiftGearDown_Parms), Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_ShiftGearDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_ShiftGearDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics
	{
		struct BikePawn_eventShiftGearUp_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BikePawn_eventShiftGearUp_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(BikePawn_eventShiftGearUp_Parms), &Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "ShiftGearUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::BikePawn_eventShiftGearUp_Parms), Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_ShiftGearUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_ShiftGearUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_StartEngine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_StartEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_StartEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "StartEngine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_StartEngine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_StartEngine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_StartEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_StartEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_StopEngine_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_StopEngine_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_StopEngine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "StopEngine", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_StopEngine_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_StopEngine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_StopEngine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_StopEngine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics
	{
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_tireIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::NewProp_tireIndex = { "tireIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BikePawn_eventTireBumpEvent_Parms, tireIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::NewProp_tireIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Functions" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABikePawn, nullptr, "TireBumpEvent", nullptr, nullptr, sizeof(BikePawn_eventTireBumpEvent_Parms), Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABikePawn_TireBumpEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABikePawn_TireBumpEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABikePawn);
	UClass* Z_Construct_UClass_ABikePawn_NoRegister()
	{
		return ABikePawn::StaticClass();
	}
	struct Z_Construct_UClass_ABikePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BikeSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BikeSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PidCtrlComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PidCtrlComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PidPitchCtrlComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PidPitchCtrlComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontLinkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_frontLinkComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearLinkComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rearLinkComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelMeasureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_frontWheelMeasureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelMeasureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rearWheelMeasureComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelWidthSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_frontWheelWidthSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelWidthSphere_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rearWheelWidthSphere;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFPS_MetaData[];
#endif
		static void NewProp_bShowFPS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFPS;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTelemetry_MetaData[];
#endif
		static void NewProp_bDebugTelemetry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTelemetry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[];
#endif
		static void NewProp_bDebugTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugForces_MetaData[];
#endif
		static void NewProp_bDebugForces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugForces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugWheels_MetaData[];
#endif
		static void NewProp_bDebugWheels_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugWheels;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontSuspensionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_frontSuspensionParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearSuspensionParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rearSuspensionParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_suspensionsArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_suspensionsArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_suspensionsArr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_wheelsArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelsArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_wheelsArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_steeringAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseMovingAxis_MetaData[];
#endif
		static void NewProp_bUseMovingAxis_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMovingAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSphereTrace_MetaData[];
#endif
		static void NewProp_bUseSphereTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSphereTrace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseComplexTrace_MetaData[];
#endif
		static void NewProp_bUseComplexTrace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseComplexTrace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResultsArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResultsArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_hitResultsArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_engineSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_engineSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gearBoxSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gearBoxSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_brakeSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_brakeSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontWheelParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_frontWheelParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearWheelParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_rearWheelParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_additionalSidePoints_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_additionalSidePoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_axisStep_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_axisStep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tireTraceCorrect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_tireTraceCorrect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_smoothSidePointsSelect_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_smoothSidePointsSelect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSteeringAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSteeringAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnalogController_MetaData[];
#endif
		static void NewProp_bUseAnalogController_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnalogController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringAngleBySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringAngleBySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringSpeedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bikeAngleSteeringCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bikeAngleSteeringCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringHelpMultiplyBySpeed_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringHelpMultiplyBySpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideForceFromSpeedCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideForceFromSpeedCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_steeringMultiplyCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_steeringMultiplyCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAirControl_MetaData[];
#endif
		static void NewProp_bAirControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRollAirControl_MetaData[];
#endif
		static void NewProp_bRollAirControl_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRollAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minSpeedAirControl_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minSpeedAirControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pidRollControlMaxPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pidRollControlMaxPitch;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pidRollControlMaxRoll_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pidRollControlMaxRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maneuveringCenterMass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_maneuveringCenterMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_defaultCenterMass_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_defaultCenterMass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bikeForwardVelocity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bikeForwardVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bikeForwardSpeedKMH_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bikeForwardSpeedKMH;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBurnDetected_MetaData[];
#endif
		static void NewProp_bIsBurnDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBurnDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_burnTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_burnTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBikeInitialized_MetaData[];
#endif
		static void NewProp_bIsBikeInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBikeInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsReverseDetected_MetaData[];
#endif
		static void NewProp_bIsReverseDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsReverseDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bodyRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_bodyRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subStepDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_subStepDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pawnTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pawnTransform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_linksArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_linksArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_linksArr;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_wheelPositionArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_wheelPositionArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_wheelPositionArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_forwardAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_forwardAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rightAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_brakeAxisValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_brakeAxisValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_turboValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_turboValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontSelected_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_frontSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearSelected_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_rearSelected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frontDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rearDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rearDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentDeltaTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_currentDeltaTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_changeGear_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_changeGear_Handle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pidReset_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_pidReset_Handle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTelemetryArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugTelemetryArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_debugTelemetryArr;
		static const UECodeGen_Private::FStructPropertyParams NewProp_debugTraceArr_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_debugTraceArr_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_debugTraceArr;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsWheelieDetected_MetaData[];
#endif
		static void NewProp_bIsWheelieDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWheelieDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsStoppieDetected_MetaData[];
#endif
		static void NewProp_bIsStoppieDetected_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsStoppieDetected;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEngineWorking_MetaData[];
#endif
		static void NewProp_bIsEngineWorking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEngineWorking;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_flyPitch_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_flyPitch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABikePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABikePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABikePawn_AbsWheelEvent, "AbsWheelEvent" }, // 3902959349
		{ &Z_Construct_UFunction_ABikePawn_AddBrake, "AddBrake" }, // 1312888063
		{ &Z_Construct_UFunction_ABikePawn_AddForward, "AddForward" }, // 4003068748
		{ &Z_Construct_UFunction_ABikePawn_AddFrontBrake, "AddFrontBrake" }, // 3103670194
		{ &Z_Construct_UFunction_ABikePawn_AddRearBrake, "AddRearBrake" }, // 226098259
		{ &Z_Construct_UFunction_ABikePawn_AddRight, "AddRight" }, // 2362304891
		{ &Z_Construct_UFunction_ABikePawn_AddTurbo, "AddTurbo" }, // 1094143134
		{ &Z_Construct_UFunction_ABikePawn_GetEngineStatus, "GetEngineStatus" }, // 2767260758
		{ &Z_Construct_UFunction_ABikePawn_PhysicsTick, "PhysicsTick" }, // 3115464416
		{ &Z_Construct_UFunction_ABikePawn_SetGear, "SetGear" }, // 3404901868
		{ &Z_Construct_UFunction_ABikePawn_ShiftGearDown, "ShiftGearDown" }, // 551099649
		{ &Z_Construct_UFunction_ABikePawn_ShiftGearUp, "ShiftGearUp" }, // 1097477653
		{ &Z_Construct_UFunction_ABikePawn_StartEngine, "StartEngine" }, // 1773070130
		{ &Z_Construct_UFunction_ABikePawn_StopEngine, "StopEngine" }, // 3688382763
		{ &Z_Construct_UFunction_ABikePawn_TireBumpEvent, "TireBumpEvent" }, // 4130331255
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "BikePawn.h" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "//************************************************************************\n// Component                                                                  \n//************************************************************************\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Component" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh = { "BikeSkeletalMesh", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, BikeSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_BikeSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent = { "PidCtrlComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, PidCtrlComponent), Z_Construct_UClass_UPIDCtrlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_PidCtrlComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent = { "PidPitchCtrlComponent", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, PidPitchCtrlComponent), Z_Construct_UClass_UPIDCtrlComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_PidPitchCtrlComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "Comment", "//************************************************************************\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent = { "frontLinkComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontLinkComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontLinkComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent = { "rearLinkComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearLinkComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearLinkComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent = { "steeringComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent = { "frontWheelMeasureComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontWheelMeasureComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelMeasureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent = { "rearWheelMeasureComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearWheelMeasureComponent), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelMeasureComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere = { "frontWheelWidthSphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontWheelWidthSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelWidthSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere_MetaData[] = {
		{ "Category", "Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere = { "rearWheelWidthSphere", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearWheelWidthSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelWidthSphere_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "Comment", "//////////////////////////////////// *** DEBUG ***/////////////////////////////////////////\n///\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "*** DEBUG ***" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bShowFPS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS = { "bShowFPS", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bShowFPS_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bDebugTelemetry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry = { "bDebugTelemetry", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTelemetry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bDebugTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bDebugForces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces = { "bDebugForces", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugForces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_MetaData[] = {
		{ "Category", "Bike Parameters - Debug" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bDebugWheels = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels = { "bDebugWheels", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bDebugWheels_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters = { "frontSuspensionParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontSuspensionParameters), Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSuspensionParameters_MetaData)) }; // 2540881142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters = { "rearSuspensionParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearSuspensionParameters), Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSuspensionParameters_MetaData)) }; // 2540881142
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_Inner = { "suspensionsArr", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSuspensionStruct, METADATA_PARAMS(nullptr, 0) }; // 2540881142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr = { "suspensionsArr", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, suspensionsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_suspensionsArr_MetaData)) }; // 2540881142
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_Inner = { "wheelsArr", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(nullptr, 0) }; // 3618438950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr = { "wheelsArr", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, wheelsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelsArr_MetaData)) }; // 3618438950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle = { "steeringAngle", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringAngle), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bUseMovingAxis = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis = { "bUseMovingAxis", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseMovingAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bUseSphereTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace = { "bUseSphereTrace", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseSphereTrace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bUseComplexTrace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace = { "bUseComplexTrace", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseComplexTrace_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_Inner = { "hitResultsArr", nullptr, (EPropertyFlags)0x0000008000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_MetaData[] = {
		{ "Category", "Bike Parameters - Suspension" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr = { "hitResultsArr", nullptr, (EPropertyFlags)0x0010008000020815, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, hitResultsArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_hitResultsArr_MetaData)) }; // 1287526515
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Engine" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////\n///\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings = { "engineSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, engineSettings), Z_Construct_UScriptStruct_FEngineStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_engineSettings_MetaData)) }; // 2984173588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Gearbox" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings = { "gearBoxSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, gearBoxSettings), Z_Construct_UScriptStruct_FGearStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_gearBoxSettings_MetaData)) }; // 3980816282
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings_MetaData[] = {
		{ "Category", "Bike Parameters - Brake" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings = { "brakeSettings", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, brakeSettings), Z_Construct_UScriptStruct_FBrakeStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeSettings_MetaData)) }; // 1588330417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "Comment", "///////////////////////////////////////////////////////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters = { "frontWheelParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontWheelParameters), Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontWheelParameters_MetaData)) }; // 3618438950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters = { "rearWheelParameters", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearWheelParameters), Z_Construct_UScriptStruct_FWheelStruct, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearWheelParameters_MetaData)) }; // 3618438950
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints = { "additionalSidePoints", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, additionalSidePoints), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_additionalSidePoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep_MetaData[] = {
		{ "Category", "Bike Parameters - Wheel" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep = { "axisStep", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, axisStep), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_axisStep_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect_MetaData[] = {
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect = { "tireTraceCorrect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, tireTraceCorrect), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_tireTraceCorrect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect_MetaData[] = {
		{ "Comment", "//\x09UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Wheel\", meta=(ClampMin = 0))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect = { "smoothSidePointsSelect", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, smoothSidePointsSelect), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_smoothSidePointsSelect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ClampMin", "0.000000" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle = { "maxSteeringAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, maxSteeringAngle), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_maxSteeringAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bUseAnalogController = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController = { "bUseAnalogController", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bUseAnalogController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed = { "steeringAngleBySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringAngleBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringAngleBySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve = { "steeringSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve = { "bikeAngleSteeringCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, bikeAngleSteeringCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeAngleSteeringCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed = { "steeringHelpMultiplyBySpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringHelpMultiplyBySpeed), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringHelpMultiplyBySpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve = { "sideForceFromSpeedCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, sideForceFromSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_sideForceFromSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve = { "steeringMultiplyCurve", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, steeringMultiplyCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_steeringMultiplyCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "Comment", "// Helps for jumping. The mtocycle remains in the same Pitch position as before the jump.\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Helps for jumping. The mtocycle remains in the same Pitch position as before the jump." },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bAirControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl = { "bAirControl", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_MetaData[] = {
		{ "Category", "Bike Parameters - Control" },
		{ "Comment", "// Continue the motorcycle to balance the roll axis even if both wheels do not touch the surface.\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Continue the motorcycle to balance the roll axis even if both wheels do not touch the surface." },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bRollAirControl = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl = { "bRollAirControl", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bRollAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl_MetaData[] = {
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Control\", meta = (ClampMin = 0, ClampMax = 100), meta = (EditCondition = \"bAirControl\", EditConditionHides))\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Control\", meta = (ClampMin = 0, ClampMax = 100), meta = (EditCondition = \"bAirControl\", EditConditionHides))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl = { "minSpeedAirControl", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, minSpeedAirControl), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_minSpeedAirControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch = { "pidRollControlMaxPitch", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, pidRollControlMaxPitch), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxPitch_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll_MetaData[] = {
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant - PID\", meta=(ClampMin = 1))" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll = { "pidRollControlMaxRoll", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, pidRollControlMaxRoll), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidRollControlMaxRoll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass_MetaData[] = {
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass = { "maneuveringCenterMass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, maneuveringCenterMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_maneuveringCenterMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass_MetaData[] = {
		{ "Comment", "// UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = \"Bike Parameters - Assistant\")" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass = { "defaultCenterMass", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, defaultCenterMass), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_defaultCenterMass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity = { "bikeForwardVelocity", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, bikeForwardVelocity), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH = { "bikeForwardSpeedKMH", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, bikeForwardSpeedKMH), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bikeForwardSpeedKMH_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsBurnDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected = { "bIsBurnDetected", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBurnDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime = { "burnTime", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, burnTime), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_burnTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsBikeInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized = { "bIsBikeInitialized", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsBikeInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_MetaData[] = {
		{ "Category", "Bike Parameters - Telemetry" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsReverseDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected = { "bIsReverseDetected", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsReverseDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent = { "bodyRootComponent", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, bodyRootComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bodyRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime = { "subStepDeltaTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, subStepDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_subStepDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform = { "pawnTransform", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, pawnTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_pawnTransform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_Inner = { "linksArr", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_MetaData[] = {
		{ "Comment", "// Front and Rear links.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Front and Rear links." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr = { "linksArr", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, linksArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_linksArr_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_Inner = { "wheelPositionArr", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_MetaData[] = {
		{ "Comment", "// Front and Rear Wheel.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Front and Rear Wheel." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr = { "wheelPositionArr", nullptr, (EPropertyFlags)0x0040008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, wheelPositionArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_wheelPositionArr_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue_MetaData[] = {
		{ "Comment", "// Input\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Input" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue = { "forwardAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, forwardAxisValue), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_forwardAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue = { "rightAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rightAxisValue), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rightAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue = { "brakeAxisValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, brakeAxisValue), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_brakeAxisValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue = { "turboValue", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, turboValue), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_turboValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected_MetaData[] = {
		{ "Comment", "///////////////// Find Additional Point\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
		{ "ToolTip", "Find Additional Point" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected = { "frontSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontSelected), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected = { "rearSelected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearSelected), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearSelected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance = { "frontDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, frontDistance), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_frontDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance = { "rearDistance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, rearDistance), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_rearDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime_MetaData[] = {
		{ "Comment", "////////////////////////////////////////\n" },
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime = { "currentDeltaTime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, currentDeltaTime), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_currentDeltaTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle = { "changeGear_Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, changeGear_Handle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_changeGear_Handle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle = { "pidReset_Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, pidReset_Handle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_pidReset_Handle_MetaData)) }; // 3633724737
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_Inner = { "debugTelemetryArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDebugStruct, METADATA_PARAMS(nullptr, 0) }; // 322966631
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr = { "debugTelemetryArr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, debugTelemetryArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTelemetryArr_MetaData)) }; // 322966631
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_Inner = { "debugTraceArr", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDebugTraceStruct, METADATA_PARAMS(nullptr, 0) }; // 3973888232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr = { "debugTraceArr", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, debugTraceArr), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_debugTraceArr_MetaData)) }; // 3973888232
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsWheelieDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected = { "bIsWheelieDetected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsWheelieDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsStoppieDetected = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected = { "bIsStoppieDetected", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsStoppieDetected_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	void Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_SetBit(void* Obj)
	{
		((ABikePawn*)Obj)->bIsEngineWorking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking = { "bIsEngineWorking", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ABikePawn), &Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_bIsEngineWorking_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch_MetaData[] = {
		{ "ModuleRelativePath", "Public/BikePawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch = { "flyPitch", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABikePawn, flyPitch), METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::NewProp_flyPitch_MetaData)) };
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABikePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABikePawn>::IsAbstract,
	};
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
		METADATA_PARAMS(Z_Construct_UClass_ABikePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABikePawn_Statics::Class_MetaDataParams))
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
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::EnumInfo[] = {
		{ EWheelPosition_StaticEnum, TEXT("EWheelPosition"), &Z_Registration_Info_UEnum_EWheelPosition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2935048927U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ScriptStructInfo[] = {
		{ FSuspensionStruct::StaticStruct, Z_Construct_UScriptStruct_FSuspensionStruct_Statics::NewStructOps, TEXT("SuspensionStruct"), &Z_Registration_Info_UScriptStruct_SuspensionStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSuspensionStruct), 2540881142U) },
		{ FWheelStruct::StaticStruct, Z_Construct_UScriptStruct_FWheelStruct_Statics::NewStructOps, TEXT("WheelStruct"), &Z_Registration_Info_UScriptStruct_WheelStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWheelStruct), 3618438950U) },
		{ FEngineStruct::StaticStruct, Z_Construct_UScriptStruct_FEngineStruct_Statics::NewStructOps, TEXT("EngineStruct"), &Z_Registration_Info_UScriptStruct_EngineStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEngineStruct), 2984173588U) },
		{ FGearStruct::StaticStruct, Z_Construct_UScriptStruct_FGearStruct_Statics::NewStructOps, TEXT("GearStruct"), &Z_Registration_Info_UScriptStruct_GearStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGearStruct), 3980816282U) },
		{ FDebugStruct::StaticStruct, Z_Construct_UScriptStruct_FDebugStruct_Statics::NewStructOps, TEXT("DebugStruct"), &Z_Registration_Info_UScriptStruct_DebugStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugStruct), 322966631U) },
		{ FDebugTraceStruct::StaticStruct, Z_Construct_UScriptStruct_FDebugTraceStruct_Statics::NewStructOps, TEXT("DebugTraceStruct"), &Z_Registration_Info_UScriptStruct_DebugTraceStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugTraceStruct), 3973888232U) },
		{ FBrakeStruct::StaticStruct, Z_Construct_UScriptStruct_FBrakeStruct_Statics::NewStructOps, TEXT("BrakeStruct"), &Z_Registration_Info_UScriptStruct_BrakeStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBrakeStruct), 1588330417U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABikePawn, ABikePawn::StaticClass, TEXT("ABikePawn"), &Z_Registration_Info_UClass_ABikePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABikePawn), 1482077903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_1191219020(TEXT("/Script/BikeControlPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
