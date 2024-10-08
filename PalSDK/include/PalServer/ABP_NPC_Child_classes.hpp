#pragma once

#include "Basic.hpp"

#include "ABP_NPC_Base_classes.hpp"


namespace PalServer
{

// AnimBlueprintGeneratedClass ABP_NPC_Child.ABP_NPC_Child_C
// 0x0000 (0x3180 - 0x3180)
class UABP_NPC_Child_C final : public UABP_NPC_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ABP_NPC_Child_C">();
	}
	static class UABP_NPC_Child_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UABP_NPC_Child_C>();
	}
};
static_assert(alignof(UABP_NPC_Child_C) == 0x000010, "Wrong alignment on UABP_NPC_Child_C");
static_assert(sizeof(UABP_NPC_Child_C) == 0x003180, "Wrong size on UABP_NPC_Child_C");

}

