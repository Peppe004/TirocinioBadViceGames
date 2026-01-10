// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "E_InteractableObjectType.h"

#ifdef TIROCINIO_GIUSEPPE_E_InteractableObjectType_generated_h
#error "E_InteractableObjectType.generated.h already included, missing '#pragma once' in E_InteractableObjectType.h"
#endif
#define TIROCINIO_GIUSEPPE_E_InteractableObjectType_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_E_InteractableObjectType_h

// ********** Begin Enum EObjectType ***************************************************************
#define FOREACH_ENUM_EOBJECTTYPE(op) \
	op(EObjectType::None) \
	op(EObjectType::Door) \
	op(EObjectType::Cleanable) \
	op(EObjectType::QuestObject) 

enum class EObjectType : uint8;
template<> struct TIsUEnumClass<EObjectType> { enum { Value = true }; };
template<> TIROCINIO_GIUSEPPE_API UEnum* StaticEnum<EObjectType>();
// ********** End Enum EObjectType *****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
