#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_ActionAirCanon.BP_ActionAirCanon_C.ExecuteUbergraph_BP_ActionAirCanon
// 0x0020 (0x0020 - 0x0000)
struct BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetActionCharacter_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsPlayerControlled_ReturnValue;           // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         K2Node_Event_DeltaTime;                            // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon) == 0x000008, "Wrong alignment on BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon");
static_assert(sizeof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon) == 0x000020, "Wrong size on BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon");
static_assert(offsetof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon, EntryPoint) == 0x000000, "Member 'BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon, K2Node_Event_Effect) == 0x000008, "Member 'BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon, CallFunc_GetActionCharacter_ReturnValue) == 0x000010, "Member 'BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon::CallFunc_GetActionCharacter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon, CallFunc_IsPlayerControlled_ReturnValue) == 0x000018, "Member 'BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon::CallFunc_IsPlayerControlled_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon, K2Node_Event_DeltaTime) == 0x00001C, "Member 'BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon::K2Node_Event_DeltaTime' has a wrong offset!");

// Function BP_ActionAirCanon.BP_ActionAirCanon_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionAirCanon_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAirCanon_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionAirCanon_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionAirCanon_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionAirCanon_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionAirCanon_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionAirCanon_C_OnSpawnEffect::Effect_0' has a wrong offset!");

// Function BP_ActionAirCanon.BP_ActionAirCanon_C.SetBulletSpeed
// 0x0010 (0x0010 - 0x0000)
struct BP_ActionAirCanon_C_SetBulletSpeed final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalSkillEffectBase*                    CallFunc_SetBulletSpeed_Effect;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAirCanon_C_SetBulletSpeed) == 0x000008, "Wrong alignment on BP_ActionAirCanon_C_SetBulletSpeed");
static_assert(sizeof(BP_ActionAirCanon_C_SetBulletSpeed) == 0x000010, "Wrong size on BP_ActionAirCanon_C_SetBulletSpeed");
static_assert(offsetof(BP_ActionAirCanon_C_SetBulletSpeed, Effect_0) == 0x000000, "Member 'BP_ActionAirCanon_C_SetBulletSpeed::Effect_0' has a wrong offset!");
static_assert(offsetof(BP_ActionAirCanon_C_SetBulletSpeed, CallFunc_SetBulletSpeed_Effect) == 0x000008, "Member 'BP_ActionAirCanon_C_SetBulletSpeed::CallFunc_SetBulletSpeed_Effect' has a wrong offset!");

// Function BP_ActionAirCanon.BP_ActionAirCanon_C.TickAction
// 0x0004 (0x0004 - 0x0000)
struct BP_ActionAirCanon_C_TickAction final
{
public:
	float                                         DeltaTime;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionAirCanon_C_TickAction) == 0x000004, "Wrong alignment on BP_ActionAirCanon_C_TickAction");
static_assert(sizeof(BP_ActionAirCanon_C_TickAction) == 0x000004, "Wrong size on BP_ActionAirCanon_C_TickAction");
static_assert(offsetof(BP_ActionAirCanon_C_TickAction, DeltaTime) == 0x000000, "Member 'BP_ActionAirCanon_C_TickAction::DeltaTime' has a wrong offset!");

}

