#include "Mamepetto.h"
#include <Kismet/GameplayStatics.h>
#include <cmath>

// Sets default values
AMamepetto::AMamepetto()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MameUpdateSpeed = 100;
	MameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mame Mesh"));
	MameMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Mame Material"));

	ConstructorHelpers::FObjectFinder<UStaticMesh>ItemAsset(TEXT("/Game/GameAssets/MamePetto_Assets/SM_Mame"));
	ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/MamePetto_Assets/M_MameMaterial"));

	if (ItemAsset.Succeeded())
	{
		MameMesh->SetStaticMesh(ItemAsset.Object);
	}
	if (ItemAssetMaterial.Succeeded())
	{
		MameMaterial = ItemAssetMaterial.Object;
		MameMesh->SetMaterial(0, MameMaterial);
	}

}

void AMamepetto::Movement(float DeltaTime)
{
	Location = GetActorLocation();	
	Rotation = GetActorRotation();

	MovementCheckBoundries();
	
	switch (MameDirection)
	{
	case EDirectionState::IDLE:

		MameDirectionString = "Idle";
		break;

	case EDirectionState::NORTH:
		Location.Y -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 180;

		MameDirectionString = "North";

		break;
	case EDirectionState::NORTHEAST:
		Location.X += MameMoveSpeed * DeltaTime;
		Location.Y -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 225;

		MameDirectionString = "NorthEast";

		break;
	case EDirectionState::EAST:
		Location.X += MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 270;

		MameDirectionString = "East";
		break;

	case EDirectionState::SOUTHEAST:
		Location.X += MameMoveSpeed * DeltaTime;
		Location.Y += MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 315;

		MameDirectionString = "SouthEast";
		break;

	case EDirectionState::SOUTH:
		Location.Y += MameMoveSpeed * DeltaTime;
		MameDirectionString = "South";
		Rotation.Yaw = 0;
		break;

	case EDirectionState::SOUTHWEST:
		Location.X -= MameMoveSpeed * DeltaTime;
		Location.Y += MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 45;

		MameDirectionString = "SouthWest";
		break;

	case EDirectionState::WEST:
		Location.X -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 90;

		MameDirectionString = "West";
		break;

	case EDirectionState::NORTHWEST:
		Location.X -= MameMoveSpeed * DeltaTime;
		Location.Y -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw = 135;

		MameDirectionString = "NorthWest";
		break;

	case EDirectionState::GOTOLOCATION:
		MovementGoToLocation(DeltaTime);
		MameDirectionString = "Go To Location";
		MovementGoToLocation(DeltaTime);
		break;
	};

	SetActorRotation(Rotation);
	SetActorLocation(Location);
	
}

void AMamepetto::HMovement(float DeltaTime)
{
	Rotation = GetActorRotation();
	Location = GetActorLocation();

	if (HMovePos)
	{
		HMultiplier += DeltaTime;
		Rotation.Roll += DeltaTime * 10;
	}
	else
	{
		HMultiplier -= DeltaTime;
		Rotation.Roll -= DeltaTime * 10;
	}
	if (HMultiplier == 0)
	{
		Location.Z = HLocation;
	}
	else
	{
		Location.Z = HLocation + HMultiplier * 20;
	}

	SetActorLocation(Location);
	SetActorRotation(Rotation);

	if (HMultiplier > 1)
	{
		HMovePos = false;
	}
	else if (HMultiplier < -1)
	{
		HMovePos = true;
	}




}

void AMamepetto::MovementCheckBoundries()
{	
	if (Location.X >= 450)
	{
		MameDirection = EDirectionState::WEST;
	}
	else if (Location.X <= -450)
	{
		MameDirection = EDirectionState::EAST;
	}
	else if (Location.Y >= 450)
	{
		MameDirection = EDirectionState::NORTH;
	}
	else if (Location.Y <= -450)
	{
		MameDirection = EDirectionState::SOUTH;
	}
}

void AMamepetto::MovementGoToLocation(float DeltaTime)
{	
	int XDifference = 0;
	int YDifference = 0;
	Rotation.Yaw = 0;

	if (Location.X > ItemTarget->GetActorLocation().X)
	{
		Location.X -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw += 90;
		XDifference = Location.X - ItemTarget->GetActorLocation().X;
	}
	else
	{
		Location.X += MameMoveSpeed * DeltaTime;
		Rotation.Yaw -= 90;
		XDifference = ItemTarget->GetActorLocation().X - Location.X;
	}
	if (Location.Y > ItemTarget->GetActorLocation().Y)
	{
		Location.Y -= MameMoveSpeed * DeltaTime;
		Rotation.Yaw += 180;
		YDifference = Location.Y - ItemTarget->GetActorLocation().Y;
	}
	else
	{
		Location.Y += MameMoveSpeed * DeltaTime;
		YDifference = ItemTarget->GetActorLocation().Y - Location.Y;
	}
	if (XDifference < 20 && YDifference < 20 && ItemTarget->HasBeenEaten == false)
	{
		Energy += ItemTarget->GetFoodValue();	
		ItemTarget->HasBeenEaten = true;
		ItemTarget->Destroy();
	}
}

void AMamepetto::CheckForItem()
{
	TSubclassOf<AActor> WorldClassObject = AItem::StaticClass();

	TArray<AActor*> Items;

	UGameplayStatics::GetAllActorsOfClass(this, WorldClassObject, Items);

	/*if (GEngine != nullptr)
	{
		GEngine->AddOnScreenDebugMessage(4, 1.5f, FColor::Emerald, FString::Printf(TEXT("There are %d items"),Items.Num()));
	}*/
	if(Energy < 70)
	{
		if (Items.Num() > 0)
			{
				ItemTarget = Cast<AItem>(Items[ClosestItem(Items)]);
				MameDirection = EDirectionState::GOTOLOCATION;
			}
	}
}

int AMamepetto::ClosestItem(TArray<AActor*> _Items)
{
	int CurrentClosestItem = 0;
	float MinDistance = 780;
	float DistanceCheck = 0;

	for (int l=0;l+1<_Items.Num();l++)
	{
		DistanceCheck = sqrtf(((_Items[l]->GetActorLocation().X - Location.X) * (_Items[l]->GetActorLocation().X - Location.X)) + ((_Items[l]->GetActorLocation().Y - Location.Y) * (_Items[l]->GetActorLocation().Y - Location.Y)));
		if (DistanceCheck < MinDistance)
		{
			MinDistance = DistanceCheck;
			CurrentClosestItem = l;;
		}

	}

	return CurrentClosestItem;
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
		HMovement(DeltaTime);
	}
} // Called every frame


