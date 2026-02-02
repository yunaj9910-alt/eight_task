// Fill out your copyright notice in the Description page of Project Settings.


#include "CoinBaseItem.h"
#include "Engine/World.h"
#include "SpartaGameState.h"

ACoinBaseItem::ACoinBaseItem()
{
	PointValue = 0;
	ItemType = "DefaultCoin";

}

void ACoinBaseItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (UWorld* World = GetWorld())
		{
			if (ASpartaGameState* GameState = World->GetGameState<ASpartaGameState>())
			{
				GameState->AddScore(PointValue);
				GameState->OnCoinCollected();
			}
		}

		DestroyItem();
	}
}