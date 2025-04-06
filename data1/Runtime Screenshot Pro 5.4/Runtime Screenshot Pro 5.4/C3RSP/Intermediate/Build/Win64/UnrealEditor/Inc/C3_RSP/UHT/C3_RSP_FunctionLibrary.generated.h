// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "C3_RSP_FunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AC3_RSP_ManagerBase;
class UObject;
class UTexture2D;
enum class ERSP_RenderingMethod : uint8;
struct FColor;
#ifdef C3_RSP_C3_RSP_FunctionLibrary_generated_h
#error "C3_RSP_FunctionLibrary.generated.h already included, missing '#pragma once' in C3_RSP_FunctionLibrary.h"
#endif
#define C3_RSP_C3_RSP_FunctionLibrary_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_RPC_WRAPPERS \
	DECLARE_FUNCTION(execTryCorrectFilename); \
	DECLARE_FUNCTION(execIsValidFilename); \
	DECLARE_FUNCTION(execSaveImageFileFromColorData); \
	DECLARE_FUNCTION(execConvertImageToTexture); \
	DECLARE_FUNCTION(execFL_ShowAllNotifications); \
	DECLARE_FUNCTION(execFL_RandomString_Pro); \
	DECLARE_FUNCTION(execFL_RandomString); \
	DECLARE_FUNCTION(execFL_SolvePathTraceCrash); \
	DECLARE_FUNCTION(execFL_LumenUseHardwareRaytracing); \
	DECLARE_FUNCTION(execFL_PathTracerShot_Ultra); \
	DECLARE_FUNCTION(execFL_PathTracerShot_Pro); \
	DECLARE_FUNCTION(execFL_PathTracerShot_Lite); \
	DECLARE_FUNCTION(execFL_InstantScreenshot_Ultra); \
	DECLARE_FUNCTION(execFL_InstantScreenshot_Pro); \
	DECLARE_FUNCTION(execFL_InstantScreenshot_Lite); \
	DECLARE_FUNCTION(execFL_EnablePathTracer); \
	DECLARE_FUNCTION(execFL_SetRenderingMethod); \
	DECLARE_FUNCTION(execGetRSPManager);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUC3_RSP_FunctionLibrary(); \
	friend struct Z_Construct_UClass_UC3_RSP_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UC3_RSP_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/C3_RSP"), NO_API) \
	DECLARE_SERIALIZER(UC3_RSP_FunctionLibrary)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UC3_RSP_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UC3_RSP_FunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UC3_RSP_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UC3_RSP_FunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UC3_RSP_FunctionLibrary(UC3_RSP_FunctionLibrary&&); \
	UC3_RSP_FunctionLibrary(const UC3_RSP_FunctionLibrary&); \
public: \
	NO_API virtual ~UC3_RSP_FunctionLibrary();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_16_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> C3_RSP_API UClass* StaticClass<class UC3_RSP_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_C3_RSP_Source_C3_RSP_Public_C3_RSP_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
