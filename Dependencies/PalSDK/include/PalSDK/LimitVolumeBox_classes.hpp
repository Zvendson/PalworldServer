#pragma once

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass LimitVolumeBox.LimitVolumeBox_C
// 0x0010 (0x02A0 - 0x0290)
class ALimitVolumeBox_C : public AActor
{
public:
	class UPalLimitVolumeBoxComponent*            PalLimitVolumeBox;                                 // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"LimitVolumeBox_C">();
	}
	static class ALimitVolumeBox_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ALimitVolumeBox_C>();
	}
};
static_assert(alignof(ALimitVolumeBox_C) == 0x000008, "Wrong alignment on ALimitVolumeBox_C");
static_assert(sizeof(ALimitVolumeBox_C) == 0x0002A0, "Wrong size on ALimitVolumeBox_C");
static_assert(offsetof(ALimitVolumeBox_C, PalLimitVolumeBox) == 0x000290, "Member 'ALimitVolumeBox_C::PalLimitVolumeBox' has a wrong offset!");
static_assert(offsetof(ALimitVolumeBox_C, DefaultSceneRoot) == 0x000298, "Member 'ALimitVolumeBox_C::DefaultSceneRoot' has a wrong offset!");

}

