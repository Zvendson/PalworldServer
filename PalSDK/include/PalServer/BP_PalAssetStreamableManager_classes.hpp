#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalAssetStreamableManager.BP_PalAssetStreamableManager_C
// 0x0000 (0x0060 - 0x0060)
class UBP_PalAssetStreamableManager_C final : public UPalAssetStreamableManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAssetStreamableManager_C">();
	}
	static class UBP_PalAssetStreamableManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalAssetStreamableManager_C>();
	}
};
static_assert(alignof(UBP_PalAssetStreamableManager_C) == 0x000008, "Wrong alignment on UBP_PalAssetStreamableManager_C");
static_assert(sizeof(UBP_PalAssetStreamableManager_C) == 0x000060, "Wrong size on UBP_PalAssetStreamableManager_C");

}

