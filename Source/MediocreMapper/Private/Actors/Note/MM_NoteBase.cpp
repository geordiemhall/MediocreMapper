// Fill out your copyright notice in the Description page of Project Settings.


#include "MM_NoteBase.h"
#include "System/MM_GameInstance.h"

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
	
}

void AMM_NoteBase::UpdateNote()
{

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
	UMM_GameInstance* GameInstRef = Cast<UMM_GameInstance>(GetWorld()->GetGameInstance());
	
	if (GameInstRef)
	{
		return GameInstRef->NoteSeparation;
	}

	UE_LOG(LogTemp, Warning, TEXT("Could not get game instance, returning default note separation"));
	return 200.0f;
}


