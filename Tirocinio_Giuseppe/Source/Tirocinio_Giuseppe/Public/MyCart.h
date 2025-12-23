// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "MyCart.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	Cestino,
	Mocio,
	Spolverino,
	Scacciamosche,
	OggettoMissione1,
	OggettoMissione2,
	OggettoMissione3

};

USTRUCT(BlueprintType)
struct FCartSlots
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EItemType ItemType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> ItemClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MakeEditWidget = true))
	FVector LocalLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator LocalRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector LocalScale = FVector(1.0f, 1.0f, 1.0f);
};

struct FRunTimeItemData { //ci metto cosa spawnare e dove
	TSubclassOf<AActor> ClassToSpawn;
	FTransform RelativeTransform;
};

UCLASS()
class TIROCINIO_GIUSEPPE_API AMyCart : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyCart();

protected:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Setup")
	TArray<FCartSlots> SetupSlots; //questo � un array visuale per l'editor

	TMap<EItemType, FRunTimeItemData> RunTimeSlotsMap; //questo � per editare

	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category ="Mesh")
	UStaticMeshComponent* CartMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void AddItemToCart(EItemType Type);

};
