#pragma once

#include "Basic.hpp"

#include "BP_PalRandomIncidentSpawner_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalRandomIncidentSpawnerTemplate.BP_PalRandomIncidentSpawnerTemplate_C
// 0x0000 (0x0458 - 0x0458)
class ABP_PalRandomIncidentSpawnerTemplate_C : public ABP_PalRandomIncidentSpawner_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentSpawnerTemplate_C">();
	}
	static class ABP_PalRandomIncidentSpawnerTemplate_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentSpawnerTemplate_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentSpawnerTemplate_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentSpawnerTemplate_C");
static_assert(sizeof(ABP_PalRandomIncidentSpawnerTemplate_C) == 0x000458, "Wrong size on ABP_PalRandomIncidentSpawnerTemplate_C");

}

