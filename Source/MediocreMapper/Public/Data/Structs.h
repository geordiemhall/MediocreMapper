
#include "CoreMinimal.h"
#include "Enums.h"
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



USTRUCT(BlueprintType)
struct FNoteData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Note")
		float Time;

	UPROPERTY(EditAnywhere, Category = "Note")
		int32 Line;

	UPROPERTY(EditAnywhere, Category = "Note")
		int32 Layer;

	UPROPERTY(EditAnywhere, Category = "Note")
		int32 Type;

	UPROPERTY(EditAnywhere, Category = "Note")
		int32 CutDirection;

	FNoteData()
	{
		Time = 0.0f;
		Line = 0;
		Layer = 0;
		Type = 0;
		CutDirection = 0;
	}

};


USTRUCT(BlueprintType)
struct FObstacle
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Obstacle")
		float Time;

	UPROPERTY(EditAnywhere, Category = "Obstacle")
		int32 TimeIndex;

	UPROPERTY(EditAnywhere, Category = "Obstacle")
		int32 Type;

	UPROPERTY(EditAnywhere, Category = "Obstacle")
		float Duration;

	UPROPERTY(EditAnywhere, Category = "Obstacle")
		int32 Width;

	FObstacle()
	{
		Time = 0.0f;
		TimeIndex = 0;
		Type = 0;
		Duration = 0.0f;
		Width = 0;
	}
};


USTRUCT(BlueprintType)
struct FSong
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category = "Song")
		FString SongName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString SongSubName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString SongAuthorName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString LevelAuthorName;

	UPROPERTY(EditAnywhere, Category = "Song")
		float BPM;

	UPROPERTY(EditAnywhere, Category = "Song")
		float SongTimeOffset;

	UPROPERTY(EditAnywhere, Category = "Song")
		float Shuffle;

	UPROPERTY(EditAnywhere, Category = "Song")
		float ShufflePeriod;

	UPROPERTY(EditAnywhere, Category = "Song")
		float PreviewStartTime;

	UPROPERTY(EditAnywhere, Category = "Song")
		float PreviewDuration;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString SongFileName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString CoverImageFileName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString EnvironmentName;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString CustomPlatform;

	UPROPERTY(EditAnywhere, Category = "Song")
		FString CustomPlatformHash;

	UPROPERTY(EditAnywhere, Category = "Song")
		TArray<FBeatmapSet> DifficultyBeatmapSets;

	FSong()
	{
		SongName = FString("Unknown");
		SongSubName = FString();
		SongAuthorName = FString("Unknown");
		LevelAuthorName = FString();

		BPM = 120.0f;
		SongTimeOffset = 0.0f;
		Shuffle = 0.0f;
		ShufflePeriod = 0.0f;
		PreviewStartTime = 12.0f;
		PreviewDuration = 10.0f;

		SongFileName = FString();
		CoverImageFileName = FString("None");
		EnvironmentName = FString("DefaultEnvironment");
		CustomPlatform = FString();
		CustomPlatformHash = FString();


	}
};

USTRUCT(BlueprintType)
struct FTempLink
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Temp Link")
		FString Link;

	UPROPERTY(EditAnywhere, Category = "Temp Link")
		FString Name;

	FTempLink()
	{
		Link = FString();
		Name = FString();
	}

};


USTRUCT(BlueprintType)
struct FTimePos
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Time Position")
		float Time;

	UPROPERTY(EditAnywhere, Category = "Time Position")
		int32 Line;

	UPROPERTY(EditAnywhere, Category = "Time Position")
		int32 Layer;

	FTimePos()
	{
		Time = 0.0f;
		Line = 0;
		Layer = 0;
	}
};


USTRUCT(BlueprintType)
struct FUndo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Undo")
		bool bDelete;

	UPROPERTY(EditAnywhere, Category = "Undo")
		bool bDoNext;

	UPROPERTY(EditAnywhere, Category = "Undo")
		EUndoType UndoType;

	UPROPERTY(EditAnywhere, Category = "Undo")
		float Time;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 Line;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 Layer;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 Type;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 OutDirection;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 LineIndex;

	UPROPERTY(EditAnywhere, Category = "Undo")
		float Duration;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 Width;

	UPROPERTY(EditAnywhere, Category = "Undo")
		int32 Value;

	FUndo()
	{
		bDelete = false;
		bDoNext = false;

		UndoType = EUndoType::Note;

		Time = 0.0f;
		Line = 0;
		Layer = 0;
		Type = 0;
		OutDirection = 0;
		LineIndex = 0;
		Duration = 0.0f;
		Width = 0;
		Value = 0;
	}

};