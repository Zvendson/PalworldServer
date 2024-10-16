#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_ActionDarkWave.BP_ActionDarkWave_C.ExecuteUbergraph_BP_ActionDarkWave
// 0x0018 (0x0018 - 0x0000)
struct BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalSkillEffectBase*                    K2Node_Event_Effect;                               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   CallFunc_GetComponentByClass_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave) == 0x000008, "Wrong alignment on BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave");
static_assert(sizeof(BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave) == 0x000018, "Wrong size on BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave");
static_assert(offsetof(BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave, EntryPoint) == 0x000000, "Member 'BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave, K2Node_Event_Effect) == 0x000008, "Member 'BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave::K2Node_Event_Effect' has a wrong offset!");
static_assert(offsetof(BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave, CallFunc_GetComponentByClass_ReturnValue) == 0x000010, "Member 'BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");

// Function BP_ActionDarkWave.BP_ActionDarkWave_C.OnSpawnEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_ActionDarkWave_C_OnSpawnEffect final
{
public:
	class APalSkillEffectBase*                    Effect_0;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_ActionDarkWave_C_OnSpawnEffect) == 0x000008, "Wrong alignment on BP_ActionDarkWave_C_OnSpawnEffect");
static_assert(sizeof(BP_ActionDarkWave_C_OnSpawnEffect) == 0x000008, "Wrong size on BP_ActionDarkWave_C_OnSpawnEffect");
static_assert(offsetof(BP_ActionDarkWave_C_OnSpawnEffect, Effect_0) == 0x000000, "Member 'BP_ActionDarkWave_C_OnSpawnEffect::Effect_0' has a wrong offset!");

}

