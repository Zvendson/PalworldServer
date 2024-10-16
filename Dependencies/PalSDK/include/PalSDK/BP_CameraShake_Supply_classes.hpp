#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CameraShake_Supply.BP_CameraShake_Supply_C
// 0x0000 (0x01D0 - 0x01D0)
class UBP_CameraShake_Supply_C final : public UPalCameraShakeBase
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_Supply_C">();
	}
	static class UBP_CameraShake_Supply_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_Supply_C>();
	}
};
static_assert(alignof(UBP_CameraShake_Supply_C) == 0x000010, "Wrong alignment on UBP_CameraShake_Supply_C");
static_assert(sizeof(UBP_CameraShake_Supply_C) == 0x0001D0, "Wrong size on UBP_CameraShake_Supply_C");

}

