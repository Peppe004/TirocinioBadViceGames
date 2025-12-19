// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCart() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APawn();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACart();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACart_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACart ********************************************************************
void ACart::StaticRegisterNativesACart()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACart;
UClass* ACart::GetPrivateStaticClass()
{
	using TClass = ACart;
	if (!Z_Registration_Info_UClass_ACart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Cart"),
			Z_Registration_Info_UClass_ACart.InnerSingleton,
			StaticRegisterNativesACart,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACart.InnerSingleton;
}
UClass* Z_Construct_UClass_ACart_NoRegister()
{
	return ACart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Cart.h" },
		{ "ModuleRelativePath", "Public/Cart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACart_Statics::ClassParams = {
	&ACart::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACart_Statics::Class_MetaDataParams), Z_Construct_UClass_ACart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACart()
{
	if (!Z_Registration_Info_UClass_ACart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACart.OuterSingleton, Z_Construct_UClass_ACart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACart.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACart);
ACart::~ACart() {}
// ********** End Class ACart **********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_Cart_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACart, ACart::StaticClass, TEXT("ACart"), &Z_Registration_Info_UClass_ACart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACart), 474214355U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_Cart_h__Script_Tirocinio_Giuseppe_4138893089(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_Cart_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_Cart_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
