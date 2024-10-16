#pragma once

#include "Basic.hpp"

#include "BP_SupplySpawnerBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SupplySpawner_Snow01.BP_SupplySpawner_Snow01_C
// 0x0000 (0x0310 - 0x0310)
class ABP_SupplySpawner_Snow01_C final : public ABP_SupplySpawnerBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupplySpawner_Snow01_C">();
	}
	static class ABP_SupplySpawner_Snow01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SupplySpawner_Snow01_C>();
	}
};
static_assert(alignof(ABP_SupplySpawner_Snow01_C) == 0x000008, "Wrong alignment on ABP_SupplySpawner_Snow01_C");
static_assert(sizeof(ABP_SupplySpawner_Snow01_C) == 0x000310, "Wrong size on ABP_SupplySpawner_Snow01_C");

}

