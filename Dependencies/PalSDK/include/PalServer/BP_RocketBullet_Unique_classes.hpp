#pragma once

#include "Basic.hpp"

#include "BP_RocketBullet_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_RocketBullet_Unique.BP_RocketBullet_Unique_C
// 0x0000 (0x0398 - 0x0398)
class ABP_RocketBullet_Unique_C final : public ABP_RocketBullet_C
{
public:
	void GetExplosionClass(class UClass** ExplosionClass);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_RocketBullet_Unique_C">();
	}
	static class ABP_RocketBullet_Unique_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_RocketBullet_Unique_C>();
	}
};
static_assert(alignof(ABP_RocketBullet_Unique_C) == 0x000008, "Wrong alignment on ABP_RocketBullet_Unique_C");
static_assert(sizeof(ABP_RocketBullet_Unique_C) == 0x000398, "Wrong size on ABP_RocketBullet_Unique_C");

}

