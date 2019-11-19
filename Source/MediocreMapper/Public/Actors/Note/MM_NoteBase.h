// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Structs.h"
#include "MM_NoteBase.generated.h"

UCLASS()
class MEDIOCREMAPPER_API AMM_NoteBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMM_NoteBase();
	void OnConstruction(const FTransform& Transform) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class UStaticMeshComponent* NoteMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class UStaticMeshComponent* ArrowMesh;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Line = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Layer = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Type = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Direction = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		float Time = 0.0f;


	UFUNCTION()
		void UpdateNote();

	UFUNCTION(BlueprintPure, Category = "Note")
		FNoteData GetData();
	

private:

	//TODO: Deprecate
	UPROPERTY()
		float OldPosition;

	UFUNCTION()
		float GetNoteSeparation();
	

};
