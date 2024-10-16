#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_EnergyGenerator_Large.BP_BuildObject_EnergyGenerator_Large_C
// 0x0048 (0x0680 - 0x0638)
class ABP_BuildObject_EnergyGenerator_Large_C final : public APalBuildObjectGenerateEnergy
{
public:
	class UPalMapObjectGenerateEnergyParameterComponent* GenerateEnergyParameter;                           // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        EffectAttachment;                                  // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh;                                        // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Meshes;                                            // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      PlayingFX;                                         // 0x0678(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

public:
	void OnEndGenerate();
	void OnStartGenerate();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_EnergyGenerator_Large_C">();
	}
	static class ABP_BuildObject_EnergyGenerator_Large_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_EnergyGenerator_Large_C>();
	}
};
static_assert(alignof(ABP_BuildObject_EnergyGenerator_Large_C) == 0x000008, "Wrong alignment on ABP_BuildObject_EnergyGenerator_Large_C");
static_assert(sizeof(ABP_BuildObject_EnergyGenerator_Large_C) == 0x000680, "Wrong size on ABP_BuildObject_EnergyGenerator_Large_C");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, GenerateEnergyParameter) == 0x000638, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::GenerateEnergyParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, EffectAttachment) == 0x000640, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::EffectAttachment' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, StaticMesh) == 0x000648, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::StaticMesh' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, BP_InteractableBox) == 0x000650, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, Meshes) == 0x000658, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::Meshes' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, BuildWorkableBounds) == 0x000660, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, CheckOverlapCollision) == 0x000668, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, Root) == 0x000670, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::Root' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_EnergyGenerator_Large_C, PlayingFX) == 0x000678, "Member 'ABP_BuildObject_EnergyGenerator_Large_C::PlayingFX' has a wrong offset!");

}

