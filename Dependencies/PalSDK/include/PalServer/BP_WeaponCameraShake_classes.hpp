#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_WeaponCameraShake.BP_WeaponCameraShake_C
// 0x0000 (0x0210 - 0x0210)
class UBP_WeaponCameraShake_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WeaponCameraShake_C">();
	}
	static class UBP_WeaponCameraShake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WeaponCameraShake_C>();
	}
};
static_assert(alignof(UBP_WeaponCameraShake_C) == 0x000010, "Wrong alignment on UBP_WeaponCameraShake_C");
static_assert(sizeof(UBP_WeaponCameraShake_C) == 0x000210, "Wrong size on UBP_WeaponCameraShake_C");

}

