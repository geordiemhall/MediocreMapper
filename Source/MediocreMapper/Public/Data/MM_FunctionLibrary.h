// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "MM_FunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class MEDIOCREMAPPER_API UMM_FunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


public:
	UFUNCTION(BlueprintPure, Category = "BPFL")
		static int32 LineToEvent(int32 Line);


	UFUNCTION(BlueprintPure, Category = "BPFL")
		static int32 EventToLine(int32 Event);

};
