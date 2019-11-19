// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MM_GameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MEDIOCREMAPPER_API UMM_GameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:

	
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Instance")
		float NoteSeparation = 200.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Instance")
		bool b6Lane = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Instance")
		bool bPrecisionPlacement = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Instance")
		bool bPrecisionAngles = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Game Instance")
		bool bWIP = true;
};
