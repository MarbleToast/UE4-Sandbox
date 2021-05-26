// Copyright Epic Games, Inc. All Rights Reserved.


#include "TinkerSandboxGameModeBase.h"
#include "FPCharacter.h"

ATinkerSandboxGameModeBase::ATinkerSandboxGameModeBase() {
	DefaultPawnClass = AFPCharacter::StaticClass();
}
