#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ExecuteUbergraph_BP_MonsterAIController_NPCOtomo
// 0x0098 (0x0098 - 0x0000)
struct BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_PossessedPawn;                        // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_1;                 // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalDeadInfo                           K2Node_CustomEvent_DeadInfo;                       // 0x0030(0x0050)(NoDestructor)
	class UPalDamageReactionComponent*            CallFunc_GetComponentByClass_ReturnValue;          // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  CallFunc_K2_GetPawn_ReturnValue_2;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalBattleManager*                      CallFunc_GetBattleManager_ReturnValue;             // 0x0090(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo) == 0x000008, "Wrong alignment on BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo");
static_assert(sizeof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo) == 0x000098, "Wrong size on BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, EntryPoint) == 0x000000, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, CallFunc_K2_GetPawn_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::CallFunc_K2_GetPawn_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, K2Node_Event_PossessedPawn) == 0x000020, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::K2Node_Event_PossessedPawn' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, CallFunc_K2_GetPawn_ReturnValue_1) == 0x000028, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::CallFunc_K2_GetPawn_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, K2Node_CustomEvent_DeadInfo) == 0x000030, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::K2Node_CustomEvent_DeadInfo' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, CallFunc_GetComponentByClass_ReturnValue) == 0x000080, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, CallFunc_K2_GetPawn_ReturnValue_2) == 0x000088, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::CallFunc_K2_GetPawn_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo, CallFunc_GetBattleManager_ReturnValue) == 0x000090, "Member 'BP_MonsterAIController_NPCOtomo_C_ExecuteUbergraph_BP_MonsterAIController_NPCOtomo::CallFunc_GetBattleManager_ReturnValue' has a wrong offset!");

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetLeaderBB
// 0x0020 (0x0020 - 0x0000)
struct BP_MonsterAIController_NPCOtomo_C_GetLeaderBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           LeaderPalBrackboard;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetLeaderPalBlackboard_ReturnValue;       // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB) == 0x000008, "Wrong alignment on BP_MonsterAIController_NPCOtomo_C_GetLeaderBB");
static_assert(sizeof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB) == 0x000020, "Wrong size on BP_MonsterAIController_NPCOtomo_C_GetLeaderBB");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB, LeaderPalBrackboard) == 0x000000, "Member 'BP_MonsterAIController_NPCOtomo_C_GetLeaderBB::LeaderPalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB, CallFunc_GetLeaderPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_NPCOtomo_C_GetLeaderBB::CallFunc_GetLeaderPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_MonsterAIController_NPCOtomo_C_GetLeaderBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetLeaderBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MonsterAIController_NPCOtomo_C_GetLeaderBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.GetMyBB
// 0x0020 (0x0020 - 0x0000)
struct BP_MonsterAIController_NPCOtomo_C_GetMyBB final
{
public:
	class UBP_PalAIBlackboard_Common_C*           PalBrackboard;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalAIBlackboardBase*                   CallFunc_GetMyPalBlackboard_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PalAIBlackboard_Common_C*           K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common;   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_NPCOtomo_C_GetMyBB) == 0x000008, "Wrong alignment on BP_MonsterAIController_NPCOtomo_C_GetMyBB");
static_assert(sizeof(BP_MonsterAIController_NPCOtomo_C_GetMyBB) == 0x000020, "Wrong size on BP_MonsterAIController_NPCOtomo_C_GetMyBB");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetMyBB, PalBrackboard) == 0x000000, "Member 'BP_MonsterAIController_NPCOtomo_C_GetMyBB::PalBrackboard' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetMyBB, CallFunc_GetMyPalBlackboard_ReturnValue) == 0x000008, "Member 'BP_MonsterAIController_NPCOtomo_C_GetMyBB::CallFunc_GetMyPalBlackboard_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetMyBB, K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common) == 0x000010, "Member 'BP_MonsterAIController_NPCOtomo_C_GetMyBB::K2Node_DynamicCast_AsBP_Pal_AIBlackboard_Common' has a wrong offset!");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_GetMyBB, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_MonsterAIController_NPCOtomo_C_GetMyBB::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.ReceivePossess
// 0x0008 (0x0008 - 0x0000)
struct BP_MonsterAIController_NPCOtomo_C_ReceivePossess final
{
public:
	class APawn*                                  PossessedPawn;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_MonsterAIController_NPCOtomo_C_ReceivePossess) == 0x000008, "Wrong alignment on BP_MonsterAIController_NPCOtomo_C_ReceivePossess");
static_assert(sizeof(BP_MonsterAIController_NPCOtomo_C_ReceivePossess) == 0x000008, "Wrong size on BP_MonsterAIController_NPCOtomo_C_ReceivePossess");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C_ReceivePossess, PossessedPawn) == 0x000000, "Member 'BP_MonsterAIController_NPCOtomo_C_ReceivePossess::PossessedPawn' has a wrong offset!");

// Function BP_MonsterAIController_NPCOtomo.BP_MonsterAIController_NPCOtomo_C.カスタムイベント_2
// 0x0050 (0x0050 - 0x0000)
struct BP_MonsterAIController_NPCOtomo_C__________________________2 final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(BP_MonsterAIController_NPCOtomo_C__________________________2) == 0x000008, "Wrong alignment on BP_MonsterAIController_NPCOtomo_C__________________________2");
static_assert(sizeof(BP_MonsterAIController_NPCOtomo_C__________________________2) == 0x000050, "Wrong size on BP_MonsterAIController_NPCOtomo_C__________________________2");
static_assert(offsetof(BP_MonsterAIController_NPCOtomo_C__________________________2, DeadInfo) == 0x000000, "Member 'BP_MonsterAIController_NPCOtomo_C__________________________2::DeadInfo' has a wrong offset!");

}

