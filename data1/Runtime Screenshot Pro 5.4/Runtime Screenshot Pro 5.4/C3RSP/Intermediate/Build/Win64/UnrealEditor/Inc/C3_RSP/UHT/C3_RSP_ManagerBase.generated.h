// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C3_RSP_ManagerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UTexture2D;
enum class ERSP_RenderingMethod : uint8;
struct FColor;
#ifdef C3_RSP_C3_RSP_ManagerBase_generated_h
#error "C3_RSP_ManagerBase.generated.h already included, missing '#pragma once' in C3_RSP_ManagerBase.h"
#endif
#define C3_RSP_C3_RSP_ManagerBase_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_17_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRSP_Stru1_Statics; \
	C3_RSP_API static class UScriptStruct* StaticStruct();


template<> C3_RSP_API UScriptStruct* StaticStruct<struct FRSP_Stru1>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_46_DELEGATE \
C3_RSP_API void FC3_RSP_OnScreenshotCaptured_DelegateWrapper(const FMulticastScriptDelegate& C3_RSP_OnScreenshotCaptured, int32 SizeX, int32 SizeY, UTexture2D* Texture, TArray<FColor> const& RawData);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_RPC_WRAPPERS \
	virtual void RestartPathTracer_Implementation(UObject* WorldContextObject); \
	DECLARE_FUNCTION(execOnScreenshotCapturedInternal); \
	DECLARE_FUNCTION(execResumeNotification); \
	DECLARE_FUNCTION(execPathTracerShot_Capture_Core); \
	DECLARE_FUNCTION(execInstantShot_Capture_Core); \
	DECLARE_FUNCTION(execShowLitMode); \
	DECLARE_FUNCTION(execRestartPathTracer); \
	DECLARE_FUNCTION(execShowPathTracer); \
	DECLARE_FUNCTION(execSetRenderingMethod);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_CALLBACK_WRAPPERS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_INCLASS \
private: \
	static void StaticRegisterNativesAC3_RSP_ManagerBase(); \
	friend struct Z_Construct_UClass_AC3_RSP_ManagerBase_Statics; \
public: \
	DECLARE_CLASS(AC3_RSP_ManagerBase, AInfo, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/C3_RSP"), NO_API) \
	DECLARE_SERIALIZER(AC3_RSP_ManagerBase)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AC3_RSP_ManagerBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AC3_RSP_ManagerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AC3_RSP_ManagerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AC3_RSP_ManagerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AC3_RSP_ManagerBase(AC3_RSP_ManagerBase&&); \
	AC3_RSP_ManagerBase(const AC3_RSP_ManagerBase&); \
public: \
	NO_API virtual ~AC3_RSP_ManagerBase();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_52_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_CALLBACK_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C3_RSP_API UClass* StaticClass<class AC3_RSP_ManagerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_ManagerBase_h


#define FOREACH_ENUM_ERSP_RENDERINGMETHOD(op) \
	op(ERSP_RenderingMethod::None) \
	op(ERSP_RenderingMethod::Raster) \
	op(ERSP_RenderingMethod::RTX) \
	op(ERSP_RenderingMethod::PathTracing) 

enum class ERSP_RenderingMethod : uint8;
template<> struct TIsUEnumClass<ERSP_RenderingMethod> { enum { Value = true }; };
template<> C3_RSP_API UEnum* StaticEnum<ERSP_RenderingMethod>();

#define FOREACH_ENUM_ERSP_SCREENSHOTMETHOD(op) \
	op(ERSP_ScreenshotMethod::None) \
	op(ERSP_ScreenshotMethod::InstantShot) \
	op(ERSP_ScreenshotMethod::AdvancedShot) \
	op(ERSP_ScreenshotMethod::PathTracerShot) 

enum class ERSP_ScreenshotMethod : uint8;
template<> struct TIsUEnumClass<ERSP_ScreenshotMethod> { enum { Value = true }; };
template<> C3_RSP_API UEnum* StaticEnum<ERSP_ScreenshotMethod>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
