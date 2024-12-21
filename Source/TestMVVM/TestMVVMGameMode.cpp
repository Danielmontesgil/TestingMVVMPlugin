// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestMVVMGameMode.h"
#include "TestMVVMCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestMVVMGameMode::ATestMVVMGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
