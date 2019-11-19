
#include "CoreMinimal.h"
#include "Structs.generated.h"

/*
* This struct header is temporary until I can convert the rest of the blueprints over to C++
*/

USTRUCT(BlueprintType)
struct FChangeBPM
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "BPM Change")
		float Time;

	UPROPERTY(EditAnywhere, Category = "BPM Change")
		int32 BPM;

	// TODO: Change to BP_Event
	UPROPERTY(EditAnywhere, Category = "BPM Change")
		TSubclassOf<class AActor> EventBP;

	UPROPERTY(EditAnywhere, Category = "BPM Change")
		class UStaticMeshComponent* EventTrack;

	UPROPERTY(EditAnywhere, Category = "BPM Change")
		class UStaticMeshComponent* NoteTrack;

	FChangeBPM()
	{
		Time = 0.0f;
		BPM = 0;
		EventBP = nullptr;
		EventTrack = nullptr;
		NoteTrack = nullptr;
	}
};

USTRUCT(BlueprintType)
struct FSectionStat
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		float RedBlueRatio;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> RedPositionProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> BluePositionProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> RedAngleProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		TArray<float> BlueAngleProbability;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		float StreamRating;

	UPROPERTY(EditAnywhere, Category = "Section Stats")
		int32 FirstColor;

	FSectionStat()
	{
		RedBlueRatio = 0.0f;
		StreamRating = 0.0f;
		FirstColor = 0;
	}
};

USTRUCT(BlueprintType)
struct FDifficultyInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		FString Difficulty;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		int32 DifficultyRank;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		FString DifficultyLabel;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		FString BeatmapFilename;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		float NoteJumpMovementSpeed;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		float NoteJumpStartBeatOffset;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		float EditorOffset;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		float EditorOldOffset;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		TArray<FString> Warnings;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		TArray<FString> Information;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		TArray<FString> Suggestions;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		TArray<FString> Requirements;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		FString Characteristics;


	FDifficultyInfo()
	{
		Difficulty = FString("None");
		DifficultyRank = 4;
		DifficultyLabel = FString();
		BeatmapFilename = FString("expert.json");

		NoteJumpMovementSpeed = 0.0f;
		NoteJumpStartBeatOffset = 0.0f;
		EditorOffset = 0.0f;
		EditorOldOffset = 0.0f;
		Characteristics = FString();
	}

};


USTRUCT(BlueprintType)
struct FBeatmapSet
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		FString BeatmapCharactaristicName;

	UPROPERTY(EditAnywhere, Category = "Difficulty Info")
		TArray<FDifficultyInfo> DifficultyBeatmaps;

	FBeatmapSet()
	{
		BeatmapCharactaristicName = FString();
	}
};

USTRUCT(BlueprintType)
struct FDifficulty
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Difficulty")
		FString Version;

	UPROPERTY(EditAnywhere, Category = "Difficulty")
		int32 Time;

	FDifficulty()
	{
		Version = FString();
		Time = 0;
	}

};

USTRUCT(BlueprintType)
struct FTrackEvent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Track Event")
		float Time;

	UPROPERTY(EditAnywhere, Category = "Track Event")
		int32 Type;

	UPROPERTY(EditAnywhere, Category = "Track Event")
		int32 Value;

	FTrackEvent()
	{
		Time = 0.0f;
		Type = 0;
		Value = 0;
	}
};