// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VehicleSystemPlugin/Public/VehicleConstraint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleConstraint() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPhysicsConstraintComponent();
UPackage* Z_Construct_UPackage__Script_VehicleSystemPlugin();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleConstraint();
VEHICLESYSTEMPLUGIN_API UClass* Z_Construct_UClass_UVehicleConstraint_NoRegister();
// End Cross Module References

// Begin Class UVehicleConstraint Function SetLinearSoftConstraint
struct Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics
{
	struct VehicleConstraint_eventSetLinearSoftConstraint_Parms
	{
		bool SoftConstraint;
		float Stiffness;
		float Damping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "VehicleSystemPlugin" },
		{ "ModuleRelativePath", "Public/VehicleConstraint.h" },
	};
#endif // WITH_METADATA
	static void NewProp_SoftConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SoftConstraint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint_SetBit(void* Obj)
{
	((VehicleConstraint_eventSetLinearSoftConstraint_Parms*)Obj)->SoftConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint = { "SoftConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VehicleConstraint_eventSetLinearSoftConstraint_Parms), &Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleConstraint_eventSetLinearSoftConstraint_Parms, Stiffness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VehicleConstraint_eventSetLinearSoftConstraint_Parms, Damping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_SoftConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::NewProp_Damping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVehicleConstraint, nullptr, "SetLinearSoftConstraint", nullptr, nullptr, Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::VehicleConstraint_eventSetLinearSoftConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::VehicleConstraint_eventSetLinearSoftConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVehicleConstraint::execSetLinearSoftConstraint)
{
	P_GET_UBOOL(Z_Param_SoftConstraint);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stiffness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearSoftConstraint(Z_Param_SoftConstraint,Z_Param_Stiffness,Z_Param_Damping);
	P_NATIVE_END;
}
// End Class UVehicleConstraint Function SetLinearSoftConstraint

// Begin Class UVehicleConstraint
void UVehicleConstraint::StaticRegisterNativesUVehicleConstraint()
{
	UClass* Class = UVehicleConstraint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetLinearSoftConstraint", &UVehicleConstraint::execSetLinearSoftConstraint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVehicleConstraint);
UClass* Z_Construct_UClass_UVehicleConstraint_NoRegister()
{
	return UVehicleConstraint::StaticClass();
}
struct Z_Construct_UClass_UVehicleConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "VehicleSystem" },
		{ "HideCategories", "Activation Components|Activation Physics Mobility Activation Components|Activation Physics Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "VehicleConstraint.h" },
		{ "ModuleRelativePath", "Public/VehicleConstraint.h" },
		{ "ShowCategories", "Physics|Components|PhysicsConstraint" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVehicleConstraint_SetLinearSoftConstraint, "SetLinearSoftConstraint" }, // 901793676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVehicleConstraint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVehicleConstraint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPhysicsConstraintComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_VehicleSystemPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleConstraint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVehicleConstraint_Statics::ClassParams = {
	&UVehicleConstraint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVehicleConstraint_Statics::Class_MetaDataParams), Z_Construct_UClass_UVehicleConstraint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVehicleConstraint()
{
	if (!Z_Registration_Info_UClass_UVehicleConstraint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVehicleConstraint.OuterSingleton, Z_Construct_UClass_UVehicleConstraint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVehicleConstraint.OuterSingleton;
}
template<> VEHICLESYSTEMPLUGIN_API UClass* StaticClass<UVehicleConstraint>()
{
	return UVehicleConstraint::StaticClass();
}
UVehicleConstraint::UVehicleConstraint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVehicleConstraint);
UVehicleConstraint::~UVehicleConstraint() {}
// End Class UVehicleConstraint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVehicleConstraint, UVehicleConstraint::StaticClass, TEXT("UVehicleConstraint"), &Z_Registration_Info_UClass_UVehicleConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVehicleConstraint), 2729521213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_1165201415(TEXT("/Script/VehicleSystemPlugin"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_VehicleSystemPlugin_Source_VehicleSystemPlugin_Public_VehicleConstraint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
