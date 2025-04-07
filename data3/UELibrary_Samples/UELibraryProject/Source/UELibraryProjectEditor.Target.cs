// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class UELibraryProjectEditorTarget : TargetRules
{
	public UELibraryProjectEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		bBuildAdditionalConsoleApp = false;

		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "UELibrary", "UELibraryProject" } );
	}
}
