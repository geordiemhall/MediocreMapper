// Fill out your copyright notice in the Description page of Project Settings.


#include "DataIOComp.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetStringLibrary.h"
#include "MM_SaveGame.h"
#include "UserWidget.h"
#include "MM_Controller.h"

// Sets default values for this component's properties
UDataIOComp::UDataIOComp()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void UDataIOComp::BeginPlay()
{
	Super::BeginPlay();

	OwningCont = Cast<AMM_Controller>(GetOwner());
	if (!OwningCont)
	{
		UE_LOG(LogTemp, Error, TEXT("DataIOComp: Invalid owner"));
	}
}


void UDataIOComp::LoadConfigData()
{


	// TODO: Investigate this "Save data fix"
	OwningCont->ConfigData = Cast<UMM_SaveGame>(UGameplayStatics::LoadGameFromSlot("config1", 0));
	if (OwningCont->ConfigData)
	{
		const int32 PathLength = UKismetStringLibrary::Len(OwningCont->ConfigData->PathSettings.BeatSaberPath);
		const int32 FolderCutoff = UKismetStringLibrary::Len(FString("/CustomSongs"));

		if (UKismetStringLibrary::GetSubstring(OwningCont->ConfigData->PathSettings.BeatSaberPath, PathLength - FolderCutoff, FolderCutoff).Equals(FString("/CustomSongs")))
		{
			OwningCont->ConfigData->PathSettings.BeatSaberPath = UKismetStringLibrary::GetSubstring(OwningCont->ConfigData->PathSettings.BeatSaberPath, 0, PathLength - FolderCutoff) + FString("/BeatSaber_Data/CustomLevels");
		}

		if (OwningCont->ConfigData->PathSettings.BeatSaberWIPPath.IsEmpty())
		{
			OwningCont->ConfigData->PathSettings.BeatSaberWIPPath = UKismetStringLibrary::GetSubstring(OwningCont->ConfigData->PathSettings.BeatSaberPath, 0, PathLength - FolderCutoff) + FString("/CustomWIPLevels");
		}

		UGameplayStatics::SaveGameToSlot(OwningCont->ConfigData, "config1", 0);
	}
}





