// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interface/BleDeviceInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BLEGOODIES_BleDeviceInterface_generated_h
#error "BleDeviceInterface.generated.h already included, missing '#pragma once' in BleDeviceInterface.h"
#endif
#define BLEGOODIES_BleDeviceInterface_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_9_DELEGATE \
BLEGOODIES_API void FBleDelegate_DelegateWrapper(const FScriptDelegate& BleDelegate);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_10_DELEGATE \
BLEGOODIES_API void FBleErrorDelegate_DelegateWrapper(const FScriptDelegate& BleErrorDelegate, const FString& ErrorMessage);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_11_DELEGATE \
BLEGOODIES_API void FBleCharacteristicDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_12_DELEGATE \
BLEGOODIES_API void FBleCharacteristicDataDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicDataDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, TArray<uint8> const& Data);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_13_DELEGATE \
BLEGOODIES_API void FBleCharacteristicErrorDelegate_DelegateWrapper(const FScriptDelegate& BleCharacteristicErrorDelegate, const FString& ServiceUUID, const FString& CharacteristicUUID, const FString& ErrorMessage);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBindToCharacteristicErrorEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicUnsubscribeEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicNotificationEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicWriteEvent); \
	DECLARE_FUNCTION(execBindToCharacteristicReadEvent); \
	DECLARE_FUNCTION(execUnsubscribeFromCharacteristic); \
	DECLARE_FUNCTION(execSubscribeToCharacteristic); \
	DECLARE_FUNCTION(execWriteCharacteristic); \
	DECLARE_FUNCTION(execReadCharacteristic); \
	DECLARE_FUNCTION(execIsServiceAvailable); \
	DECLARE_FUNCTION(execGetServices); \
	DECLARE_FUNCTION(execGetDeviceId); \
	DECLARE_FUNCTION(execGetDeviceName); \
	DECLARE_FUNCTION(execIsConnected); \
	DECLARE_FUNCTION(execDisconnect); \
	DECLARE_FUNCTION(execConnect);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBleDeviceInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBleDeviceInterface(UBleDeviceInterface&&); \
	UBleDeviceInterface(const UBleDeviceInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBleDeviceInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBleDeviceInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBleDeviceInterface) \
	NO_API virtual ~UBleDeviceInterface();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUBleDeviceInterface(); \
	friend struct Z_Construct_UClass_UBleDeviceInterface_Statics; \
public: \
	DECLARE_CLASS(UBleDeviceInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/BleGoodies"), NO_API) \
	DECLARE_SERIALIZER(UBleDeviceInterface)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IBleDeviceInterface() {} \
public: \
	typedef UBleDeviceInterface UClassType; \
	typedef IBleDeviceInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_15_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLEGOODIES_API UClass* StaticClass<class UBleDeviceInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BleGoodies_Source_BleGoodies_Public_Interface_BleDeviceInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
