// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Item.h"
#include "Mamepetto.generated.h"

UCLASS()
class MAMEPETTO3_API AMamepetto : public AActor
{
	GENERATED_BODY()

	enum class EDirectionState : int8
	{
		IDLE,
		NORTH,
		NORTHEAST,
		EAST,
		SOUTHEAST,
		SOUTH,
		SOUTHWEST,
		WEST,
		NORTHWEST,
		GOTOLOCATION
	};
	
public:	
	// Sets default values for this actor's properties
	AMamepetto();
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Mamepetto Mesh")
		class UStaticMeshComponent* MamepettoMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mamepetto Speed")

		int MameUpdateSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Mamepetto Speed")

		int MameMoveSpeed;
private:
	int Energy = 100;
	int UpdateTick = 0;

	void Movement(float DeltaTime);
	void CheckForItem();

	EDirectionState MameDirection;
	FString MameDirectionString;

	class AItem* ItemTarget;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
