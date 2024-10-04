#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalMapObjectSpawner_SkillFruits_Sakura.BP_PalMapObjectSpawner_SkillFruits_Sakura_C
// 0x0040 (0x0378 - 0x0338)
class ABP_PalMapObjectSpawner_SkillFruits_Sakura_C final : public APalMapObjectSpawnerMultiItem
{
public:
	class UNiagaraComponent*                      NS_SkillFruitsTree;                                // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_FlowerMerge;                                    // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_SkillFruitsTree;                                // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPalMapObjectSpawnerDamageReactionComponent* DamageReaction;                                    // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits2;                    // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits1;                    // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_MapObjectSpawnerLocationComponent_SkillFruits_C* LocationComponent_SkillFruits;                     // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectSpawner_SkillFruits_Sakura_C">();
	}
	static class ABP_PalMapObjectSpawner_SkillFruits_Sakura_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalMapObjectSpawner_SkillFruits_Sakura_C>();
	}
};
static_assert(alignof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C) == 0x000008, "Wrong alignment on ABP_PalMapObjectSpawner_SkillFruits_Sakura_C");
static_assert(sizeof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C) == 0x000378, "Wrong size on ABP_PalMapObjectSpawner_SkillFruits_Sakura_C");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, NS_SkillFruitsTree) == 0x000338, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::NS_SkillFruitsTree' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, SM_FlowerMerge) == 0x000340, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::SM_FlowerMerge' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, PointLight) == 0x000348, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, SM_SkillFruitsTree) == 0x000350, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::SM_SkillFruitsTree' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, DamageReaction) == 0x000358, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::DamageReaction' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, LocationComponent_SkillFruits2) == 0x000360, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::LocationComponent_SkillFruits2' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, LocationComponent_SkillFruits1) == 0x000368, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::LocationComponent_SkillFruits1' has a wrong offset!");
static_assert(offsetof(ABP_PalMapObjectSpawner_SkillFruits_Sakura_C, LocationComponent_SkillFruits) == 0x000370, "Member 'ABP_PalMapObjectSpawner_SkillFruits_Sakura_C::LocationComponent_SkillFruits' has a wrong offset!");

}

