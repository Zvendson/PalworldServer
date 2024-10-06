#pragma once

#include "Basic.hpp"

#include "BP_PalOilrigController_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalOilrigController_TypeA.BP_PalOilrigController_TypeA_C
// 0x0000 (0x0310 - 0x0310)
class ABP_PalOilrigController_TypeA_C final : public ABP_PalOilrigController_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalOilrigController_TypeA_C">();
	}
	static class ABP_PalOilrigController_TypeA_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalOilrigController_TypeA_C>();
	}
};
static_assert(alignof(ABP_PalOilrigController_TypeA_C) == 0x000008, "Wrong alignment on ABP_PalOilrigController_TypeA_C");
static_assert(sizeof(ABP_PalOilrigController_TypeA_C) == 0x000310, "Wrong size on ABP_PalOilrigController_TypeA_C");

}

