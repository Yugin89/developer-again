// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleSystemFunctions.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UPrimitiveComponent;
struct FLinearColor;
#ifdef VEHICLESYSTEMPLUGIN_VehicleSystemFunctions_generated_h
#error "VehicleSystemFunctions.generated.h already included, missing '#pragma once' in VehicleSystemFunctions.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleSystemFunctions_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_RPC_WRAPPERS \
	DECLARE_FUNCTION(execAVS_ChaosGetVelocityAtLocation); \
	DECLARE_FUNCTION(execAVS_SetWheelAngularVelocity); \
	DECLARE_FUNCTION(execAVS_ChaosSetWheelAngularVelocity); \
	DECLARE_FUNCTION(execAVS_ChaosAddWheelTorque); \
	DECLARE_FUNCTION(execAVS_ChaosBrakes); \
	DECLARE_FUNCTION(execAVS_ChaosAddTorque); \
	DECLARE_FUNCTION(execAVS_ChaosAddForceAtLocation); \
	DECLARE_FUNCTION(execAVS_ChaosAddForce); \
	DECLARE_FUNCTION(execAVS_GetChaosTransform); \
	DECLARE_FUNCTION(execLinearSpeedToRads); \
	DECLARE_FUNCTION(execRunningInGame_World); \
	DECLARE_FUNCTION(execRunningInPIE_World); \
	DECLARE_FUNCTION(execRunningInEditor_World); \
	DECLARE_FUNCTION(execPrintToScreenWithTag); \
	DECLARE_FUNCTION(execGetMeshCenterOfMass); \
	DECLARE_FUNCTION(execGetWheelInertia); \
	DECLARE_FUNCTION(execGetMeshRadius); \
	DECLARE_FUNCTION(execGetMeshDiameter); \
	DECLARE_FUNCTION(execSetAngularDamping); \
	DECLARE_FUNCTION(execSetLinearDamping); \
	DECLARE_FUNCTION(execGetUnrealEngineVersion); \
	DECLARE_FUNCTION(execGetPluginVersion);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_INCLASS \
private: \
	static void StaticRegisterNativesUVehicleSystemFunctions(); \
	friend struct Z_Construct_UClass_UVehicleSystemFunctions_Statics; \
public: \
	DECLARE_CLASS(UVehicleSystemFunctions, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleSystemFunctions)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVehicleSystemFunctions(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVehicleSystemFunctions) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleSystemFunctions); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleSystemFunctions); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleSystemFunctions(UVehicleSystemFunctions&&); \
	UVehicleSystemFunctions(const UVehicleSystemFunctions&); \
public: \
	NO_API virtual ~UVehicleSystemFunctions();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_28_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_RPC_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_INCLASS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h_31_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class UVehicleSystemFunctions>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemFunctions_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
