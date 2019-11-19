// Fill out your copyright notice in the Description page of Project Settings.


#include "MM_FunctionLibrary.h"
#include "System/MM_GameInstance.h"
#include "Kismet/GameplayStatics.h"


int32 UMM_FunctionLibrary::LineToEvent(int32 Line)
{
	TArray<int32> LineSelect;
	LineSelect.Add(0);
	LineSelect.Add(1);
	LineSelect.Add(2);
	LineSelect.Add(3);
	LineSelect.Add(4);
	LineSelect.Add(8);
	LineSelect.Add(9);
	LineSelect.Add(12);
	LineSelect.Add(13);
	LineSelect.Add(229818389);

	return LineSelect[FMath::Clamp(Line, 0, 9)];
}

int32 UMM_FunctionLibrary::EventToLine(int32 Event)
{
	TArray<int32> EventSelect;
	//0-4
	EventSelect.Add(0);
	EventSelect.Add(1);
	EventSelect.Add(2);
	EventSelect.Add(3);
	EventSelect.Add(4);

	//5-7
	EventSelect.Add(0);
	EventSelect.Add(0);
	EventSelect.Add(0);

	//8-9
	EventSelect.Add(5);
	EventSelect.Add(6);

	//10-11
	EventSelect.Add(0);
	EventSelect.Add(0);

	//12-13
	EventSelect.Add(7);
	EventSelect.Add(8);

	return EventSelect[FMath::Clamp(Event, 0, 13)];
}

