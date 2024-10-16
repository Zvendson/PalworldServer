#pragma once

#include "Basic.hpp"

#include "BP_Anubis_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_Anubis_MiddleBoss.BP_Anubis_MiddleBoss_C
// 0x0000 (0x0A90 - 0x0A90)
class ABP_Anubis_MiddleBoss_C final : public ABP_Anubis_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Anubis_MiddleBoss_C">();
	}
	static class ABP_Anubis_MiddleBoss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Anubis_MiddleBoss_C>();
	}
};
static_assert(alignof(ABP_Anubis_MiddleBoss_C) == 0x000010, "Wrong alignment on ABP_Anubis_MiddleBoss_C");
static_assert(sizeof(ABP_Anubis_MiddleBoss_C) == 0x000A90, "Wrong size on ABP_Anubis_MiddleBoss_C");

}

