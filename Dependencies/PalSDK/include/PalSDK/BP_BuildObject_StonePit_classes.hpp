#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_StonePit.BP_BuildObject_StonePit_C
// 0x0078 (0x06A0 - 0x0628)
class ABP_BuildObject_StonePit_C final : public APalBuildObject
{
public:
	class UPalWorkFacingComponent*                PalWorkFacing_1;                                   // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                PalWorkFacing_;                                    // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                PalWorkFacing_2;                                   // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_StonePit_SM_StonePit_RockC;                     // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_StonePit_SM_StonePit_RockB;                     // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_StonePit_SM_StonePit_RockA;                     // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_StonePit_SM_StonePit_Acce;                      // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_StonePit_SM_StonePit_Fence;                     // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Mesh;                                              // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemSimpleProductParameterComponent* ItemSimpleProductParameter;                        // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_StonePit_C">();
	}
	static class ABP_BuildObject_StonePit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_StonePit_C>();
	}
};
static_assert(alignof(ABP_BuildObject_StonePit_C) == 0x000008, "Wrong alignment on ABP_BuildObject_StonePit_C");
static_assert(sizeof(ABP_BuildObject_StonePit_C) == 0x0006A0, "Wrong size on ABP_BuildObject_StonePit_C");
static_assert(offsetof(ABP_BuildObject_StonePit_C, PalWorkFacing_1) == 0x000628, "Member 'ABP_BuildObject_StonePit_C::PalWorkFacing_1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, PalWorkFacing_) == 0x000630, "Member 'ABP_BuildObject_StonePit_C::PalWorkFacing_' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, PalWorkFacing_2) == 0x000638, "Member 'ABP_BuildObject_StonePit_C::PalWorkFacing_2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, SM_StonePit_SM_StonePit_RockC) == 0x000640, "Member 'ABP_BuildObject_StonePit_C::SM_StonePit_SM_StonePit_RockC' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, SM_StonePit_SM_StonePit_RockB) == 0x000648, "Member 'ABP_BuildObject_StonePit_C::SM_StonePit_SM_StonePit_RockB' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, SM_StonePit_SM_StonePit_RockA) == 0x000650, "Member 'ABP_BuildObject_StonePit_C::SM_StonePit_SM_StonePit_RockA' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, SM_StonePit_SM_StonePit_Acce) == 0x000658, "Member 'ABP_BuildObject_StonePit_C::SM_StonePit_SM_StonePit_Acce' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, SM_StonePit_SM_StonePit_Fence) == 0x000660, "Member 'ABP_BuildObject_StonePit_C::SM_StonePit_SM_StonePit_Fence' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, Mesh) == 0x000668, "Member 'ABP_BuildObject_StonePit_C::Mesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, BP_InteractableBox) == 0x000670, "Member 'ABP_BuildObject_StonePit_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, BuildWorkableBounds) == 0x000678, "Member 'ABP_BuildObject_StonePit_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, CheckOverlapCollision) == 0x000680, "Member 'ABP_BuildObject_StonePit_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, Scene) == 0x000688, "Member 'ABP_BuildObject_StonePit_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, ItemSimpleProductParameter) == 0x000690, "Member 'ABP_BuildObject_StonePit_C::ItemSimpleProductParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_StonePit_C, Root) == 0x000698, "Member 'ABP_BuildObject_StonePit_C::Root' has a wrong offset!");

}

