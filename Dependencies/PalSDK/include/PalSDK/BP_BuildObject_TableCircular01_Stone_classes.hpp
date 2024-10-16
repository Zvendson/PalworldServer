#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_TableCircular01_Stone.BP_BuildObject_TableCircular01_Stone_C
// 0x0078 (0x06A0 - 0x0628)
class ABP_BuildObject_TableCircular01_Stone_C final : public APalBuildObject
{
public:
	class UStaticMeshComponent*                   SM_teaspoon1;                                      // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_teadish1;                                       // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_teacup_tea1;                                    // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_doily;                                          // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_lilies_vase;                                    // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_teadish;                                        // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_teaspoon;                                       // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_teacup_tea;                                     // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_lilies;                                         // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_dining_table;                                   // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Meshs;                                             // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_TableCircular01_Stone_C">();
	}
	static class ABP_BuildObject_TableCircular01_Stone_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_TableCircular01_Stone_C>();
	}
};
static_assert(alignof(ABP_BuildObject_TableCircular01_Stone_C) == 0x000008, "Wrong alignment on ABP_BuildObject_TableCircular01_Stone_C");
static_assert(sizeof(ABP_BuildObject_TableCircular01_Stone_C) == 0x0006A0, "Wrong size on ABP_BuildObject_TableCircular01_Stone_C");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teaspoon1) == 0x000628, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teaspoon1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teadish1) == 0x000630, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teadish1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teacup_tea1) == 0x000638, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teacup_tea1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_doily) == 0x000640, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_doily' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_lilies_vase) == 0x000648, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_lilies_vase' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teadish) == 0x000650, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teadish' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teaspoon) == 0x000658, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teaspoon' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_teacup_tea) == 0x000660, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_teacup_tea' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_lilies) == 0x000668, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_lilies' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, SM_dining_table) == 0x000670, "Member 'ABP_BuildObject_TableCircular01_Stone_C::SM_dining_table' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, Meshs) == 0x000678, "Member 'ABP_BuildObject_TableCircular01_Stone_C::Meshs' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, BP_InteractableBox) == 0x000680, "Member 'ABP_BuildObject_TableCircular01_Stone_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, BuildWorkableBounds) == 0x000688, "Member 'ABP_BuildObject_TableCircular01_Stone_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, CheckOverlapCollision) == 0x000690, "Member 'ABP_BuildObject_TableCircular01_Stone_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TableCircular01_Stone_C, DefaultSceneRoot) == 0x000698, "Member 'ABP_BuildObject_TableCircular01_Stone_C::DefaultSceneRoot' has a wrong offset!");

}

