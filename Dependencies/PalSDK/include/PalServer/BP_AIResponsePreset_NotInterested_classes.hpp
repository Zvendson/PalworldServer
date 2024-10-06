#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIResponsePreset_NotInterested.BP_AIResponsePreset_NotInterested_C
// 0x0000 (0x0030 - 0x0030)
class UBP_AIResponsePreset_NotInterested_C final : public UPalAIResponsePreset
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIResponsePreset_NotInterested_C">();
	}
	static class UBP_AIResponsePreset_NotInterested_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIResponsePreset_NotInterested_C>();
	}
};
static_assert(alignof(UBP_AIResponsePreset_NotInterested_C) == 0x000008, "Wrong alignment on UBP_AIResponsePreset_NotInterested_C");
static_assert(sizeof(UBP_AIResponsePreset_NotInterested_C) == 0x000030, "Wrong size on UBP_AIResponsePreset_NotInterested_C");

}

