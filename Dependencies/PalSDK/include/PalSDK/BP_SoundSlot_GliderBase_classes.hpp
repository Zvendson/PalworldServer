#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_SoundSlot_GliderBase.BP_SoundSlot_GliderBase_C
// 0x0000 (0x00D0 - 0x00D0)
class UBP_SoundSlot_GliderBase_C final : public UPalSoundSlot
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SoundSlot_GliderBase_C">();
	}
	static class UBP_SoundSlot_GliderBase_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SoundSlot_GliderBase_C>();
	}
};
static_assert(alignof(UBP_SoundSlot_GliderBase_C) == 0x000008, "Wrong alignment on UBP_SoundSlot_GliderBase_C");
static_assert(sizeof(UBP_SoundSlot_GliderBase_C) == 0x0000D0, "Wrong size on UBP_SoundSlot_GliderBase_C");

}

