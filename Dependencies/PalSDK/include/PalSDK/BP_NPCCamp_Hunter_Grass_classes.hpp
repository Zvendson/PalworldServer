#pragma once

#include "Basic.hpp"

#include "BP_NPCCampPresetBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_NPCCamp_Hunter_Grass.BP_NPCCamp_Hunter_Grass_C
// 0x00C0 (0x0380 - 0x02C0)
class ABP_NPCCamp_Hunter_Grass_C final : public ABP_NPCCampPresetBase_C
{
public:
	class UChildActorComponent*                   BP_GangCamp_GangTorch3;                            // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_GangCamp_GangTorch2;                            // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_GangCamp_GangTorch1;                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_GangCamp_GangTorch;                             // 0x02D8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Smoke;                                             // 0x02E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFlag1;                                      // 0x02E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFlag;                                       // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_barricade2;                              // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceB1;                                    // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangTent03;                                     // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangTent02;                                     // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangTent01;                                     // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceC;                                     // 0x0320(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceA1;                                    // 0x0328(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceD;                                     // 0x0330(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceB;                                     // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_GangFenceA;                                     // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_SquadNPCSpawner_ForCamp_Hunter_Grass;           // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_barricade1;                              // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Wooden_barricade;                               // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_Fireplace;                                      // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Bed_rug1;                                       // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Bed_rug;                                        // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   BP_PalCapturedCage;                                // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCCamp_Hunter_Grass_C">();
	}
	static class ABP_NPCCamp_Hunter_Grass_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_NPCCamp_Hunter_Grass_C>();
	}
};
static_assert(alignof(ABP_NPCCamp_Hunter_Grass_C) == 0x000008, "Wrong alignment on ABP_NPCCamp_Hunter_Grass_C");
static_assert(sizeof(ABP_NPCCamp_Hunter_Grass_C) == 0x000380, "Wrong size on ABP_NPCCamp_Hunter_Grass_C");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_GangCamp_GangTorch3) == 0x0002C0, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_GangCamp_GangTorch3' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_GangCamp_GangTorch2) == 0x0002C8, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_GangCamp_GangTorch2' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_GangCamp_GangTorch1) == 0x0002D0, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_GangCamp_GangTorch1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_GangCamp_GangTorch) == 0x0002D8, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_GangCamp_GangTorch' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, Smoke) == 0x0002E0, "Member 'ABP_NPCCamp_Hunter_Grass_C::Smoke' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFlag1) == 0x0002E8, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFlag1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFlag) == 0x0002F0, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFlag' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_Wooden_barricade2) == 0x0002F8, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_Wooden_barricade2' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceB1) == 0x000300, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceB1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangTent03) == 0x000308, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangTent03' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangTent02) == 0x000310, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangTent02' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangTent01) == 0x000318, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangTent01' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceC) == 0x000320, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceC' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceA1) == 0x000328, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceA1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceD) == 0x000330, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceD' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceB) == 0x000338, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceB' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_GangFenceA) == 0x000340, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_GangFenceA' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_SquadNPCSpawner_ForCamp_Hunter_Grass) == 0x000348, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_SquadNPCSpawner_ForCamp_Hunter_Grass' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_Wooden_barricade1) == 0x000350, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_Wooden_barricade1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_Wooden_barricade) == 0x000358, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_Wooden_barricade' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_Fireplace) == 0x000360, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_Fireplace' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_Bed_rug1) == 0x000368, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_Bed_rug1' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, SM_Bed_rug) == 0x000370, "Member 'ABP_NPCCamp_Hunter_Grass_C::SM_Bed_rug' has a wrong offset!");
static_assert(offsetof(ABP_NPCCamp_Hunter_Grass_C, BP_PalCapturedCage) == 0x000378, "Member 'ABP_NPCCamp_Hunter_Grass_C::BP_PalCapturedCage' has a wrong offset!");

}

