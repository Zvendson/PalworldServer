#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_PowerBall_1.BP_SkillEffect_PowerBall_1_C.ExecuteUbergraph_BP_SkillEffect_PowerBall_1
// 0x0158 (0x0158 - 0x0000)
struct BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1 final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_FloatToVector_ReturnValue;           // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetVelocity_ReturnValue;                  // 0x0028(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CallFunc_MakeRotFromX_ReturnValue;                 // 0x0058(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                             CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x0070(0x00E8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};
static_assert(alignof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1) == 0x000008, "Wrong alignment on BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1");
static_assert(sizeof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1) == 0x000158, "Wrong size on BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, CallFunc_Conv_FloatToVector_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::CallFunc_Conv_FloatToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, CallFunc_GetVelocity_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::CallFunc_GetVelocity_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000040, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, CallFunc_MakeRotFromX_ReturnValue) == 0x000058, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::CallFunc_MakeRotFromX_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1, CallFunc_K2_SetWorldRotation_SweepHitResult) == 0x000070, "Member 'BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1::CallFunc_K2_SetWorldRotation_SweepHitResult' has a wrong offset!");

// Function BP_SkillEffect_PowerBall_1.BP_SkillEffect_PowerBall_1_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_PowerBall_1_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_PowerBall_1_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_PowerBall_1_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_PowerBall_1_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_PowerBall_1_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_PowerBall_1_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_PowerBall_1_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

