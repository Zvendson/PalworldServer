#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_CharacterSkinChange.BP_BuildObject_CharacterSkinChange_C
// 0x0058 (0x0680 - 0x0628)
class ABP_BuildObject_CharacterSkinChange_C final : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PalSkeletalMeshComponent_AutoRotation_C* BP_PalSkeletalMeshComponent_AutoRotation;          // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Glow;                                              // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   StaticMesh_Base;                                   // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectRepairItemParameterComponent* RepairItemParameter;                               // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_WorkVisualFX_C*                     BP_WorkVisualFX;                                   // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalWorkFacingComponent*                WorkFacing;                                        // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_CharacterSkinChange(int32 EntryPoint);
	void OnAvailable_BlueprintImpl();
	void ReceiveBeginPlay();
	void SetActiveInternal(bool On);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_CharacterSkinChange_C">();
	}
	static class ABP_BuildObject_CharacterSkinChange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_CharacterSkinChange_C>();
	}
};
static_assert(alignof(ABP_BuildObject_CharacterSkinChange_C) == 0x000008, "Wrong alignment on ABP_BuildObject_CharacterSkinChange_C");
static_assert(sizeof(ABP_BuildObject_CharacterSkinChange_C) == 0x000680, "Wrong size on ABP_BuildObject_CharacterSkinChange_C");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_CharacterSkinChange_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, BP_PalSkeletalMeshComponent_AutoRotation) == 0x000630, "Member 'ABP_BuildObject_CharacterSkinChange_C::BP_PalSkeletalMeshComponent_AutoRotation' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, Glow) == 0x000638, "Member 'ABP_BuildObject_CharacterSkinChange_C::Glow' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, StaticMesh_Base) == 0x000640, "Member 'ABP_BuildObject_CharacterSkinChange_C::StaticMesh_Base' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, RepairItemParameter) == 0x000648, "Member 'ABP_BuildObject_CharacterSkinChange_C::RepairItemParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, BP_WorkVisualFX) == 0x000650, "Member 'ABP_BuildObject_CharacterSkinChange_C::BP_WorkVisualFX' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, WorkFacing) == 0x000658, "Member 'ABP_BuildObject_CharacterSkinChange_C::WorkFacing' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, BP_InteractableBox) == 0x000660, "Member 'ABP_BuildObject_CharacterSkinChange_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, BuildWorkableBounds) == 0x000668, "Member 'ABP_BuildObject_CharacterSkinChange_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, CheckOverlapCollision) == 0x000670, "Member 'ABP_BuildObject_CharacterSkinChange_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_CharacterSkinChange_C, Root) == 0x000678, "Member 'ABP_BuildObject_CharacterSkinChange_C::Root' has a wrong offset!");

}

