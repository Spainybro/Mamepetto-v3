// Fill out your copyright notice in the Description page of Project Settings.


#include "ACameraDirector.h"

// Sets default values
AACameraDirector::AACameraDirector()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AACameraDirector::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AACameraDirector::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

