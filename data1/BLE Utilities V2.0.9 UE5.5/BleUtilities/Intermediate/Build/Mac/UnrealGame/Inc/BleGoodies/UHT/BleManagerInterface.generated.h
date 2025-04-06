// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/BleManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IBleDeviceInterface;
#ifdef BLEGOODIES_BleManagerInterface_generated_h
#error "BleManagerInterface.generated.h already included, missing '#pragma once' in BleManagerInterface.h"
#endif
#define BLEGOODIES_BleManagerInterface_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_9_DELEGATE \
BLEGOODIES_API void FBleOnDeviceFoundDelegate_DelegateWrapper(const FScriptDelegate& BleOnDeviceFoundDelegate, const TScriptInterface<IBleDeviceInterface>& Device);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_10_DELEGATE \
BLEGOODIES_API void FBleOnAdvertisementDelegate_DelegateWrapper(const FScriptDelegate& BleOnAdvertisementDelegate, const FString& DeviceName, TArray<uint8> const& Data);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsScanning); \
	DECLARE_FUNCTION(execStopScan); \
	DECLARE_FUNCTION(execScanForAdvertisements); \
	DECLARE_FUNCTION(execScanForDevices); \
	DECLARE_FUNCTION(execSetBluetoothState); \
	DECLARE_FUNCTION(execIsBluetoothEnabled); \
	DECLARE_FUNCTION(execIsBleSupported);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBleManagerInterface(UBleManagerInterface&&); \
	UBleManagerInterface(const UBleManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleManagerInterface) \
	NO_API virtual ~UBleManagerInterface();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBleManagerInterface(); \
	friend struct Z_Construct_UClass_UBleManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UBleManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleManagerInterface)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBleManagerInterface() {} \
public: \
	typedef UBleManagerInterface UClassType; \
	typedef IBleManagerInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_12_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
