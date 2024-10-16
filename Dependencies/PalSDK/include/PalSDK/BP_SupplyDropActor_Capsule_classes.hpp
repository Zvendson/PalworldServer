#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SupplyDropActor_Capsule.BP_SupplyDropActor_Capsule_C
// 0x0048 (0x0350 - 0x0308)
class ABP_SupplyDropActor_Capsule_C final : public APalSupplyDropActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   SM_frameContainer_B5;                              // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_frameContainer_B4;                              // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_frameContainer_B3;                              // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_frameContainer_B2;                              // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_frameContainer_B1;                              // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_frameContainer_B;                               // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Cylinder;                                          // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SupplyDropActor_Capsule(int32 EntryPoint);
	void OnLanded_BP();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupplyDropActor_Capsule_C">();
	}
	static class ABP_SupplyDropActor_Capsule_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SupplyDropActor_Capsule_C>();
	}
};
static_assert(alignof(ABP_SupplyDropActor_Capsule_C) == 0x000008, "Wrong alignment on ABP_SupplyDropActor_Capsule_C");
static_assert(sizeof(ABP_SupplyDropActor_Capsule_C) == 0x000350, "Wrong size on ABP_SupplyDropActor_Capsule_C");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, UberGraphFrame) == 0x000308, "Member 'ABP_SupplyDropActor_Capsule_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B5) == 0x000310, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B5' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B4) == 0x000318, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B4' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B3) == 0x000320, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B3' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B2) == 0x000328, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B2' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B1) == 0x000330, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B1' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, SM_frameContainer_B) == 0x000338, "Member 'ABP_SupplyDropActor_Capsule_C::SM_frameContainer_B' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, Cylinder) == 0x000340, "Member 'ABP_SupplyDropActor_Capsule_C::Cylinder' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Capsule_C, DefaultSceneRoot) == 0x000348, "Member 'ABP_SupplyDropActor_Capsule_C::DefaultSceneRoot' has a wrong offset!");

}

