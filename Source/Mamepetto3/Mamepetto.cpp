// Fill out your copyright notice in the Description page of Project Settings.


#include "Mamepetto.h"
#include <Kismet/GameplayStatics.h>

// Sets default values
AMamepetto::AMamepetto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MameUpdateSpeed = 100;
	MamepettoMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mamepetto Mesh"));
}

void AMamepetto::Movement(float DeltaTime)
{
	FVector Location = GetActorLocation();

	if (Location.X >= 450)
	{
		MameDirection = EDirectionState::SOUTH;
	}
	else if (Location.X <= -450)
	{
		MameDirection = EDirectionState::NORTH;
	}
	if (Location.Y >= 450)
	{
		MameDirection = EDirectionState::WEST;
	}
	else if (Location.Y <= -450)
	{
		MameDirection = EDirectionState::EAST;
	}

	switch (MameDirection)
	{
	case EDirectionState::IDLE:
		break;
	case EDirectionState::NORTH:
		Location.X += MameMoveSpeed * DeltaTime;
		MameDirectionString = "North";
		break;
	case EDirectionState::NORTHEAST:
		Location.X += MameMoveSpeed * DeltaTime;
		Location.Y += MameMoveSpeed * DeltaTime;
		MameDirectionString = "NorthEast";
		break;
	case EDirectionState::EAST:
		Location.Y += MameMoveSpeed * DeltaTime;
		MameDirectionString = "East";
		break;
	case EDirectionState::SOUTHEAST:
		Location.X -= MameMoveSpeed * DeltaTime;
		Location.Y += MameMoveSpeed * DeltaTime;
		MameDirectionString = "SouthEast";
		break;
	case EDirectionState::SOUTH:
		Location.X -= MameMoveSpeed * DeltaTime;
		MameDirectionString = "South";
		break;
	case EDirectionState::SOUTHWEST:
		Location.X -= MameMoveSpeed * DeltaTime;
		Location.Y -= MameMoveSpeed * DeltaTime;
		MameDirectionString = "SouthWest";
		break;
	case EDirectionState::WEST:
		Location.Y -= MameMoveSpeed * DeltaTime;
		MameDirectionString = "West";
		break;
	case EDirectionState::NORTHWEST:
		Location.X += MameMoveSpeed * DeltaTime;
		Location.Y -= MameMoveSpeed * DeltaTime;
		MameDirectionString = "NorthWest";
		break;
	case EDirectionState::GOTOLOCATION:
		MameDirectionString = "Go To Location";
		break;
	};

	

	SetActorLocation(Location);
}

void AMamepetto::CheckForItem()
{
	TSubclassOf<AActor> WorldClassObject = AItem::StaticClass();

	TArray<AActor*> Items;

	UGameplayStatics::GetAllActorsOfClass(this, WorldClassObject, Items);

	if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(4, 1.5f, FColor::Emerald, FString::Printf(TEXT("There are %d items"),Items.Num()));
	}

	if (Items.Num() > 0)
	{
		ItemTarget = Cast<AItem>(Items[0]);
	}
}

void AMamepetto::BeginPlay()
{
	Super::BeginPlay();
	
	
}// Called when the game starts or when spawned


void AMamepetto::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (UpdateTick >= MameUpdateSpeed)
	{
		MameDirection = EDirectionState(FMath::RandRange(0, 8));
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(2, 1.5f, FColor::Cyan, FString::Printf(TEXT("Hello World!")));
			GEngine->AddOnScreenDebugMessage(3, 1.5f, FColor::Blue, FString::Printf(TEXT("Energy :%d"), Energy));
			
		}
		Energy--;		
		UpdateTick = 0;
		CheckForItem();
	}
	UpdateTick++;
	if (Energy >= 10)
	{
		if (GEngine != nullptr)
		{
			GEngine->AddOnScreenDebugMessage(1, 1.5f, FColor::Emerald, MameDirectionString);
		}
		Movement(DeltaTime);
	}
} // Called every frame


