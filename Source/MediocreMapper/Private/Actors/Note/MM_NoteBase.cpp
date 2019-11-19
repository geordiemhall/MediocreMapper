// Fill out your copyright notice in the Description page of Project Settings.


#include "MM_NoteBase.h"
#include "System/MM_GameInstance.h"
#include "Assets/DA_Note.h"

// Sets default values
AMM_NoteBase::AMM_NoteBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;

	NoteMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NoteMesh"));
	NoteMesh->SetupAttachment(RootComponent);


	ArrowMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ArrowMesh"));
	ArrowMesh->SetupAttachment(NoteMesh);
	ArrowMesh->SetRelativeLocation(FVector(0.0f, 25.0f, 10.0f));
	ArrowMesh->SetCollisionProfileName("NoCollision");
	ArrowMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	
}

void AMM_NoteBase::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	UpdateNote();
}


void AMM_NoteBase::BeginPlay()
{
	Super::BeginPlay();

	GameInstRef = Cast<UMM_GameInstance>(GetWorld()->GetGameInstance());

	DirectionToAngles.Empty();
	DirectionToAngles.Add(180);
	DirectionToAngles.Add(0);
	DirectionToAngles.Add(270);
	DirectionToAngles.Add(90);
	DirectionToAngles.Add(225);
	DirectionToAngles.Add(135);
	DirectionToAngles.Add(315);
	DirectionToAngles.Add(45);
	DirectionToAngles.Add(0);
}

void AMM_NoteBase::UpdateNote()
{
	FixValues();

	if (Direction == 8)
	{
		if (DotArrow)
		{
			ArrowMesh->SetStaticMesh(DotArrow);
		}
	}
	else
	{
		if (PointArrow)
		{
			ArrowMesh->SetStaticMesh(PointArrow);
		}
	}
	ArrowMesh->SetRelativeLocation(FVector(0.0f, 25.0f, 0.0f));


	switch (Type)
	{
	case ENoteType::Red:
		SetMeshMaterialData(RedNote);
		break;
	case ENoteType::Blue:
		SetMeshMaterialData(BlueNote);
		break;
	case ENoteType::Bomb:
		SetMeshMaterialData(BombNote);
		ArrowMesh->SetVisibility(false);
		break;
	case ENoteType::Magenta:
		SetMeshMaterialData(MagentaNote);
		break;
	case ENoteType::Green:
		SetMeshMaterialData(GreenNote);
		break;
	case ENoteType::Grey:
		SetMeshMaterialData(GreenNote);
		break;
	case ENoteType::Obstacle:
	case ENoteType::Unknown:
	default:
		break;

	}


	UpdateTransform();
}

void AMM_NoteBase::UpdateTransform()
{
	FixValues();

	FRotator NewRotation = FRotator::ZeroRotator;
	if (Direction >= 800)
	{
		// PYR
		NewRotation = FRotator((float)((Direction - 1000) * -1), 0.0f, 0.0f);
	}
	else
	{
		NewRotation = FRotator((float)DirectionToAngles[Direction], 0.0f, 0.0f);
	}

	NoteMesh->SetRelativeRotation(NewRotation);


	if (Layer >= 1000 || Layer <= -1000)
	{

	}
	else
	{

	}

}

void AMM_NoteBase::FixValues()
{
	// TODO: Smooth this out. This is why I hate BP math conversions, the original has select nodes all over the place.
	if (GameInstRef)
	{
		if (!GameInstRef->bPrecisionPlacement)
		{
			Layer = Layer % 3;
			if (Layer < 0)
			{
				Layer = 2;
			}


			if (GameInstRef->b6Lane)
			{
				int32 TempLine = (Line + 1) % 6;
				if (TempLine < 0)
				{
					Line = 4;
				}
				else
				{
					Line = TempLine - 1;
				}
			}
			else
			{
				int32 TempLine = Line % 4;
				if (TempLine < 0)
				{
					Line = 2;
				}
				else
				{
					Line = TempLine - 1;
				}
			}

		}
	}
}

FNoteData AMM_NoteBase::GetData()
{
	FNoteData NewData;
	NewData.Time = Time;
	NewData.Line = Line;
	NewData.Layer = Layer;
	NewData.Type = Type;
	NewData.CutDirection = Direction;

	return NewData;
}

float AMM_NoteBase::GetNoteSeparation()
{	
	if (GameInstRef)
	{
		return GameInstRef->NoteSeparation;
	}

	UE_LOG(LogTemp, Warning, TEXT("Could not get game instance, returning default note separation"));
	return 200.0f;
}

void AMM_NoteBase::SetMeshMaterialData(class UDataAsset* NewDataInfo)
{
	UDA_Note* CurrentData = Cast<UDA_Note>(NewDataInfo);

	if (CurrentData)
	{
		NoteMesh->SetStaticMesh(CurrentData->Mesh);
		NoteMesh->SetMaterial(0, CurrentData->MeshMaterial);
		ArrowMesh->SetMaterial(0, CurrentData->ArrowMaterial);
	}
}

void AMM_NoteBase::FixAngle()
{
	if (Direction >= 800)
	{
		int32 TempDirection = Direction;
		TempDirection -= 1000;

		if (TempDirection > 359)
		{
			TempDirection = 0;
		}

		if (TempDirection < 0)
		{
			TempDirection = 355;
		}

		Direction = TempDirection + 1000;
	}
}

