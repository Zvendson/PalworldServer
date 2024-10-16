#pragma once

#include "Basic.hpp"

#include "BP_PalRandomIncidentSpawnerTemplate_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalRandomIncidentSpawner_Snow.BP_PalRandomIncidentSpawner_Snow_C
// 0x0000 (0x0458 - 0x0458)
class ABP_PalRandomIncidentSpawner_Snow_C final : public ABP_PalRandomIncidentSpawnerTemplate_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentSpawner_Snow_C">();
	}
	static class ABP_PalRandomIncidentSpawner_Snow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentSpawner_Snow_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentSpawner_Snow_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentSpawner_Snow_C");
static_assert(sizeof(ABP_PalRandomIncidentSpawner_Snow_C) == 0x000458, "Wrong size on ABP_PalRandomIncidentSpawner_Snow_C");

}

