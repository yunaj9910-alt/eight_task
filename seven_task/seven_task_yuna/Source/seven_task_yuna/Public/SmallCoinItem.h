// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoinBaseItem.h"
#include "SmallCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SEVEN_TASK_YUNA_API ASmallCoinItem : public ACoinBaseItem
{
	GENERATED_BODY()
	
public:
	ASmallCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};
