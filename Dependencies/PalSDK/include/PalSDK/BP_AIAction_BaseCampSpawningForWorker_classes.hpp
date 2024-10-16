#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_AIAction_BaseCampSpawningForWorker.BP_AIAction_BaseCampSpawningForWorker_C
// 0x0000 (0x0140 - 0x0140)
class UBP_AIAction_BaseCampSpawningForWorker_C final : public UPalAIActionBaseCampSpawningForWorker
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_BaseCampSpawningForWorker_C">();
	}
	static class UBP_AIAction_BaseCampSpawningForWorker_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_BaseCampSpawningForWorker_C>();
	}
};
static_assert(alignof(UBP_AIAction_BaseCampSpawningForWorker_C) == 0x000008, "Wrong alignment on UBP_AIAction_BaseCampSpawningForWorker_C");
static_assert(sizeof(UBP_AIAction_BaseCampSpawningForWorker_C) == 0x000140, "Wrong size on UBP_AIAction_BaseCampSpawningForWorker_C");

}

