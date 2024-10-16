#pragma once

#include "Basic.hpp"

#include "BP_BuildObject_SwitchHeatSource_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_CoolerElectric.BP_BuildObject_CoolerElectric_C
// 0x0030 (0x0670 - 0x0640)
class ABP_BuildObject_CoolerElectric_C final : public ABP_BuildObject_SwitchHeatSource_C
{
public:
	class UPalWorkFacingComponent*                PalWorkFacing1;                                    // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wall_Stone;                                     // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_CoolerElectric_C">();
	}
	static class ABP_BuildObject_CoolerElectric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_CoolerElectric_C>();
	}
};
static_assert(alignof(ABP_BuildObject_CoolerElectric_C) == 0x000008, "Wrong alignment on ABP_BuildObject_CoolerElectric_C");
static_assert(sizeof(ABP_BuildObject_CoolerElectric_C) == 0x000670, "Wrong size on ABP_BuildObject_CoolerElectric_C");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, PalWorkFacing1) == 0x000640, "Member 'ABP_BuildObject_CoolerElectric_C::PalWorkFacing1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, BP_InteractableBox) == 0x000648, "Member 'ABP_BuildObject_CoolerElectric_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, CheckOverlapCollision) == 0x000650, "Member 'ABP_BuildObject_CoolerElectric_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, BuildWorkableBounds) == 0x000658, "Member 'ABP_BuildObject_CoolerElectric_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, SM_Wall_Stone) == 0x000660, "Member 'ABP_BuildObject_CoolerElectric_C::SM_Wall_Stone' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CoolerElectric_C, Root) == 0x000668, "Member 'ABP_BuildObject_CoolerElectric_C::Root' has a wrong offset!");

}

