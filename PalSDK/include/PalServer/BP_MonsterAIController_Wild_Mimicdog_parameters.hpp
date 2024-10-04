#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_MonsterAIController_Wild_Mimicdog.BP_MonsterAIController_Wild_Mimicdog_C.PlayDefaultAction
// 0x0018 (0x0018 - 0x0000)
struct BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction final
{
public:
	class UPalAIActionComponent*                  K2Node_DynamicCast_AsPal_AIAction_Component;       // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_AIAction_WildMimicry_C*             CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction) == 0x000008, "Wrong alignment on BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction");
static_assert(sizeof(BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction) == 0x000018, "Wrong size on BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction");
static_assert(offsetof(BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction, K2Node_DynamicCast_AsPal_AIAction_Component) == 0x000000, "Member 'BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction::K2Node_DynamicCast_AsPal_AIAction_Component' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction, K2Node_DynamicCast_bSuccess) == 0x000008, "Member 'BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'BP_MonsterAIController_Wild_Mimicdog_C_PlayDefaultAction::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");

}

