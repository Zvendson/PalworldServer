#pragma once

#include "Basic.hpp"

#include "BP_BoxPlacementToolBase_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_BoxPlacementTool_Copper.BP_BoxPlacementTool_Copper_C
// 0x0000 (0x0420 - 0x0420)
class ABP_BoxPlacementTool_Copper_C final : public ABP_BoxPlacementToolBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoxPlacementTool_Copper_C">();
	}
	static class ABP_BoxPlacementTool_Copper_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoxPlacementTool_Copper_C>();
	}
};
static_assert(alignof(ABP_BoxPlacementTool_Copper_C) == 0x000010, "Wrong alignment on ABP_BoxPlacementTool_Copper_C");
static_assert(sizeof(ABP_BoxPlacementTool_Copper_C) == 0x000420, "Wrong size on ABP_BoxPlacementTool_Copper_C");

}

