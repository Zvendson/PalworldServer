#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase
// 0x0018 (0x0018 - 0x0000)
struct BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIncidentBase*                       K2Node_Event_Incident;                             // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*     K2Node_Event_DynamicParameter;                     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase");
static_assert(sizeof(BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase) == 0x000018, "Wrong size on BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase");
static_assert(offsetof(BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase, EntryPoint) == 0x000000, "Member 'BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase, K2Node_Event_Incident) == 0x000008, "Member 'BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase::K2Node_Event_Incident' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase, K2Node_Event_DynamicParameter) == 0x000010, "Member 'BP_PalSupplyIncidentSpawnerBase_C_ExecuteUbergraph_BP_PalSupplyIncidentSpawnerBase::K2Node_Event_DynamicParameter' has a wrong offset!");

// Function BP_PalSupplyIncidentSpawnerBase.BP_PalSupplyIncidentSpawnerBase_C.OnIncidentSpawned
// 0x0010 (0x0010 - 0x0000)
struct BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned final
{
public:
	class UPalIncidentBase*                       Incident;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIncidentDynamicParameterRandom*     DynamicParameter;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned) == 0x000008, "Wrong alignment on BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned");
static_assert(sizeof(BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned) == 0x000010, "Wrong size on BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned");
static_assert(offsetof(BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned, Incident) == 0x000000, "Member 'BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned::Incident' has a wrong offset!");
static_assert(offsetof(BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned, DynamicParameter) == 0x000008, "Member 'BP_PalSupplyIncidentSpawnerBase_C_OnIncidentSpawned::DynamicParameter' has a wrong offset!");

}

