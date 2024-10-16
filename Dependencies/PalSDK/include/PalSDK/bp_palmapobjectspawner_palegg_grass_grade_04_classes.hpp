#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass bp_palmapobjectspawner_palegg_grass_grade_04.bp_palmapobjectspawner_palegg_grass_grade_04_C
// 0x0030 (0x0320 - 0x02F0)
class Abp_palmapobjectspawner_palegg_grass_grade_04_C final : public APalMapObjectSpawnerPalEgg
{
public:
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA4;                                 // 0x02F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA3;                                 // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA2;                                 // 0x0300(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA1;                                 // 0x0308(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_basket;                                         // 0x0310(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_Kurinuki_EggA;                                  // 0x0318(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"bp_palmapobjectspawner_palegg_grass_grade_04_C">();
	}
	static class Abp_palmapobjectspawner_palegg_grass_grade_04_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<Abp_palmapobjectspawner_palegg_grass_grade_04_C>();
	}
};
static_assert(alignof(Abp_palmapobjectspawner_palegg_grass_grade_04_C) == 0x000008, "Wrong alignment on Abp_palmapobjectspawner_palegg_grass_grade_04_C");
static_assert(sizeof(Abp_palmapobjectspawner_palegg_grass_grade_04_C) == 0x000320, "Wrong size on Abp_palmapobjectspawner_palegg_grass_grade_04_C");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SK_Kurinuki_EggA4) == 0x0002F0, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SK_Kurinuki_EggA4' has a wrong offset!");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SK_Kurinuki_EggA3) == 0x0002F8, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SK_Kurinuki_EggA3' has a wrong offset!");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SK_Kurinuki_EggA2) == 0x000300, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SK_Kurinuki_EggA2' has a wrong offset!");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SK_Kurinuki_EggA1) == 0x000308, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SK_Kurinuki_EggA1' has a wrong offset!");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SM_basket) == 0x000310, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SM_basket' has a wrong offset!");
static_assert(offsetof(Abp_palmapobjectspawner_palegg_grass_grade_04_C, SK_Kurinuki_EggA) == 0x000318, "Member 'Abp_palmapobjectspawner_palegg_grass_grade_04_C::SK_Kurinuki_EggA' has a wrong offset!");

}

