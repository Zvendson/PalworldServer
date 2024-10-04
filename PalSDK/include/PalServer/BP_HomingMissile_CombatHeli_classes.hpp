#pragma once

#include "Basic.hpp"

#include "BP_HomingMissile_MissileLauncher_NPC_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_HomingMissile_CombatHeli.BP_HomingMissile_CombatHeli_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_HomingMissile_CombatHeli_C final : public ABP_HomingMissile_MissileLauncher_NPC_C
{
public:
	void Find_Target_Actor(class APalCharacter** PalCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HomingMissile_CombatHeli_C">();
	}
	static class ABP_HomingMissile_CombatHeli_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HomingMissile_CombatHeli_C>();
	}
};
static_assert(alignof(ABP_HomingMissile_CombatHeli_C) == 0x000008, "Wrong alignment on ABP_HomingMissile_CombatHeli_C");
static_assert(sizeof(ABP_HomingMissile_CombatHeli_C) == 0x0003C8, "Wrong size on ABP_HomingMissile_CombatHeli_C");

}

