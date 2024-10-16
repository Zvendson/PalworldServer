#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_Action_IcicleThrow.BP_Action_IcicleThrow_C.OnSpawnEffect
// 0x0030 (0x0030 - 0x0000)
struct BP_Action_IcicleThrow_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       CallFunc_GetComponentByClass_ReturnValue;          // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_FindOwnerPalCharacter_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_SkillEffect_IcicleThrow_C*          K2Node_DynamicCast_AsBP_Skill_Effect_Icicle_Throw; // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_IcicleThrow_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_IcicleThrow_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_IcicleThrow_C_OnSpawnEffect) == 0x000030, "Wrong size on BP_Action_IcicleThrow_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, CallFunc_GetComponentByClass_ReturnValue) == 0x000008, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, CallFunc_FindOwnerPalCharacter_ReturnValue) == 0x000010, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::CallFunc_FindOwnerPalCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, CallFunc_IsPlayerControlled_ReturnValue) == 0x000018, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, K2Node_DynamicCast_AsBP_Skill_Effect_Icicle_Throw) == 0x000020, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::K2Node_DynamicCast_AsBP_Skill_Effect_Icicle_Throw' has a wrong offset!");
static_assert(offsetof(BP_Action_IcicleThrow_C_OnSpawnEffect, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'BP_Action_IcicleThrow_C_OnSpawnEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");

}

