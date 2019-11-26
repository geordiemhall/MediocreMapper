// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlatformFilemanager.h"
#include "GenericPlatformFile.h"
#include "FileManager.h"
#include "DataIOComp.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MEDIOCREMAPPER_API UDataIOComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDataIOComp();
	void BeginPlay() override;

	UFUNCTION()
		void LoadConfigData();




		
private:
	UPROPERTY()
		class AMM_Controller* OwningCont;
	

};
