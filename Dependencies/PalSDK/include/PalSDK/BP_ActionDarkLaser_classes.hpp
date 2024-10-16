#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_ActionDarkLaser.BP_ActionDarkLaser_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionDarkLaser_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionDarkLaser_C">();
	}
	static class UBP_ActionDarkLaser_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionDarkLaser_C>();
	}
};
static_assert(alignof(UBP_ActionDarkLaser_C) == 0x000010, "Wrong alignment on UBP_ActionDarkLaser_C");
static_assert(sizeof(UBP_ActionDarkLaser_C) == 0x0002C0, "Wrong size on UBP_ActionDarkLaser_C");

}

