// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterController.h"

//================================================================
//======================= CONSTRUCTOR ============================
//================================================================


ACharacterController::ACharacterController()
{
	// Camera Setup
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("Spring Arm"));
	SpringArm->SetupAttachment(RootComponent);
	SpringArm->TargetArmLength = 400.0f;
	SpringArm->bUsePawnControlRotation = true;

	Camera = CreateDefaultSubobject<UCineCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm);
	Camera->bUsePawnControlRotation = false;

	Hand = CreateDefaultSubobject<USceneComponent>(TEXT("Hand"));
	Hand->SetupAttachment(Camera);

	CartAttachmentPoint = CreateDefaultSubobject<USceneComponent>(TEXT("Cart Attachement Point"));
	CartAttachmentPoint->SetupAttachment(RootComponent);

	CartCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("CartCollisionBox")); //creo il box di collisione per il carrello e lo attacco all'arrow component a cui si attacca il carrello
	CartCollisionBox->SetupAttachment(CartAttachmentPoint);
	CartCollisionBox->SetBoxExtent(FVector(50.f, 50.f, 50.f)); //sono le dimensioni del cubo di default di UE. andrà modificato in base al modello del carrello
	
	// Booleans
	bIsHoldingItem = false;

	PrimaryActorTick.bCanEverTick = true;

}

//================================================================
//======================= UE CALLBACKS ===========================
//================================================================

// Called when the game starts or when spawned
void ACharacterController::BeginPlay()
{
	Super::BeginPlay();
	// Get the PlyerController
	if (APlayerController* PC = Cast<APlayerController>(Controller))
	{
		// Get the local EnhancedInput subsystem
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer()))
		{
			// Adds the new mapping Context
			if (DefaultMappingContext)
			{
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
			}
		}
	}
	
}


// Called every frame
void ACharacterController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void ACharacterController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
	{
		// Move
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ACharacterController::Move);

		// Look
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ACharacterController::Look);

		// Interact
		EnhancedInputComponent->BindAction(InteractAction, ETriggerEvent::Completed, this, &ACharacterController::Interact);

		// UseTool
		EnhancedInputComponent->BindAction(UseToolAction, ETriggerEvent::Completed, this, &ACharacterController::UseTool);

	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


//================================================================
//======================= INPUT FUNCTIONS ========================
//================================================================

void ACharacterController::Look(const FInputActionValue& Value)
{
	if (GetController() != nullptr)
	{
		// input is a Vector2D
		FVector2D LookAxisVector = Value.Get<FVector2D>();
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y * -1);
	}
}


void ACharacterController::Move(const FInputActionValue& Value)
{
	
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		
		AddMovementInput(ForwardDirection, MovementVector.Y);

		
		AddMovementInput(RightDirection, MovementVector.X);
	}
}


void ACharacterController::InteractInput(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Dude interacted with something..."));
	Interact();

}

// This is event can be called in the BP
void ACharacterController::Interact_Implementation()
{
	GEngine->AddOnScreenDebugMessage(-1, 25.0f, FColor::Cyan, TEXT("C++ Implementation"));

}

void ACharacterController::UseTool(const FInputActionValue& Value)
{
	UE_LOG(LogTemp, Warning, TEXT("Dude used something..."));

}



//================================================================
//=================== INTERACTION FUNCTIONS ======================
//================================================================


void ACharacterController::EnableCartCollision() {

	CartCollisionBox->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);

	CartCollisionBox->SetCollisionObjectType(ECC_GameTraceChannel1); //imposto il tipo di oggetto come cart (il tipo custom che ho creato)

	CartCollisionBox->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block); //blocca gli attori statici

	//CartCollisionBox->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Block); //da usare se vogliamo bloccare anche gli attori dinamici
}

void ACharacterController::DisableCartCollision() {
	CartCollisionBox->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}



