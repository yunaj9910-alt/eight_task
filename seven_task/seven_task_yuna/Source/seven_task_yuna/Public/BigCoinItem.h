// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CoinBaseItem.h"
#include "BigCoinItem.generated.h"

/**
 * 
 */
UCLASS()
class SEVEN_TASK_YUNA_API ABigCoinItem : public ACoinBaseItem
{
	GENERATED_BODY()
	
public:
	ABigCoinItem();

	virtual void ActivateItem(AActor* Activator) override;
};
