#pragma once

#include "Basic.hpp"

#include "BP_ActionWaza_BreathBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionFlamethrower.BP_ActionFlamethrower_C
// 0x0000 (0x02D0 - 0x02D0)
class UBP_ActionFlamethrower_C final : public UBP_ActionWaza_BreathBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionFlamethrower_C">();
	}
	static class UBP_ActionFlamethrower_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionFlamethrower_C>();
	}
};
static_assert(alignof(UBP_ActionFlamethrower_C) == 0x000010, "Wrong alignment on UBP_ActionFlamethrower_C");
static_assert(sizeof(UBP_ActionFlamethrower_C) == 0x0002D0, "Wrong size on UBP_ActionFlamethrower_C");

}

