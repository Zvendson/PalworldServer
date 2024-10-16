#pragma once

#include "Basic.hpp"

#include "BP_ThunderStrikeBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_ThreeThunderStrike.BP_SkillEffect_ThreeThunderStrike_C
// 0x0000 (0x0430 - 0x0430)
class ABP_SkillEffect_ThreeThunderStrike_C final : public ABP_ThunderStrikeBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ThreeThunderStrike_C">();
	}
	static class ABP_SkillEffect_ThreeThunderStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ThreeThunderStrike_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ThreeThunderStrike_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ThreeThunderStrike_C");
static_assert(sizeof(ABP_SkillEffect_ThreeThunderStrike_C) == 0x000430, "Wrong size on ABP_SkillEffect_ThreeThunderStrike_C");

}

