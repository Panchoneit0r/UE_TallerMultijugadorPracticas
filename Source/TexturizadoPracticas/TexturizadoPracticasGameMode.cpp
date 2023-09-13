// Copyright Epic Games, Inc. All Rights Reserved.

#include "TexturizadoPracticasGameMode.h"
#include "TexturizadoPracticasCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATexturizadoPracticasGameMode::ATexturizadoPracticasGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
