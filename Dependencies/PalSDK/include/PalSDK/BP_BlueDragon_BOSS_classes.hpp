#pragma once

#include "Basic.hpp"

#include "BP_BlueDragon_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BlueDragon_BOSS.BP_BlueDragon_BOSS_C
// 0x0000 (0x0AA0 - 0x0AA0)
class ABP_BlueDragon_BOSS_C final : public ABP_BlueDragon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BlueDragon_BOSS_C">();
	}
	static class ABP_BlueDragon_BOSS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BlueDragon_BOSS_C>();
	}
};
static_assert(alignof(ABP_BlueDragon_BOSS_C) == 0x000010, "Wrong alignment on ABP_BlueDragon_BOSS_C");
static_assert(sizeof(ABP_BlueDragon_BOSS_C) == 0x000AA0, "Wrong size on ABP_BlueDragon_BOSS_C");

}

