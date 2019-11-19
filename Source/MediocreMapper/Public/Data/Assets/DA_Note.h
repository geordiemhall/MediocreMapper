// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DA_Note.generated.h"

/**
 * 
 */
UCLASS()
class MEDIOCREMAPPER_API UDA_Note : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note Data Asset")
		class UStaticMesh* Mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note Data Asset")
		class UMaterialInterface* MeshMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Note Data Asset")
		class UMaterialInterface* ArrowMaterial;
	
};
