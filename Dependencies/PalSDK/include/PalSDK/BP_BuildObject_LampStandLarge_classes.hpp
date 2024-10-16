#pragma once

#include "Basic.hpp"

#include "BP_BuildObject_Lamp_Base_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_LampStandLarge.BP_BuildObject_LampStandLarge_C
// 0x0028 (0x0660 - 0x0638)
class ABP_BuildObject_LampStandLarge_C final : public ABP_BuildObject_Lamp_Base_C
{
public:
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_TorchStand;                                     // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void SetActiveLight(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_LampStandLarge_C">();
	}
	static class ABP_BuildObject_LampStandLarge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_LampStandLarge_C>();
	}
};
static_assert(alignof(ABP_BuildObject_LampStandLarge_C) == 0x000008, "Wrong alignment on ABP_BuildObject_LampStandLarge_C");
static_assert(sizeof(ABP_BuildObject_LampStandLarge_C) == 0x000660, "Wrong size on ABP_BuildObject_LampStandLarge_C");
static_assert(offsetof(ABP_BuildObject_LampStandLarge_C, CheckOverlapCollision) == 0x000638, "Member 'ABP_BuildObject_LampStandLarge_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_LampStandLarge_C, BuildWorkableBounds) == 0x000640, "Member 'ABP_BuildObject_LampStandLarge_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_LampStandLarge_C, PointLight) == 0x000648, "Member 'ABP_BuildObject_LampStandLarge_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_LampStandLarge_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_LampStandLarge_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_LampStandLarge_C, SM_TorchStand) == 0x000658, "Member 'ABP_BuildObject_LampStandLarge_C::SM_TorchStand' has a wrong offset!");

}

