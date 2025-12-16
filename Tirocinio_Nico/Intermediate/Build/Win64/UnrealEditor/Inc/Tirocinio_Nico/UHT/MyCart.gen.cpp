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
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TIROCINIO_NICO_API UClass* Z_Construct_UClass_AMyCart();
TIROCINIO_NICO_API UClass* Z_Construct_UClass_AMyCart_NoRegister();
TIROCINIO_NICO_API UEnum* Z_Construct_UEnum_Tirocinio_Nico_EItemType();
TIROCINIO_NICO_API UScriptStruct* Z_Construct_UScriptStruct_FCartSlots();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Nico();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EItemType *****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemType;
static UEnum* EItemType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tirocinio_Nico_EItemType, (UObject*)Z_Construct_UPackage__Script_Tirocinio_Nico(), TEXT("EItemType"));
	}
	return Z_Registration_Info_UEnum_EItemType.OuterSingleton;
}
template<> TIROCINIO_NICO_API UEnum* StaticEnum<EItemType>()
{
	return EItemType_StaticEnum();
}
struct Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cestino.Name", "EItemType::Cestino" },
		{ "Mocio.Name", "EItemType::Mocio" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
		{ "OggettoMissione1.Name", "EItemType::OggettoMissione1" },
		{ "OggettoMissione2.Name", "EItemType::OggettoMissione2" },
		{ "OggettoMissione3.Name", "EItemType::OggettoMissione3" },
		{ "Scacciamosche.Name", "EItemType::Scacciamosche" },
		{ "Spolverino.Name", "EItemType::Spolverino" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemType::Cestino", (int64)EItemType::Cestino },
		{ "EItemType::Mocio", (int64)EItemType::Mocio },
		{ "EItemType::Spolverino", (int64)EItemType::Spolverino },
		{ "EItemType::Scacciamosche", (int64)EItemType::Scacciamosche },
		{ "EItemType::OggettoMissione1", (int64)EItemType::OggettoMissione1 },
		{ "EItemType::OggettoMissione2", (int64)EItemType::OggettoMissione2 },
		{ "EItemType::OggettoMissione3", (int64)EItemType::OggettoMissione3 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Tirocinio_Nico,
	nullptr,
	"EItemType",
	"EItemType",
	Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Tirocinio_Nico_EItemType()
{
	if (!Z_Registration_Info_UEnum_EItemType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemType.InnerSingleton, Z_Construct_UEnum_Tirocinio_Nico_EItemType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemType.InnerSingleton;
}
// ********** End Enum EItemType *******************************************************************

// ********** Begin ScriptStruct FCartSlots ********************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FCartSlots;
class UScriptStruct* FCartSlots::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FCartSlots.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FCartSlots.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCartSlots, (UObject*)Z_Construct_UPackage__Script_Tirocinio_Nico(), TEXT("CartSlots"));
	}
	return Z_Registration_Info_UScriptStruct_FCartSlots.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FCartSlots_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "Category", "CartSlots" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemClass_MetaData[] = {
		{ "Category", "CartSlots" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalTransform_MetaData[] = {
		{ "Category", "CartSlots" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ItemClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCartSlots>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCartSlots, ItemType), Z_Construct_UEnum_Tirocinio_Nico_EItemType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 3183933748
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemClass = { "ItemClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCartSlots, ItemClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemClass_MetaData), NewProp_ItemClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_LocalTransform = { "LocalTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCartSlots, LocalTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalTransform_MetaData), NewProp_LocalTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCartSlots_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_ItemClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCartSlots_Statics::NewProp_LocalTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCartSlots_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCartSlots_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Nico,
	nullptr,
	&NewStructOps,
	"CartSlots",
	Z_Construct_UScriptStruct_FCartSlots_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCartSlots_Statics::PropPointers),
	sizeof(FCartSlots),
	alignof(FCartSlots),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCartSlots_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCartSlots_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCartSlots()
{
	if (!Z_Registration_Info_UScriptStruct_FCartSlots.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FCartSlots.InnerSingleton, Z_Construct_UScriptStruct_FCartSlots_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FCartSlots.InnerSingleton;
}
// ********** End ScriptStruct FCartSlots **********************************************************

// ********** Begin Class AMyCart Function AddItemToCart *******************************************
struct Z_Construct_UFunction_AMyCart_AddItemToCart_Statics
{
	struct MyCart_eventAddItemToCart_Parms
	{
		EItemType Type;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyCart_eventAddItemToCart_Parms, Type), Z_Construct_UEnum_Tirocinio_Nico_EItemType, METADATA_PARAMS(0, nullptr) }; // 3183933748
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::NewProp_Type,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMyCart, nullptr, "AddItemToCart", Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::MyCart_eventAddItemToCart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::MyCart_eventAddItemToCart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyCart_AddItemToCart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyCart_AddItemToCart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyCart::execAddItemToCart)
{
	P_GET_ENUM(EItemType,Z_Param_Type);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddItemToCart(EItemType(Z_Param_Type));
	P_NATIVE_END;
}
// ********** End Class AMyCart Function AddItemToCart *********************************************

// ********** Begin Class AMyCart ******************************************************************
void AMyCart::StaticRegisterNativesAMyCart()
{
	UClass* Class = AMyCart::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItemToCart", &AMyCart::execAddItemToCart },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SetupSlots_MetaData[] = {
		{ "Category", "Setup" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyCart.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SetupSlots_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SetupSlots;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CartMesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyCart_AddItemToCart, "AddItemToCart" }, // 2129481735
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCart>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMyCart_Statics::NewProp_SetupSlots_Inner = { "SetupSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FCartSlots, METADATA_PARAMS(0, nullptr) }; // 1061358679
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMyCart_Statics::NewProp_SetupSlots = { "SetupSlots", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCart, SetupSlots), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SetupSlots_MetaData), NewProp_SetupSlots_MetaData) }; // 1061358679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCart_Statics::NewProp_CartMesh = { "CartMesh", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyCart, CartMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartMesh_MetaData), NewProp_CartMesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCart_Statics::NewProp_SetupSlots_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCart_Statics::NewProp_SetupSlots,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCart_Statics::NewProp_CartMesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyCart_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_AMyCart_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyCart_Statics::PropPointers),
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemType_StaticEnum, TEXT("EItemType"), &Z_Registration_Info_UEnum_EItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3183933748U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCartSlots::StaticStruct, Z_Construct_UScriptStruct_FCartSlots_Statics::NewStructOps, TEXT("CartSlots"), &Z_Registration_Info_UScriptStruct_FCartSlots, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCartSlots), 1061358679U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyCart, AMyCart::StaticClass, TEXT("AMyCart"), &Z_Registration_Info_UClass_AMyCart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyCart), 1621951340U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_569958269(TEXT("/Script/Tirocinio_Nico"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Nico_Source_Tirocinio_Nico_Public_MyCart_h__Script_Tirocinio_Nico_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
