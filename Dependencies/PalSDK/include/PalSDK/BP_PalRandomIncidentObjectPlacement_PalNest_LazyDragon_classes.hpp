#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon.BP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C
// 0x0050 (0x0300 - 0x02B0)
class ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C final : public APalRandomIncidentObjectPlacement
{
public:
	class UBP_PalRandomIncidentPlacementEggDataComponent_C* BP_PalRandomIncidentPlacementEggDataComponent1;    // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementEggDataComponent_C* BP_PalRandomIncidentPlacementEggDataComponent2;    // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementDropItemDataComponent_C* BP_PalRandomIncidentPlacementDropItemDataComponent3; // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementDropItemDataComponent_C* BP_PalRandomIncidentPlacementDropItemDataComponent4; // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementDropItemDataComponent_C* BP_PalRandomIncidentPlacementDropItemDataComponent2; // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementEggDataComponent_C* BP_PalRandomIncidentPlacementEggDataComponent;     // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementDropItemDataComponent_C* BP_PalRandomIncidentPlacementDropItemDataComponent; // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PalRandomIncidentPlacementDropItemDataComponent_C* BP_PalRandomIncidentPlacementDropItemDataComponent1; // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C">();
	}
	static class ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C>();
	}
};
static_assert(alignof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C) == 0x000008, "Wrong alignment on ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C");
static_assert(sizeof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C) == 0x000300, "Wrong size on ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementEggDataComponent1) == 0x0002B0, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementEggDataComponent1' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementEggDataComponent2) == 0x0002B8, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementEggDataComponent2' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementDropItemDataComponent3) == 0x0002C0, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementDropItemDataComponent3' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementDropItemDataComponent4) == 0x0002C8, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementDropItemDataComponent4' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, StaticMesh) == 0x0002D0, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementDropItemDataComponent2) == 0x0002D8, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementDropItemDataComponent2' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementEggDataComponent) == 0x0002E0, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementEggDataComponent' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementDropItemDataComponent) == 0x0002E8, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementDropItemDataComponent' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, BP_PalRandomIncidentPlacementDropItemDataComponent1) == 0x0002F0, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::BP_PalRandomIncidentPlacementDropItemDataComponent1' has a wrong offset!");
static_assert(offsetof(ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C, DefaultSceneRoot) == 0x0002F8, "Member 'ABP_PalRandomIncidentObjectPlacement_PalNest_LazyDragon_C::DefaultSceneRoot' has a wrong offset!");

}

