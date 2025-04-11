// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VehicleSystemBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
struct FAVS_Inputs;
struct FNetState;
#ifdef VEHICLESYSTEMPLUGIN_VehicleSystemBase_generated_h
#error "VehicleSystemBase.generated.h already included, missing '#pragma once' in VehicleSystemBase.h"
#endif
#define VEHICLESYSTEMPLUGIN_VehicleSystemBase_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FNetState_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FNetState>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_61_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVehicleGear_Statics; \
	VEHICLESYSTEMPLUGIN_API static class UScriptStruct* StaticStruct();


template<> VEHICLESYSTEMPLUGIN_API UScriptStruct* StaticStruct<struct FVehicleGear>();

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void WakeWheelsForMovement_Implementation(); \
	virtual void PassiveStateChanged_Implementation(bool NewPassiveState); \
	DECLARE_FUNCTION(execIsTowardZero); \
	DECLARE_FUNCTION(execGetSteeringSpeed); \
	DECLARE_FUNCTION(execGetMaxSteeringInput); \
	DECLARE_FUNCTION(execPhysicsThreadInputs); \
	DECLARE_FUNCTION(execSetArrayDisabledCollisions); \
	DECLARE_FUNCTION(execUpdateInternalWheelArray); \
	DECLARE_FUNCTION(execMulticast_ChangedOwner); \
	DECLARE_FUNCTION(execServer_ReceiveRestState); \
	DECLARE_FUNCTION(execClient_ReceiveNetState); \
	DECLARE_FUNCTION(execServer_ReceiveNetState); \
	DECLARE_FUNCTION(execSetShouldSyncWithServer); \
	DECLARE_FUNCTION(execNetStateSend); \
	DECLARE_FUNCTION(execWakeWheelsForMovement); \
	DECLARE_FUNCTION(execOnRep_RestState); \
	DECLARE_FUNCTION(execPassiveStateChanged);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAVehicleSystemBase(); \
	friend struct Z_Construct_UClass_AVehicleSystemBase_Statics; \
public: \
	DECLARE_CLASS(AVehicleSystemBase, APawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/VehicleSystemPlugin"), NO_API) \
	DECLARE_SERIALIZER(AVehicleSystemBase) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		RestState=NETFIELD_REP_START, \
		NETFIELD_REP_END=RestState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AVehicleSystemBase(AVehicleSystemBase&&); \
	AVehicleSystemBase(const AVehicleSystemBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AVehicleSystemBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AVehicleSystemBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AVehicleSystemBase) \
	NO_API virtual ~AVehicleSystemBase();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_96_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h_99_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<class AVehicleSystemBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleSystemBase_h


#define FOREACH_ENUM_NETWORKROLES(op) \
	op(NetworkRoles::None) \
	op(NetworkRoles::Owner) \
	op(NetworkRoles::Server) \
	op(NetworkRoles::Client) \
	op(NetworkRoles::ClientSpawned) 

enum class NetworkRoles : uint8;
template<> struct TIsUEnumClass<NetworkRoles> { enum { Value = true }; };
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<NetworkRoles>();

#define FOREACH_ENUM_STEERINGSMOOTHINGTYPE(op) \
	op(SteeringSmoothingType::Instant) \
	op(SteeringSmoothingType::Constant) \
	op(SteeringSmoothingType::Ease) 

enum class SteeringSmoothingType : uint8;
template<> struct TIsUEnumClass<SteeringSmoothingType> { enum { Value = true }; };
template<> VEHICLESYSTEMPLUGIN_API UEnum* StaticEnum<SteeringSmoothingType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
