// Copyright 2021, Infima Games. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class BoomerShooterEditorTarget : TargetRules
{
	public BoomerShooterEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "BoomerShooter" } );
	}
}