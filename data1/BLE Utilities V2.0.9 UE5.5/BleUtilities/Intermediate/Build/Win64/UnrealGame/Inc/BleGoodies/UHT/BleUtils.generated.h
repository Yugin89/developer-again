// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BleUtils.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBleManagerInterface;
#ifdef BLEGOODIES_BleUtils_generated_h
#error "BleUtils.generated.h already included, missing '#pragma once' in BleUtils.h"
#endif
#define BLEGOODIES_BleUtils_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsUUIDValid); \
	DECLARE_FUNCTION(execHexToUUIDs); \
	DECLARE_FUNCTION(execHexToUUID); \
	DECLARE_FUNCTION(execConvertBytesToHexString); \
	DECLARE_FUNCTION(execCreateBleManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBleUtils(); \
	friend struct Z_Construct_UClass_UBleUtils_Statics; \
public: \
	DECLARE_CLASS(UBleUtils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleUtils)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleUtils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBleUtils(UBleUtils&&); \
	UBleUtils(const UBleUtils&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleUtils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleUtils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleUtils) \
	NO_API virtual ~UBleUtils();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_9_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleUtils>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_BleUtils_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
