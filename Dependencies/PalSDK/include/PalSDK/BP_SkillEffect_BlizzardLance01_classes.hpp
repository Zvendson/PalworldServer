#pragma once

#include "Basic.hpp"

#include "BP_BulletRain_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkillEffect_BlizzardLance01.BP_SkillEffect_BlizzardLance01_C
// 0x0000 (0x0410 - 0x0410)
class ABP_SkillEffect_BlizzardLance01_C final : public ABP_BulletRain_C
{
public:
	void SpawnBullet(int32 Count);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkillEffect_BlizzardLance01_C">();
	}
	static class ABP_SkillEffect_BlizzardLance01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkillEffect_BlizzardLance01_C>();
	}
};
static_assert(alignof(ABP_SkillEffect_BlizzardLance01_C) == 0x000008, "Wrong alignment on ABP_SkillEffect_BlizzardLance01_C");
static_assert(sizeof(ABP_SkillEffect_BlizzardLance01_C) == 0x000410, "Wrong size on ABP_SkillEffect_BlizzardLance01_C");

}

