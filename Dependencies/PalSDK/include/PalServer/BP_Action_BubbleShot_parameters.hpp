#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.ExecuteUbergraph_BP_Action_BubbleShot
// 0x0018 (0x0018 - 0x0000)
struct BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot) == 0x000008, "Wrong alignment on BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot");
static_assert(sizeof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot) == 0x000018, "Wrong size on BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot");
static_assert(offsetof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot, EntryPoint) == 0x000000, "Member 'BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot, CallFunc_IsValid_ReturnValue) == 0x000004, "Member 'BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot, K2Node_Event_DeltaTime) == 0x000008, "Member 'BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot::K2Node_Event_DeltaTime' has a wrong offset!");
static_assert(offsetof(BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot, K2Node_Event_Effect) == 0x000010, "Member 'BP_Action_BubbleShot_C_ExecuteUbergraph_BP_Action_BubbleShot::K2Node_Event_Effect' has a wrong offset!");

// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_Action_BubbleShot_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_BubbleShot_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_Action_BubbleShot_C_OnSpawnEffect");
static_assert(sizeof(BP_Action_BubbleShot_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_Action_BubbleShot_C_OnSpawnEffect");
static_assert(offsetof(BP_Action_BubbleShot_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_Action_BubbleShot_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_Action_BubbleShot.BP_Action_BubbleShot_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_Action_BubbleShot_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Action_BubbleShot_C_TickAction) == 0x000004, "Wrong alignment on BP_Action_BubbleShot_C_TickAction");
static_assert(sizeof(BP_Action_BubbleShot_C_TickAction) == 0x000004, "Wrong size on BP_Action_BubbleShot_C_TickAction");
static_assert(offsetof(BP_Action_BubbleShot_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_Action_BubbleShot_C_TickAction::DeltaTime' has a wrong offset!");

}

