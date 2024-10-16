#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnReadyOwnerEnergyModule
// 0x0030 (0x0030 - 0x0000)
struct BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   Module;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectEnergyModule* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectEnergyModule*              K2Node_DynamicCast_AsPal_Map_Object_Energy_Module; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule) == 0x000008, "Wrong alignment on BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule");
static_assert(sizeof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule) == 0x000030, "Wrong size on BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule, Model) == 0x000000, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule, Module) == 0x000008, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule, K2Node_DynamicCast_AsPal_Map_Object_Energy_Module) == 0x000020, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule::K2Node_DynamicCast_AsPal_Map_Object_Energy_Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnReadyOwnerEnergyModule::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateCurrentEnergyState
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState final
{
public:
	class UPalMapObjectEnergyModule*              Module;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsRequiredEnergy_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectEnergyModuleStatusType           CallFunc_GetCurrentState_ReturnValue;              // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState) == 0x000008, "Wrong alignment on BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState");
static_assert(sizeof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState) == 0x000010, "Wrong size on BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState, Module) == 0x000000, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState, CallFunc_IsRequiredEnergy_ReturnValue) == 0x000008, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState::CallFunc_IsRequiredEnergy_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState, CallFunc_GetCurrentState_ReturnValue) == 0x000009, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState::CallFunc_GetCurrentState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00000A, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateCurrentEnergyState::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.OnUpdateRecipe
// 0x0078 (0x0078 - 0x0000)
struct BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe final
{
public:
	class UPalMapObjectConvertItemModel*          Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemRecipe                         CallFunc_GetCurrentRecipe_ReturnValue;             // 0x0008(0x0070)()
};
static_assert(alignof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe) == 0x000008, "Wrong alignment on BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe");
static_assert(sizeof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe) == 0x000078, "Wrong size on BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe, Model) == 0x000000, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe, CallFunc_GetCurrentRecipe_ReturnValue) == 0x000008, "Member 'BP_BuildObjectFactoryConveyorComponent_C_OnUpdateRecipe::CallFunc_GetCurrentRecipe_ReturnValue' has a wrong offset!");

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetRunningConveyor
// 0x0028 (0x0028 - 0x0000)
struct BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_MakeColor_ReturnValue;                    // 0x0004(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0014(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_MakeColor_G_ImplicitCast;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor) == 0x000004, "Wrong alignment on BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor");
static_assert(sizeof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor) == 0x000028, "Wrong size on BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor, bOn) == 0x000000, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor::bOn' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor, CallFunc_MakeColor_ReturnValue) == 0x000004, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor::CallFunc_MakeColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor, CallFunc_SelectColor_ReturnValue) == 0x000014, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor, CallFunc_MakeColor_G_ImplicitCast) == 0x000024, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetRunningConveyor::CallFunc_MakeColor_G_ImplicitCast' has a wrong offset!");

// Function BP_BuildObjectFactoryConveyorComponent.BP_BuildObjectFactoryConveyorComponent_C.SetupByOwner
// 0x0118 (0x0118 - 0x0000)
struct BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*               ConveyorMaterialInstance;                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConvertItemModel*          ConvertItemModel;                                  // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConvertItemModel*          K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model; // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetOwner_ReturnValue;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConvertItemModel* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0040(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0068(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0078(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x0100(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_VariableSet_ConveyorSpeed_ImplicitCast;     // 0x0110(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner) == 0x000008, "Wrong alignment on BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner");
static_assert(sizeof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner) == 0x000118, "Wrong size on BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, ConcreteModel) == 0x000000, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, ConveyorMaterialInstance) == 0x000008, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::ConveyorMaterialInstance' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, ConvertItemModel) == 0x000010, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::ConvertItemModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model) == 0x000018, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_DynamicCast_AsPal_Map_Object_Convert_Item_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_DynamicCast_bSuccess) == 0x000020, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_GetOwner_ReturnValue) == 0x000028, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_GetOwner_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_GetObjectName_ReturnValue) == 0x000040, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_CreateDelegate_OutputDelegate_1) == 0x000068, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_MakeStruct_FormatArgumentData) == 0x000078, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_MakeArray_Array) == 0x0000C8, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, CallFunc_K2_GetVectorParameterValue_ReturnValue) == 0x000100, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::CallFunc_K2_GetVectorParameterValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner, K2Node_VariableSet_ConveyorSpeed_ImplicitCast) == 0x000110, "Member 'BP_BuildObjectFactoryConveyorComponent_C_SetupByOwner::K2Node_VariableSet_ConveyorSpeed_ImplicitCast' has a wrong offset!");

}

