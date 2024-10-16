#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Skill_RootAttack_Attack.BP_Skill_RootAttack_Attack_C.ExecuteUbergraph_BP_Skill_RootAttack_Attack
// 0x0028 (0x0028 - 0x0000)
struct BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack");
static_assert(sizeof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack) == 0x000028, "Wrong size on BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack");
static_assert(offsetof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack, EntryPoint) == 0x000000, "Member 'BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack, CallFunc_Delay_Duration_ImplicitCast) == 0x000020, "Member 'BP_Skill_RootAttack_Attack_C_ExecuteUbergraph_BP_Skill_RootAttack_Attack::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

}

