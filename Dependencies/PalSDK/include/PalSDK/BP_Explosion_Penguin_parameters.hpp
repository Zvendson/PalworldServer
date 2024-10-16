#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function BP_Explosion_Penguin.BP_Explosion_Penguin_C.GetWeaponAttackType
// 0x0001 (0x0001 - 0x0000)
struct BP_Explosion_Penguin_C_GetWeaponAttackType final
{
public:
	EPalAttackType                                AttackType;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_Explosion_Penguin_C_GetWeaponAttackType) == 0x000001, "Wrong alignment on BP_Explosion_Penguin_C_GetWeaponAttackType");
static_assert(sizeof(BP_Explosion_Penguin_C_GetWeaponAttackType) == 0x000001, "Wrong size on BP_Explosion_Penguin_C_GetWeaponAttackType");
static_assert(offsetof(BP_Explosion_Penguin_C_GetWeaponAttackType, AttackType) == 0x000000, "Member 'BP_Explosion_Penguin_C_GetWeaponAttackType::AttackType' has a wrong offset!");

}

