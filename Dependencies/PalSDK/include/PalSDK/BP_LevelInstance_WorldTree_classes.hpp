#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_LevelInstance_WorldTree.BP_LevelInstance_WorldTree_C
// 0x0000 (0x0330 - 0x0330)
class ABP_LevelInstance_WorldTree_C final : public APalLevelInstance
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_LevelInstance_WorldTree_C">();
	}
	static class ABP_LevelInstance_WorldTree_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_LevelInstance_WorldTree_C>();
	}
};
static_assert(alignof(ABP_LevelInstance_WorldTree_C) == 0x000008, "Wrong alignment on ABP_LevelInstance_WorldTree_C");
static_assert(sizeof(ABP_LevelInstance_WorldTree_C) == 0x000330, "Wrong size on ABP_LevelInstance_WorldTree_C");

}

