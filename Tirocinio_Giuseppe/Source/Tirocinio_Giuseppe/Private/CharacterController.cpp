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





