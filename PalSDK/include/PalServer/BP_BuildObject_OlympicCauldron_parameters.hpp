#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.BP_OnSetConcreteModel
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel final
{
public:
	class UPalMapObjectConcreteModelBase*         ConcreteModel;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel) == 0x000008, "Wrong alignment on BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel");
static_assert(sizeof(BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel) == 0x000008, "Wrong size on BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel, ConcreteModel) == 0x000000, "Member 'BP_BuildObject_OlympicCauldron_C_BP_OnSetConcreteModel::ConcreteModel' has a wrong offset!");

// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.CustomEvent
// 0x0008 (0x0008 - 0x0000)
struct BP_BuildObject_OlympicCauldron_C_CustomEvent final
{
public:
	class UPalMapObjectConcreteModelBase*         Model;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_OlympicCauldron_C_CustomEvent) == 0x000008, "Wrong alignment on BP_BuildObject_OlympicCauldron_C_CustomEvent");
static_assert(sizeof(BP_BuildObject_OlympicCauldron_C_CustomEvent) == 0x000008, "Wrong size on BP_BuildObject_OlympicCauldron_C_CustomEvent");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_CustomEvent, Model) == 0x000000, "Member 'BP_BuildObject_OlympicCauldron_C_CustomEvent::Model' has a wrong offset!");

// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.ExecuteUbergraph_BP_BuildObject_OlympicCauldron
// 0x0028 (0x0028 - 0x0000)
struct BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UPalMapObjectConcreteModelBase* Model)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalMapObjectConcreteModelBase*         K2Node_Event_ConcreteModel;                        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectConcreteModelBase*         K2Node_CustomEvent_Model;                          // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron) == 0x000008, "Wrong alignment on BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron");
static_assert(sizeof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron) == 0x000028, "Wrong size on BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron, EntryPoint) == 0x000000, "Member 'BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron, K2Node_Event_ConcreteModel) == 0x000018, "Member 'BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron::K2Node_Event_ConcreteModel' has a wrong offset!");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron, K2Node_CustomEvent_Model) == 0x000020, "Member 'BP_BuildObject_OlympicCauldron_C_ExecuteUbergraph_BP_BuildObject_OlympicCauldron::K2Node_CustomEvent_Model' has a wrong offset!");

// Function BP_BuildObject_OlympicCauldron.BP_BuildObject_OlympicCauldron_C.SetActive_Internal
// 0x0001 (0x0001 - 0x0000)
struct BP_BuildObject_OlympicCauldron_C_SetActive_Internal final
{
public:
	bool                                          bOn;                                               // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_BuildObject_OlympicCauldron_C_SetActive_Internal) == 0x000001, "Wrong alignment on BP_BuildObject_OlympicCauldron_C_SetActive_Internal");
static_assert(sizeof(BP_BuildObject_OlympicCauldron_C_SetActive_Internal) == 0x000001, "Wrong size on BP_BuildObject_OlympicCauldron_C_SetActive_Internal");
static_assert(offsetof(BP_BuildObject_OlympicCauldron_C_SetActive_Internal, bOn) == 0x000000, "Member 'BP_BuildObject_OlympicCauldron_C_SetActive_Internal::bOn' has a wrong offset!");

}

