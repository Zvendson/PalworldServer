#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.ExecuteUbergraph_BP_Skill_RootAttack_Road
// 0x0070 (0x0070 - 0x0000)
struct BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Has_Been_Initd_Variable;                 // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_IsClosed_Variable;                       // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0048(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        K2Node_Event_DeltaSecond;                          // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetFloatValue_InTime_ImplicitCast;        // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetVariableFloat_InValue_ImplicitCast;    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road");
static_assert(sizeof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road) == 0x000070, "Wrong size on BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, EntryPoint) == 0x000000, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, Temp_bool_Has_Been_Initd_Variable) == 0x000004, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::Temp_bool_Has_Been_Initd_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, Temp_bool_IsClosed_Variable) == 0x000005, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::Temp_bool_IsClosed_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable) == 0x000006, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000008, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_FClamp_ReturnValue) == 0x000018, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_GetFloatValue_ReturnValue) == 0x000020, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_GetFloatValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_SelectFloat_ReturnValue) == 0x000028, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, K2Node_CreateDelegate_OutputDelegate) == 0x000030, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000040, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000048, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, K2Node_Event_DeltaSecond) == 0x000050, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::K2Node_Event_DeltaSecond' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_GetFloatValue_InTime_ImplicitCast) == 0x000058, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_GetFloatValue_InTime_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000060, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road, CallFunc_SetVariableFloat_InValue_ImplicitCast) == 0x000068, "Member 'BP_Skill_RootAttack_Road_C_ExecuteUbergraph_BP_Skill_RootAttack_Road::CallFunc_SetVariableFloat_InValue_ImplicitCast' has a wrong offset!");

// Function BP_Skill_RootAttack_Road.BP_Skill_RootAttack_Road_C.FadeOutEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_Skill_RootAttack_Road_C_FadeOutEffect final
{
public:
	double                                        DeltaSecond;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Skill_RootAttack_Road_C_FadeOutEffect) == 0x000008, "Wrong alignment on BP_Skill_RootAttack_Road_C_FadeOutEffect");
static_assert(sizeof(BP_Skill_RootAttack_Road_C_FadeOutEffect) == 0x000008, "Wrong size on BP_Skill_RootAttack_Road_C_FadeOutEffect");
static_assert(offsetof(BP_Skill_RootAttack_Road_C_FadeOutEffect, DeltaSecond) == 0x000000, "Member 'BP_Skill_RootAttack_Road_C_FadeOutEffect::DeltaSecond' has a wrong offset!");

}

