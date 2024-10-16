#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSaveGameManager.BP_PalSaveGameManager_C
// 0x0000 (0x02E0 - 0x02E0)
class UBP_PalSaveGameManager_C final : public UPalSaveGameManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSaveGameManager_C">();
	}
	static class UBP_PalSaveGameManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSaveGameManager_C>();
	}
};
static_assert(alignof(UBP_PalSaveGameManager_C) == 0x000008, "Wrong alignment on UBP_PalSaveGameManager_C");
static_assert(sizeof(UBP_PalSaveGameManager_C) == 0x0002E0, "Wrong size on UBP_PalSaveGameManager_C");

}

