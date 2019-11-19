// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Structs.h"
#include "Enums.h"
#include "MM_NoteBase.generated.h"

UCLASS()
class MEDIOCREMAPPER_API AMM_NoteBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMM_NoteBase();
	void OnConstruction(const FTransform& Transform) override;



	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class USceneComponent* DefaultSceneRoot;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class UStaticMeshComponent* NoteMesh;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Note | Components")
		class UStaticMeshComponent* ArrowMesh;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* RedNote;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* BlueNote;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* MagentaNote;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* GreenNote;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* GreyNote;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UDataAsset* BombNote;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UStaticMesh* DotArrow;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Note | References")
		class UStaticMesh* PointArrow;


	





	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Line = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Layer = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		ENoteType Type = ENoteType::Red;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		int32 Direction = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note | Settings")
		float Time = 0.0f;



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
		void UpdateNote();

	UFUNCTION()
		void UpdateTransform();

	UFUNCTION()
		void FixValues();

	UFUNCTION(BlueprintPure, Category = "Note")
		FNoteData GetData();
	

private:

	//TODO: Deprecate
	UPROPERTY()
		float OldPosition;

	UPROPERTY()
		class UMM_GameInstance* GameInstRef;

	UFUNCTION()
		float GetNoteSeparation();

	UFUNCTION()
		void SetMeshMaterialData(class UDataAsset* NewDataInfo);

};
