#pragma once

#include "Basic.hpp"

#include "BP_BuildObject_SwitchHeatSource_classes.hpp"
#include "Engine_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BuildObject_HeaterElectric.BP_BuildObject_HeaterElectric_C
// 0x0048 (0x0688 - 0x0640)
class ABP_BuildObject_HeaterElectric_C final : public ABP_BuildObject_SwitchHeatSource_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_BuildObject_HeaterElectric_C;    // 0x0640(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UPalWorkFacingComponent*                PalWorkFacing1;                                    // 0x0648(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_StableFire_HeaterElectric1;                     // 0x0650(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_StableFire_HeaterElectric;                      // 0x0658(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableBox_C*                  BP_InteractableBox;                                // 0x0660(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          CheckOverlapCollision;                             // 0x0668(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          BuildWorkableBounds;                               // 0x0670(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wall_Stone;                                     // 0x0678(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0680(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_BuildObject_HeaterElectric(int32 EntryPoint);
	void OnAvailable_BlueprintImpl();
	void ReceiveBeginPlay();
	void SetActive_Internal(bool bOn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BuildObject_HeaterElectric_C">();
	}
	static class ABP_BuildObject_HeaterElectric_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BuildObject_HeaterElectric_C>();
	}
};
static_assert(alignof(ABP_BuildObject_HeaterElectric_C) == 0x000008, "Wrong alignment on ABP_BuildObject_HeaterElectric_C");
static_assert(sizeof(ABP_BuildObject_HeaterElectric_C) == 0x000688, "Wrong size on ABP_BuildObject_HeaterElectric_C");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, UberGraphFrame_BP_BuildObject_HeaterElectric_C) == 0x000640, "Member 'ABP_BuildObject_HeaterElectric_C::UberGraphFrame_BP_BuildObject_HeaterElectric_C' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, PalWorkFacing1) == 0x000648, "Member 'ABP_BuildObject_HeaterElectric_C::PalWorkFacing1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, NS_StableFire_HeaterElectric1) == 0x000650, "Member 'ABP_BuildObject_HeaterElectric_C::NS_StableFire_HeaterElectric1' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, NS_StableFire_HeaterElectric) == 0x000658, "Member 'ABP_BuildObject_HeaterElectric_C::NS_StableFire_HeaterElectric' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, BP_InteractableBox) == 0x000660, "Member 'ABP_BuildObject_HeaterElectric_C::BP_InteractableBox' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, CheckOverlapCollision) == 0x000668, "Member 'ABP_BuildObject_HeaterElectric_C::CheckOverlapCollision' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, BuildWorkableBounds) == 0x000670, "Member 'ABP_BuildObject_HeaterElectric_C::BuildWorkableBounds' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, SM_Wall_Stone) == 0x000678, "Member 'ABP_BuildObject_HeaterElectric_C::SM_Wall_Stone' has a wrong offset!");
static_assert(offsetof(ABP_BuildObject_HeaterElectric_C, Root) == 0x000680, "Member 'ABP_BuildObject_HeaterElectric_C::Root' has a wrong offset!");

}

