// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintXML/Public/BlueprintXMLLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintXMLLibrary() {}
// Cross Module References
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UBlueprintXmlLibrary();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UBlueprintXmlLibrary_NoRegister();
	BLUEPRINTXML_API UClass* Z_Construct_UClass_UXmlFile_NoRegister();
	BLUEPRINTXML_API UEnum* Z_Construct_UEnum_BlueprintXML_EXmlParseResult();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueprintXML();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXmlParseResult;
	static UEnum* EXmlParseResult_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EXmlParseResult.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EXmlParseResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_BlueprintXML_EXmlParseResult, (UObject*)Z_Construct_UPackage__Script_BlueprintXML(), TEXT("EXmlParseResult"));
		}
		return Z_Registration_Info_UEnum_EXmlParseResult.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UEnum* StaticEnum<EXmlParseResult>()
	{
		return EXmlParseResult_StaticEnum();
	}
	struct Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enumerators[] = {
		{ "EXmlParseResult::Success", (int64)EXmlParseResult::Success },
		{ "EXmlParseResult::Failed", (int64)EXmlParseResult::Failed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n *  Used for output nodes.\n **/" },
		{ "Failed.Name", "EXmlParseResult::Failed" },
		{ "ModuleRelativePath", "Public/BlueprintXMLLibrary.h" },
		{ "Success.Name", "EXmlParseResult::Success" },
		{ "ToolTip", "Used for output nodes." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_BlueprintXML,
		nullptr,
		"EXmlParseResult",
		"EXmlParseResult",
		Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_BlueprintXML_EXmlParseResult()
	{
		if (!Z_Registration_Info_UEnum_EXmlParseResult.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXmlParseResult.InnerSingleton, Z_Construct_UEnum_BlueprintXML_EXmlParseResult_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EXmlParseResult.InnerSingleton;
	}
	DEFINE_FUNCTION(UBlueprintXmlLibrary::execSaveXmlToFile)
	{
		P_GET_OBJECT(UXmlFile,Z_Param_FileToSave);
		P_GET_PROPERTY(FStrProperty,Z_Param_SavePath);
		P_GET_ENUM_REF(EXmlParseResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueprintXmlLibrary::SaveXmlToFile(Z_Param_FileToSave,Z_Param_SavePath,(EXmlParseResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintXmlLibrary::execLoadXmlString)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_XmlRawString);
		P_GET_ENUM_REF(EXmlParseResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlFile**)Z_Param__Result=UBlueprintXmlLibrary::LoadXmlString(Z_Param_XmlRawString,(EXmlParseResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueprintXmlLibrary::execLoadFile)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_File);
		P_GET_ENUM_REF(EXmlParseResult,Z_Param_Out_Branches);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UXmlFile**)Z_Param__Result=UBlueprintXmlLibrary::LoadFile(Z_Param_File,(EXmlParseResult&)(Z_Param_Out_Branches));
		P_NATIVE_END;
	}
	void UBlueprintXmlLibrary::StaticRegisterNativesUBlueprintXmlLibrary()
	{
		UClass* Class = UBlueprintXmlLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadFile", &UBlueprintXmlLibrary::execLoadFile },
			{ "LoadXmlString", &UBlueprintXmlLibrary::execLoadXmlString },
			{ "SaveXmlToFile", &UBlueprintXmlLibrary::execSaveXmlToFile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics
	{
		struct BlueprintXmlLibrary_eventLoadFile_Parms
		{
			FString File;
			EXmlParseResult Branches;
			UXmlFile* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_File;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_File_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadFile_Parms, File), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_File_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_File_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadFile_Parms, Branches), Z_Construct_UEnum_BlueprintXML_EXmlParseResult, METADATA_PARAMS(0, nullptr) }; // 2891058386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parsed XML file" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadFile_Parms, ReturnValue), Z_Construct_UClass_UXmlFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_File,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML" },
		{ "Comment", "/* Load the specified XML file. */" },
		{ "DisplayName", "Load XML File" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintXMLLibrary.h" },
		{ "ToolTip", "Load the specified XML file." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintXmlLibrary, nullptr, "LoadFile", nullptr, nullptr, Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::BlueprintXmlLibrary_eventLoadFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::BlueprintXmlLibrary_eventLoadFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics
	{
		struct BlueprintXmlLibrary_eventLoadXmlString_Parms
		{
			FString XmlRawString;
			EXmlParseResult Branches;
			UXmlFile* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XmlRawString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_XmlRawString;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_XmlRawString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_XmlRawString = { "XmlRawString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadXmlString_Parms, XmlRawString), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_XmlRawString_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_XmlRawString_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadXmlString_Parms, Branches), Z_Construct_UEnum_BlueprintXML_EXmlParseResult, METADATA_PARAMS(0, nullptr) }; // 2891058386
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "DisplayName", "Parsed XML" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventLoadXmlString_Parms, ReturnValue), Z_Construct_UClass_UXmlFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_XmlRawString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_Branches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML" },
		{ "Comment", "/* Create an XML file from a string input */" },
		{ "DisplayName", "Load XML from String" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintXMLLibrary.h" },
		{ "ToolTip", "Create an XML file from a string input" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintXmlLibrary, nullptr, "LoadXmlString", nullptr, nullptr, Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::BlueprintXmlLibrary_eventLoadXmlString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::BlueprintXmlLibrary_eventLoadXmlString_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics
	{
		struct BlueprintXmlLibrary_eventSaveXmlToFile_Parms
		{
			const UXmlFile* FileToSave;
			FString SavePath;
			EXmlParseResult Branches;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FileToSave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FileToSave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SavePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SavePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_FileToSave_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_FileToSave = { "FileToSave", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventSaveXmlToFile_Parms, FileToSave), Z_Construct_UClass_UXmlFile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_FileToSave_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_FileToSave_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_SavePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_SavePath = { "SavePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventSaveXmlToFile_Parms, SavePath), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_SavePath_MetaData), Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_SavePath_MetaData) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlueprintXmlLibrary_eventSaveXmlToFile_Parms, Branches), Z_Construct_UEnum_BlueprintXML_EXmlParseResult, METADATA_PARAMS(0, nullptr) }; // 2891058386
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_FileToSave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_SavePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_Branches_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::NewProp_Branches,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "XML" },
		{ "Comment", "/* Save this XML to a file on the disk. */" },
		{ "DisplayName", "Save XML to File" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "ModuleRelativePath", "Public/BlueprintXMLLibrary.h" },
		{ "ToolTip", "Save this XML to a file on the disk." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueprintXmlLibrary, nullptr, "SaveXmlToFile", nullptr, nullptr, Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::BlueprintXmlLibrary_eventSaveXmlToFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::BlueprintXmlLibrary_eventSaveXmlToFile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintXmlLibrary);
	UClass* Z_Construct_UClass_UBlueprintXmlLibrary_NoRegister()
	{
		return UBlueprintXmlLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintXmlLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintXmlLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintXML,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintXmlLibrary_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueprintXmlLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueprintXmlLibrary_LoadFile, "LoadFile" }, // 2959268121
		{ &Z_Construct_UFunction_UBlueprintXmlLibrary_LoadXmlString, "LoadXmlString" }, // 3928390009
		{ &Z_Construct_UFunction_UBlueprintXmlLibrary_SaveXmlToFile, "SaveXmlToFile" }, // 4079645964
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintXmlLibrary_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintXmlLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *  Library containing helper functions to work with XML\n **/" },
		{ "IncludePath", "BlueprintXMLLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueprintXMLLibrary.h" },
		{ "ToolTip", "Library containing helper functions to work with XML" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintXmlLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintXmlLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintXmlLibrary_Statics::ClassParams = {
		&UBlueprintXmlLibrary::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintXmlLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlueprintXmlLibrary_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBlueprintXmlLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintXmlLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintXmlLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintXmlLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintXmlLibrary.OuterSingleton;
	}
	template<> BLUEPRINTXML_API UClass* StaticClass<UBlueprintXmlLibrary>()
	{
		return UBlueprintXmlLibrary::StaticClass();
	}
	UBlueprintXmlLibrary::UBlueprintXmlLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintXmlLibrary);
	UBlueprintXmlLibrary::~UBlueprintXmlLibrary() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::EnumInfo[] = {
		{ EXmlParseResult_StaticEnum, TEXT("EXmlParseResult"), &Z_Registration_Info_UEnum_EXmlParseResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2891058386U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintXmlLibrary, UBlueprintXmlLibrary::StaticClass, TEXT("UBlueprintXmlLibrary"), &Z_Registration_Info_UClass_UBlueprintXmlLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintXmlLibrary), 273512499U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_64814731(TEXT("/Script/BlueprintXML"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BlueprintXML_Source_BlueprintXML_Public_BlueprintXMLLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
