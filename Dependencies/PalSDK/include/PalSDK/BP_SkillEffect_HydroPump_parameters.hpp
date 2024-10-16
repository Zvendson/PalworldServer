#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature final
{
public:
	class UNiagaraComponent*                      PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong alignment on BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(sizeof(BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature) == 0x000008, "Wrong size on BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature, PSystem) == 0x000000, "Member 'BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature::PSystem' has a wrong offset!");

// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.ExecuteUbergraph_BP_SkillEffect_HydroPump
// 0x0050 (0x0050 - 0x0000)
struct BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      K2Node_ComponentBoundEvent_PSystem;                // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1;  // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast_1;  // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump) == 0x000008, "Wrong alignment on BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump");
static_assert(sizeof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump) == 0x000050, "Wrong size on BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000030, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, K2Node_ComponentBoundEvent_PSystem) == 0x000038, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::K2Node_ComponentBoundEvent_PSystem' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000040, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1) == 0x000044, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000048, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump, CallFunc_SetVariableFloat_InValue_ImplicitCast_1) == 0x00004C, "Member 'BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump::CallFunc_SetVariableFloat_InValue_ImplicitCast_1' has a wrong offset!");

}

