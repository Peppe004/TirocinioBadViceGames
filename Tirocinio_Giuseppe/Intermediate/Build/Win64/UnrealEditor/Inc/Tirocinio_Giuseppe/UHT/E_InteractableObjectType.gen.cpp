// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "E_InteractableObjectType.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeE_InteractableObjectType() {}

// ********** Begin Cross Module References ********************************************************
TIROCINIO_GIUSEPPE_API UEnum* Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EObjectType ***************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectType;
static UEnum* EObjectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EObjectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EObjectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType, (UObject*)Z_Construct_UPackage__Script_Tirocinio_Giuseppe(), TEXT("EObjectType"));
	}
	return Z_Registration_Info_UEnum_EObjectType.OuterSingleton;
}
template<> TIROCINIO_GIUSEPPE_API UEnum* StaticEnum<EObjectType>()
{
	return EObjectType_StaticEnum();
}
struct Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cleanable.DisplayName", "Oggetto Pulibile" },
		{ "Cleanable.Name", "EObjectType::Cleanable" },
		{ "Door.DisplayName", "Porta" },
		{ "Door.Name", "EObjectType::Door" },
		{ "ModuleRelativePath", "Public/E_InteractableObjectType.h" },
		{ "None.DisplayName", "Nessuno" },
		{ "None.Name", "EObjectType::None" },
		{ "QuestObject.DisplayName", "Oggetto di Quest" },
		{ "QuestObject.Name", "EObjectType::QuestObject" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EObjectType::None", (int64)EObjectType::None },
		{ "EObjectType::Door", (int64)EObjectType::Door },
		{ "EObjectType::Cleanable", (int64)EObjectType::Cleanable },
		{ "EObjectType::QuestObject", (int64)EObjectType::QuestObject },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
	nullptr,
	"EObjectType",
	"EObjectType",
	Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType()
{
	if (!Z_Registration_Info_UEnum_EObjectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectType.InnerSingleton, Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EObjectType.InnerSingleton;
}
// ********** End Enum EObjectType *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_E_InteractableObjectType_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EObjectType_StaticEnum, TEXT("EObjectType"), &Z_Registration_Info_UEnum_EObjectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1412455974U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_E_InteractableObjectType_h__Script_Tirocinio_Giuseppe_846420056(TEXT("/Script/Tirocinio_Giuseppe"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_E_InteractableObjectType_h__Script_Tirocinio_Giuseppe_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_E_InteractableObjectType_h__Script_Tirocinio_Giuseppe_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
