// Fill out your copyright notice in the Description page of Project Settings.


#include "SOTECPlatformSine.h"

void ASOTECPlatformSine::Move(float DeltaTime)
{
	Super::Move(DeltaTime);

	FVector CurrentLocation = GetActorLocation();
	float time = GetWorld()->GetTimeSeconds();
	CurrentLocation.Z = StartMovementPoint.Z + 50 * FMath::Sin(MovementSpeed * time);
	CurrentLocation.Y = StartMovementPoint.Y + 50 * FMath::Sin(MovementSpeed * time);

	SetActorLocation(CurrentLocation);
}