// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "MM_Controller.generated.h"

UCLASS()
class MEDIOCREMAPPER_API AMM_Controller : public APawn
{
	GENERATED_BODY()

public:
	AMM_Controller();
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;


protected:
	virtual void BeginPlay() override;



private:

	

};
