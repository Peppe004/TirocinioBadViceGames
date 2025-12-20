// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyPlayer.h"

#ifdef TIROCINIO_GIUSEPPE_MyPlayer_generated_h
#error "MyPlayer.generated.h already included, missing '#pragma once' in MyPlayer.h"
#endif
#define TIROCINIO_GIUSEPPE_MyPlayer_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMyPlayer ****************************************************************
#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDisableCartCollision); \
	DECLARE_FUNCTION(execEnableCartCollision);


TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();

#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyPlayer(); \
	friend struct Z_Construct_UClass_AMyPlayer_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tirocinio_Giuseppe"), Z_Construct_UClass_AMyPlayer_NoRegister) \
	DECLARE_SERIALIZER(AMyPlayer)


#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyPlayer(AMyPlayer&&) = delete; \
	AMyPlayer(const AMyPlayer&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyPlayer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyPlayer) \
	NO_API virtual ~AMyPlayer();


#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_11_PROLOG
#define FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_INCLASS_NO_PURE_DECLS \
	FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyPlayer;

// ********** End Class AMyPlayer ******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Cristian_Documents_Unreal_Projects_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
