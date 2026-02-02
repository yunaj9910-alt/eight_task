// Fill out your copyright notice in the Description page of Project Settings.


#include "Sparta_GameMode.h"
#include "Sparta_Character.h"
#include "SpartaPlayerController.h"
#include "SpartaGameState.h"


ASparta_GameMode::ASparta_GameMode()
{
	DefaultPawnClass = ASparta_Character::StaticClass();
	PlayerControllerClass = ASpartaPlayerController::StaticClass();
	GameStateClass = ASpartaGameState::StaticClass();
}