// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSpawner.h"

// Sets default values
AItemSpawner::AItemSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItemSpawner::BeginPlay()
{
	Super::BeginPlay();
	
}

void AItemSpawner::SpawnItems()
{
	SpawnParameters.OverrideLevel = GetLevel();

	SpawnLocation = FVector(FMath::RandRange(-400, 400), FMath::RandRange(-400, 400), 1000);

	SpawnedItems.Add((AItem*)GetWorld()->SpawnActor(AItem::StaticClass(), &SpawnLocation, &SpawnRotation, SpawnParameters));
}

// Called every frame
void AItemSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (FMath::RandRange(0, 399) == 1)
	{
		SpawnItems();
	}
}

