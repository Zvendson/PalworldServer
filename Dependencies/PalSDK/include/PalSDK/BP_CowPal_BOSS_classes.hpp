#pragma once

#include "Basic.hpp"

#include "BP_CowPal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CowPal_BOSS.BP_CowPal_BOSS_C
// 0x0000 (0x0A80 - 0x0A80)
class ABP_CowPal_BOSS_C final : public ABP_CowPal_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CowPal_BOSS_C">();
	}
	static class ABP_CowPal_BOSS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CowPal_BOSS_C>();
	}
};
static_assert(alignof(ABP_CowPal_BOSS_C) == 0x000010, "Wrong alignment on ABP_CowPal_BOSS_C");
static_assert(sizeof(ABP_CowPal_BOSS_C) == 0x000A80, "Wrong size on ABP_CowPal_BOSS_C");

}

