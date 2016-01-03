// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "The_Learning_Lab.h"
#include "The_Learning_LabGameMode.h"
#include "The_Learning_LabPlayerController.h"
#include "The_Learning_LabCharacter.h"

AThe_Learning_LabGameMode::AThe_Learning_LabGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AThe_Learning_LabPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}