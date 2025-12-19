// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CharacterController.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCharacterController() {}

// ********** Begin Cross Module References ********************************************************
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACharacterController();
TIROCINIO_GIUSEPPE_API UClass* Z_Construct_UClass_ACharacterController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Tirocinio_Giuseppe();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACharacterController Function DisableCartCollision ***********************
struct Z_Construct_UFunction_ACharacterController_DisableCartCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_DisableCartCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "DisableCartCollision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_DisableCartCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_DisableCartCollision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACharacterController_DisableCartCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_DisableCartCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execDisableCartCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableCartCollision();
	P_NATIVE_END;
}
// ********** End Class ACharacterController Function DisableCartCollision *************************

// ********** Begin Class ACharacterController Function EnableCartCollision ************************
struct Z_Construct_UFunction_ACharacterController_EnableCartCollision_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_EnableCartCollision_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "EnableCartCollision", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_EnableCartCollision_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_EnableCartCollision_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACharacterController_EnableCartCollision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_EnableCartCollision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execEnableCartCollision)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableCartCollision();
	P_NATIVE_END;
}
// ********** End Class ACharacterController Function EnableCartCollision **************************

// ********** Begin Class ACharacterController Function Interact ***********************************
static FName NAME_ACharacterController_Interact = FName(TEXT("Interact"));
void ACharacterController::Interact()
{
	UFunction* Func = FindFunctionChecked(NAME_ACharacterController_Interact);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Interact_Implementation();
	}
}
struct Z_Construct_UFunction_ACharacterController_Interact_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Makes it so inputs red in c++ also have effects in the BP \n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Makes it so inputs red in c++ also have effects in the BP" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_Interact_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "Interact", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_Interact_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_Interact_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACharacterController_Interact()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_Interact_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Interact_Implementation();
	P_NATIVE_END;
}
// ********** End Class ACharacterController Function Interact *************************************

// ********** Begin Class ACharacterController Function InteractInput ******************************
struct Z_Construct_UFunction_ACharacterController_InteractInput_Statics
{
	struct CharacterController_eventInteractInput_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called for Interact input */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for Interact input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_InteractInput_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventInteractInput_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_InteractInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_InteractInput_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_InteractInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_InteractInput_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "InteractInput", Z_Construct_UFunction_ACharacterController_InteractInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_InteractInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_InteractInput_Statics::CharacterController_eventInteractInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_InteractInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_InteractInput_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_InteractInput_Statics::CharacterController_eventInteractInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_InteractInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_InteractInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execInteractInput)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InteractInput(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ACharacterController Function InteractInput ********************************

// ********** Begin Class ACharacterController Function UseTool ************************************
struct Z_Construct_UFunction_ACharacterController_UseTool_Statics
{
	struct CharacterController_eventUseTool_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called for UseTool input */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called for UseTool input" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACharacterController_UseTool_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CharacterController_eventUseTool_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACharacterController_UseTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACharacterController_UseTool_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UseTool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACharacterController_UseTool_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACharacterController, nullptr, "UseTool", Z_Construct_UFunction_ACharacterController_UseTool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UseTool_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACharacterController_UseTool_Statics::CharacterController_eventUseTool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACharacterController_UseTool_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACharacterController_UseTool_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACharacterController_UseTool_Statics::CharacterController_eventUseTool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACharacterController_UseTool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACharacterController_UseTool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACharacterController::execUseTool)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UseTool(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class ACharacterController Function UseTool **************************************

// ********** Begin Class ACharacterController *****************************************************
void ACharacterController::StaticRegisterNativesACharacterController()
{
	UClass* Class = ACharacterController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableCartCollision", &ACharacterController::execDisableCartCollision },
		{ "EnableCartCollision", &ACharacterController::execEnableCartCollision },
		{ "Interact", &ACharacterController::execInteract },
		{ "InteractInput", &ACharacterController::execInteractInput },
		{ "UseTool", &ACharacterController::execUseTool },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACharacterController;
UClass* ACharacterController::GetPrivateStaticClass()
{
	using TClass = ACharacterController;
	if (!Z_Registration_Info_UClass_ACharacterController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CharacterController"),
			Z_Registration_Info_UClass_ACharacterController.InnerSingleton,
			StaticRegisterNativesACharacterController,
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
	return Z_Registration_Info_UClass_ACharacterController.InnerSingleton;
}
UClass* Z_Construct_UClass_ACharacterController_NoRegister()
{
	return ACharacterController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACharacterController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CharacterController.h" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Camera Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[] = {
		{ "Category", "Cemera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Spring Arm Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hand Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartAttachmentPoint_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Hand Component\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hand Component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CartCollisionBox_MetaData[] = {
		{ "Category", "CartCollision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CharacterController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// To assign the actions in the BP\n" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "To assign the actions in the BP" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Move Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Move Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Interact Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interact Input Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseToolAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UseTool Input Action */" },
#endif
		{ "ModuleRelativePath", "Public/CharacterController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UseTool Input Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CartAttachmentPoint;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CartCollisionBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UseToolAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACharacterController_DisableCartCollision, "DisableCartCollision" }, // 3234091522
		{ &Z_Construct_UFunction_ACharacterController_EnableCartCollision, "EnableCartCollision" }, // 3486993723
		{ &Z_Construct_UFunction_ACharacterController_Interact, "Interact" }, // 2250995024
		{ &Z_Construct_UFunction_ACharacterController_InteractInput, "InteractInput" }, // 2082138419
		{ &Z_Construct_UFunction_ACharacterController_UseTool, "UseTool" }, // 1540323119
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACharacterController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, Camera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Camera_MetaData), NewProp_Camera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArm_MetaData), NewProp_SpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, Hand), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_MetaData), NewProp_Hand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CartAttachmentPoint = { "CartAttachmentPoint", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, CartAttachmentPoint), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartAttachmentPoint_MetaData), NewProp_CartAttachmentPoint_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_CartCollisionBox = { "CartCollisionBox", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, CartCollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CartCollisionBox_MetaData), NewProp_CartCollisionBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContext_MetaData), NewProp_DefaultMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractAction_MetaData), NewProp_InteractAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACharacterController_Statics::NewProp_UseToolAction = { "UseToolAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACharacterController, UseToolAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseToolAction_MetaData), NewProp_UseToolAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACharacterController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Camera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_SpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CartAttachmentPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_CartCollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_DefaultMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_InteractAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACharacterController_Statics::NewProp_UseToolAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACharacterController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Tirocinio_Giuseppe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACharacterController_Statics::ClassParams = {
	&ACharacterController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACharacterController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACharacterController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACharacterController()
{
	if (!Z_Registration_Info_UClass_ACharacterController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACharacterController.OuterSingleton, Z_Construct_UClass_ACharacterController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACharacterController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACharacterController);
ACharacterController::~ACharacterController() {}
// ********** End Class ACharacterController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h__Script_Tirocinio_Giuseppe_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACharacterController, ACharacterController::StaticClass, TEXT("ACharacterController"), &Z_Registration_Info_UClass_ACharacterController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACharacterController), 1604376090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h__Script_Tirocinio_Giuseppe_2116686045(TEXT("/Script/Tirocinio_Giuseppe"),
	Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TirocinioBadViceGames_Tirocinio_Giuseppe_Source_Tirocinio_Giuseppe_Public_CharacterController_h__Script_Tirocinio_Giuseppe_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
