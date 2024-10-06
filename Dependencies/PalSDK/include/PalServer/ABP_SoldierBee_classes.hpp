#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_SoldierBee.ABP_SoldierBee_C
// 0x0000 (0x2430 - 0x2430)
class UABP_SoldierBee_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_SoldierBee_C">();
	}
	static class UABP_SoldierBee_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_SoldierBee_C>();
	}
};
static_assert(alignof(UABP_SoldierBee_C) == 0x000010, "Wrong alignment on UABP_SoldierBee_C");
static_assert(sizeof(UABP_SoldierBee_C) == 0x002430, "Wrong size on UABP_SoldierBee_C");

}

