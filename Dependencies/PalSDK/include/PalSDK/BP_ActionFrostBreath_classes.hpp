#pragma once

#include "Basic.hpp"

#include "BP_ActionWaza_BreathBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionFrostBreath.BP_ActionFrostBreath_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ActionFrostBreath_C final : public UBP_ActionWaza_BreathBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFrostBreath_C">();
	}
	static class UBP_ActionFrostBreath_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFrostBreath_C>();
	}
};
static_assert(alignof(UBP_ActionFrostBreath_C) == 0x000010, "Wrong alignment on UBP_ActionFrostBreath_C");
static_assert(sizeof(UBP_ActionFrostBreath_C) == 0x0002D0, "Wrong size on UBP_ActionFrostBreath_C");

}

