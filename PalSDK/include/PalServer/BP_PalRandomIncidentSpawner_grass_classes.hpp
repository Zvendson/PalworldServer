#pragma once

#include "Basic.hpp"

#include "BP_PalRandomIncidentSpawnerTemplate_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRandomIncidentSpawner_grass.BP_PalRandomIncidentSpawner_grass_C
// 0x0000 (0x0458 - 0x0458)
class ABP_PalRandomIncidentSpawner_grass_C final : public ABP_PalRandomIncidentSpawnerTemplate_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentSpawner_grass_C">();
	}
	static class ABP_PalRandomIncidentSpawner_grass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentSpawner_grass_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentSpawner_grass_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentSpawner_grass_C");
static_assert(sizeof(ABP_PalRandomIncidentSpawner_grass_C) == 0x000458, "Wrong size on ABP_PalRandomIncidentSpawner_grass_C");

}

