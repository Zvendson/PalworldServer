#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalSphereSneakShake.BP_PalSphereSneakShake_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_PalSphereSneakShake_C final : public UPalCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalSphereSneakShake_C">();
	}
	static class UBP_PalSphereSneakShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalSphereSneakShake_C>();
	}
};
static_assert(alignof(UBP_PalSphereSneakShake_C) == 0x000010, "Wrong alignment on UBP_PalSphereSneakShake_C");
static_assert(sizeof(UBP_PalSphereSneakShake_C) == 0x0001D0, "Wrong size on UBP_PalSphereSneakShake_C");

}

