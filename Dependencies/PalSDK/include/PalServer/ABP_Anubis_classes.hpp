#pragma once

#include "Basic.hpp"

#include "ABP_MonsterBase_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_Anubis.ABP_Anubis_C
// 0x0000 (0x2430 - 0x2430)
class UABP_Anubis_C final : public UABP_MonsterBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_Anubis_C">();
	}
	static class UABP_Anubis_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_Anubis_C>();
	}
};
static_assert(alignof(UABP_Anubis_C) == 0x000010, "Wrong alignment on UABP_Anubis_C");
static_assert(sizeof(UABP_Anubis_C) == 0x002430, "Wrong size on UABP_Anubis_C");

}

