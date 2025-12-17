// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MainLevelGameModeBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMainLevelGameModeBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMainLevelGameModeBase();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMainLevelGameModeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMainLevelGameModeBase ***************************************************
void AMainLevelGameModeBase::StaticRegisterNativesAMainLevelGameModeBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMainLevelGameModeBase;
UClass* AMainLevelGameModeBase::GetPrivateStaticClass()
{
	using TClass = AMainLevelGameModeBase;
	if (!Z_Registration_Info_UClass_AMainLevelGameModeBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MainLevelGameModeBase"),
			Z_Registration_Info_UClass_AMainLevelGameModeBase.InnerSingleton,
			StaticRegisterNativesAMainLevelGameModeBase,
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
	return Z_Registration_Info_UClass_AMainLevelGameModeBase.InnerSingleton;
}
UClass* Z_Construct_UClass_AMainLevelGameModeBase_NoRegister()
{
	return AMainLevelGameModeBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMainLevelGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MainLevelGameModeBase.h" },
		{ "ModuleRelativePath", "Public/MainLevelGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMainLevelGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AMainLevelGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMainLevelGameModeBase_Statics::ClassParams = {
	&AMainLevelGameModeBase::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMainLevelGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AMainLevelGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMainLevelGameModeBase()
{
	if (!Z_Registration_Info_UClass_AMainLevelGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMainLevelGameModeBase.OuterSingleton, Z_Construct_UClass_AMainLevelGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMainLevelGameModeBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMainLevelGameModeBase);
AMainLevelGameModeBase::~AMainLevelGameModeBase() {}
// ********** End Class AMainLevelGameModeBase *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainLevelGameModeBase_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMainLevelGameModeBase, AMainLevelGameModeBase::StaticClass, TEXT("AMainLevelGameModeBase"), &Z_Registration_Info_UClass_AMainLevelGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMainLevelGameModeBase), 100787698U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainLevelGameModeBase_h__Script_Tirocinio_Giuseppe_2098857130(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainLevelGameModeBase_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MainLevelGameModeBase_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
