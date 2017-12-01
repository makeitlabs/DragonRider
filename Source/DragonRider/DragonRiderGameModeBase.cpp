// Fill out your copyright notice in the Description page of Project Settings.

#include "DragonRiderGameModeBase.h"
#include "DragonRiderActor.h"

ADragonRiderGameModeBase::ADragonRiderGameModeBase()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ADragonRiderActor::StaticClass();
}