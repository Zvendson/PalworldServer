#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.ExecuteUbergraph_BP_SkillEffect_FireBlastShoot
// 0x0018 (0x0018 - 0x0000)
struct BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 K2Node_CustomEvent_DestroyedActor;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*               K2Node_CustomEvent_PSystem;                        // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot) == 0x000008, "Wrong alignment on BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot");
static_assert(sizeof(BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot) == 0x000018, "Wrong size on BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot");
static_assert(offsetof(BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot, EntryPoint) == 0x000000, "Member 'BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot, K2Node_CustomEvent_DestroyedActor) == 0x000008, "Member 'BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot::K2Node_CustomEvent_DestroyedActor' has a wrong offset!");
static_assert(offsetof(BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot, K2Node_CustomEvent_PSystem) == 0x000010, "Member 'BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot::K2Node_CustomEvent_PSystem' has a wrong offset!");

// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.OnDestroyed_イベント_0
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0 final
{
public:
	class AActor*                                 DestroyedActor;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0");
static_assert(sizeof(BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0) == 0x000008, "Wrong size on BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0");
static_assert(offsetof(BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0, DestroyedActor) == 0x000000, "Member 'BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0::DestroyedActor' has a wrong offset!");

// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.OnSystemFinished_イベント_0
// 0x0008 (0x0008 - 0x0000)
struct BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0 final
{
public:
	class UParticleSystemComponent*               PSystem;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0) == 0x000008, "Wrong alignment on BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0");
static_assert(sizeof(BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0) == 0x000008, "Wrong size on BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0");
static_assert(offsetof(BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0, PSystem) == 0x000000, "Member 'BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0::PSystem' has a wrong offset!");

}

