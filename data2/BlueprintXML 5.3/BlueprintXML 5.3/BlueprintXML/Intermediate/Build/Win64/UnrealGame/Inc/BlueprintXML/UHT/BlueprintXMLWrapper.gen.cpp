// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintXML/Public/BlueprintXMLWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintXMLWrapper() {}
// Cross Module References
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlFile();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlFile_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlNode();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlNode_NoRegister();
	BLUEPRINTXML_API UEnum* Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BlueprintXML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXMLNodeValidity;
	static UEnum* EXMLNodeValidity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EXMLNodeValidity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EXMLNodeValidity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity, (UObject*)Z_Construct_UPackage__Script_BlueprintXML(), TEXT("EXMLNodeValidity"));
		}
		return Z_Registration_Info_UEnum_EXMLNodeValidity.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UEnum* StaticEnum<EXMLNodeValidity>()
	{
		return EXMLNodeValidity_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enumerators[] = {
		{ "EXMLNodeValidity::Valid", (int64)EXMLNodeValidity::Valid },
		{ "EXMLNodeValidity::Invalid", (int64)EXMLNodeValidity::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enum_MetaDataParams[] = {
		{ "Invalid.Name", "EXMLNodeValidity::Invalid" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "Valid.Name", "EXMLNodeValidity::Valid" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintXML,
		nullptr,
		"EXMLNodeValidity",
		"EXMLNodeValidity",
		Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity()
	{
		if (!Z_Registration_Info_UEnum_EXMLNodeValidity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXMLNodeValidity.InnerSingleton, Z_Construct_UEnum_BlueprintXML_EXMLNodeValidity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EXMLNodeValidity.InnerSingleton;
	}
	DEFINE_FUNCTION(UXmlNode::execSetContent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetContent(Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execFindChildNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_GET_UBOOL_REF(Z_Param_Out_bFound);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->FindChildNode(Z_Param_Tag,Z_Param_Out_bFound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execAppendChildNode)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Tag);
		P_GET_PROPERTY(FStrProperty,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AppendChildNode(Z_Param_Tag,Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetTag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetNextNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->GetNextNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetFirstChildNode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->GetFirstChildNode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetContent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetContent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetChildrenNodes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UXmlNode*>*)Z_Param__Result=P_THIS->GetChildrenNodes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetAttributes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FString,FString>*)Z_Param__Result=P_THIS->GetAttributes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlNode::execGetAttribute)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetAttribute(Z_Param_InTag);
		P_NATIVE_END;
	}
	void UXmlNode::StaticRegisterNativesUXmlNode()
	{
		UClass* Class = UXmlNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AppendChildNode", &UXmlNode::execAppendChildNode },
			{ "FindChildNode", &UXmlNode::execFindChildNode },
			{ "GetAttribute", &UXmlNode::execGetAttribute },
			{ "GetAttributes", &UXmlNode::execGetAttributes },
			{ "GetChildrenNodes", &UXmlNode::execGetChildrenNodes },
			{ "GetContent", &UXmlNode::execGetContent },
			{ "GetFirstChildNode", &UXmlNode::execGetFirstChildNode },
			{ "GetNextNode", &UXmlNode::execGetNextNode },
			{ "GetTag", &UXmlNode::execGetTag },
			{ "SetContent", &UXmlNode::execSetContent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics
	{
		struct XmlNode_eventAppendChildNode_Parms
		{
			FString Tag;
			FString Content;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventAppendChildNode_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Tag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventAppendChildNode_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Adds a child node directrly to this node. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Adds a child node directrly to this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "AppendChildNode", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::XmlNode_eventAppendChildNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::XmlNode_eventAppendChildNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_AppendChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_AppendChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_FindChildNode_Statics
	{
		struct XmlNode_eventFindChildNode_Parms
		{
			FString Tag;
			bool bFound;
			UXmlNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tag;
		static void NewProp_bFound_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventFindChildNode_Parms, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_Tag_MetaData), Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_Tag_MetaData) };
	void Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_bFound_SetBit(void* Obj)
	{
		((XmlNode_eventFindChildNode_Parms*)Obj)->bFound = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_bFound = { "bFound", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlNode_eventFindChildNode_Parms), &Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_bFound_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Child Node" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventFindChildNode_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_bFound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns the first direct child with the matching tag or nullptr if it wasn't found. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns the first direct child with the matching tag or nullptr if it wasn't found." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "FindChildNode", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::XmlNode_eventFindChildNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::XmlNode_eventFindChildNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_FindChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_FindChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetAttribute_Statics
	{
		struct XmlNode_eventGetAttribute_Parms
		{
			FString InTag;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InTag_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_InTag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_InTag = { "InTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetAttribute_Parms, InTag), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_InTag_MetaData), Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_InTag_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Attribute" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetAttribute_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_InTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/**\n     *  Returns the attribute specified by the tag.\n     **/" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns the attribute specified by the tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetAttribute", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::XmlNode_eventGetAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::XmlNode_eventGetAttribute_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetAttribute()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetAttribute_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetAttributes_Statics
	{
		struct XmlNode_eventGetAttributes_Parms
		{
			TMap<FString,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Out Attributes" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetAttributes_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns all the attributes of this node. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns all the attributes of this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetAttributes", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::XmlNode_eventGetAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::XmlNode_eventGetAttributes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics
	{
		struct XmlNode_eventGetChildrenNodes_Parms
		{
			TArray<UXmlNode*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Out Nodes" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetChildrenNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns all the children of this node. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns all the children of this node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetChildrenNodes", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::XmlNode_eventGetChildrenNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::XmlNode_eventGetChildrenNodes_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetChildrenNodes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetChildrenNodes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetContent_Statics
	{
		struct XmlNode_eventGetContent_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetContent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Content" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetContent_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetContent_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetContent_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetContent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns this node's content. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns this node's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetContent", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetContent_Statics::XmlNode_eventGetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetContent_Statics::XmlNode_eventGetContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics
	{
		struct XmlNode_eventGetFirstChildNode_Parms
		{
			UXmlNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "First Child" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns the node's first direct child. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns the node's first direct child." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetFirstChildNode", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::XmlNode_eventGetFirstChildNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::XmlNode_eventGetFirstChildNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetFirstChildNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetFirstChildNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetNextNode_Statics
	{
		struct XmlNode_eventGetNextNode_Parms
		{
			UXmlNode* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Next Node" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetNextNode_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns the next node on the same level as this one. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns the next node on the same level as this one." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetNextNode", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::XmlNode_eventGetNextNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::XmlNode_eventGetNextNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetNextNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetNextNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_GetTag_Statics
	{
		struct XmlNode_eventGetTag_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetTag_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Node's Tag" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_GetTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventGetTag_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetTag_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlNode_GetTag_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_GetTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_GetTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_GetTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Returns this node's tag. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns this node's tag." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_GetTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "GetTag", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_GetTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_GetTag_Statics::XmlNode_eventGetTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_GetTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_GetTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_GetTag_Statics::XmlNode_eventGetTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_GetTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_GetTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlNode_SetContent_Statics
	{
		struct XmlNode_eventSetContent_Parms
		{
			FString Content;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_SetContent_Statics::NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlNode_SetContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlNode_eventSetContent_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetContent_Statics::NewProp_Content_MetaData), Z_Construct_UFunction_UXmlNode_SetContent_Statics::NewProp_Content_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlNode_SetContent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlNode_SetContent_Statics::NewProp_Content,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlNode_SetContent_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|Node" },
		{ "Comment", "/* Sets this node's content. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Sets this node's content." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlNode_SetContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlNode, nullptr, "SetContent", nullptr, nullptr, Z_Construct_UFunction_UXmlNode_SetContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlNode_SetContent_Statics::XmlNode_eventSetContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlNode_SetContent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlNode_SetContent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlNode_SetContent_Statics::XmlNode_eventSetContent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlNode_SetContent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlNode_SetContent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXmlNode);
	UClass* Z_Construct_UClass_UXmlNode_NoRegister()
	{
		return UXmlNode::StaticClass();
	}
	struct Z_Construct_UClass_UXmlNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlNode_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlNode_AppendChildNode, "AppendChildNode" }, // 3844986403
		{ &Z_Construct_UFunction_UXmlNode_FindChildNode, "FindChildNode" }, // 3755382335
		{ &Z_Construct_UFunction_UXmlNode_GetAttribute, "GetAttribute" }, // 3491692346
		{ &Z_Construct_UFunction_UXmlNode_GetAttributes, "GetAttributes" }, // 1751646648
		{ &Z_Construct_UFunction_UXmlNode_GetChildrenNodes, "GetChildrenNodes" }, // 1774021983
		{ &Z_Construct_UFunction_UXmlNode_GetContent, "GetContent" }, // 890015935
		{ &Z_Construct_UFunction_UXmlNode_GetFirstChildNode, "GetFirstChildNode" }, // 2957206908
		{ &Z_Construct_UFunction_UXmlNode_GetNextNode, "GetNextNode" }, // 2956945387
		{ &Z_Construct_UFunction_UXmlNode_GetTag, "GetTag" }, // 305024159
		{ &Z_Construct_UFunction_UXmlNode_SetContent, "SetContent" }, // 2477318538
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlNode_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  And XML node containing other nodes and attributes.\n **/" },
		{ "IncludePath", "BlueprintXMLWrapper.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "And XML node containing other nodes and attributes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXmlNode_Statics::ClassParams = {
		&UXmlNode::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UXmlNode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UXmlNode()
	{
		if (!Z_Registration_Info_UClass_UXmlNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXmlNode.OuterSingleton, Z_Construct_UClass_UXmlNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXmlNode.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<UXmlNode>()
	{
		return UXmlNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlNode);
	UXmlNode::~UXmlNode() {}
	DEFINE_FUNCTION(UXmlFile::execSaveToFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Path);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SaveToFile(Z_Param_Path);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlFile::execGetRootNode)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bIsValid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlNode**)Z_Param__Result=P_THIS->GetRootNode(Z_Param_Out_bIsValid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlFile::execIsValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlFile::execGetLastError)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetLastError();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlFile::execLoadFromString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_RawXml);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadFromString(Z_Param_RawXml);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UXmlFile::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadFile(Z_Param_File);
		P_NATIVE_END;
	}
	void UXmlFile::StaticRegisterNativesUXmlFile()
	{
		UClass* Class = UXmlFile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastError", &UXmlFile::execGetLastError },
			{ "GetRootNode", &UXmlFile::execGetRootNode },
			{ "IsValid", &UXmlFile::execIsValid },
			{ "LoadFile", &UXmlFile::execLoadFile },
			{ "LoadFromString", &UXmlFile::execLoadFromString },
			{ "SaveToFile", &UXmlFile::execSaveToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UXmlFile_GetLastError_Statics
	{
		struct XmlFile_eventGetLastError_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_GetLastError_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Error" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlFile_GetLastError_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlFile_eventGetLastError_Parms, ReturnValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_GetLastError_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_GetLastError_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_GetLastError_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_GetLastError_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Returns the last error which occured. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns the last error which occured." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_GetLastError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "GetLastError", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_GetLastError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::XmlFile_eventGetLastError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_GetLastError_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_GetLastError_Statics::XmlFile_eventGetLastError_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_GetLastError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_GetLastError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlFile_GetRootNode_Statics
	{
		struct XmlFile_eventGetRootNode_Parms
		{
			bool bIsValid;
			UXmlNode* ReturnValue;
		};
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((XmlFile_eventGetRootNode_Parms*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlFile_eventGetRootNode_Parms), &Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Root Node" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlFile_eventGetRootNode_Parms, ReturnValue), Z_Construct_UClass_UXmlNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_bIsValid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Returns this file's root node. Each file must have one and only one node. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns this file's root node. Each file must have one and only one node." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "GetRootNode", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::XmlFile_eventGetRootNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::XmlFile_eventGetRootNode_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_GetRootNode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_GetRootNode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlFile_IsValid_Statics
	{
		struct XmlFile_eventIsValid_Parms
		{
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Valid" },
	};
#endif
	void Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlFile_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlFile_eventIsValid_Parms), &Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Returns if this File is valid. If we can safely access its nodes. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Returns if this File is valid. If we can safely access its nodes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_IsValid_Statics::XmlFile_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_IsValid_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_IsValid_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_IsValid_Statics::XmlFile_eventIsValid_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlFile_LoadFile_Statics
	{
		struct XmlFile_eventLoadFile_Parms
		{
			FString File;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlFile_eventLoadFile_Parms, File), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_File_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Loaded" },
	};
#endif
	void Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlFile_eventLoadFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlFile_eventLoadFile_Parms), &Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Load a raw XML file into this File object. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Load a raw XML file into this File object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "LoadFile", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::XmlFile_eventLoadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_LoadFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_LoadFile_Statics::XmlFile_eventLoadFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlFile_LoadFromString_Statics
	{
		struct XmlFile_eventLoadFromString_Parms
		{
			FString RawXml;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawXml_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RawXml;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_RawXml_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_RawXml = { "RawXml", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlFile_eventLoadFromString_Parms, RawXml), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_RawXml_MetaData), Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_RawXml_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Loaded" },
	};
#endif
	void Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlFile_eventLoadFromString_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlFile_eventLoadFromString_Parms), &Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_RawXml,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Load the XML contained directly in the String. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Load the XML contained directly in the String." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "LoadFromString", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::XmlFile_eventLoadFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::XmlFile_eventLoadFromString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_LoadFromString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_LoadFromString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UXmlFile_SaveToFile_Statics
	{
		struct XmlFile_eventSaveToFile_Parms
		{
			FString Path;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_Path_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(XmlFile_eventSaveToFile_Parms, Path), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_Path_MetaData), Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_Path_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Is Saved" },
	};
#endif
	void Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((XmlFile_eventSaveToFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(XmlFile_eventSaveToFile_Parms), &Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML|File" },
		{ "Comment", "/* Save this XML representation to a file. */" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "Save this XML representation to a file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UXmlFile, nullptr, "SaveToFile", nullptr, nullptr, Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::XmlFile_eventSaveToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::XmlFile_eventSaveToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UXmlFile_SaveToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UXmlFile_SaveToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UXmlFile);
	UClass* Z_Construct_UClass_UXmlFile_NoRegister()
	{
		return UXmlFile::StaticClass();
	}
	struct Z_Construct_UClass_UXmlFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UXmlFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlFile_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UXmlFile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UXmlFile_GetLastError, "GetLastError" }, // 35185326
		{ &Z_Construct_UFunction_UXmlFile_GetRootNode, "GetRootNode" }, // 1059171976
		{ &Z_Construct_UFunction_UXmlFile_IsValid, "IsValid" }, // 2011851487
		{ &Z_Construct_UFunction_UXmlFile_LoadFile, "LoadFile" }, // 2820827323
		{ &Z_Construct_UFunction_UXmlFile_LoadFromString, "LoadFromString" }, // 3820557067
		{ &Z_Construct_UFunction_UXmlFile_SaveToFile, "SaveToFile" }, // 988656824
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlFile_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UXmlFile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  An XML file, containing zero, one or several nodes.\n **/" },
		{ "IncludePath", "BlueprintXMLWrapper.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLWrapper.h" },
		{ "ToolTip", "An XML file, containing zero, one or several nodes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UXmlFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UXmlFile>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UXmlFile_Statics::ClassParams = {
		&UXmlFile::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UXmlFile_Statics::Class_MetaDataParams), Z_Construct_UClass_UXmlFile_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UXmlFile()
	{
		if (!Z_Registration_Info_UClass_UXmlFile.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UXmlFile.OuterSingleton, Z_Construct_UClass_UXmlFile_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UXmlFile.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<UXmlFile>()
	{
		return UXmlFile::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UXmlFile);
	UXmlFile::~UXmlFile() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::EnumInfo[] = {
		{ EXMLNodeValidity_StaticEnum, TEXT("EXMLNodeValidity"), &Z_Registration_Info_UEnum_EXMLNodeValidity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3813912670U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UXmlNode, UXmlNode::StaticClass, TEXT("UXmlNode"), &Z_Registration_Info_UClass_UXmlNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXmlNode), 2434493896U) },
		{ Z_Construct_UClass_UXmlFile, UXmlFile::StaticClass, TEXT("UXmlFile"), &Z_Registration_Info_UClass_UXmlFile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UXmlFile), 587706722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_1261297548(TEXT("/Script/BlueprintXML"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLWrapper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
