// Fill out your copyright notice in the Description page of Project Settings.


#include "Item.h"
#include <cstdlib>

// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	HasBeenEaten = false;

	FoodValue = FMath::RandRange(20, 30);
	ItemMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh"));
	ItemMaterial = CreateDefaultSubobject<UMaterial>(TEXT("Item Material"));

	ConstructorHelpers::FObjectFinder<UStaticMesh>ItemAsset(TEXT("/Game/GameAssets/Item_Assets/SM_Item"));

	RanColour = rand() % 8;
		if (RanColour == 0)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if(RanColour == 1)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial1"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 2)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial2"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 3)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial3"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 4)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial4"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 5)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial5"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 6)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial6"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else if (RanColour == 7)
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial7"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
		else
		{
			ConstructorHelpers::FObjectFinder<UMaterial>ItemAssetMaterial(TEXT("/Game/GameAssets/Item_Assets/M_ItemMaterial"));
			if (ItemAssetMaterial.Succeeded())
			{
				ItemMaterial = ItemAssetMaterial.Object;
				ItemMesh->SetMaterial(0, ItemMaterial);
			}
		}
	

	if (ItemAsset.Succeeded())
	{
		ItemMesh->SetStaticMesh(ItemAsset.Object);
	}
	

	

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation();
	if (Location.Z > 5)
	{
		Location.Z -= 1;
	}
	SetActorLocation(Location);
}

int AItem::GetFoodValue()
{
	return FoodValue;
}

