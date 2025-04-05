// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PIDCtrlComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BIKECONTROLPLUGIN_PIDCtrlComponent_generated_h
#error "PIDCtrlComponent.generated.h already included, missing '#pragma once' in PIDCtrlComponent.h"
#endif
#define BIKECONTROLPLUGIN_PIDCtrlComponent_generated_h

#define FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetPidValues);


#define FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPIDCtrlComponent(); \
	friend struct Z_Construct_UClass_UPIDCtrlComponent_Statics; \
public: \
	DECLARE_CLASS(UPIDCtrlComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BikeControlPlugin"), NO_API) \
	DECLARE_SERIALIZER(UPIDCtrlComponent)


#define FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UPIDCtrlComponent(UPIDCtrlComponent&&); \
	UPIDCtrlComponent(const UPIDCtrlComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPIDCtrlComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPIDCtrlComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPIDCtrlComponent) \
	NO_API virtual ~UPIDCtrlComponent();


#define FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_10_PROLOG
#define FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BIKECONTROLPLUGIN_API UClass* StaticClass<class UPIDCtrlComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PR54_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
