// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BikePawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIKECONTROLPLUGIN_BikePawn_generated_h
#error "BikePawn.generated.h already included, missing '#pragma once' in BikePawn.h"
#endif
#define BIKECONTROLPLUGIN_BikePawn_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSuspensionStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FSuspensionStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWheelStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FWheelStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_116_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEngineStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FEngineStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_153_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGearStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FGearStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_189_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FDebugStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_206_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDebugTraceStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FDebugTraceStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_223_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FBrakeStruct_Statics; \
	BIKECONTROLPLUGIN_API static class UScriptStruct* StaticStruct();


template<> BIKECONTROLPLUGIN_API UScriptStruct* StaticStruct<struct FBrakeStruct>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_RPC_WRAPPERS \
	virtual void PhysicsTick_Implementation(float substepDeltaTime); \
 \
	DECLARE_FUNCTION(execGetEngineStatus); \
	DECLARE_FUNCTION(execAddTurbo); \
	DECLARE_FUNCTION(execAddRearBrake); \
	DECLARE_FUNCTION(execAddFrontBrake); \
	DECLARE_FUNCTION(execAddBrake); \
	DECLARE_FUNCTION(execStopEngine); \
	DECLARE_FUNCTION(execStartEngine); \
	DECLARE_FUNCTION(execSetGear); \
	DECLARE_FUNCTION(execShiftGearDown); \
	DECLARE_FUNCTION(execShiftGearUp); \
	DECLARE_FUNCTION(execAddRight); \
	DECLARE_FUNCTION(execAddForward); \
	DECLARE_FUNCTION(execPhysicsTick);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEngineStatus); \
	DECLARE_FUNCTION(execAddTurbo); \
	DECLARE_FUNCTION(execAddRearBrake); \
	DECLARE_FUNCTION(execAddFrontBrake); \
	DECLARE_FUNCTION(execAddBrake); \
	DECLARE_FUNCTION(execStopEngine); \
	DECLARE_FUNCTION(execStartEngine); \
	DECLARE_FUNCTION(execSetGear); \
	DECLARE_FUNCTION(execShiftGearDown); \
	DECLARE_FUNCTION(execShiftGearUp); \
	DECLARE_FUNCTION(execAddRight); \
	DECLARE_FUNCTION(execAddForward); \
	DECLARE_FUNCTION(execPhysicsTick);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABikePawn(); \
	friend struct Z_Construct_UClass_ABikePawn_Statics; \
public: \
	DECLARE_CLASS(ABikePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BikeControlPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABikePawn)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_INCLASS \
private: \
	static void StaticRegisterNativesABikePawn(); \
	friend struct Z_Construct_UClass_ABikePawn_Statics; \
public: \
	DECLARE_CLASS(ABikePawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BikeControlPlugin"), NO_API) \
	DECLARE_SERIALIZER(ABikePawn)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABikePawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABikePawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABikePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABikePawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABikePawn(ABikePawn&&); \
	NO_API ABikePawn(const ABikePawn&); \
public: \
	NO_API virtual ~ABikePawn();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABikePawn(ABikePawn&&); \
	NO_API ABikePawn(const ABikePawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABikePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABikePawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABikePawn) \
	NO_API virtual ~ABikePawn();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_246_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h_249_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIKECONTROLPLUGIN_API UClass* StaticClass<class ABikePawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_BikePawn_h


#define FOREACH_ENUM_EWHEELPOSITION(op) \
	op(EWheelPosition::FRONT) \
	op(EWheelPosition::REAR) 

enum class EWheelPosition : uint8;
template<> struct TIsUEnumClass<EWheelPosition> { enum { Value = true }; };
template<> BIKECONTROLPLUGIN_API UEnum* StaticEnum<EWheelPosition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
