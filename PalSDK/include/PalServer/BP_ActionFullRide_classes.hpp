#pragma once

#include "Basic.hpp"

#include "BP_ActionRideBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionFullRide.BP_ActionFullRide_C
// 0x0000 (0x0490 - 0x0490)
class UBP_ActionFullRide_C final : public UBP_ActionRideBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFullRide_C">();
	}
	static class UBP_ActionFullRide_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFullRide_C>();
	}
};
static_assert(alignof(UBP_ActionFullRide_C) == 0x000010, "Wrong alignment on UBP_ActionFullRide_C");
static_assert(sizeof(UBP_ActionFullRide_C) == 0x000490, "Wrong size on UBP_ActionFullRide_C");

}

