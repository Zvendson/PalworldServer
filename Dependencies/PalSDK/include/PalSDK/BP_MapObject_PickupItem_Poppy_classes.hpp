#pragma once

#include "Basic.hpp"

#include "BP_MapObject_PickupItem_Base_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_Poppy.BP_MapObject_PickupItem_Poppy_C
// 0x0028 (0x0440 - 0x0418)
class ABP_MapObject_PickupItem_Poppy_C final : public ABP_MapObject_PickupItem_Base_C
{
public:
	class UStaticMeshComponent*                   StaticMesh3;                                       // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh2;                                       // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh1;                                       // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        IndicatorOrigin;                                   // 0x0430(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectPickupItemParameterComponent* PalMapObjectPickupItemParameter;                   // 0x0438(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	bool IsShowOutlineInReticleTargetting() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_Poppy_C">();
	}
	static class ABP_MapObject_PickupItem_Poppy_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_Poppy_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_Poppy_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_Poppy_C");
static_assert(sizeof(ABP_MapObject_PickupItem_Poppy_C) == 0x000440, "Wrong size on ABP_MapObject_PickupItem_Poppy_C");
static_assert(offsetof(ABP_MapObject_PickupItem_Poppy_C, StaticMesh3) == 0x000418, "Member 'ABP_MapObject_PickupItem_Poppy_C::StaticMesh3' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Poppy_C, StaticMesh2) == 0x000420, "Member 'ABP_MapObject_PickupItem_Poppy_C::StaticMesh2' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Poppy_C, StaticMesh1) == 0x000428, "Member 'ABP_MapObject_PickupItem_Poppy_C::StaticMesh1' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Poppy_C, IndicatorOrigin) == 0x000430, "Member 'ABP_MapObject_PickupItem_Poppy_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_Poppy_C, PalMapObjectPickupItemParameter) == 0x000438, "Member 'ABP_MapObject_PickupItem_Poppy_C::PalMapObjectPickupItemParameter' has a wrong offset!");

}

