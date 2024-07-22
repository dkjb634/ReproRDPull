// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class u532fps : ModuleRules
{
	public u532fps(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		
		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput",
			"Niagara"
		});
	}
}
