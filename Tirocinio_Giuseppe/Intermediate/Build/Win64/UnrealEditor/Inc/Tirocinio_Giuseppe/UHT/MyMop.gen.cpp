// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMop.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyMop() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyMop();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyMop_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyMop *******************************************************************
void AMyMop::StaticRegisterNativesAMyMop()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyMop;
UClass* AMyMop::GetPrivateStaticClass()
{
	using TClass = AMyMop;
	if (!Z_Registration_Info_UClass_AMyMop.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyMop"),
			Z_Registration_Info_UClass_AMyMop.InnerSingleton,
			StaticRegisterNativesAMyMop,
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
	return Z_Registration_Info_UClass_AMyMop.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyMop_NoRegister()
{
	return AMyMop::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyMop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MyMop.h" },
		{ "ModuleRelativePath", "Public/MyMop.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MopMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyMop.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MopMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMop>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyMop_Statics::NewProp_MopMesh = { "MopMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyMop, MopMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MopMesh_MetaData), NewProp_MopMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyMop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyMop_Statics::NewProp_MopMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMop_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyMop_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMop_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMop_Statics::ClassParams = {
	&AMyMop::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMyMop_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyMop_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyMop_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyMop_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyMop()
{
	if (!Z_Registration_Info_UClass_AMyMop.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMop.OuterSingleton, Z_Construct_UClass_AMyMop_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyMop.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMop);
AMyMop::~AMyMop() {}
// ********** End Class AMyMop *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyMop_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyMop, AMyMop::StaticClass, TEXT("AMyMop"), &Z_Registration_Info_UClass_AMyMop, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMop), 3201093574U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyMop_h__Script_Tirocinio_Giuseppe_11341315(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyMop_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyMop_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
