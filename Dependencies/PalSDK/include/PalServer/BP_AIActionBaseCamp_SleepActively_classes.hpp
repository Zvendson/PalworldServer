#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIActionBaseCamp_SleepActively.BP_AIActionBaseCamp_SleepActively_C
// 0x0000 (0x0198 - 0x0198)
class UBP_AIActionBaseCamp_SleepActively_C final : public UPalAIActionBaseCampSleepActively
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIActionBaseCamp_SleepActively_C">();
	}
	static class UBP_AIActionBaseCamp_SleepActively_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIActionBaseCamp_SleepActively_C>();
	}
};
static_assert(alignof(UBP_AIActionBaseCamp_SleepActively_C) == 0x000008, "Wrong alignment on UBP_AIActionBaseCamp_SleepActively_C");
static_assert(sizeof(UBP_AIActionBaseCamp_SleepActively_C) == 0x000198, "Wrong size on UBP_AIActionBaseCamp_SleepActively_C");

}

