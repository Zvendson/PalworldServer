#pragma once

#include "Basic.hpp"

#include "AkAudio_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_BreathBase.BP_SkillEffect_BreathBase_C.ExecuteUbergraph_BP_SkillEffect_BreathBase
// 0x0068 (0x0068 - 0x0000)
struct BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable;                            // 0x0004(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_1;                          // 0x0014(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)> Temp_delegate_Variable_2;                          // 0x0024(0x0010)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_1;                  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_PostEvent_ReturnValue_2;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase) == 0x000008, "Wrong alignment on BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase");
static_assert(sizeof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase) == 0x000068, "Wrong size on BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, Temp_delegate_Variable) == 0x000004, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::Temp_delegate_Variable' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, Temp_delegate_Variable_1) == 0x000014, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::Temp_delegate_Variable_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, Temp_delegate_Variable_2) == 0x000024, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::Temp_delegate_Variable_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, K2Node_CreateDelegate_OutputDelegate) == 0x000034, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_Array_Add_ReturnValue) == 0x000050, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_PostEvent_ReturnValue) == 0x000054, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_PostEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_PostEvent_ReturnValue_1) == 0x000058, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_PostEvent_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_PostEvent_ReturnValue_2) == 0x00005C, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_PostEvent_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000060, "Member 'BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

}

