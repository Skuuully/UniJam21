// Copyright Epic Games, Inc. All Rights Reserved.

#include "Jam21GameMode.h"
#include "Jam21HUD.h"
#include "Jam21Character.h"
#include "UObject/ConstructorHelpers.h"

AJam21GameMode::AJam21GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AJam21HUD::StaticClass();
}
