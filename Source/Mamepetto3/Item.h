// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.generated.h"

UCLASS()
class MAMEPETTO3_API AItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItem();
private:

	int FoodValue;
	int RanColour;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item Mesh")
		class UStaticMeshComponent* ItemMesh;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Item Material")
		class UMaterial* ItemMaterial;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int GetFoodValue();
	bool HasBeenEaten;

};
