#pragma once

#include "Basic.hpp"

#include "PRESET_Ivy1_Var3_BP_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass PRESET_Ivy1_WithBridges_BP.PRESET_Ivy1_WithBridges_BP_C
// 0x0000 (0x0680 - 0x0680)
class APRESET_Ivy1_WithBridges_BP_C final : public APRESET_Ivy1_Var3_BP_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PRESET_Ivy1_WithBridges_BP_C">();
	}
	static class APRESET_Ivy1_WithBridges_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<APRESET_Ivy1_WithBridges_BP_C>();
	}
};
static_assert(alignof(APRESET_Ivy1_WithBridges_BP_C) == 0x000008, "Wrong alignment on APRESET_Ivy1_WithBridges_BP_C");
static_assert(sizeof(APRESET_Ivy1_WithBridges_BP_C) == 0x000680, "Wrong size on APRESET_Ivy1_WithBridges_BP_C");

}

