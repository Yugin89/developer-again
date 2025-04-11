// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleWheelBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
enum class EWheelMode : uint8;
#ifdef VEHICLESYSTEMPLUGIN_VehicleWheelBase_generated_h
#error "VehicleWheelBase.generated.h already included, missing '#pragma once' in VehicleWheelBase.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleWheelBase_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugForce_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FDebugForce>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_42_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAVS_Inputs_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAVS_Inputs>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_63_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAVS1_Wheel_State_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAVS1_Wheel_State>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_74_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAVS1_Wheel_Output_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAVS1_Wheel_Output>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_94_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAVS1_Wheel_Config_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FAVS1_Wheel_Config>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetWheelMode_Implementation(EWheelMode NewMode); \
	DECLARE_FUNCTION(execGetSteeringAngle); \
	DECLARE_FUNCTION(execGetSteeringInput); \
	DECLARE_FUNCTION(execSetSteeringInput); \
	DECLARE_FUNCTION(execSetPassiveMode); \
	DECLARE_FUNCTION(execGetWheelVelocity); \
	DECLARE_FUNCTION(execGetWheelAngVelInRadians); \
	DECLARE_FUNCTION(execGetIsSimulatingSuspension); \
	DECLARE_FUNCTION(execSetIsSimulatingSuspension); \
	DECLARE_FUNCTION(execGetIsAttached); \
	DECLARE_FUNCTION(execGetWheelMode); \
	DECLARE_FUNCTION(execGetHasContact); \
	DECLARE_FUNCTION(execResetWheelCollisions); \
	DECLARE_FUNCTION(execSetWheelMeshComponent); \
	DECLARE_FUNCTION(execSetRaycastWheelMass); \
	DECLARE_FUNCTION(execSetWheelMode); \
	DECLARE_FUNCTION(execUpdateLocalTransformCache); \
	DECLARE_FUNCTION(execUpdateWheelRadius);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVehicleWheelBase(); \
	friend struct Z_Construct_UClass_UVehicleWheelBase_Statics; \
public: \
	DECLARE_CLASS(UVehicleWheelBase, USceneComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVehicleWheelBase)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UVehicleWheelBase(UVehicleWheelBase&&); \
	UVehicleWheelBase(const UVehicleWheelBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVehicleWheelBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVehicleWheelBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UVehicleWheelBase) \
	NO_API virtual ~UVehicleWheelBase();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_197_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h_200_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class UVehicleWheelBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleWheelBase_h


#define FOREACH_ENUM_EWHEELMODE(op) \
	op(EWheelMode::Raycast) \
	op(EWheelMode::Physics) 

enum class EWheelMode : uint8;
template<> struct TIsUEnumClass<EWheelMode> { enum { Value = true }; };
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<EWheelMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
