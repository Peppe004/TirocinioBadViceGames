// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainGameInstance() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_UMainGameInstance();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_UMainGameInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMainGameInstance ********************************************************
void UMainGameInstance::StaticRegisterNativesUMainGameInstance()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMainGameInstance;
UClass* UMainGameInstance::GetPrivateStaticClass()
{
	using TClass = UMainGameInstance;
	if (!Z_Registration_Info_UClass_UMainGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainGameInstance"),
			Z_Registration_Info_UClass_UMainGameInstance.InnerSingleton,
			StaticRegisterNativesUMainGameInstance,
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
	return Z_Registration_Info_UClass_UMainGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMainGameInstance_NoRegister()
{
	return UMainGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMainGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MainGameInstance.h" },
		{ "ModuleRelativePath", "Public/MainGameInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainGameInstance_Statics::ClassParams = {
	&UMainGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainGameInstance()
{
	if (!Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton, Z_Construct_UClass_UMainGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainGameInstance.OuterSingleton;
}
UMainGameInstance::UMainGameInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainGameInstance);
UMainGameInstance::~UMainGameInstance() {}
// ********** End Class UMainGameInstance **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainGameInstance_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainGameInstance, UMainGameInstance::StaticClass, TEXT("UMainGameInstance"), &Z_Registration_Info_UClass_UMainGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainGameInstance), 3074065929U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainGameInstance_h__Script_Tirocinio_Giuseppe_2864990772(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainGameInstance_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainGameInstance_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
