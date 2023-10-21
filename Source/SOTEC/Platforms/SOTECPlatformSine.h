// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SOTECPlatformBase.h"
#include "SOTECPlatformSine.generated.h"

/**
 * 
 */
UCLASS()
class SOTEC_API ASOTECPlatformSine : public ASOTECPlatformBase
{
	GENERATED_BODY()

protected:
	virtual void Move(float DeltaTime) override;

	
};
