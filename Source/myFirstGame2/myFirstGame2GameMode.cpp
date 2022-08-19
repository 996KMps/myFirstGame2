// Copyright Epic Games, Inc. All Rights Reserved.

#include "myFirstGame2GameMode.h"
#include "myFirstGame2Character.h"
#include "UObject/ConstructorHelpers.h"

AmyFirstGame2GameMode::AmyFirstGame2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
