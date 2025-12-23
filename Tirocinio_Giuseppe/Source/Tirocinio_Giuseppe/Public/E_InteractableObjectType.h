// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EObjectType : uint8
{
    None        UMETA(DisplayName = "Nessuno"),
    Door      UMETA(DisplayName = "Porta"),
    Cleanable  UMETA(DisplayName = "Oggetto Pulibile"),
    QuestObject   UMETA(DisplayName = "Oggetto di Quest"),
};

class TIROCINIO_GIUSEPPE_API E_InteractableObjectType
{
public:
	E_InteractableObjectType();
	~E_InteractableObjectType();
};
