// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyDuster.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyDuster() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyDuster();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyDuster_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyDuster ****************************************************************
void AMyDuster::StaticRegisterNativesAMyDuster()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyDuster;
UClass* AMyDuster::GetPrivateStaticClass()
{
	using TClass = AMyDuster;
	if (!Z_Registration_Info_UClass_AMyDuster.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyDuster"),
			Z_Registration_Info_UClass_AMyDuster.InnerSingleton,
			StaticRegisterNativesAMyDuster,
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
	return Z_Registration_Info_UClass_AMyDuster.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyDuster_NoRegister()
{
	return AMyDuster::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyDuster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyDuster.h" },
		{ "ModuleRelativePath", "Public/MyDuster.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyDuster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMyDuster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDuster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyDuster_Statics::ClassParams = {
	&AMyDuster::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyDuster_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyDuster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyDuster()
{
	if (!Z_Registration_Info_UClass_AMyDuster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyDuster.OuterSingleton, Z_Construct_UClass_AMyDuster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyDuster.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyDuster);
AMyDuster::~AMyDuster() {}
// ********** End Class AMyDuster ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyDuster_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyDuster, AMyDuster::StaticClass, TEXT("AMyDuster"), &Z_Registration_Info_UClass_AMyDuster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyDuster), 964838477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyDuster_h__Script_Tirocinio_Giuseppe_1351499833(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyDuster_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyDuster_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
