// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMop.h"

// Sets default values
AMyMop::AMyMop()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	MopMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MopMesh"));
	RootComponent = MopMesh;

}

// Called when the game starts or when spawned
void AMyMop::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyMop::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

