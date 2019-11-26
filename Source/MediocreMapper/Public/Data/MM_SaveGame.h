// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "MM_SaveGame.generated.h"


USTRUCT(BlueprintType)
struct FPathSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		FString BeatSaberPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		FString BeatSaberWIPPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		FString ZipOutputPath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		FString LastSong;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		FString LastDiff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Paths")
		TArray<FString> FavoriteSongs;

	FPathSettings()
	{
		BeatSaberPath = FString("");
		BeatSaberWIPPath = FString("");
		ZipOutputPath = FString("");
		LastSong = FString("");
		LastDiff = FString("");
	}
};


USTRUCT(BlueprintType)
struct FAutosaveSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Autosave")
		bool bAutosave;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Autosave")
		bool bAutosaveCopy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Autosave")
		bool bAutosavePlay;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Autosave")
		float AutosaveInterval;

	FAutosaveSettings()
	{
		bAutosave = false;
		bAutosaveCopy = false;
		bAutosavePlay = false;
		AutosaveInterval = 300.0f;
	}
};


USTRUCT(BlueprintType)
struct FAudioVolumeSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Audio Volume")
		float HitVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Audio Volume")
		float SongVolume;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Audio Volume")
		float MetronomeVolume;

	FAudioVolumeSettings()
	{
		HitVolume = 1.0f;
		SongVolume = 1.0f;
		MetronomeVolume = 1.0f;
	}

};


USTRUCT(BlueprintType)
struct FMiscSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool bSortByName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool bWaveForm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool bLighting;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool b6Lane;

	// ?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool CTEnable;

	// ?
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		int32 HitSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool bPrecisionPlacement;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		bool bPrecisionAngles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		int32 PrecisionSnap;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		float PrecisionA;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		float PrecisionB;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data | Misc Settings")
		TArray<FVector> Colors;


	FMiscSettings()
	{
		bSortByName = false;
		bWaveForm = true;
		bLighting = true;
		b6Lane = false;
		CTEnable = false;
		HitSound = 1;
		bPrecisionPlacement = false;
		bPrecisionAngles = false;
		PrecisionSnap = 0;
		PrecisionA = 0.0f;
		PrecisionB = 0.0f;
	}

};


UCLASS()
class MEDIOCREMAPPER_API UMM_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	
	
	const float SaveVersion = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
		FPathSettings PathSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
		FAutosaveSettings AutosaveSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
		FAudioVolumeSettings AudioVolumeSettings;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Save Data")
		FMiscSettings MiscSettings;



};
