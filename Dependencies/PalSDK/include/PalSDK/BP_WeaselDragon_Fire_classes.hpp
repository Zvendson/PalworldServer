#pragma once

#include "Basic.hpp"

#include "BP_WeaselDragon_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_WeaselDragon_Fire.BP_WeaselDragon_Fire_C
// 0x0000 (0x0AA0 - 0x0AA0)
class ABP_WeaselDragon_Fire_C final : public ABP_WeaselDragon_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaselDragon_Fire_C">();
	}
	static class ABP_WeaselDragon_Fire_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WeaselDragon_Fire_C>();
	}
};
static_assert(alignof(ABP_WeaselDragon_Fire_C) == 0x000010, "Wrong alignment on ABP_WeaselDragon_Fire_C");
static_assert(sizeof(ABP_WeaselDragon_Fire_C) == 0x000AA0, "Wrong size on ABP_WeaselDragon_Fire_C");

}

