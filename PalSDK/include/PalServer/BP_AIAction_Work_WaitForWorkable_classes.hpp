#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_Work_WaitForWorkable.BP_AIAction_Work_WaitForWorkable_C
// 0x0000 (0x0150 - 0x0150)
class UBP_AIAction_Work_WaitForWorkable_C final : public UPalAIActionWorkerWaitForWorkable
{
public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Work_WaitForWorkable_C">();
	}
	static class UBP_AIAction_Work_WaitForWorkable_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Work_WaitForWorkable_C>();
	}
};
static_assert(alignof(UBP_AIAction_Work_WaitForWorkable_C) == 0x000008, "Wrong alignment on UBP_AIAction_Work_WaitForWorkable_C");
static_assert(sizeof(UBP_AIAction_Work_WaitForWorkable_C) == 0x000150, "Wrong size on UBP_AIAction_Work_WaitForWorkable_C");

}

