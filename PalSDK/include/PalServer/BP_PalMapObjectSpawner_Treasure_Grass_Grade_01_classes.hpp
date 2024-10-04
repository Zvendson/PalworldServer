#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_Treasure_Grass_Grade_01.BP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C
// 0x0020 (0x0328 - 0x0308)
class ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C : public APalMapObjectSpawnerTreasureBox
{
public:
	class UArrowComponent*                        Arrow1;                                            // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   LocationBenchmark;                                 // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C">();
	}
	static class ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C) == 0x000328, "Wrong size on ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, Arrow1) == 0x000308, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, LocationBenchmark) == 0x000310, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::LocationBenchmark' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, Arrow) == 0x000318, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C, VisualActor) == 0x000320, "Member 'ABP_PalMapObjectSpawner_Treasure_Grass_Grade_01_C::VisualActor' has a wrong offset!");

}

