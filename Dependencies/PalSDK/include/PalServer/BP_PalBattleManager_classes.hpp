#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBattleManager.BP_PalBattleManager_C
// 0x0000 (0x0110 - 0x0110)
class UBP_PalBattleManager_C final : public UPalBattleManager
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBattleManager_C">();
	}
	static class UBP_PalBattleManager_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBattleManager_C>();
	}
};
static_assert(alignof(UBP_PalBattleManager_C) == 0x000008, "Wrong alignment on UBP_PalBattleManager_C");
static_assert(sizeof(UBP_PalBattleManager_C) == 0x000110, "Wrong size on UBP_PalBattleManager_C");

}

