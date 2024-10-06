#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_MapObject_PickupItem_PalEgg_Base.BP_MapObject_PickupItem_PalEgg_Base_C
// 0x0038 (0x0428 - 0x03F0)
class ABP_MapObject_PickupItem_PalEgg_Base_C : public APalMapObjectPalEgg
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x03F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      Niagara;                                           // 0x03F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_basket;                                         // 0x0400(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalInteractableSphereComponentNative*  BP_InteractableSphere;                             // 0x0408(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere;                                            // 0x0410(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA;                                  // 0x0418(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                        Scale;                                             // 0x0420(0x0008)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_MapObject_PickupItem_PalEgg_Base(int32 EntryPoint);
	void GetPalEggScale(int32 PalRarity, double* PalEggScale);
	void OnRep_Scale();
	void ReceiveBeginPlay();
	void SetupPalEggScale();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_MapObject_PickupItem_PalEgg_Base_C">();
	}
	static class ABP_MapObject_PickupItem_PalEgg_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_MapObject_PickupItem_PalEgg_Base_C>();
	}
};
static_assert(alignof(ABP_MapObject_PickupItem_PalEgg_Base_C) == 0x000008, "Wrong alignment on ABP_MapObject_PickupItem_PalEgg_Base_C");
static_assert(sizeof(ABP_MapObject_PickupItem_PalEgg_Base_C) == 0x000428, "Wrong size on ABP_MapObject_PickupItem_PalEgg_Base_C");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, UberGraphFrame) == 0x0003F0, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Niagara) == 0x0003F8, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, SM_basket) == 0x000400, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::SM_basket' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, BP_InteractableSphere) == 0x000408, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::BP_InteractableSphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Sphere) == 0x000410, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, SK_Kurinuki_EggA) == 0x000418, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::SK_Kurinuki_EggA' has a wrong offset!");
static_assert(offsetof(ABP_MapObject_PickupItem_PalEgg_Base_C, Scale) == 0x000420, "Member 'ABP_MapObject_PickupItem_PalEgg_Base_C::Scale' has a wrong offset!");

}

