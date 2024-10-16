#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_FarmBlockV2_tomato.BP_BuildObject_FarmBlockV2_tomato_C
// 0x0030 (0x0680 - 0x0650)
class ABP_BuildObject_FarmBlockV2_tomato_C final : public APalBuildObjectFarmBlockV2
{
public:
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          VirtualMeshCollision;                              // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_FarmBlockV2_tomato_C">();
	}
	static class ABP_BuildObject_FarmBlockV2_tomato_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_FarmBlockV2_tomato_C>();
	}
};
static_assert(alignof(ABP_BuildObject_FarmBlockV2_tomato_C) == 0x000008, "Wrong alignment on ABP_BuildObject_FarmBlockV2_tomato_C");
static_assert(sizeof(ABP_BuildObject_FarmBlockV2_tomato_C) == 0x000680, "Wrong size on ABP_BuildObject_FarmBlockV2_tomato_C");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, VirtualMeshCollision) == 0x000658, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::VirtualMeshCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, Mesh) == 0x000660, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, BuildWorkableBounds) == 0x000668, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, CheckOverlapCollision) == 0x000670, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_FarmBlockV2_tomato_C, Root) == 0x000678, "Member 'ABP_BuildObject_FarmBlockV2_tomato_C::Root' has a wrong offset!");

}

