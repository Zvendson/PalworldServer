#pragma once

#include "Basic.hpp"

#include "PlacementTools_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_BoxPlacementToolBase.BP_BoxPlacementToolBase_C
// 0x0000 (0x0420 - 0x0420)
class ABP_BoxPlacementToolBase_C : public ABoxPlacement
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_BoxPlacementToolBase_C">();
	}
	static class ABP_BoxPlacementToolBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_BoxPlacementToolBase_C>();
	}
};
static_assert(alignof(ABP_BoxPlacementToolBase_C) == 0x000010, "Wrong alignment on ABP_BoxPlacementToolBase_C");
static_assert(sizeof(ABP_BoxPlacementToolBase_C) == 0x000420, "Wrong size on ABP_BoxPlacementToolBase_C");

}

