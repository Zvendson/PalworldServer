#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_Torch_Base_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.ExecuteUbergraph_BP_BuildObject_Torch_Base
// 0x0020 (0x0020 - 0x0000)
struct BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base) == 0x000008, "Wrong alignment on BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base");
static_assert(sizeof(BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base) == 0x000020, "Wrong size on BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base, EntryPoint) == 0x000000, "Member 'BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base, K2Node_Event_ConcreteModel) == 0x000018, "Member 'BP_BuildObject_Torch_Base_C_ExecuteUbergraph_BP_BuildObject_Torch_Base::K2Node_Event_ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.OnReadySwitchModule
// 0x0038 (0x0038 - 0x0000)
struct BP_BuildObject_Torch_Base_C_OnReadySwitchModule final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   Module;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSwitchModule*              SwitchModule;                                      // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSwitchModule*              CallFunc_GetSwitchModule_ReturnValue;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UPalMapObjectSwitchModule* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule) == 0x000008, "Wrong alignment on BP_BuildObject_Torch_Base_C_OnReadySwitchModule");
static_assert(sizeof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule) == 0x000038, "Wrong size on BP_BuildObject_Torch_Base_C_OnReadySwitchModule");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, Model) == 0x000000, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, Module) == 0x000008, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, SwitchModule) == 0x000010, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::SwitchModule' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, CallFunc_GetSwitchModule_ReturnValue) == 0x000018, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::CallFunc_GetSwitchModule_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnReadySwitchModule, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'BP_BuildObject_Torch_Base_C_OnReadySwitchModule::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");

// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.OnUpdateTorchStateInternal
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal final
{
public:
	class UPalMapObjectSwitchModule*              SwitchModule;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectSwitchState                      CallFunc_GetSwitchState_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal) == 0x000008, "Wrong alignment on BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal");
static_assert(sizeof(BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal) == 0x000010, "Wrong size on BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal, SwitchModule) == 0x000000, "Member 'BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal::SwitchModule' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal, CallFunc_GetSwitchState_ReturnValue) == 0x000008, "Member 'BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal::CallFunc_GetSwitchState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal, K2Node_SwitchEnum_CmpSuccess) == 0x000009, "Member 'BP_BuildObject_Torch_Base_C_OnUpdateTorchStateInternal::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function BP_BuildObject_Torch_Base.BP_BuildObject_Torch_Base_C.SetActiveLight
// 0x00B8 (0x00B8 - 0x0000)
struct BP_BuildObject_Torch_Base_C_SetActiveLight final
{
public:
	bool                                          bActive;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetObjectName_ReturnValue;                // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0030(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0080(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0090(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_Torch_Base_C_SetActiveLight) == 0x000008, "Wrong alignment on BP_BuildObject_Torch_Base_C_SetActiveLight");
static_assert(sizeof(BP_BuildObject_Torch_Base_C_SetActiveLight) == 0x0000B8, "Wrong size on BP_BuildObject_Torch_Base_C_SetActiveLight");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, bActive) == 0x000000, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::bActive' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, CallFunc_GetObjectName_ReturnValue) == 0x000008, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::CallFunc_GetObjectName_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, K2Node_MakeStruct_FormatArgumentData) == 0x000030, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, K2Node_MakeArray_Array) == 0x000080, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, CallFunc_Format_ReturnValue) == 0x000090, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_Torch_Base_C_SetActiveLight, CallFunc_Conv_TextToString_ReturnValue) == 0x0000A8, "Member 'BP_BuildObject_Torch_Base_C_SetActiveLight::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

