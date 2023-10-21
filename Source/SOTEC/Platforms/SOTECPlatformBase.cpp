// Fill out your copyright notice in the Description page of Project Settings.


#include "SOTECPlatformBase.h"

// Sets default values
ASOTECPlatformBase::ASOTECPlatformBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(FName("PlatformMesh"));
	SetRootComponent(Mesh);

}

// Called when the game starts or when spawned
void ASOTECPlatformBase::BeginPlay()
{
	Super::BeginPlay();
}
void ASOTECPlatformBase::Move(float DeltaTime)
{
}

// Called every frame
void ASOTECPlatformBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	Move(DeltaTime);
}

