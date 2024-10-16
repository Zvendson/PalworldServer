#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Fireplace_NPC.BP_Fireplace_NPC_C
// 0x0040 (0x02D0 - 0x0290)
class ABP_Fireplace_NPC_C final : public AActor
{
public:
	class UBP_PalTimerPointLightComponent_C*      BP_PalTimerPointLightComponent;                    // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HeatSourceSphereComponent_C*        BP_HeatSourceSphereComponent;                      // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Smoke;                                             // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               P_Fire_Custom;                                     // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fire_hanger_StaticMeshComponent0;               // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fire_pit_StaticMeshComponent0;                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Fire_pot_StaticMeshComponent0;                  // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        SharedRoot;                                        // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Fireplace_NPC_C">();
	}
	static class ABP_Fireplace_NPC_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Fireplace_NPC_C>();
	}
};
static_assert(alignof(ABP_Fireplace_NPC_C) == 0x000008, "Wrong alignment on ABP_Fireplace_NPC_C");
static_assert(sizeof(ABP_Fireplace_NPC_C) == 0x0002D0, "Wrong size on ABP_Fireplace_NPC_C");
static_assert(offsetof(ABP_Fireplace_NPC_C, BP_PalTimerPointLightComponent) == 0x000290, "Member 'ABP_Fireplace_NPC_C::BP_PalTimerPointLightComponent' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, BP_HeatSourceSphereComponent) == 0x000298, "Member 'ABP_Fireplace_NPC_C::BP_HeatSourceSphereComponent' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, Smoke) == 0x0002A0, "Member 'ABP_Fireplace_NPC_C::Smoke' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, P_Fire_Custom) == 0x0002A8, "Member 'ABP_Fireplace_NPC_C::P_Fire_Custom' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, SM_Fire_hanger_StaticMeshComponent0) == 0x0002B0, "Member 'ABP_Fireplace_NPC_C::SM_Fire_hanger_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, SM_Fire_pit_StaticMeshComponent0) == 0x0002B8, "Member 'ABP_Fireplace_NPC_C::SM_Fire_pit_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, SM_Fire_pot_StaticMeshComponent0) == 0x0002C0, "Member 'ABP_Fireplace_NPC_C::SM_Fire_pot_StaticMeshComponent0' has a wrong offset!");
static_assert(offsetof(ABP_Fireplace_NPC_C, SharedRoot) == 0x0002C8, "Member 'ABP_Fireplace_NPC_C::SharedRoot' has a wrong offset!");

}

