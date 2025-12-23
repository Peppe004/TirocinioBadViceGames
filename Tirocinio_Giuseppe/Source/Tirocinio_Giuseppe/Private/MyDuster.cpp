// Fill out your copyright notice in the Description page of Project Settings.


#include "MyDuster.h"

// Sets default values
AMyDuster::AMyDuster()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	DusterMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("DusterMesh"));
	RootComponent = DusterMesh;

}

// Called when the game starts or when spawned
void AMyDuster::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyDuster::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

