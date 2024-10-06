#pragma once

#include "Basic.hpp"

#include "BP_PalPlayerCaptureSet_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalPlayerCaptureSet_CharacterMake.BP_PalPlayerCaptureSet_CharacterMake_C
// 0x0000 (0x0340 - 0x0340)
class ABP_PalPlayerCaptureSet_CharacterMake_C final : public ABP_PalPlayerCaptureSet_C
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalPlayerCaptureSet_CharacterMake_C">();
	}
	static class ABP_PalPlayerCaptureSet_CharacterMake_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_PalPlayerCaptureSet_CharacterMake_C>();
	}
};
static_assert(alignof(ABP_PalPlayerCaptureSet_CharacterMake_C) == 0x000008, "Wrong alignment on ABP_PalPlayerCaptureSet_CharacterMake_C");
static_assert(sizeof(ABP_PalPlayerCaptureSet_CharacterMake_C) == 0x000340, "Wrong size on ABP_PalPlayerCaptureSet_CharacterMake_C");

}

