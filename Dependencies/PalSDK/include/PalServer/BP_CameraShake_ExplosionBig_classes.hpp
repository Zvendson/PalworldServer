#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_CameraShake_ExplosionBig.BP_CameraShake_ExplosionBig_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_CameraShake_ExplosionBig_C final : public UPalCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_ExplosionBig_C">();
	}
	static class UBP_CameraShake_ExplosionBig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_ExplosionBig_C>();
	}
};
static_assert(alignof(UBP_CameraShake_ExplosionBig_C) == 0x000010, "Wrong alignment on UBP_CameraShake_ExplosionBig_C");
static_assert(sizeof(UBP_CameraShake_ExplosionBig_C) == 0x0001D0, "Wrong size on UBP_CameraShake_ExplosionBig_C");

}

