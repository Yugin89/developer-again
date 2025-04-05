// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BikeControlPlugin/Public/PIDCtrlComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePIDCtrlComponent() {}
// Cross Module References
	BIKECONTROLPLUGIN_API UClass* Z_Construct_UClass_UPIDCtrlComponent();
	BIKECONTROLPLUGIN_API UClass* Z_Construct_UClass_UPIDCtrlComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_BikeControlPlugin();
// End Cross Module References
	DEFINE_FUNCTION(UPIDCtrlComponent::execResetPidValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetPidValues();
		P_NATIVE_END;
	}
	void UPIDCtrlComponent::StaticRegisterNativesUPIDCtrlComponent()
	{
		UClass* Class = UPIDCtrlComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetPidValues", &UPIDCtrlComponent::execResetPidValues },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bike Parameters PID" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPIDCtrlComponent, nullptr, "ResetPidValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPIDCtrlComponent);
	UClass* Z_Construct_UClass_UPIDCtrlComponent_NoRegister()
	{
		return UPIDCtrlComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPIDCtrlComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPidCtrlEnable_MetaData[];
#endif
		static void NewProp_bPidCtrlEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPidCtrlEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pTermValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pTermValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_iTermValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_iTermValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dTermValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dTermValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[];
#endif
		static void NewProp_bDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pidValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pidValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lastError_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lastError;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pidReset_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pidReset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPIDCtrlComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BikeControlPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPIDCtrlComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPIDCtrlComponent_ResetPidValues, "ResetPidValues" }, // 3952758877
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PIDCtrlComponent.h" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable_MetaData[] = {
		{ "Category", "Bike Parameters PID" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable_SetBit(void* Obj)
	{
		((UPIDCtrlComponent*)Obj)->bPidCtrlEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable = { "bPidCtrlEnable", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPIDCtrlComponent), &Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pTermValue_MetaData[] = {
		{ "Category", "Bike Parameters PID" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pTermValue = { "pTermValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, pTermValue), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pTermValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pTermValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_iTermValue_MetaData[] = {
		{ "Category", "Bike Parameters PID" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_iTermValue = { "iTermValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, iTermValue), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_iTermValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_iTermValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_dTermValue_MetaData[] = {
		{ "Category", "Bike Parameters PID" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_dTermValue = { "dTermValue", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, dTermValue), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_dTermValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_dTermValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug_MetaData[] = {
		{ "Category", "Bike Parameters PID" },
		{ "Comment", "/*UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = \"Bike Parameters PID\")\n\x09""float minValue = -500.f;\n\x09UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = \"Bike Parameters PID\")\n\x09""float maxValue = 500.f;*/" },
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
		{ "ToolTip", "UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = \"Bike Parameters PID\")\n       float minValue = -500.f;\n       UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = \"Bike Parameters PID\")\n       float maxValue = 500.f;" },
	};
#endif
	void Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug_SetBit(void* Obj)
	{
		((UPIDCtrlComponent*)Obj)->bDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPIDCtrlComponent), &Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidValue = { "pidValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, pidValue), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_lastError_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_lastError = { "lastError", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, lastError), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_lastError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_lastError_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidReset_MetaData[] = {
		{ "ModuleRelativePath", "Public/PIDCtrlComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidReset = { "pidReset", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPIDCtrlComponent, pidReset), METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidReset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidReset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPIDCtrlComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bPidCtrlEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pTermValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_iTermValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_dTermValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_bDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_lastError,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPIDCtrlComponent_Statics::NewProp_pidReset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPIDCtrlComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPIDCtrlComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPIDCtrlComponent_Statics::ClassParams = {
		&UPIDCtrlComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPIDCtrlComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPIDCtrlComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPIDCtrlComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPIDCtrlComponent()
	{
		if (!Z_Registration_Info_UClass_UPIDCtrlComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPIDCtrlComponent.OuterSingleton, Z_Construct_UClass_UPIDCtrlComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPIDCtrlComponent.OuterSingleton;
	}
	template<> BIKECONTROLPLUGIN_API UClass* StaticClass<UPIDCtrlComponent>()
	{
		return UPIDCtrlComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPIDCtrlComponent);
	UPIDCtrlComponent::~UPIDCtrlComponent() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPIDCtrlComponent, UPIDCtrlComponent::StaticClass, TEXT("UPIDCtrlComponent"), &Z_Registration_Info_UClass_UPIDCtrlComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPIDCtrlComponent), 3611598249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_118940932(TEXT("/Script/BikeControlPlugin"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_BikeControlPlugin_Source_BikeControlPlugin_Public_PIDCtrlComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
