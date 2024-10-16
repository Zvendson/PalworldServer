#pragma once

#include "Basic.hpp"

#include "BP_LilyQueen_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LilyQueen_BOSS.BP_LilyQueen_BOSS_C
// 0x0000 (0x0A80 - 0x0A80)
class ABP_LilyQueen_BOSS_C final : public ABP_LilyQueen_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LilyQueen_BOSS_C">();
	}
	static class ABP_LilyQueen_BOSS_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LilyQueen_BOSS_C>();
	}
};
static_assert(alignof(ABP_LilyQueen_BOSS_C) == 0x000010, "Wrong alignment on ABP_LilyQueen_BOSS_C");
static_assert(sizeof(ABP_LilyQueen_BOSS_C) == 0x000A80, "Wrong size on ABP_LilyQueen_BOSS_C");

}

