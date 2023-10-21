// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "SOTECPlatformBase.generated.h"

UCLASS(Abstract)
class SOTEC_API ASOTECPlatformBase : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASOTECPlatformBase();

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* Mesh;

	UPROPERTY(EditAnywhere)
	FVector StartMovementPoint;

	UPROPERTY(EditAnywhere)
	FVector FinishMovementPoint;

	UPROPERTY(EditAnywhere)
	int32 MovementSpeed = 100;
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Move(float DeltaTime);

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};