#pragma once

#include "Basic.hpp"

#include "BP_Explosion_RocketLauncher_classes.hpp"
#include "Pal_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Explosion_Penguin.BP_Explosion_Penguin_C
// 0x0000 (0x02E0 - 0x02E0)
class ABP_Explosion_Penguin_C final : public ABP_Explosion_RocketLauncher_C
{
public:
	void GetWeaponAttackType(EPalAttackType* AttackType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Explosion_Penguin_C">();
	}
	static class ABP_Explosion_Penguin_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Explosion_Penguin_C>();
	}
};
static_assert(alignof(ABP_Explosion_Penguin_C) == 0x000008, "Wrong alignment on ABP_Explosion_Penguin_C");
static_assert(sizeof(ABP_Explosion_Penguin_C) == 0x0002E0, "Wrong size on ABP_Explosion_Penguin_C");

}

