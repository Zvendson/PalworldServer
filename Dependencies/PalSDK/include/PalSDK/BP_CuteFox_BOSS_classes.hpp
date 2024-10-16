#pragma once

#include "Basic.hpp"

#include "BP_CuteFox_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CuteFox_BOSS.BP_CuteFox_BOSS_C
// 0x0000 (0x0A80 - 0x0A80)
class ABP_CuteFox_BOSS_C final : public ABP_CuteFox_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CuteFox_BOSS_C">();
	}
	static class ABP_CuteFox_BOSS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_CuteFox_BOSS_C>();
	}
};
static_assert(alignof(ABP_CuteFox_BOSS_C) == 0x000010, "Wrong alignment on ABP_CuteFox_BOSS_C");
static_assert(sizeof(ABP_CuteFox_BOSS_C) == 0x000A80, "Wrong size on ABP_CuteFox_BOSS_C");

}

