// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBleGoodies_init() {}
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature();
	BLEGOODIES_API UFunction* Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_BleGoodies;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_BleGoodies()
	{
		if (!Z_Registration_Info_UPackage__Script_BleGoodies.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDataDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleCharacteristicErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleErrorDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleOnAdvertisementDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_BleGoodies_BleOnDeviceFoundDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/BleGoodies",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x29B92BC2,
				0x92462CF2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_BleGoodies.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_BleGoodies.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_BleGoodies(Z_Construct_UPackage__Script_BleGoodies, TEXT("/Script/BleGoodies"), Z_Registration_Info_UPackage__Script_BleGoodies, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x29B92BC2, 0x92462CF2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
