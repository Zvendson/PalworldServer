#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalSDK
{

// AnimBlueprintGeneratedClass ABP_LilyQueen.ABP_LilyQueen_C
// 0x0000 (0x2430 - 0x2430)
class UABP_LilyQueen_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_LilyQueen_C">();
	}
	static class UABP_LilyQueen_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_LilyQueen_C>();
	}
};
static_assert(alignof(UABP_LilyQueen_C) == 0x000010, "Wrong alignment on UABP_LilyQueen_C");
static_assert(sizeof(UABP_LilyQueen_C) == 0x002430, "Wrong size on UABP_LilyQueen_C");

}

