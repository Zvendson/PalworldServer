#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ExecuteUbergraph_BP_SkillEffectFireBall_Charge
// 0x0010 (0x0010 - 0x0000)
struct BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 K2Node_Event_OtherActor;                           // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge) == 0x000008, "Wrong alignment on BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge");
static_assert(sizeof(BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge) == 0x000010, "Wrong size on BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge");
static_assert(offsetof(BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge, EntryPoint) == 0x000000, "Member 'BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge, K2Node_Event_DeltaSeconds) == 0x000004, "Member 'BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge, K2Node_Event_OtherActor) == 0x000008, "Member 'BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge::K2Node_Event_OtherActor' has a wrong offset!");

// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ReceiveActorBeginOverlap
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap final
{
public:
	class AActor*                                 OtherActor;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong alignment on BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap");
static_assert(sizeof(BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap) == 0x000008, "Wrong size on BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap");
static_assert(offsetof(BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap, OtherActor) == 0x000000, "Member 'BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap::OtherActor' has a wrong offset!");

// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ReceiveTick
// 0x0004 (0x0004 - 0x0000)
struct BP_SkillEffectFireBall_Charge_C_ReceiveTick final
{
public:
	float                                         DeltaSeconds;                                      // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffectFireBall_Charge_C_ReceiveTick) == 0x000004, "Wrong alignment on BP_SkillEffectFireBall_Charge_C_ReceiveTick");
static_assert(sizeof(BP_SkillEffectFireBall_Charge_C_ReceiveTick) == 0x000004, "Wrong size on BP_SkillEffectFireBall_Charge_C_ReceiveTick");
static_assert(offsetof(BP_SkillEffectFireBall_Charge_C_ReceiveTick, DeltaSeconds) == 0x000000, "Member 'BP_SkillEffectFireBall_Charge_C_ReceiveTick::DeltaSeconds' has a wrong offset!");

}

