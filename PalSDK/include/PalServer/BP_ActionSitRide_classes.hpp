#pragma once

#include "Basic.hpp"

#include "BP_ActionRideBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionSitRide.BP_ActionSitRide_C
// 0x0000 (0x0490 - 0x0490)
class UBP_ActionSitRide_C final : public UBP_ActionRideBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionSitRide_C">();
	}
	static class UBP_ActionSitRide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionSitRide_C>();
	}
};
static_assert(alignof(UBP_ActionSitRide_C) == 0x000010, "Wrong alignment on UBP_ActionSitRide_C");
static_assert(sizeof(UBP_ActionSitRide_C) == 0x000490, "Wrong size on UBP_ActionSitRide_C");

}

