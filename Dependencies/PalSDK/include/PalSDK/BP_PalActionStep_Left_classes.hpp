#pragma once

#include "Basic.hpp"

#include "BP_PalActionStepBase_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalActionStep_Left.BP_PalActionStep_Left_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_PalActionStep_Left_C final : public UBP_PalActionStepBase_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalActionStep_Left_C">();
	}
	static class UBP_PalActionStep_Left_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalActionStep_Left_C>();
	}
};
static_assert(alignof(UBP_PalActionStep_Left_C) == 0x000010, "Wrong alignment on UBP_PalActionStep_Left_C");
static_assert(sizeof(UBP_PalActionStep_Left_C) == 0x0001D0, "Wrong size on UBP_PalActionStep_Left_C");

}

