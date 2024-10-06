#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BuildObject_SphereFactory_Black_Base.BP_BuildObject_SphereFactory_Black_Base_C
// 0x0048 (0x0670 - 0x0628)
class ABP_BuildObject_SphereFactory_Black_Base_C : public APalBuildObject
{
public:
	class UBP_WorkVisualFX_C*                     BP_WorkVisualFX4;                                  // 0x0628(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing4;                                       // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_PalSphereFactoryMedieval;                       // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        StaticMesh;                                        // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectItemConverterParameterComponent* ItemConverterParameter;                            // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_SphereFactory_Black_Base_C">();
	}
	static class ABP_BuildObject_SphereFactory_Black_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_SphereFactory_Black_Base_C>();
	}
};
static_assert(alignof(ABP_BuildObject_SphereFactory_Black_Base_C) == 0x000008, "Wrong alignment on ABP_BuildObject_SphereFactory_Black_Base_C");
static_assert(sizeof(ABP_BuildObject_SphereFactory_Black_Base_C) == 0x000670, "Wrong size on ABP_BuildObject_SphereFactory_Black_Base_C");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, BP_WorkVisualFX4) == 0x000628, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::BP_WorkVisualFX4' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, WorkFacing4) == 0x000630, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::WorkFacing4' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, SM_PalSphereFactoryMedieval) == 0x000638, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::SM_PalSphereFactoryMedieval' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, StaticMesh) == 0x000640, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, BP_InteractableBox) == 0x000648, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, ItemConverterParameter) == 0x000650, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::ItemConverterParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, BuildWorkableBounds) == 0x000658, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, CheckOverlapCollision) == 0x000660, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_SphereFactory_Black_Base_C, Root) == 0x000668, "Member 'ABP_BuildObject_SphereFactory_Black_Base_C::Root' has a wrong offset!");

}

