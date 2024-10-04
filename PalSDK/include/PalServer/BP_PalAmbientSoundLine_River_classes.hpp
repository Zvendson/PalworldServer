#pragma once

#include "Basic.hpp"

#include "BP_PalAmbientSoundLine_Base_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalAmbientSoundLine_River.BP_PalAmbientSoundLine_River_C
// 0x0000 (0x02B0 - 0x02B0)
class ABP_PalAmbientSoundLine_River_C final : public ABP_PalAmbientSoundLine_Base_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalAmbientSoundLine_River_C">();
	}
	static class ABP_PalAmbientSoundLine_River_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalAmbientSoundLine_River_C>();
	}
};
static_assert(alignof(ABP_PalAmbientSoundLine_River_C) == 0x000008, "Wrong alignment on ABP_PalAmbientSoundLine_River_C");
static_assert(sizeof(ABP_PalAmbientSoundLine_River_C) == 0x0002B0, "Wrong size on ABP_PalAmbientSoundLine_River_C");

}

