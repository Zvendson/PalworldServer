#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Action_ThunderFunnel.BP_Action_ThunderFunnel_C.OnSpawnEffect
// 0x0048 (0x0048 - 0x0000)
struct BP_Action_ThunderFunnel_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0020(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class ABP_Skill_ThunderFunnel_C*              K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel;      // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetActionTarget_ReturnValue;              // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_ThunderFunnel_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_ThunderFunnel_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_ThunderFunnel_C_OnSpawnEffect) == 0x000048, "Wrong size on BP_Action_ThunderFunnel_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, CallFunc_GetTargetLocation_ReturnValue) == 0x000008, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, CallFunc_Conv_VectorToString_ReturnValue) == 0x000020, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel) == 0x000030, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Thunder_Funnel' has a wrong offset!");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_Action_ThunderFunnel_C_OnSpawnEffect, CallFunc_GetActionTarget_ReturnValue) == 0x000040, "Member 'BP_Action_ThunderFunnel_C_OnSpawnEffect::CallFunc_GetActionTarget_ReturnValue' has a wrong offset!");

}

