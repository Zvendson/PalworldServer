#pragma once

#include "Basic.hpp"

#include "BP_BulletRain_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_LineThunder.BP_SkillEffect_LineThunder_C
// 0x0000 (0x0410 - 0x0410)
class ABP_SkillEffect_LineThunder_C final : public ABP_BulletRain_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_LineThunder_C">();
	}
	static class ABP_SkillEffect_LineThunder_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_LineThunder_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_LineThunder_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_LineThunder_C");
static_assert(sizeof(ABP_SkillEffect_LineThunder_C) == 0x000410, "Wrong size on ABP_SkillEffect_LineThunder_C");

}

