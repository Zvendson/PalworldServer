#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_NormalBullet_NPC.BP_NormalBullet_NPC_C.GetHitEffect
// 0x0008 (0x0008 - 0x0000)
struct BP_NormalBullet_NPC_C_GetHitEffect final
{
public:
	class UNiagaraSystem*                         NiagaraEffect;                                     // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_NormalBullet_NPC_C_GetHitEffect) == 0x000008, "Wrong alignment on BP_NormalBullet_NPC_C_GetHitEffect");
static_assert(sizeof(BP_NormalBullet_NPC_C_GetHitEffect) == 0x000008, "Wrong size on BP_NormalBullet_NPC_C_GetHitEffect");
static_assert(offsetof(BP_NormalBullet_NPC_C_GetHitEffect, NiagaraEffect) == 0x000000, "Member 'BP_NormalBullet_NPC_C_GetHitEffect::NiagaraEffect' has a wrong offset!");

}

