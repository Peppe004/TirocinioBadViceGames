#include "Cart.h"

ACart::ACart()
{
	PrimaryActorTick.bCanEverTick = true;

	CartMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CartMesh"));
	RootComponent = CartMesh;

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	BoxCollision->SetupAttachment(RootComponent);

}

void ACart::BeginPlay()
{
	Super::BeginPlay();
	
}

void ACart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACart::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

