#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PlayerDamageCamShakeRegulator.BP_PlayerDamageCamShakeRegulator_C
// 0x0000 (0x0030 - 0x0030)
class UBP_PlayerDamageCamShakeRegulator_C final : public UPalPlayerDamageCamShakeRegulator
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PlayerDamageCamShakeRegulator_C">();
	}
	static class UBP_PlayerDamageCamShakeRegulator_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PlayerDamageCamShakeRegulator_C>();
	}
};
static_assert(alignof(UBP_PlayerDamageCamShakeRegulator_C) == 0x000008, "Wrong alignment on UBP_PlayerDamageCamShakeRegulator_C");
static_assert(sizeof(UBP_PlayerDamageCamShakeRegulator_C) == 0x000030, "Wrong size on UBP_PlayerDamageCamShakeRegulator_C");

}

