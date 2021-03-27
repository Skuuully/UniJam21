// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Jam21 : ModuleRules
{
	public Jam21(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
