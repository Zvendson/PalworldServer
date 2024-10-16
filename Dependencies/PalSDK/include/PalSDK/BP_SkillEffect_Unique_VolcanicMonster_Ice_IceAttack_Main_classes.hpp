#pragma once

#include "Basic.hpp"

#include "BP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main.BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C
// 0x0000 (0x0420 - 0x0420)
class ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C final : public ABP_SkillEffect_Unique_VolcanicMonster_MagmaAttack_Main_C
{
public:
	void GetBullet(class UClass** NewParam);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C">();
	}
	static class ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C");
static_assert(sizeof(ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C) == 0x000420, "Wrong size on ABP_SkillEffect_Unique_VolcanicMonster_Ice_IceAttack_Main_C");

}

