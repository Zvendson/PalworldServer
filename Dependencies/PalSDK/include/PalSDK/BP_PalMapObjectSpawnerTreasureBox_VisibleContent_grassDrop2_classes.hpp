#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2.BP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C
// 0x0020 (0x0328 - 0x0308)
class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C final : public APalMapObjectSpawnerTreasureBox
{
public:
	class UArrowComponent*                        DebugMarker;                                       // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   VisualActor;                                       // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C">();
	}
	static class ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C");
static_assert(sizeof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C) == 0x000328, "Wrong size on ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C, DebugMarker) == 0x000308, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C::DebugMarker' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C, Scene) == 0x000310, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C, Arrow) == 0x000318, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C, VisualActor) == 0x000320, "Member 'ABP_PalMapObjectSpawnerTreasureBox_VisibleContent_grassDrop2_C::VisualActor' has a wrong offset!");

}

