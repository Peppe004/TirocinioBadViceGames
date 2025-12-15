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
	
	forwardInput = Value;

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

