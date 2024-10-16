#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_SwitchHeatSource_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.ExecuteUbergraph_BP_BuildObject_SwitchHeatSource
// 0x0068 (0x0068 - 0x0000)
struct BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model, class UPalMapObjectConcreteModelModuleBase* Module)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model_1;                        // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   K2Node_CustomEvent_Module;                         // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectSwitchModule* Module)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSwitchModule*              K2Node_DynamicCast_AsPal_Map_Object_Switch_Module; // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource) == 0x000008, "Wrong alignment on BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource");
static_assert(sizeof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource) == 0x000068, "Wrong size on BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, EntryPoint) == 0x000000, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CustomEvent_Model) == 0x000008, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CustomEvent_Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_Event_ConcreteModel) == 0x000030, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CustomEvent_Model_1) == 0x000038, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CustomEvent_Model_1' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CustomEvent_Module) == 0x000040, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CustomEvent_Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_CreateDelegate_OutputDelegate_2) == 0x000048, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_DynamicCast_AsPal_Map_Object_Switch_Module) == 0x000058, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_DynamicCast_AsPal_Map_Object_Switch_Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'BP_BuildObject_SwitchHeatSource_C_ExecuteUbergraph_BP_BuildObject_SwitchHeatSource::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnAvailableConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel");
static_assert(sizeof(BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel, Model) == 0x000000, "Member 'BP_BuildObject_SwitchHeatSource_C_OnAvailableConcreteModel::Model' has a wrong offset!");

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnReadySwitchModule
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelModuleBase*   Module;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule) == 0x000008, "Wrong alignment on BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule");
static_assert(sizeof(BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule) == 0x000010, "Wrong size on BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule, Model) == 0x000000, "Member 'BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule::Model' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule, Module) == 0x000008, "Member 'BP_BuildObject_SwitchHeatSource_C_OnReadySwitchModule::Module' has a wrong offset!");

// Function BP_BuildObject_SwitchHeatSource.BP_BuildObject_SwitchHeatSource_C.OnUpdateSwitch
// 0x0010 (0x0010 - 0x0000)
struct BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch final
{
public:
	class UPalMapObjectSwitchModule*              Module;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalMapObjectSwitchState                      CallFunc_GetSwitchState_ReturnValue;               // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch) == 0x000008, "Wrong alignment on BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch");
static_assert(sizeof(BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch) == 0x000010, "Wrong size on BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch, Module) == 0x000000, "Member 'BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch::Module' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch, CallFunc_GetSwitchState_ReturnValue) == 0x000008, "Member 'BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch::CallFunc_GetSwitchState_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch, K2Node_SwitchEnum_CmpSuccess) == 0x000009, "Member 'BP_BuildObject_SwitchHeatSource_C_OnUpdateSwitch::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

