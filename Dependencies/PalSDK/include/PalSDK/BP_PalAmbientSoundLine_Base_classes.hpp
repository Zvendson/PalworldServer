#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalAmbientSoundLine_Base.BP_PalAmbientSoundLine_Base_C
// 0x0008 (0x02B0 - 0x02A8)
class ABP_PalAmbientSoundLine_Base_C : public APalAmbientSoundLineBase
{
public:
	class USplineComponent*                       Spline;                                            // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAmbientSoundLine_Base_C">();
	}
	static class ABP_PalAmbientSoundLine_Base_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalAmbientSoundLine_Base_C>();
	}
};
static_assert(alignof(ABP_PalAmbientSoundLine_Base_C) == 0x000008, "Wrong alignment on ABP_PalAmbientSoundLine_Base_C");
static_assert(sizeof(ABP_PalAmbientSoundLine_Base_C) == 0x0002B0, "Wrong size on ABP_PalAmbientSoundLine_Base_C");
static_assert(offsetof(ABP_PalAmbientSoundLine_Base_C, Spline) == 0x0002A8, "Member 'ABP_PalAmbientSoundLine_Base_C::Spline' has a wrong offset!");

}

