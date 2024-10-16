#pragma once

#include "Basic.hpp"

#include "BP_SkillEffect_ParabolaBallBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_WaterBall.BP_SkillEffect_WaterBall_C
// 0x0000 (0x0418 - 0x0418)
class ABP_SkillEffect_WaterBall_C final : public ABP_SkillEffect_ParabolaBallBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_WaterBall_C">();
	}
	static class ABP_SkillEffect_WaterBall_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_WaterBall_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_WaterBall_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_WaterBall_C");
static_assert(sizeof(ABP_SkillEffect_WaterBall_C) == 0x000418, "Wrong size on ABP_SkillEffect_WaterBall_C");

}

