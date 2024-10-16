#pragma once

#include "Basic.hpp"

#include "BP_HomingMissile_MissileLauncher_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_HomingMissile_MissileLauncher_NPC.BP_HomingMissile_MissileLauncher_NPC_C
// 0x0000 (0x03C8 - 0x03C8)
class ABP_HomingMissile_MissileLauncher_NPC_C : public ABP_HomingMissile_MissileLauncher_C
{
public:
	void Find_Target_Actor(class APalCharacter** PalCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HomingMissile_MissileLauncher_NPC_C">();
	}
	static class ABP_HomingMissile_MissileLauncher_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HomingMissile_MissileLauncher_NPC_C>();
	}
};
static_assert(alignof(ABP_HomingMissile_MissileLauncher_NPC_C) == 0x000008, "Wrong alignment on ABP_HomingMissile_MissileLauncher_NPC_C");
static_assert(sizeof(ABP_HomingMissile_MissileLauncher_NPC_C) == 0x0003C8, "Wrong size on ABP_HomingMissile_MissileLauncher_NPC_C");

}

