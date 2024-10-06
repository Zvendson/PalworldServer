#pragma once

#include "Basic.hpp"

#include "BP_ActionGeneralAttackFarBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_ActionStoneShotgun.BP_ActionStoneShotgun_C
// 0x0000 (0x02C0 - 0x02C0)
class UBP_ActionStoneShotgun_C final : public UBP_ActionGeneralAttackFarBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ActionStoneShotgun_C">();
	}
	static class UBP_ActionStoneShotgun_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_ActionStoneShotgun_C>();
	}
};
static_assert(alignof(UBP_ActionStoneShotgun_C) == 0x000010, "Wrong alignment on UBP_ActionStoneShotgun_C");
static_assert(sizeof(UBP_ActionStoneShotgun_C) == 0x0002C0, "Wrong size on UBP_ActionStoneShotgun_C");

}

