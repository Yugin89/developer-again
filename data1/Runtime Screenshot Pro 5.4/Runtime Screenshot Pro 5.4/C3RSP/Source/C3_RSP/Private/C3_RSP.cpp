// Copyright © 2022 Cyrus365, All Rights Reserved.

#include "C3_RSP.h"

#define LOCTEXT_NAMESPACE "FC3_RSPModule"

void FC3_RSPModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
}

void FC3_RSPModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FC3_RSPModule, C3_RSP)