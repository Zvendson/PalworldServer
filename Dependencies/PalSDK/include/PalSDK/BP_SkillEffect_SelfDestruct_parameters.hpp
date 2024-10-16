#pragma once

#include "Basic.hpp"

#include "AkAudio_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C.ExecuteUbergraph_BP_SkillEffect_SelfDestruct
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct) == 0x000004, "Wrong alignment on BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct");
static_assert(sizeof(BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct) == 0x000018, "Wrong size on BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct");
static_assert(offsetof(BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct, Temp_delegate_Variable) == 0x000004, "Member 'BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct, CallFunc_PostEvent_ReturnValue) == 0x000014, "Member 'BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct::CallFunc_PostEvent_ReturnValue' has a wrong offset!");

}

