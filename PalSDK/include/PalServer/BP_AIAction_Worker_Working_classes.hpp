#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_Worker_Working.BP_AIAction_Worker_Working_C
// 0x0000 (0x0160 - 0x0160)
class UBP_AIAction_Worker_Working_C final : public UPalAIActionWorkerWorking
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Worker_Working_C">();
	}
	static class UBP_AIAction_Worker_Working_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Worker_Working_C>();
	}
};
static_assert(alignof(UBP_AIAction_Worker_Working_C) == 0x000008, "Wrong alignment on UBP_AIAction_Worker_Working_C");
static_assert(sizeof(UBP_AIAction_Worker_Working_C) == 0x000160, "Wrong size on UBP_AIAction_Worker_Working_C");

}

