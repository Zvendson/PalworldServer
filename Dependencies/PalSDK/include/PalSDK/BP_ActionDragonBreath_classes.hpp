#pragma once

#include "Basic.hpp"

#include "BP_ActionWaza_BreathBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionDragonBreath.BP_ActionDragonBreath_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ActionDragonBreath_C final : public UBP_ActionWaza_BreathBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDragonBreath_C">();
	}
	static class UBP_ActionDragonBreath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDragonBreath_C>();
	}
};
static_assert(alignof(UBP_ActionDragonBreath_C) == 0x000010, "Wrong alignment on UBP_ActionDragonBreath_C");
static_assert(sizeof(UBP_ActionDragonBreath_C) == 0x0002D0, "Wrong size on UBP_ActionDragonBreath_C");

}

