#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalNPCManager.BP_PalNPCManager_C
// 0x0000 (0x0240 - 0x0240)
class UBP_PalNPCManager_C final : public UPalNPCManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalNPCManager_C">();
	}
	static class UBP_PalNPCManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalNPCManager_C>();
	}
};
static_assert(alignof(UBP_PalNPCManager_C) == 0x000008, "Wrong alignment on UBP_PalNPCManager_C");
static_assert(sizeof(UBP_PalNPCManager_C) == 0x000240, "Wrong size on UBP_PalNPCManager_C");

}

