#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalMapObjectManager.BP_PalMapObjectManager_C
// 0x0000 (0x08B8 - 0x08B8)
class UBP_PalMapObjectManager_C final : public UPalMapObjectManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalMapObjectManager_C">();
	}
	static class UBP_PalMapObjectManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalMapObjectManager_C>();
	}
};
static_assert(alignof(UBP_PalMapObjectManager_C) == 0x000008, "Wrong alignment on UBP_PalMapObjectManager_C");
static_assert(sizeof(UBP_PalMapObjectManager_C) == 0x0008B8, "Wrong size on UBP_PalMapObjectManager_C");

}

