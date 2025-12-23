// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPlayer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyPlayer() {}

// ********** Begin Cross Module References ********************************************************
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyPlayer();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AMyPlayer_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMyPlayer Function DisableCartCollision **********************************
struct Z_Construct_UFunction_AMyPlayer_DisableCartCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_DisableCartCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "DisableCartCollision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_DisableCartCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_DisableCartCollision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMyPlayer_DisableCartCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_DisableCartCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execDisableCartCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableCartCollision();
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function DisableCartCollision ************************************

// ********** Begin Class AMyPlayer Function EnableCartCollision ***********************************
struct Z_Construct_UFunction_AMyPlayer_EnableCartCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPlayer_EnableCartCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyPlayer, nullptr, "EnableCartCollision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPlayer_EnableCartCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPlayer_EnableCartCollision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMyPlayer_EnableCartCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPlayer_EnableCartCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPlayer::execEnableCartCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableCartCollision();
	P_NATIVE_END;
}
// ********** End Class AMyPlayer Function EnableCartCollision *************************************

// ********** Begin Class AMyPlayer ****************************************************************
void AMyPlayer::StaticRegisterNativesAMyPlayer()
{
	UClass* Class = AMyPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableCartCollision", &AMyPlayer::execDisableCartCollision },
		{ "EnableCartCollision", &AMyPlayer::execEnableCartCollision },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMyPlayer;
UClass* AMyPlayer::GetPrivateStaticClass()
{
	using TClass = AMyPlayer;
	if (!Z_Registration_Info_UClass_AMyPlayer.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyPlayer"),
			Z_Registration_Info_UClass_AMyPlayer.InnerSingleton,
			StaticRegisterNativesAMyPlayer,
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
	return Z_Registration_Info_UClass_AMyPlayer.InnerSingleton;
}
UClass* Z_Construct_UClass_AMyPlayer_NoRegister()
{
	return AMyPlayer::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMyPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPlayer.h" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CineCameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartCollisionBox_MetaData[] = {
		{ "Category", "CartCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartSlotArrow_MetaData[] = {
		{ "Category", "CartSlot" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CartCollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CartSlotArrow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPlayer_DisableCartCollision, "DisableCartCollision" }, // 337535651
		{ &Z_Construct_UFunction_AMyPlayer_EnableCartCollision, "EnableCartCollision" }, // 681185994
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CineCameraComp = { "CineCameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, CineCameraComp), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CineCameraComp_MetaData), NewProp_CineCameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CartCollisionBox = { "CartCollisionBox", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, CartCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartCollisionBox_MetaData), NewProp_CartCollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPlayer_Statics::NewProp_CartSlotArrow = { "CartSlotArrow", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPlayer, CartSlotArrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartSlotArrow_MetaData), NewProp_CartSlotArrow_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CineCameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CartCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPlayer_Statics::NewProp_CartSlotArrow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPlayer_Statics::ClassParams = {
	&AMyPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPlayer()
{
	if (!Z_Registration_Info_UClass_AMyPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPlayer.OuterSingleton, Z_Construct_UClass_AMyPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPlayer.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPlayer);
AMyPlayer::~AMyPlayer() {}
// ********** End Class AMyPlayer ******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPlayer, AMyPlayer::StaticClass, TEXT("AMyPlayer"), &Z_Registration_Info_UClass_AMyPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPlayer), 3982045683U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h__Script_Tirocinio_Giuseppe_2113943750(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Desktop_Tirocinio_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_MyPlayer_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
