#pragma once

#include "Basic.hpp"

#include "BP_VolcanicMonster_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_VolcanicMonster_Ice.BP_VolcanicMonster_Ice_C
// 0x0000 (0x0AB0 - 0x0AB0)
class ABP_VolcanicMonster_Ice_C final : public ABP_VolcanicMonster_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_VolcanicMonster_Ice_C">();
	}
	static class ABP_VolcanicMonster_Ice_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_VolcanicMonster_Ice_C>();
	}
};
static_assert(alignof(ABP_VolcanicMonster_Ice_C) == 0x000010, "Wrong alignment on ABP_VolcanicMonster_Ice_C");
static_assert(sizeof(ABP_VolcanicMonster_Ice_C) == 0x000AB0, "Wrong size on ABP_VolcanicMonster_Ice_C");

}

