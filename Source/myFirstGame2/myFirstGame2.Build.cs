// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class myFirstGame2 : ModuleRules
{
	public myFirstGame2(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
