// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "CineCameraComponent.h"
#include "Components/BoxComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Logging/LogMacros.h"
#include "CharacterController.generated.h"


class UInputAction;
class UCineCameraComponent;
class USceneComponent;
struct FInputActionValue;


UCLASS()
class TIROCINIO_GIUSEPPE_API ACharacterController : public ACharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this character's properties
	ACharacterController();

public:	
	bool bIsHoldingItem;

	// Params for the RayCast & Debug Line
	FVector start;
	FVector forwardVector;
	FVector end;

	FHitResult hit;
	FComponentQueryParams queryParams;
	FCollisionResponseParams responseParams;

protected:
	// Camera Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
	UCineCameraComponent* Camera;

	// Spring Arm Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cemera")
	USpringArmComponent* SpringArm;

	// Hand Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	USceneComponent* Hand;

	// Hand Component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interaction")
	USceneComponent* CartAttachmentPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CartCollision")
	UBoxComponent* CartCollisionBox;


	//================================================================
	//======================= INPUT ACTIONS ==========================
	//================================================================

	// To assign the actions in the BP
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input)
	UInputMappingContext* DefaultMappingContext;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	/** Interact Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* InteractAction;

	/** UseTool Input Action */
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* UseToolAction;

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;
	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	//================================================================
	//======================= INPUT FUNCTIONS ========================
	//================================================================

	/** Called for MoveForward input */
	void Move(const FInputActionValue& Value);

	/** Called for Look input */
	void Look(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable)
	/** Called for Interact input */
	void InteractInput(const FInputActionValue& Value);

	// Makes it so inputs red in c++ also have effects in the BP 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void Interact();

	UFUNCTION(BlueprintCallable)
	/** Called for UseTool input */
	void UseTool(const FInputActionValue& Value);

	UFUNCTION(BlueprintCallable)
	void EnableCartCollision();

	UFUNCTION(BlueprintCallable)
	void DisableCartCollision();

};
