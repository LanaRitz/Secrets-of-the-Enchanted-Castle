// Fill out your copyright notice in the Description page of Project Settings.


#include "SOTECPlatformSquare.h"

void ASOTECPlatformSquare::Move(float DeltaTime)
{
	Super::Move(DeltaTime);

	/* Получаем текущее местоположение */
	const FVector currentLocation = GetActorLocation();

	/* Получаем расстояние между начальной и финишной точками */
	const float journeyLength = (FinishMovementPoint - StartMovementPoint).Size();

	/* Получаем пройденное расстояние от начальной точки */
	const float journeyTravelled = (currentLocation - StartMovementPoint).Size();

	/* Если пройденное расстояние стало больше либо равно расстоянию между точками */
	if (journeyTravelled >= journeyLength)
	{
		/* Меняем местами начальную и финишную точки */
		const FVector tmp = StartMovementPoint;
		StartMovementPoint = FinishMovementPoint;
		FinishMovementPoint = tmp;
	}

	/* Вычисляем необходимое направление движения */
	const FVector direction = (FinishMovementPoint - StartMovementPoint).GetSafeNormal();

	/* Рассчитываем новое положение платформы */
	const FVector preparedNewFrameLocation = currentLocation + (MovementSpeed * DeltaTime * direction);

	/* Перемещаем платформу в новое место */
	SetActorLocation(preparedNewFrameLocation);
}