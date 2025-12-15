// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyCart.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyCart() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TIROCINIO_NICO_API UClass* Z_Construct_UClass_AMyCart();
TIROCINIO_NICO_API UClass* Z_Construct_UClass_AMyCart_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Nico();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyCart ******************************************************************
void AMyCart::StaticRegisterNativesAMyCart()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyCart;
UClass* AMyCart::GetPrivateStaticClass()
{
	using TClass = AMyCart;
	if (!Z_Registration_Info_UClass_AMyCart.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyCart"),
			Z_Registration_Info_UClass_AMyCart.InnerSingleton,
			StaticRegisterNativesAMyCart,
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
	return Z_Registration_Info_UClass_AMyCart.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyCart_NoRegister()
{
	return AMyCart::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyCart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyCart.h" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyCart_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Nico,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCart_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyCart_Statics::ClassParams = {
	&AMyCart::StaticClass,
	"Engine",
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCart_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyCart_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyCart()
{
	if (!Z_Registration_Info_UClass_AMyCart.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyCart.OuterSingleton, Z_Construct_UClass_AMyCart_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyCart.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCart);
AMyCart::~AMyCart() {}
// ********** End Class AMyCart ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCart, AMyCart::StaticClass, TEXT("AMyCart"), &Z_Registration_Info_UClass_AMyCart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCart), 2052784998U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_2193109518(TEXT("/Script/Tirocinio_Nico"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
