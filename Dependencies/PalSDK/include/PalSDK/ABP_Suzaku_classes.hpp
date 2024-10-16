#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ABP_Suzaku.ABP_Suzaku_C
// 0x0000 (0x2430 - 0x2430)
class UABP_Suzaku_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Suzaku_C">();
	}
	static class UABP_Suzaku_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Suzaku_C>();
	}
};
static_assert(alignof(UABP_Suzaku_C) == 0x000010, "Wrong alignment on UABP_Suzaku_C");
static_assert(sizeof(UABP_Suzaku_C) == 0x002430, "Wrong size on UABP_Suzaku_C");

}

