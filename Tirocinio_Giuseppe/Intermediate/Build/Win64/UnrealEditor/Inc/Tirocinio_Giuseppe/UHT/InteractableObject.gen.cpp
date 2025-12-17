// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractableObject.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractableObject() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AInteractableObject();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_AInteractableObject_NoRegister();
TIROCINIO_GIUSEPPE_API UEnum* Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractableObject ******************************************************
void AInteractableObject::StaticRegisterNativesAInteractableObject()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractableObject;
UClass* AInteractableObject::GetPrivateStaticClass()
{
	using TClass = AInteractableObject;
	if (!Z_Registration_Info_UClass_AInteractableObject.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractableObject"),
			Z_Registration_Info_UClass_AInteractableObject.InnerSingleton,
			StaticRegisterNativesAInteractableObject,
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
	return Z_Registration_Info_UClass_AInteractableObject.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractableObject_NoRegister()
{
	return AInteractableObject::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "InteractableObject.h" },
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[] = {
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Static Mesh Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Static Mesh Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectType_MetaData[] = {
		{ "Category", "InteractableObject" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Called every frame\n" },
#endif
		{ "ModuleRelativePath", "Public/InteractableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every frame" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ObjectType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMesh_MetaData), NewProp_StaticMesh_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectType = { "ObjectType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractableObject, ObjectType), Z_Construct_UEnum_Tirocinio_Giuseppe_EObjectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectType_MetaData), NewProp_ObjectType_MetaData) }; // 1412455974
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_StaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableObject_Statics::NewProp_ObjectType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableObject_Statics::ClassParams = {
	&AInteractableObject::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractableObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractableObject()
{
	if (!Z_Registration_Info_UClass_AInteractableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableObject.OuterSingleton, Z_Construct_UClass_AInteractableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractableObject.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableObject);
AInteractableObject::~AInteractableObject() {}
// ********** End Class AInteractableObject ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_InteractableObject_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableObject, AInteractableObject::StaticClass, TEXT("AInteractableObject"), &Z_Registration_Info_UClass_AInteractableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableObject), 4054331802U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_InteractableObject_h__Script_Tirocinio_Giuseppe_1011340508(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_InteractableObject_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_cerve_OneDrive_Documenti_Unreal_Projects_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_InteractableObject_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
