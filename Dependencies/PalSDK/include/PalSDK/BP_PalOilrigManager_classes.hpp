#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalOilrigManager.BP_PalOilrigManager_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_PalOilrigManager_C final : public UPalOilrigManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalOilrigManager_C">();
	}
	static class UBP_PalOilrigManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalOilrigManager_C>();
	}
};
static_assert(alignof(UBP_PalOilrigManager_C) == 0x000008, "Wrong alignment on UBP_PalOilrigManager_C");
static_assert(sizeof(UBP_PalOilrigManager_C) == 0x0001A8, "Wrong size on UBP_PalOilrigManager_C");

}

