#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_BreedFarm.BP_BuildObject_BreedFarm_C
// 0x0050 (0x06C8 - 0x0678)
class ABP_BuildObject_BreedFarm_C final : public APalBuildObjectBreedFarm
{
public:
	class USphereComponent*                       WalkableRange;                                     // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_MatingStation;                                  // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_ChestInteract;                                  // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FlatChest;                                      // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectBreedFarmParameterComponent* BreedFarmParameter;                                // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x06A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x06B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        SpawnPoint_PalEgg;                                 // 0x06B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x06C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_BreedFarm_C">();
	}
	static class ABP_BuildObject_BreedFarm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_BreedFarm_C>();
	}
};
static_assert(alignof(ABP_BuildObject_BreedFarm_C) == 0x000008, "Wrong alignment on ABP_BuildObject_BreedFarm_C");
static_assert(sizeof(ABP_BuildObject_BreedFarm_C) == 0x0006C8, "Wrong size on ABP_BuildObject_BreedFarm_C");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, WalkableRange) == 0x000678, "Member 'ABP_BuildObject_BreedFarm_C::WalkableRange' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, SM_MatingStation) == 0x000680, "Member 'ABP_BuildObject_BreedFarm_C::SM_MatingStation' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, BP_ChestInteract) == 0x000688, "Member 'ABP_BuildObject_BreedFarm_C::BP_ChestInteract' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, SM_FlatChest) == 0x000690, "Member 'ABP_BuildObject_BreedFarm_C::SM_FlatChest' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, BreedFarmParameter) == 0x000698, "Member 'ABP_BuildObject_BreedFarm_C::BreedFarmParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, CheckOverlapCollision) == 0x0006A0, "Member 'ABP_BuildObject_BreedFarm_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, BuildWorkableBounds) == 0x0006A8, "Member 'ABP_BuildObject_BreedFarm_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, BP_InteractableBox) == 0x0006B0, "Member 'ABP_BuildObject_BreedFarm_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, SpawnPoint_PalEgg) == 0x0006B8, "Member 'ABP_BuildObject_BreedFarm_C::SpawnPoint_PalEgg' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_BreedFarm_C, Root) == 0x0006C0, "Member 'ABP_BuildObject_BreedFarm_C::Root' has a wrong offset!");

}

