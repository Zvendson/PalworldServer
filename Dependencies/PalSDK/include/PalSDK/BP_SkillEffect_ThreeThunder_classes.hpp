#pragma once

#include "Basic.hpp"

#include "BP_SkillEffect_OneThunder_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_ThreeThunder.BP_SkillEffect_ThreeThunder_C
// 0x0000 (0x0410 - 0x0410)
class ABP_SkillEffect_ThreeThunder_C final : public ABP_SkillEffect_OneThunder_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_ThreeThunder_C">();
	}
	static class ABP_SkillEffect_ThreeThunder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_ThreeThunder_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_ThreeThunder_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_ThreeThunder_C");
static_assert(sizeof(ABP_SkillEffect_ThreeThunder_C) == 0x000410, "Wrong size on ABP_SkillEffect_ThreeThunder_C");

}

