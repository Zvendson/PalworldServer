#pragma once

#include "Basic.hpp"

#include "BP_DungeonEntrance_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_DungeonEntrance_Forest.BP_DungeonEntrance_Forest_C
// 0x0000 (0x02C0 - 0x02C0)
class ABP_DungeonEntrance_Forest_C final : public ABP_DungeonEntrance_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DungeonEntrance_Forest_C">();
	}
	static class ABP_DungeonEntrance_Forest_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_DungeonEntrance_Forest_C>();
	}
};
static_assert(alignof(ABP_DungeonEntrance_Forest_C) == 0x000008, "Wrong alignment on ABP_DungeonEntrance_Forest_C");
static_assert(sizeof(ABP_DungeonEntrance_Forest_C) == 0x0002C0, "Wrong size on ABP_DungeonEntrance_Forest_C");

}

