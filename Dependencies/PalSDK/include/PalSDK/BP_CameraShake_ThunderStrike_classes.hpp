#pragma once

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_CameraShake_ThunderStrike.BP_CameraShake_ThunderStrike_C
// 0x0000 (0x0210 - 0x0210)
class UBP_CameraShake_ThunderStrike_C final : public ULegacyCameraShake
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_CameraShake_ThunderStrike_C">();
	}
	static class UBP_CameraShake_ThunderStrike_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_CameraShake_ThunderStrike_C>();
	}
};
static_assert(alignof(UBP_CameraShake_ThunderStrike_C) == 0x000010, "Wrong alignment on UBP_CameraShake_ThunderStrike_C");
static_assert(sizeof(UBP_CameraShake_ThunderStrike_C) == 0x000210, "Wrong size on UBP_CameraShake_ThunderStrike_C");

}

