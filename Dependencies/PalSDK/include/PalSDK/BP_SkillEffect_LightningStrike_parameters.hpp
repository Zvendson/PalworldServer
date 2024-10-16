#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_LightningStrike.BP_SkillEffect_LightningStrike_C.ExecuteUbergraph_BP_SkillEffect_LightningStrike
// 0x0020 (0x0020 - 0x0000)
struct BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike) == 0x000008, "Wrong alignment on BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike");
static_assert(sizeof(BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike) == 0x000020, "Wrong size on BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike");
static_assert(offsetof(BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");

}

