// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBikeControlPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BikeControlPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BikeControlPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_BikeControlPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BikeControlPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x09092679,
				0x19640303,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BikeControlPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BikeControlPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BikeControlPlugin(Z_Construct_UPackage__Script_BikeControlPlugin, TEXT("/Script/BikeControlPlugin"), Z_Registration_Info_UPackage__Script_BikeControlPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x09092679, 0x19640303));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
