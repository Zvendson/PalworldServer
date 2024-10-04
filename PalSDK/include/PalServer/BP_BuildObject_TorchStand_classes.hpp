#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "BP_BuildObject_Torch_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BuildObject_TorchStand.BP_BuildObject_TorchStand_C
// 0x0038 (0x0678 - 0x0640)
class ABP_BuildObject_TorchStand_C final : public ABP_BuildObject_Torch_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BuildObject_TorchStand_C;        // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_TorchFire;                                      // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_TorchStand;                                     // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_TorchStand(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetActiveLight(bool bActive);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_TorchStand_C">();
	}
	static class ABP_BuildObject_TorchStand_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_TorchStand_C>();
	}
};
static_assert(alignof(ABP_BuildObject_TorchStand_C) == 0x000008, "Wrong alignment on ABP_BuildObject_TorchStand_C");
static_assert(sizeof(ABP_BuildObject_TorchStand_C) == 0x000678, "Wrong size on ABP_BuildObject_TorchStand_C");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, UberGraphFrame_BP_BuildObject_TorchStand_C) == 0x000640, "Member 'ABP_BuildObject_TorchStand_C::UberGraphFrame_BP_BuildObject_TorchStand_C' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, NS_TorchFire) == 0x000648, "Member 'ABP_BuildObject_TorchStand_C::NS_TorchFire' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, BuildWorkableBounds) == 0x000650, "Member 'ABP_BuildObject_TorchStand_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, PointLight) == 0x000658, "Member 'ABP_BuildObject_TorchStand_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, CheckOverlapCollision) == 0x000660, "Member 'ABP_BuildObject_TorchStand_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, SM_TorchStand) == 0x000668, "Member 'ABP_BuildObject_TorchStand_C::SM_TorchStand' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_TorchStand_C, BP_InteractableBox) == 0x000670, "Member 'ABP_BuildObject_TorchStand_C::BP_InteractableBox' has a wrong offset!");

}

