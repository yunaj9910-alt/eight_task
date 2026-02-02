// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseItem.h"
#include "CoinBaseItem.generated.h"

/**
 * 
 */
UCLASS()
class SEVEN_TASK_YUNA_API ACoinBaseItem : public ABaseItem
{
	GENERATED_BODY()
	
public:
	ACoinBaseItem();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Item")
	int32 PointValue;

	virtual void ActivateItem(AActor* Activator)override;
};
