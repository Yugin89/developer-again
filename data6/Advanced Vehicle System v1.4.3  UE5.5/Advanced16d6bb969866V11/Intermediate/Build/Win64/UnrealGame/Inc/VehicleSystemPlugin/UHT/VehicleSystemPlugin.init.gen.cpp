// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleSystemPlugin_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VehicleSystemPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_VehicleSystemPlugin.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VehicleSystemPlugin",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xE61FC495,
				0x1D65A9BD,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VehicleSystemPlugin.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VehicleSystemPlugin.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VehicleSystemPlugin(Z_Construct_UPackage__Script_VehicleSystemPlugin, TEXT("/Script/VehicleSystemPlugin"), Z_Registration_Info_UPackage__Script_VehicleSystemPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE61FC495, 0x1D65A9BD));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
