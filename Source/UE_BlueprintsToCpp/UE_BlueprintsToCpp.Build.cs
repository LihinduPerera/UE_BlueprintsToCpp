// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_BlueprintsToCpp : ModuleRules
{
	public UE_BlueprintsToCpp(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE_BlueprintsToCpp",
			"UE_BlueprintsToCpp/Variant_Platforming",
			"UE_BlueprintsToCpp/Variant_Platforming/Animation",
			"UE_BlueprintsToCpp/Variant_Combat",
			"UE_BlueprintsToCpp/Variant_Combat/AI",
			"UE_BlueprintsToCpp/Variant_Combat/Animation",
			"UE_BlueprintsToCpp/Variant_Combat/Gameplay",
			"UE_BlueprintsToCpp/Variant_Combat/Interfaces",
			"UE_BlueprintsToCpp/Variant_Combat/UI",
			"UE_BlueprintsToCpp/Variant_SideScrolling",
			"UE_BlueprintsToCpp/Variant_SideScrolling/AI",
			"UE_BlueprintsToCpp/Variant_SideScrolling/Gameplay",
			"UE_BlueprintsToCpp/Variant_SideScrolling/Interfaces",
			"UE_BlueprintsToCpp/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
