#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_Alpaca.ABP_Alpaca_C
// 0x0000 (0x2430 - 0x2430)
class UABP_Alpaca_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Alpaca_C">();
	}
	static class UABP_Alpaca_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Alpaca_C>();
	}
};
static_assert(alignof(UABP_Alpaca_C) == 0x000010, "Wrong alignment on UABP_Alpaca_C");
static_assert(sizeof(UABP_Alpaca_C) == 0x002430, "Wrong size on UABP_Alpaca_C");

}

