#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ExecuteUbergraph_BP_MonsterAIController_CapturedCage
// 0x0020 (0x0020 - 0x0000)
struct BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalActionComponent*                    CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayAction_ReturnValue;                   // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage) == 0x000008, "Wrong alignment on BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage");
static_assert(sizeof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage) == 0x000020, "Wrong size on BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage");
static_assert(offsetof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage, EntryPoint) == 0x000000, "Member 'BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage, K2Node_Event_PossessedPawn) == 0x000008, "Member 'BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage, CallFunc_PlayAction_ReturnValue) == 0x000018, "Member 'BP_MonsterAIController_CapturedCage_C_ExecuteUbergraph_BP_MonsterAIController_CapturedCage::CallFunc_PlayAction_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIController_CapturedCage.BP_MonsterAIController_CapturedCage_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_CapturedCage_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_CapturedCage_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MonsterAIController_CapturedCage_C_ReceivePossess");
static_assert(sizeof(BP_MonsterAIController_CapturedCage_C_ReceivePossess) == 0x000008, "Wrong size on BP_MonsterAIController_CapturedCage_C_ReceivePossess");
static_assert(offsetof(BP_MonsterAIController_CapturedCage_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MonsterAIController_CapturedCage_C_ReceivePossess::PossessedPawn' has a wrong offset!");

}

