#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_classes.hpp"
#include "AkAudio_structs.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SupplyDropActor_Meteor.BP_SupplyDropActor_Meteor_C
// 0x0020 (0x0328 - 0x0308)
class ABP_SupplyDropActor_Meteor_C final : public APalSupplyDropActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0308(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   Sphere;                                            // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_SupplyDropActor_Meteor(int32 EntryPoint);
	void OnLanded_BP();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SupplyDropActor_Meteor_C">();
	}
	static class ABP_SupplyDropActor_Meteor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SupplyDropActor_Meteor_C>();
	}
};
static_assert(alignof(ABP_SupplyDropActor_Meteor_C) == 0x000008, "Wrong alignment on ABP_SupplyDropActor_Meteor_C");
static_assert(sizeof(ABP_SupplyDropActor_Meteor_C) == 0x000328, "Wrong size on ABP_SupplyDropActor_Meteor_C");
static_assert(offsetof(ABP_SupplyDropActor_Meteor_C, UberGraphFrame) == 0x000308, "Member 'ABP_SupplyDropActor_Meteor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Meteor_C, Sphere) == 0x000310, "Member 'ABP_SupplyDropActor_Meteor_C::Sphere' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Meteor_C, Niagara) == 0x000318, "Member 'ABP_SupplyDropActor_Meteor_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_SupplyDropActor_Meteor_C, DefaultSceneRoot) == 0x000320, "Member 'ABP_SupplyDropActor_Meteor_C::DefaultSceneRoot' has a wrong offset!");

}

