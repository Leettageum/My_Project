// Copyright Epic Games, Inc. All Rights Reserved.

#include "My_ProjectGameMode.h"
#include "My_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMy_ProjectGameMode::AMy_ProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
