// Fill out your copyright notice in the Description page of Project Settings.


#include "MM_Controller.h"
#include "Components/SceneComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/SphereComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/AudioComponent.h"
#include "Components/TextRenderComponent.h"
#include "ProceduralMeshComponent.h"
#include "../../AudioCapture/Source/AudioCapture/Public/AudioCaptureComponent.h"
#include "SoundVisComponent.h"
#include "RenderWaveform.h"
#include "Kismet/GameplayStatics.h"
#include "UserWidget.h"



// Sets default values
AMM_Controller::AMM_Controller(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	//CreateDefaultSubobject<>(TEXT(""));

	DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
	RootComponent = DefaultSceneRoot;


	TimelineRoot = CreateDefaultSubobject<USceneComponent>(TEXT("TimelineRoot"));
	TimelineRoot->SetupAttachment(RootComponent);

	TimelinePlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TimelinePlane"));
	TimelinePlane->SetupAttachment(TimelineRoot);
	TimelinePlane->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	TimelinePlane->SetRelativeScale3D(FVector(1.418f, 1.0f, 1.0f));
	TimelinePlane->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));

	PlacingPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlacingPlane"));
	PlacingPlane->SetupAttachment(TimelineRoot);
	PlacingPlane->SetRelativeLocation(FVector(0.0f, 0.0f, -39.0f));
	PlacingPlane->SetRelativeScale3D(FVector(1.418f, 1.0f, 1.0f));
	PlacingPlane->SetRelativeRotation(FRotator(0.0f, 180.0f, 0.0f));


	EventRoot = CreateDefaultSubobject<USceneComponent>(TEXT("EventRoot"));
	EventRoot->SetupAttachment(TimelineRoot);
	EventRoot->SetRelativeLocation(FVector(600.0f, 0.0f, 0.0f));

	EventsPlane = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EventsPlane"));
	EventsPlane->SetupAttachment(EventRoot);
	EventsPlane->SetRelativeScale3D(FVector(10.0f, 1.0f, 9.0f));


	TimeCursor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TimeCursor"));
	TimeCursor->SetupAttachment(RootComponent);
	TimeCursor->SetRelativeLocation(FVector(0.0f, 0.0f, -39.0f));
	TimeCursor->SetRelativeScale3D(FVector(5.0f, 5.0f, 1.0f));
	TimeCursor->SetRelativeRotation(FRotator(0.0f, 180.0f, -90.0f));

	EventCursor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EventCursor"));
	EventCursor->SetupAttachment(RootComponent);
	EventCursor->SetRelativeLocation(FVector(600.0f, 0.0f, 0.0f));
	EventCursor->SetRelativeScale3D(FVector(10.0f, 0.25f, 1.0f));
	EventCursor->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));

	TimeCursorCube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TimeCursorCube"));
	TimeCursorCube->SetupAttachment(RootComponent);
	TimeCursorCube->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	TimeCursorCube->SetRelativeScale3D(FVector(3.0f, 0.05f, 0.05f));
	//TimeCursorCube->SetRelativeRotation(FRotator(0.0f, 0.0f, 90.0f));

	EventCursorCube = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EventCursorCube"));
	EventCursorCube->SetupAttachment(RootComponent);
	EventCursorCube->SetRelativeLocation(FVector(283.0f, 0.0f, 800.0f));
	EventCursorCube->SetRelativeScale3D(FVector(1.7f, 1.0f, 1.0f));


	PlacementCursor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlacementCursor"));
	PlacementCursor->SetupAttachment(RootComponent);
	PlacementCursor->SetRelativeLocation(FVector(0.0f, 0.0f, -40.0f));
	PlacementCursor->SetRelativeRotation(FRotator(0.0f, 180.0f, -90.0f));
	PlacementCursor->SetRelativeScale3D(FVector(1.1418f, 1.0f, 1.0f));
	



	CamHitBox = CreateDefaultSubobject<USphereComponent>(TEXT("CamHitBox"));
	CamHitBox->SetupAttachment(RootComponent);
	CamHitBox->SetRelativeLocation(FVector(150.0f, 210.0f, 200.0f));
	CamHitBox->SetRelativeRotation(FRotator(-25.0f, -105.0f, 0.0f));

	MainCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("MainCamera"));
	MainCamera->SetupAttachment(CamHitBox);

	
	SongPlayer = CreateDefaultSubobject<UAudioComponent>(TEXT("SongPlayer"));
	SongPlayer->SetupAttachment(RootComponent);
	SongPlayer->bIsUISound = true;


	EventTypesText = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Event Text"));
	EventTypesText->SetupAttachment(RootComponent);
	EventTypesText->SetRelativeLocation(FVector(1085.0f, 40.0f, 26.0f));
	EventTypesText->SetRelativeRotation(FRotator(90.0f, 0.0f, -180.0f));


	Spectrogram = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("Spectrogram"));
	Spectrogram->SetupAttachment(RootComponent);
	Spectrogram->SetRelativeLocation(FVector(-332.0f, 0.0f, -40.0f));
	Spectrogram->SetRelativeRotation(FRotator(00.0f, -90.0f, 0.0f));
	Spectrogram->SetRelativeScale3D(FVector(-1.0f, 3.0f, 0.2f));

	AudioCapture = CreateDefaultSubobject<UAudioCaptureComponent>(TEXT("AudioCapture"));
	AudioCapture->SetupAttachment(RootComponent);

	SoundVis = CreateDefaultSubobject<USoundVisComponent>(TEXT("SoundVis"));

}

// Called when the game starts or when spawned
void AMM_Controller::BeginPlay()
{
	Super::BeginPlay();

	PlayerControllerRef = UGameplayStatics::GetPlayerController(GetWorld(), 0);

	
	UKismetSystemLibrary::SetWindowTitle(FText::FromString("Mediocre Mapper"));

	// TODO: Set this up properly
	GetWorld()->Exec(GetWorld(), TEXT("r.setres 1280x720w"));

	// TODO: Get event manager

	SetupWaveformGraph();

	if (UGameplayStatics::DoesSaveGameExist("config1", 0))
	{

	}
	else
	{
		if (SetPathUI)
		{
			UUserWidget* PathWidget = CreateWidget<UUserWidget>(PlayerControllerRef, SetPathUI);
			PathWidget->AddToViewport();
		}
	}
	
}

// Called every frame
void AMM_Controller::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMM_Controller::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AMM_Controller::SetupWaveformGraph()
{
	URenderWaveform::BP_GenerateSpectrogramMesh(Spectrogram, 160, 64);
	
	if (WaveformMaterial)
	{
		Spectrogram->SetMaterial(0, WaveformMaterial);
	}
	
}

