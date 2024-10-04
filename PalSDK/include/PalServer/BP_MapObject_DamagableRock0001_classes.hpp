#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_DamagableRock0001.BP_MapObject_DamagableRock0001_C
// 0x0048 (0x0430 - 0x03E8)
class ABP_MapObject_DamagableRock0001_C final : public APalMapObject
{
public:
	class UStaticMeshComponent*                   Mesh2;                                             // 0x03E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh1;                                             // 0x03F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          WorkableBounds;                                    // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        IndicatorOrigin;                                   // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectDropItemParameterComponent* DropItemParameter;                                 // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0420(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0428(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_DamagableRock0001_C">();
	}
	static class ABP_MapObject_DamagableRock0001_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_DamagableRock0001_C>();
	}
};
static_assert(alignof(ABP_MapObject_DamagableRock0001_C) == 0x000008, "Wrong alignment on ABP_MapObject_DamagableRock0001_C");
static_assert(sizeof(ABP_MapObject_DamagableRock0001_C) == 0x000430, "Wrong size on ABP_MapObject_DamagableRock0001_C");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, Mesh2) == 0x0003E8, "Member 'ABP_MapObject_DamagableRock0001_C::Mesh2' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, Mesh1) == 0x0003F0, "Member 'ABP_MapObject_DamagableRock0001_C::Mesh1' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, CheckOverlapCollision) == 0x0003F8, "Member 'ABP_MapObject_DamagableRock0001_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, WorkableBounds) == 0x000400, "Member 'ABP_MapObject_DamagableRock0001_C::WorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, IndicatorOrigin) == 0x000408, "Member 'ABP_MapObject_DamagableRock0001_C::IndicatorOrigin' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, DropItemParameter) == 0x000410, "Member 'ABP_MapObject_DamagableRock0001_C::DropItemParameter' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, BP_InteractableSphere) == 0x000418, "Member 'ABP_MapObject_DamagableRock0001_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, Mesh) == 0x000420, "Member 'ABP_MapObject_DamagableRock0001_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_DamagableRock0001_C, DefaultSceneRoot) == 0x000428, "Member 'ABP_MapObject_DamagableRock0001_C::DefaultSceneRoot' has a wrong offset!");

}

