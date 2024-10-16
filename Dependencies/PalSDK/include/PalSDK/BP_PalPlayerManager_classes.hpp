#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalPlayerManager.BP_PalPlayerManager_C
// 0x0000 (0x01A8 - 0x01A8)
class UBP_PalPlayerManager_C final : public UPalPlayerManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerManager_C">();
	}
	static class UBP_PalPlayerManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalPlayerManager_C>();
	}
};
static_assert(alignof(UBP_PalPlayerManager_C) == 0x000008, "Wrong alignment on UBP_PalPlayerManager_C");
static_assert(sizeof(UBP_PalPlayerManager_C) == 0x0001A8, "Wrong size on UBP_PalPlayerManager_C");

}

