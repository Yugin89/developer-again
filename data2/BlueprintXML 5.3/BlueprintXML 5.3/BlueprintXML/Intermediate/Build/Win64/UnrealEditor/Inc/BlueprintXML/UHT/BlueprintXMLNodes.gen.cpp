// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintXML/Public/BlueprintXMLNodes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintXMLNodes() {}
// Cross Module References
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlAsyncProxyBase();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlAsyncProxyBase_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlFromFileAsyncProxy();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlFromStringAsyncProxy();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_USaveXmlFileAsyncProxyBase();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_USaveXmlFileAsyncProxyBase_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlFile_NoRegister();
	BLUEPRINTXML_API UFunction* Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature();
	BLUEPRINTXML_API UFunction* Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
	UPackage* Z_Construct_UPackage__Script_BlueprintXML();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics
	{
		struct _Script_BlueprintXML_eventLoadXmlFileEvent_Parms
		{
			const UXmlFile* XmlFile;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XmlFile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_XmlFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::NewProp_XmlFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::NewProp_XmlFile = { "XmlFile", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_BlueprintXML_eventLoadXmlFileEvent_Parms, XmlFile), Z_Construct_UClass_UXmlFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::NewProp_XmlFile_MetaData), Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::NewProp_XmlFile_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::NewProp_XmlFile,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintXML, nullptr, "LoadXmlFileEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::_Script_BlueprintXML_eventLoadXmlFileEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::_Script_BlueprintXML_eventLoadXmlFileEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FLoadXmlFileEvent_DelegateWrapper(const FMulticastScriptDelegate& LoadXmlFileEvent, const UXmlFile* XmlFile)
{
	struct _Script_BlueprintXML_eventLoadXmlFileEvent_Parms
	{
		const UXmlFile* XmlFile;
	};
	_Script_BlueprintXML_eventLoadXmlFileEvent_Parms Parms;
	Parms.XmlFile=XmlFile;
	LoadXmlFileEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_BlueprintXML, nullptr, "SaveXmlFileEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FSaveXmlFileEvent_DelegateWrapper(const FMulticastScriptDelegate& SaveXmlFileEvent)
{
	SaveXmlFileEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	void ULoadXmlAsyncProxyBase::StaticRegisterNativesULoadXmlAsyncProxyBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadXmlAsyncProxyBase);
	UClass* Z_Construct_UClass_ULoadXmlAsyncProxyBase_NoRegister()
	{
		return ULoadXmlAsyncProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Base class for async loading of XML files.\n **/" },
		{ "IncludePath", "BlueprintXMLNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Base class for async loading of XML files." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Success_MetaData[] = {
		{ "Comment", "/* Called when the file has been loaded successfully. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Called when the file has been loaded successfully." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadXmlAsyncProxyBase, Success), Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Success_MetaData), Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Success_MetaData) }; // 3460074732
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "/* Called when the file failed to load. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Called when the file failed to load." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULoadXmlAsyncProxyBase, Failed), Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Failed_MetaData), Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Failed_MetaData) }; // 3460074732
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::NewProp_Failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadXmlAsyncProxyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::ClassParams = {
		&ULoadXmlAsyncProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ULoadXmlAsyncProxyBase()
	{
		if (!Z_Registration_Info_UClass_ULoadXmlAsyncProxyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadXmlAsyncProxyBase.OuterSingleton, Z_Construct_UClass_ULoadXmlAsyncProxyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadXmlAsyncProxyBase.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<ULoadXmlAsyncProxyBase>()
	{
		return ULoadXmlAsyncProxyBase::StaticClass();
	}
	ULoadXmlAsyncProxyBase::ULoadXmlAsyncProxyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadXmlAsyncProxyBase);
	ULoadXmlAsyncProxyBase::~ULoadXmlAsyncProxyBase() {}
	DEFINE_FUNCTION(ULoadXmlFromFileAsyncProxy::execLoadXmlFileAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadXmlFromFileAsyncProxy**)Z_Param__Result=ULoadXmlFromFileAsyncProxy::LoadXmlFileAsync(Z_Param_FilePath);
		P_NATIVE_END;
	}
	void ULoadXmlFromFileAsyncProxy::StaticRegisterNativesULoadXmlFromFileAsyncProxy()
	{
		UClass* Class = ULoadXmlFromFileAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadXmlFileAsync", &ULoadXmlFromFileAsyncProxy::execLoadXmlFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics
	{
		struct LoadXmlFromFileAsyncProxy_eventLoadXmlFileAsync_Parms
		{
			FString FilePath;
			ULoadXmlFromFileAsyncProxy* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadXmlFromFileAsyncProxy_eventLoadXmlFileAsync_Parms, FilePath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadXmlFromFileAsyncProxy_eventLoadXmlFileAsync_Parms, ReturnValue), Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "XML" },
		{ "Comment", "/* Load an XML file and parse it asynchronously. */" },
		{ "DisplayName", "Load XML File Async" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Load an XML file and parse it asynchronously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadXmlFromFileAsyncProxy, nullptr, "LoadXmlFileAsync", nullptr, nullptr, Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::LoadXmlFromFileAsyncProxy_eventLoadXmlFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::LoadXmlFromFileAsyncProxy_eventLoadXmlFileAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadXmlFromFileAsyncProxy);
	UClass* Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_NoRegister()
	{
		return ULoadXmlFromFileAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULoadXmlAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadXmlFromFileAsyncProxy_LoadXmlFileAsync, "LoadXmlFileAsync" }, // 2626345693
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Load an XML file outside of the game thread\n **/" },
		{ "IncludePath", "BlueprintXMLNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Load an XML file outside of the game thread" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadXmlFromFileAsyncProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::ClassParams = {
		&ULoadXmlFromFileAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULoadXmlFromFileAsyncProxy()
	{
		if (!Z_Registration_Info_UClass_ULoadXmlFromFileAsyncProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadXmlFromFileAsyncProxy.OuterSingleton, Z_Construct_UClass_ULoadXmlFromFileAsyncProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadXmlFromFileAsyncProxy.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<ULoadXmlFromFileAsyncProxy>()
	{
		return ULoadXmlFromFileAsyncProxy::StaticClass();
	}
	ULoadXmlFromFileAsyncProxy::ULoadXmlFromFileAsyncProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadXmlFromFileAsyncProxy);
	ULoadXmlFromFileAsyncProxy::~ULoadXmlFromFileAsyncProxy() {}
	DEFINE_FUNCTION(ULoadXmlFromStringAsyncProxy::execLoadXmlStringAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_XmlString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULoadXmlFromStringAsyncProxy**)Z_Param__Result=ULoadXmlFromStringAsyncProxy::LoadXmlStringAsync(Z_Param_XmlString);
		P_NATIVE_END;
	}
	void ULoadXmlFromStringAsyncProxy::StaticRegisterNativesULoadXmlFromStringAsyncProxy()
	{
		UClass* Class = ULoadXmlFromStringAsyncProxy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadXmlStringAsync", &ULoadXmlFromStringAsyncProxy::execLoadXmlStringAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics
	{
		struct LoadXmlFromStringAsyncProxy_eventLoadXmlStringAsync_Parms
		{
			FString XmlString;
			ULoadXmlFromStringAsyncProxy* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_XmlString;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::NewProp_XmlString = { "XmlString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadXmlFromStringAsyncProxy_eventLoadXmlStringAsync_Parms, XmlString), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LoadXmlFromStringAsyncProxy_eventLoadXmlStringAsync_Parms, ReturnValue), Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::NewProp_XmlString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "XML" },
		{ "Comment", "/* Parse the content of the string to create an XML object asynchronously */" },
		{ "DisplayName", "Load XML String Async" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Parse the content of the string to create an XML object asynchronously" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULoadXmlFromStringAsyncProxy, nullptr, "LoadXmlStringAsync", nullptr, nullptr, Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::LoadXmlFromStringAsyncProxy_eventLoadXmlStringAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::LoadXmlFromStringAsyncProxy_eventLoadXmlStringAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULoadXmlFromStringAsyncProxy);
	UClass* Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_NoRegister()
	{
		return ULoadXmlFromStringAsyncProxy::StaticClass();
	}
	struct Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULoadXmlAsyncProxyBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULoadXmlFromStringAsyncProxy_LoadXmlStringAsync, "LoadXmlStringAsync" }, // 4180999553
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Load an XML string outside of the game thread\n **/" },
		{ "IncludePath", "BlueprintXMLNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Load an XML string outside of the game thread" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULoadXmlFromStringAsyncProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::ClassParams = {
		&ULoadXmlFromStringAsyncProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ULoadXmlFromStringAsyncProxy()
	{
		if (!Z_Registration_Info_UClass_ULoadXmlFromStringAsyncProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULoadXmlFromStringAsyncProxy.OuterSingleton, Z_Construct_UClass_ULoadXmlFromStringAsyncProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULoadXmlFromStringAsyncProxy.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<ULoadXmlFromStringAsyncProxy>()
	{
		return ULoadXmlFromStringAsyncProxy::StaticClass();
	}
	ULoadXmlFromStringAsyncProxy::ULoadXmlFromStringAsyncProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULoadXmlFromStringAsyncProxy);
	ULoadXmlFromStringAsyncProxy::~ULoadXmlFromStringAsyncProxy() {}
	DEFINE_FUNCTION(USaveXmlFileAsyncProxyBase::execSaveXmlFileAsync)
	{
		P_GET_OBJECT(UXmlFile,Z_Param_FileToSave);
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USaveXmlFileAsyncProxyBase**)Z_Param__Result=USaveXmlFileAsyncProxyBase::SaveXmlFileAsync(Z_Param_FileToSave,Z_Param_Path);
		P_NATIVE_END;
	}
	void USaveXmlFileAsyncProxyBase::StaticRegisterNativesUSaveXmlFileAsyncProxyBase()
	{
		UClass* Class = USaveXmlFileAsyncProxyBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SaveXmlFileAsync", &USaveXmlFileAsyncProxyBase::execSaveXmlFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics
	{
		struct SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms
		{
			const UXmlFile* FileToSave;
			FString Path;
			USaveXmlFileAsyncProxyBase* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileToSave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileToSave;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_FileToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_FileToSave = { "FileToSave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms, FileToSave), Z_Construct_UClass_UXmlFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_FileToSave_MetaData), Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_FileToSave_MetaData) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms, Path), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms, ReturnValue), Z_Construct_UClass_USaveXmlFileAsyncProxyBase_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_FileToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "XML" },
		{ "Comment", "/* Save a virtual XML file object to a file on the disk asynchronously. */" },
		{ "DisplayName", "Save XML File Async" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Save a virtual XML file object to a file on the disk asynchronously." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveXmlFileAsyncProxyBase, nullptr, "SaveXmlFileAsync", nullptr, nullptr, Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::SaveXmlFileAsyncProxyBase_eventSaveXmlFileAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveXmlFileAsyncProxyBase);
	UClass* Z_Construct_UClass_USaveXmlFileAsyncProxyBase_NoRegister()
	{
		return USaveXmlFileAsyncProxyBase::StaticClass();
	}
	struct Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Success;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Failed_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Failed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveXmlFileAsyncProxyBase_SaveXmlFileAsync, "SaveXmlFileAsync" }, // 2849277599
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Proxy for saving asynchronously virtual XML Files to disk.\n **/" },
		{ "IncludePath", "BlueprintXMLNodes.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Proxy for saving asynchronously virtual XML Files to disk." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Success_MetaData[] = {
		{ "Comment", "/* Called when the file has been saved successfully. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Called when the file has been saved successfully." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveXmlFileAsyncProxyBase, Success), Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Success_MetaData), Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Success_MetaData) }; // 2044223135
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Failed_MetaData[] = {
		{ "Comment", "/* Called when the file failed to save. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLNodes.h" },
		{ "ToolTip", "Called when the file failed to save." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Failed = { "Failed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USaveXmlFileAsyncProxyBase, Failed), Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Failed_MetaData), Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Failed_MetaData) }; // 2044223135
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::NewProp_Failed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveXmlFileAsyncProxyBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::ClassParams = {
		&USaveXmlFileAsyncProxyBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_USaveXmlFileAsyncProxyBase()
	{
		if (!Z_Registration_Info_UClass_USaveXmlFileAsyncProxyBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveXmlFileAsyncProxyBase.OuterSingleton, Z_Construct_UClass_USaveXmlFileAsyncProxyBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USaveXmlFileAsyncProxyBase.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<USaveXmlFileAsyncProxyBase>()
	{
		return USaveXmlFileAsyncProxyBase::StaticClass();
	}
	USaveXmlFileAsyncProxyBase::USaveXmlFileAsyncProxyBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveXmlFileAsyncProxyBase);
	USaveXmlFileAsyncProxyBase::~USaveXmlFileAsyncProxyBase() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLNodes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLNodes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULoadXmlAsyncProxyBase, ULoadXmlAsyncProxyBase::StaticClass, TEXT("ULoadXmlAsyncProxyBase"), &Z_Registration_Info_UClass_ULoadXmlAsyncProxyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadXmlAsyncProxyBase), 2885388151U) },
		{ Z_Construct_UClass_ULoadXmlFromFileAsyncProxy, ULoadXmlFromFileAsyncProxy::StaticClass, TEXT("ULoadXmlFromFileAsyncProxy"), &Z_Registration_Info_UClass_ULoadXmlFromFileAsyncProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadXmlFromFileAsyncProxy), 1214724397U) },
		{ Z_Construct_UClass_ULoadXmlFromStringAsyncProxy, ULoadXmlFromStringAsyncProxy::StaticClass, TEXT("ULoadXmlFromStringAsyncProxy"), &Z_Registration_Info_UClass_ULoadXmlFromStringAsyncProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULoadXmlFromStringAsyncProxy), 680516569U) },
		{ Z_Construct_UClass_USaveXmlFileAsyncProxyBase, USaveXmlFileAsyncProxyBase::StaticClass, TEXT("USaveXmlFileAsyncProxyBase"), &Z_Registration_Info_UClass_USaveXmlFileAsyncProxyBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveXmlFileAsyncProxyBase), 3690641230U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLNodes_h_3831031402(TEXT("/Script/BlueprintXML"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLNodes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLNodes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
