#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Container01_Iron.BP_BuildObject_Container01_Iron_C
// 0x0088 (0x06B0 - 0x0628)
class ABP_BuildObject_Container01_Iron_C final : public APalBuildObject
{
public:
	class UPalMapObjectItemChestParameterComponent* PalMapObjectItemChestParameter;                    // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal3;                                            // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal2;                                            // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard1;                                        // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow1;                                            // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal1;                                            // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBillboardComponent*                    Billboard;                                         // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UArrowComponent*                        Arrow;                                             // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDecalComponent*                        Decal;                                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ContainerDoorR;                                 // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_ContainerDoorL;                                 // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Container;                                      // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Meshs;                                             // 0x0688(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0690(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0698(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x06A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x06A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Container01_Iron_C">();
	}
	static class ABP_BuildObject_Container01_Iron_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Container01_Iron_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Container01_Iron_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Container01_Iron_C");
static_assert(sizeof(ABP_BuildObject_Container01_Iron_C) == 0x0006B0, "Wrong size on ABP_BuildObject_Container01_Iron_C");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, PalMapObjectItemChestParameter) == 0x000628, "Member 'ABP_BuildObject_Container01_Iron_C::PalMapObjectItemChestParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Decal3) == 0x000630, "Member 'ABP_BuildObject_Container01_Iron_C::Decal3' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Decal2) == 0x000638, "Member 'ABP_BuildObject_Container01_Iron_C::Decal2' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Billboard1) == 0x000640, "Member 'ABP_BuildObject_Container01_Iron_C::Billboard1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Arrow1) == 0x000648, "Member 'ABP_BuildObject_Container01_Iron_C::Arrow1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Decal1) == 0x000650, "Member 'ABP_BuildObject_Container01_Iron_C::Decal1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Billboard) == 0x000658, "Member 'ABP_BuildObject_Container01_Iron_C::Billboard' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Arrow) == 0x000660, "Member 'ABP_BuildObject_Container01_Iron_C::Arrow' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Decal) == 0x000668, "Member 'ABP_BuildObject_Container01_Iron_C::Decal' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, SM_ContainerDoorR) == 0x000670, "Member 'ABP_BuildObject_Container01_Iron_C::SM_ContainerDoorR' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, SM_ContainerDoorL) == 0x000678, "Member 'ABP_BuildObject_Container01_Iron_C::SM_ContainerDoorL' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, SM_Container) == 0x000680, "Member 'ABP_BuildObject_Container01_Iron_C::SM_Container' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, Meshs) == 0x000688, "Member 'ABP_BuildObject_Container01_Iron_C::Meshs' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, BP_InteractableBox) == 0x000690, "Member 'ABP_BuildObject_Container01_Iron_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, BuildWorkableBounds) == 0x000698, "Member 'ABP_BuildObject_Container01_Iron_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, CheckOverlapCollision) == 0x0006A0, "Member 'ABP_BuildObject_Container01_Iron_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Container01_Iron_C, DefaultSceneRoot) == 0x0006A8, "Member 'ABP_BuildObject_Container01_Iron_C::DefaultSceneRoot' has a wrong offset!");

}

