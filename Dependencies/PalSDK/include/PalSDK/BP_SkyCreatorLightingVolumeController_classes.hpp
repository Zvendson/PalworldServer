#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SkyCreatorLightingVolumeController.BP_SkyCreatorLightingVolumeController_C
// 0x0008 (0x0368 - 0x0360)
class ABP_SkyCreatorLightingVolumeController_C final : public APalLightingVolumeController
{
public:
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SkyCreatorLightingVolumeController_C">();
	}
	static class ABP_SkyCreatorLightingVolumeController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_SkyCreatorLightingVolumeController_C>();
	}
};
static_assert(alignof(ABP_SkyCreatorLightingVolumeController_C) == 0x000008, "Wrong alignment on ABP_SkyCreatorLightingVolumeController_C");
static_assert(sizeof(ABP_SkyCreatorLightingVolumeController_C) == 0x000368, "Wrong size on ABP_SkyCreatorLightingVolumeController_C");
static_assert(offsetof(ABP_SkyCreatorLightingVolumeController_C, DefaultSceneRoot) == 0x000360, "Member 'ABP_SkyCreatorLightingVolumeController_C::DefaultSceneRoot' has a wrong offset!");

}

