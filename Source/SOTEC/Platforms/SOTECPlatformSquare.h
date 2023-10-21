// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SOTECPlatformBase.h"
#include "SOTECPlatformSquare.generated.h"

/**
 * 
 */
UCLASS()
class SOTEC_API ASOTECPlatformSquare : public ASOTECPlatformBase
{
	GENERATED_BODY()

protected:
	virtual void Move(float DeltaTime) override;
};
