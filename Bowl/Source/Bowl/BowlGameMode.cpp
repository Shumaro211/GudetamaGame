// Copyright Epic Games, Inc. All Rights Reserved.

#include "BowlGameMode.h"
#include "BowlCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABowlGameMode::ABowlGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
