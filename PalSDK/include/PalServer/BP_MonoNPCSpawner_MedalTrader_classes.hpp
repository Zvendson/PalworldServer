#pragma once

#include "Basic.hpp"

#include "BP_MonoNPCSpawner_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MonoNPCSpawner_MedalTrader.BP_MonoNPCSpawner_MedalTrader_C
// 0x0000 (0x0438 - 0x0438)
class ABP_MonoNPCSpawner_MedalTrader_C final : public ABP_MonoNPCSpawner_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MonoNPCSpawner_MedalTrader_C">();
	}
	static class ABP_MonoNPCSpawner_MedalTrader_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MonoNPCSpawner_MedalTrader_C>();
	}
};
static_assert(alignof(ABP_MonoNPCSpawner_MedalTrader_C) == 0x000008, "Wrong alignment on ABP_MonoNPCSpawner_MedalTrader_C");
static_assert(sizeof(ABP_MonoNPCSpawner_MedalTrader_C) == 0x000438, "Wrong size on ABP_MonoNPCSpawner_MedalTrader_C");

}

