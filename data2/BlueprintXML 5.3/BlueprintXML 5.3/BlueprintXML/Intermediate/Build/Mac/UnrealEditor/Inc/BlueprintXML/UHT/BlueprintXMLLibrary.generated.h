// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlueprintXMLLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UXmlFile;
enum class EXmlParseResult : uint8;
#ifdef BLUEPRINTXML_BlueprintXMLLibrary_generated_h
#error "BlueprintXMLLibrary.generated.h already included, missing '#pragma once' in BlueprintXMLLibrary.h"
#endif
#define BLUEPRINTXML_BlueprintXMLLibrary_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_SPARSE_DATA
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSaveXmlToFile); \
	DECLARE_FUNCTION(execLoadXmlString); \
	DECLARE_FUNCTION(execLoadFile);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_ACCESSORS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueprintXmlLibrary(); \
	friend struct Z_Construct_UClass_UBlueprintXmlLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueprintXmlLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueprintXML"), NO_API) \
	DECLARE_SERIALIZER(UBlueprintXmlLibrary)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueprintXmlLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueprintXmlLibrary(UBlueprintXmlLibrary&&); \
	NO_API UBlueprintXmlLibrary(const UBlueprintXmlLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueprintXmlLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueprintXmlLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueprintXmlLibrary) \
	NO_API virtual ~UBlueprintXmlLibrary();


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_24_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_SPARSE_DATA \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_ACCESSORS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUEPRINTXML_API UClass* StaticClass<class UBlueprintXmlLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h


#define FOREACH_ENUM_EXMLPARSERESULT(op) \
	op(EXmlParseResult::Success) \
	op(EXmlParseResult::Failed) 

enum class EXmlParseResult : uint8;
template<> struct TIsUEnumClass<EXmlParseResult> { enum { Value = true }; };
template<> BLUEPRINTXML_API UEnum* StaticEnum<EXmlParseResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
