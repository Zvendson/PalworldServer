#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalAdminSpectator.BP_PalAdminSpectator_C
// 0x0000 (0x0930 - 0x0930)
class ABP_PalAdminSpectator_C final : public APalSpectator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAdminSpectator_C">();
	}
	static class ABP_PalAdminSpectator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalAdminSpectator_C>();
	}
};
static_assert(alignof(ABP_PalAdminSpectator_C) == 0x000010, "Wrong alignment on ABP_PalAdminSpectator_C");
static_assert(sizeof(ABP_PalAdminSpectator_C) == 0x000930, "Wrong size on ABP_PalAdminSpectator_C");

}

