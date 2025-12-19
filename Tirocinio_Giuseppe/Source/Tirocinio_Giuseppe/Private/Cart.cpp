// Fill out your copyright notice in the Description page of Project Settings.


#include "Cart.h"

// Sets default values
ACart::ACart()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACart::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACart::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

