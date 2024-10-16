#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function BP_ActionIceBlade.BP_ActionIceBlade_C.ExecuteUbergraph_BP_ActionIceBlade
// 0x00C0 (0x00C0 - 0x0000)
struct BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0008(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaTime;                            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_SkillEffect_IceBlade_C*             K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade;    // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetTargetLocation_ReturnValue;            // 0x0040(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0060(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Subtract_VectorVector_ReturnValue;        // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Normal_ReturnValue;                       // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x00A8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade) == 0x000008, "Wrong alignment on BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade");
static_assert(sizeof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade) == 0x0000C0, "Wrong size on BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, EntryPoint) == 0x000000, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000008, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, K2Node_Event_DeltaTime) == 0x000020, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, K2Node_Event_Effect) == 0x000028, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade) == 0x000030, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::K2Node_DynamicCast_AsBP_Skill_Effect_Ice_Blade' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, K2Node_DynamicCast_bSuccess) == 0x000038, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_GetTargetLocation_ReturnValue) == 0x000040, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_GetTargetLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_GetActionCharacter_ReturnValue) == 0x000058, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000060, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_Subtract_VectorVector_ReturnValue) == 0x000078, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_Subtract_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_Normal_ReturnValue) == 0x000090, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_Normal_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade, CallFunc_Multiply_VectorVector_ReturnValue) == 0x0000A8, "Member 'BP_ActionIceBlade_C_ExecuteUbergraph_BP_ActionIceBlade::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");

// Function BP_ActionIceBlade.BP_ActionIceBlade_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionIceBlade_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionIceBlade_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionIceBlade_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionIceBlade_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionIceBlade_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionIceBlade_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionIceBlade_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionIceBlade.BP_ActionIceBlade_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionIceBlade_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionIceBlade_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionIceBlade_C_TickAction");
static_assert(sizeof(BP_ActionIceBlade_C_TickAction) == 0x000004, "Wrong size on BP_ActionIceBlade_C_TickAction");
static_assert(offsetof(BP_ActionIceBlade_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionIceBlade_C_TickAction::DeltaTime' has a wrong offset!");

}

