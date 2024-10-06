#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalLogManager.BP_PalLogManager_C
// 0x0000 (0x0148 - 0x0148)
class UBP_PalLogManager_C final : public UPalLogManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalLogManager_C">();
	}
	static class UBP_PalLogManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalLogManager_C>();
	}
};
static_assert(alignof(UBP_PalLogManager_C) == 0x000008, "Wrong alignment on UBP_PalLogManager_C");
static_assert(sizeof(UBP_PalLogManager_C) == 0x000148, "Wrong size on UBP_PalLogManager_C");

}

