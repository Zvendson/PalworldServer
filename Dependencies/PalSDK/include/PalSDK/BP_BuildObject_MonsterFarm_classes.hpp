#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_MonsterFarm.BP_BuildObject_MonsterFarm_C
// 0x0038 (0x0688 - 0x0650)
class ABP_BuildObject_MonsterFarm_C final : public APalBuildObjectMonsterFarm
{
public:
	class USphereComponent*                       WalkableRange;                                     // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PalFarm;                                        // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectMonsterFarmParameterComponent* MonsterFarmParameter;                              // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_MonsterFarm_C">();
	}
	static class ABP_BuildObject_MonsterFarm_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_MonsterFarm_C>();
	}
};
static_assert(alignof(ABP_BuildObject_MonsterFarm_C) == 0x000008, "Wrong alignment on ABP_BuildObject_MonsterFarm_C");
static_assert(sizeof(ABP_BuildObject_MonsterFarm_C) == 0x000688, "Wrong size on ABP_BuildObject_MonsterFarm_C");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, WalkableRange) == 0x000650, "Member 'ABP_BuildObject_MonsterFarm_C::WalkableRange' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, SM_PalFarm) == 0x000658, "Member 'ABP_BuildObject_MonsterFarm_C::SM_PalFarm' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, MonsterFarmParameter) == 0x000660, "Member 'ABP_BuildObject_MonsterFarm_C::MonsterFarmParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, CheckOverlapCollision) == 0x000668, "Member 'ABP_BuildObject_MonsterFarm_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, BuildWorkableBounds) == 0x000670, "Member 'ABP_BuildObject_MonsterFarm_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, BP_InteractableBox) == 0x000678, "Member 'ABP_BuildObject_MonsterFarm_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_MonsterFarm_C, Root) == 0x000680, "Member 'ABP_BuildObject_MonsterFarm_C::Root' has a wrong offset!");

}

