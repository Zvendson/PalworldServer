#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_NPCAIWeaponHandle.BP_NPCAIWeaponHandle_C
// 0x0000 (0x00E0 - 0x00E0)
class UBP_NPCAIWeaponHandle_C final : public UPalNPCAIWeaponHandle
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_NPCAIWeaponHandle_C">();
	}
	static class UBP_NPCAIWeaponHandle_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_NPCAIWeaponHandle_C>();
	}
};
static_assert(alignof(UBP_NPCAIWeaponHandle_C) == 0x000008, "Wrong alignment on UBP_NPCAIWeaponHandle_C");
static_assert(sizeof(UBP_NPCAIWeaponHandle_C) == 0x0000E0, "Wrong size on UBP_NPCAIWeaponHandle_C");

}

