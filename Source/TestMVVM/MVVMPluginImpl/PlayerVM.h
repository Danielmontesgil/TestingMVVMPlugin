// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "PlayerVM.generated.h"

/**
 * 
 */
UCLASS()
class TESTMVVM_API UPlayerVM : public UMVVMViewModelBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 PlayerHealth;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter)
	int32 MaxHealth;

	UPROPERTY(BlueprintReadWrite, FieldNotify)
	int32 HealthChange;

	UPROPERTY(BlueprintReadWrite, FieldNotify)
	FSlateColor TextColor;
	
	void SetPlayerHealth(const int32 NewPlayerHealth);

	void SetMaxHealth(const int32 NewMaxHealth);

	int32 GetPlayerHealth() const
	{
		return PlayerHealth;
	}
 
	int32 GetMaxHealth() const
	{
		return MaxHealth;
	}

	int32 GetHealthChange() const
	{
		return HealthChange;
	}
	
	FSlateColor GetTextColor() const
	{
		return TextColor;
	}

	UFUNCTION(BlueprintPure, FieldNotify)
	float GetHealthPercent() const
	{
		if (MaxHealth != 0)
		{
			return (float) PlayerHealth / (float) MaxHealth;
		}

		return 0;
	}
};
