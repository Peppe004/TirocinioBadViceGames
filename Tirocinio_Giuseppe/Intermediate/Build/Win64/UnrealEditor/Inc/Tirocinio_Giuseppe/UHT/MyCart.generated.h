// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyCart.h"

#ifdef TIROCINIO_GIUSEPPE_MyCart_generated_h
#error "MyCart.generated.h already included, missing '#pragma once' in MyCart.h"
#endif
#define TIROCINIO_GIUSEPPE_MyCart_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EItemType : uint8;

// ********** Begin ScriptStruct FCartSlots ********************************************************
#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_27_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCartSlots_Statics; \
	TIROCINIO_GIUSEPPE_API static class UScriptStruct* StaticStruct();


struct FCartSlots;
// ********** End ScriptStruct FCartSlots **********************************************************

// ********** Begin Class AMyCart ******************************************************************
#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execAddItemToCart);


TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyCart_NoRegister();

#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyCart(); \
	friend struct Z_Construct_UClass_AMyCart_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyCart_NoRegister(); \
public: \
	DECLARE_CLASS2(AMyCart, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tirocinio_Giuseppe"), Z_Construct_UClass_AMyCart_NoRegister) \
	DECLARE_SERIALIZER(AMyCart)


#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMyCart(AMyCart&&) = delete; \
	AMyCart(const AMyCart&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyCart); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyCart); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyCart) \
	NO_API virtual ~AMyCart();


#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_50_PROLOG
#define FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_INCLASS_NO_PURE_DECLS \
	FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h_53_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMyCart;

// ********** End Class AMyCart ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyCart_h

// ********** Begin Enum EItemType *****************************************************************
#define FOREACH_ENUM_EITEMTYPE(op) \
	op(EItemType::Cestino) \
	op(EItemType::Mocio) \
	op(EItemType::Spolverino) \
	op(EItemType::Scacciamosche) \
	op(EItemType::OggettoMissione1) \
	op(EItemType::OggettoMissione2) \
	op(EItemType::OggettoMissione3) 

enum class EItemType : uint8;
template<> struct TIsUEnumClass<EItemType> { enum { Value = true }; };
template<> TIROCINIO_GIUSEPPE_API UEnum* StaticEnum<EItemType>();
// ********** End Enum EItemType *******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
