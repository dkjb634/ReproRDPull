// Copyright Epic Games, Inc. All Rights Reserved.

#include "u532fpsGameMode.h"
#include "u532fpsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Au532fpsGameMode::Au532fpsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
