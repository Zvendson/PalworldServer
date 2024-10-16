#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ABP_ThunderDog.ABP_ThunderDog_C
// 0x0000 (0x2430 - 0x2430)
class UABP_ThunderDog_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_ThunderDog_C">();
	}
	static class UABP_ThunderDog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_ThunderDog_C>();
	}
};
static_assert(alignof(UABP_ThunderDog_C) == 0x000010, "Wrong alignment on UABP_ThunderDog_C");
static_assert(sizeof(UABP_ThunderDog_C) == 0x002430, "Wrong size on UABP_ThunderDog_C");

}

