// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "ItemSpawner.generated.h"

UCLASS()
class MAMEPETTO3_API AItemSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	TArray<AItem*> SpawnedItems;

	FVector SpawnLocation;
	FRotator SpawnRotation;
	FActorSpawnParameters SpawnParameters;

	void SpawnItems();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
