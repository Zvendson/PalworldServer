#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalWorkProgressManager.BP_PalWorkProgressManager_C
// 0x0000 (0x0388 - 0x0388)
class UBP_PalWorkProgressManager_C final : public UPalWorkProgressManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalWorkProgressManager_C">();
	}
	static class UBP_PalWorkProgressManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalWorkProgressManager_C>();
	}
};
static_assert(alignof(UBP_PalWorkProgressManager_C) == 0x000008, "Wrong alignment on UBP_PalWorkProgressManager_C");
static_assert(sizeof(UBP_PalWorkProgressManager_C) == 0x000388, "Wrong size on UBP_PalWorkProgressManager_C");

}

