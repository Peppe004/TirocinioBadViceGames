// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "Camera/CameraComponent.h"
#include "CineCameraComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	CineCameraComp = CreateDefaultSubobject<UCineCameraComponent>(TEXT("CineCameraComp"));
	CineCameraComp->SetupAttachment(GetCapsuleComponent());
	CineCameraComp->bUsePawnControlRotation = true;
   
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 360.0f, 0.0f);

	CartSlotArrow = CreateDefaultSubobject<UArrowComponent>(TEXT("CartSlotArrow")); //creo l'arrow component per lo slot del carrello
	CartSlotArrow->SetupAttachment(GetCapsuleComponent());

	CartCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CartCollisionBox")); //creo il box di collisione per il carrello e lo attacco all'arrow component a cui si attacca il carrello
	CartCollisionBox->SetupAttachment(CartSlotArrow);
	CartCollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f)); //sono le dimensioni del cubo di default di UE. andrà modificato in base al modello del carrello
	

	CartCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision); //disabilito le collisioni del box e nascondo le righe 
	CartCollisionBox->SetHiddenInGame(true);

}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMyPlayer::MoveForward(float Value) {
	

	if ((Controller != nullptr) && (Value != 0.0f)) {

		const FRotator Rotation = Controller->GetControlRotation(); //ottengo la rotazione del controller
		const FRotator YawRoation(0, Rotation.Yaw, 0); //creo una nuova rotazione con solo lo yaw
		const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::X); //ottengo il vettore forward dalla rotazione dalla matrice

		AddMovementInput(Direction, Value);
	}
}

void AMyPlayer::MoveRight(float Value) {

	const FRotator Rotation = Controller->GetControlRotation(); //ottengo la rotazione del controller
	const FRotator YawRoation(0, Rotation.Yaw, 0); //creo una nuova rotazione con solo lo yaw
	const FVector Direction = FRotationMatrix(YawRoation).GetUnitAxis(EAxis::Y); //ottengo il vettore forward dalla rotazione dalla matrice

	AddMovementInput(Direction, Value);

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("MoveForward", this, &AMyPlayer::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyPlayer::MoveRight);

	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);


}

void AMyPlayer::EnableCartCollision() {

	CartCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	CartCollisionBox->SetCollisionObjectType(ECC_GameTraceChannel1); //imposto il tipo di oggetto come cart (il tipo custom che ho creato)

	CartCollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block); //blocca gli attori statici

	//CartCollisionBox->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block); //da usare se vogliamo bloccare anche gli attori dinamici
}

void AMyPlayer::DisableCartCollision() {
	CartCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}



