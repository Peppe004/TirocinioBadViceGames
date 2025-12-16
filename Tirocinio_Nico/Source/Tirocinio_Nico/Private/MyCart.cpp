// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCart.h"

// Sets default values
AMyCart::AMyCart()
{

	PrimaryActorTick.bCanEverTick = false;

	CartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CartMesh"));
	RootComponent = CartMesh;

}

void AMyCart::BeginPlay()
{
	Super::BeginPlay();

	for (const FCartSlots& Slot : SetupSlots) {

		FRunTimeItemData Data;
		Data.ClassToSpawn = Slot.ItemClass;

		// Ricostruisco il Transform partendo da Location, Rotation e Scale
		Data.RelativeTransform = FTransform(Slot.LocalRotation, Slot.LocalLocation, Slot.LocalScale);

		RunTimeSlotsMap.Add(Slot.ItemType, Data);
	}
	
}

void AMyCart::AddItemToCart(EItemType Type) {
	
	if (!RunTimeSlotsMap.Contains(Type)) {

		UE_LOG(LogTemp, Warning, TEXT("Nessuno slot configurato per questo tipo"));
		return;
		
	}

	FRunTimeItemData SlotData = RunTimeSlotsMap[Type]; //prendo i dati dallo slot

	if (!SlotData.ClassToSpawn) {
		UE_LOG(LogTemp, Warning, TEXT("Nessuna classe da spawnare per questo tipo"));
		return;
	}

	FTransform SpawnTransform = SlotData.RelativeTransform * GetActorTransform(); //calcolo la posizione nel mondo 

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; //ignoro le collisioni per evitare problemi

	AActor* NewItem = GetWorld()->SpawnActor<AActor>(SlotData.ClassToSpawn, SpawnTransform, SpawnParams); //spawno l'oggetto

	if (NewItem) {
		NewItem->AttachToActor(this, FAttachmentTransformRules::KeepWorldTransform);
		UE_LOG(LogTemp, Log, TEXT("Oggetto spawnato e attaccato con successo."));
	}
}

void AMyCart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

