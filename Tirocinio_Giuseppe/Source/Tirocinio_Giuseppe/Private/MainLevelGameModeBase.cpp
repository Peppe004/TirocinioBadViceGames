// Fill out your copyright notice in the Description page of Project Settings.


#include "MainLevelGameModeBase.h"
#include "CharacterController.h"
#include "UObject/ConstructorHelpers.h" 

AMainLevelGameModeBase::AMainLevelGameModeBase()
{
    // Finds the player BP class in the resources
	static ConstructorHelpers::FClassFinder<APawn> BP_CharacterController(TEXT("/Game/Blueprints/Player/BP_CharacterController.BP_CharacterController_C"));

    // Sets the default Pa
    if (BP_CharacterController.Class != NULL)
    {
        DefaultPawnClass = BP_CharacterController.Class;
    }
}
