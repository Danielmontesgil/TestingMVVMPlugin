// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class TestMVVM : ModuleRules
{
	public TestMVVM(ReadOnlyTargetRules Target) : base(Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "UMG", "Slate", "SlateCore", "ModelViewViewModel" });
	}
}
