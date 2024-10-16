#pragma once

#include "Basic.hpp"

#include "BP_SkillEffect_BreathBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_FrostBreath.BP_SkillEffect_FrostBreath_C
// 0x0000 (0x0420 - 0x0420)
class ABP_SkillEffect_FrostBreath_C final : public ABP_SkillEffect_BreathBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_FrostBreath_C">();
	}
	static class ABP_SkillEffect_FrostBreath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_FrostBreath_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_FrostBreath_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_FrostBreath_C");
static_assert(sizeof(ABP_SkillEffect_FrostBreath_C) == 0x000420, "Wrong size on ABP_SkillEffect_FrostBreath_C");

}

