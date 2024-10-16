#pragma once

#include "Basic.hpp"

#include "BP_PalMapObjectSpawner_Treasure_Grass_Grade_01_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_Junk_sakurajima.BP_PalMapObjectSpawner_Junk_sakurajima_C
// 0x0008 (0x0330 - 0x0328)
class ABP_PalMapObjectSpawner_Junk_sakurajima_C final : public ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C
{
public:
	class UStaticMeshComponent*                   LocationBenchmark1;                                // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_Junk_sakurajima_C">();
	}
	static class ABP_PalMapObjectSpawner_Junk_sakurajima_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_Junk_sakurajima_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_Junk_sakurajima_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_Junk_sakurajima_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_Junk_sakurajima_C) == 0x000330, "Wrong size on ABP_PalMapObjectSpawner_Junk_sakurajima_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_Junk_sakurajima_C, LocationBenchmark1) == 0x000328, "Member 'ABP_PalMapObjectSpawner_Junk_sakurajima_C::LocationBenchmark1' has a wrong offset!");

}

