#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_RepairBench.BP_BuildObject_RepairBench_C
// 0x0040 (0x0668 - 0x0628)
class ABP_BuildObject_RepairBench_C final : public APalBuildObject
{
public:
	class UPalMapObjectRepairItemParameterComponent* RepairItemParameter;                               // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WorkVisualFX_C*                     BP_WorkVisualFX;                                   // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing;                                        // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_RepairBench_C">();
	}
	static class ABP_BuildObject_RepairBench_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_RepairBench_C>();
	}
};
static_assert(alignof(ABP_BuildObject_RepairBench_C) == 0x000008, "Wrong alignment on ABP_BuildObject_RepairBench_C");
static_assert(sizeof(ABP_BuildObject_RepairBench_C) == 0x000668, "Wrong size on ABP_BuildObject_RepairBench_C");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, RepairItemParameter) == 0x000628, "Member 'ABP_BuildObject_RepairBench_C::RepairItemParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, BP_WorkVisualFX) == 0x000630, "Member 'ABP_BuildObject_RepairBench_C::BP_WorkVisualFX' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, StaticMesh) == 0x000638, "Member 'ABP_BuildObject_RepairBench_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, WorkFacing) == 0x000640, "Member 'ABP_BuildObject_RepairBench_C::WorkFacing' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, BP_InteractableBox) == 0x000648, "Member 'ABP_BuildObject_RepairBench_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, BuildWorkableBounds) == 0x000650, "Member 'ABP_BuildObject_RepairBench_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, CheckOverlapCollision) == 0x000658, "Member 'ABP_BuildObject_RepairBench_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_RepairBench_C, Root) == 0x000660, "Member 'ABP_BuildObject_RepairBench_C::Root' has a wrong offset!");

}

