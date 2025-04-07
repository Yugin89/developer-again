// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UELibraryProject : ModuleRules
{
	public UELibraryProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "Engine", "InputCore" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Launch" });
	}
}
