#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_Cauldron.BP_BuildObject_Cauldron_C
// 0x0040 (0x0668 - 0x0628)
class ABP_BuildObject_Cauldron_C final : public APalBuildObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0628(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Caldron;                                        // 0x0630(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Caldron;                                        // 0x0638(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0640(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectBaseCampPassiveEffectWorkSpeedParameterComponent* BaseCampPassiveEffectWorkSpeedParameter;           // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void BP_OnSetConcreteModel(class UPalMapObjectConcreteModelBase* ConcreteModel);
	void CustomEvent(class UPalMapObjectConcreteModelBase* Model);
	void ExecuteUbergraph_BP_BuildObject_Cauldron(int32 EntryPoint);
	void ReceiveBeginPlay();
	void SetActive_Internal(bool bOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_Cauldron_C">();
	}
	static class ABP_BuildObject_Cauldron_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_Cauldron_C>();
	}
};
static_assert(alignof(ABP_BuildObject_Cauldron_C) == 0x000008, "Wrong alignment on ABP_BuildObject_Cauldron_C");
static_assert(sizeof(ABP_BuildObject_Cauldron_C) == 0x000668, "Wrong size on ABP_BuildObject_Cauldron_C");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, UberGraphFrame) == 0x000628, "Member 'ABP_BuildObject_Cauldron_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, NS_Caldron) == 0x000630, "Member 'ABP_BuildObject_Cauldron_C::NS_Caldron' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, SM_Caldron) == 0x000638, "Member 'ABP_BuildObject_Cauldron_C::SM_Caldron' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, BP_InteractableBox) == 0x000640, "Member 'ABP_BuildObject_Cauldron_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, BaseCampPassiveEffectWorkSpeedParameter) == 0x000648, "Member 'ABP_BuildObject_Cauldron_C::BaseCampPassiveEffectWorkSpeedParameter' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, BuildWorkableBounds) == 0x000650, "Member 'ABP_BuildObject_Cauldron_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, CheckOverlapCollision) == 0x000658, "Member 'ABP_BuildObject_Cauldron_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_Cauldron_C, Root) == 0x000660, "Member 'ABP_BuildObject_Cauldron_C::Root' has a wrong offset!");

}

