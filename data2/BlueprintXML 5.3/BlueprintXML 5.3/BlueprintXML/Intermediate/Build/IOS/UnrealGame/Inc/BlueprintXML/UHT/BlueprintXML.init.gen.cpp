// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintXML_init() {}
	BLUEPRINTXML_API UFunction* Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature();
	BLUEPRINTXML_API UFunction* Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BlueprintXML;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BlueprintXML()
	{
		if (!Z_Registration_Info_UPackage__Script_BlueprintXML.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintXML_LoadXmlFileEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BlueprintXML_SaveXmlFileEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BlueprintXML",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA661B2C2,
				0xB37142BB,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BlueprintXML.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BlueprintXML.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BlueprintXML(Z_Construct_UPackage__Script_BlueprintXML, TEXT("/Script/BlueprintXML"), Z_Registration_Info_UPackage__Script_BlueprintXML, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA661B2C2, 0xB37142BB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
