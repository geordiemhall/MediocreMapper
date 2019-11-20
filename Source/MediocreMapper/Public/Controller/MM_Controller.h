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
	AMM_Controller(const FObjectInitializer& ObjectInitializer);
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma region Components
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class USceneComponent* TimelineRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class USceneComponent* EventRoot;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* TimelinePlane;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* PlacingPlane;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* EventsPlane;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* TimeCursor;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* EventCursor;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* TimeCursorCube;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* EventCursorCube;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UStaticMeshComponent* PlacementCursor;




	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class USphereComponent* CamHitBox;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UCameraComponent* MainCamera;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UAudioComponent* SongPlayer;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UTextRenderComponent* EventTypesText;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UProceduralMeshComponent* Spectrogram;


	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class UAudioCaptureComponent* AudioCapture;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Controller | Components")
		class USoundVisComponent* SoundVis;


	// TODO: BP_Note_Ghost, BP_Event_Ghost, BP_Wall_Ghost


#pragma endregion Components


protected:
	virtual void BeginPlay() override;



private:

	
};
