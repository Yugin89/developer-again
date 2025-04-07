// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UELibraryProjectEmbeddedEditorTarget : TargetRules
{
	public UELibraryProjectEmbeddedEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		LinkType = TargetLinkType.Monolithic;
		bShouldCompileAsDLL = true;
		bBuildAdditionalConsoleApp = false;

		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "UELibrary", "UELibraryProject" } );

		GlobalDefinitions.Add("UE_LIBRARY_ENABLED=1");
	}
}
