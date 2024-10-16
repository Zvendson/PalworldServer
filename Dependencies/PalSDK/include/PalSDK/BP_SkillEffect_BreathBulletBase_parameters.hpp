#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C.ExecuteUbergraph_BP_SkillEffect_BreathBulletBase
// 0x0048 (0x0048 - 0x0000)
struct BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_FClamp_ReturnValue;                       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase) == 0x000008, "Wrong alignment on BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase");
static_assert(sizeof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase) == 0x000048, "Wrong size on BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, K2Node_Event_DeltaSeconds) == 0x000020, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000028, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000030, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, CallFunc_FClamp_ReturnValue) == 0x000038, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::CallFunc_FClamp_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffect_BreathBulletBase_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_BreathBulletBase_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffect_BreathBulletBase_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffect_BreathBulletBase_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffect_BreathBulletBase_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffect_BreathBulletBase_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffect_BreathBulletBase_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

