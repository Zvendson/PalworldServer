#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_OptimizeParameter_CoopHost.BP_OptimizeParameter_CoopHost_C
// 0x0000 (0x0558 - 0x0558)
class UBP_OptimizeParameter_CoopHost_C final : public UPalOptimizeParameterSetting
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OptimizeParameter_CoopHost_C">();
	}
	static class UBP_OptimizeParameter_CoopHost_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_OptimizeParameter_CoopHost_C>();
	}
};
static_assert(alignof(UBP_OptimizeParameter_CoopHost_C) == 0x000008, "Wrong alignment on UBP_OptimizeParameter_CoopHost_C");
static_assert(sizeof(UBP_OptimizeParameter_CoopHost_C) == 0x000558, "Wrong size on UBP_OptimizeParameter_CoopHost_C");

}

