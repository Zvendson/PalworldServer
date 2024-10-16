#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_WorkVisualFX.BP_WorkVisualFX_C
// 0x0000 (0x07E0 - 0x07E0)
class UBP_WorkVisualFX_C final : public UPalWorkEffectComponent
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WorkVisualFX_C">();
	}
	static class UBP_WorkVisualFX_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WorkVisualFX_C>();
	}
};
static_assert(alignof(UBP_WorkVisualFX_C) == 0x000010, "Wrong alignment on UBP_WorkVisualFX_C");
static_assert(sizeof(UBP_WorkVisualFX_C) == 0x0007E0, "Wrong size on UBP_WorkVisualFX_C");

}

