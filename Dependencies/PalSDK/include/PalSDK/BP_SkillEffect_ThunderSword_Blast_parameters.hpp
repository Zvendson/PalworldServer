#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        K2Node_CustomEvent_time;                           // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0030(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Delay_Duration_ImplicitCast;              // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast) == 0x000008, "Wrong alignment on BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast");
static_assert(sizeof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast) == 0x000048, "Wrong size on BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, K2Node_CustomEvent_time) == 0x000008, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::K2Node_CustomEvent_time' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000038, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000040, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast, CallFunc_Delay_Duration_ImplicitCast) == 0x000044, "Member 'BP_SkillEffect_ThunderSword_Blast_C_ExecuteUbergraph_BP_SkillEffect_ThunderSword_Blast::CallFunc_Delay_Duration_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_ThunderSword_Blast.BP_SkillEffect_ThunderSword_Blast_C.SetLifeTime
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime final
{
public:
	double                                        Time;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime) == 0x000008, "Wrong alignment on BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime");
static_assert(sizeof(BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime) == 0x000008, "Wrong size on BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime");
static_assert(offsetof(BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime, Time) == 0x000000, "Member 'BP_SkillEffect_ThunderSword_Blast_C_SetLifeTime::Time' has a wrong offset!");

}

