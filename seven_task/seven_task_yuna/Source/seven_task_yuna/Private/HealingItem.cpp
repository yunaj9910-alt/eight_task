// Fill out your copyright notice in the Description page of Project Settings.


#include "HealingItem.h"
#include "Sparta_Character.h"

AHealingItem::AHealingItem()
{
	HealAmount = 20.0f;
	ItemType = "Healing";
}

void AHealingItem::ActivateItem(AActor* Activator)
{
	if (Activator && Activator->ActorHasTag("Player"))
	{
		if (ASparta_Character* PlayerCharacter = Cast<ASparta_Character>(Activator))
		{
			PlayerCharacter->AddHealth(HealAmount);
		} 

		DestroyItem();
	}
}