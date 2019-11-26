using UnrealBuildTool;
using System.IO;

public class eXiSoundVis : ModuleRules
{
	public eXiSoundVis(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        //PrivateIncludePaths.AddRange(new string[] {	"eXiSoundVis/Private" });
        //PublicIncludePaths.AddRange(new string[] { "eXiSoundVis/Public" });
        PublicIncludePaths.AddRange(
            new string[] {
				// ... add public include paths required here ...
			}
            );

        PrivateIncludePaths.AddRange(
        new string[] {
			// ... add other private include paths required here ...
		}
        );

        PublicDependencyModuleNames.AddRange(new string[] { "Engine", "Core", "CoreUObject", "InputCore", "RHI", "Kiss_FFT" });

        //PublicAdditionalLibraries.Add("legacy_stdio_definitions.lib");

        PublicDependencyModuleNames.Add("Kiss_FFT");
	}
}