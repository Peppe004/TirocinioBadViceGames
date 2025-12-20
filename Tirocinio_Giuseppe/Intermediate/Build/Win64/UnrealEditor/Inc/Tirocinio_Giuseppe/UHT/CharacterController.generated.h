// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CharacterController.h"

#ifdef TIROCINIO_GIUSEPPE_CharacterController_generated_h
#error "CharacterController.generated.h already included, missing '#pragma once' in CharacterController.h"
#endif
#define TIROCINIO_GIUSEPPE_CharacterController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

struct FInputActionValue;

// ********** Begin Class ACharacterController *****************************************************
#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Interact_Implementation(); \
	DECLARE_FUNCTION(execUseTool); \
	DECLARE_FUNCTION(execInteract); \
	DECLARE_FUNCTION(execInteractInput);


#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_CALLBACK_WRAPPERS
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();

#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACharacterController(); \
	friend struct Z_Construct_UClass_ACharacterController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACharacterController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACharacterController, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tirocinio_Giuseppe"), Z_Construct_UClass_ACharacterController_NoRegister) \
	DECLARE_SERIALIZER(ACharacterController)


#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACharacterController(ACharacterController&&) = delete; \
	ACharacterController(const ACharacterController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACharacterController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACharacterController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACharacterController) \
	NO_API virtual ~ACharacterController();


#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_23_PROLOG
#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_CALLBACK_WRAPPERS \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACharacterController;

// ********** End Class ACharacterController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
