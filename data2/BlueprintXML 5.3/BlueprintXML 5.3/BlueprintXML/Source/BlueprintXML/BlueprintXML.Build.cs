// Copyright Pandores Marketplace 2021. All Rights Reserved.

using UnrealBuildTool;

public class BlueprintXML : ModuleRules
{
	public BlueprintXML(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
			}
		);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"XmlParser"
			}
		);

		//PublicIncludePaths.Add(Path.Combine(ModuleDirectory, "Public"));
	}
}
