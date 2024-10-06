#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_AIAction_Work_Wait.BP_AIAction_Work_Wait_C
// 0x0000 (0x0198 - 0x0198)
class UBP_AIAction_Work_Wait_C : public UPalAIActionWorkerWait
{
public:
	void ReturnToDefaultPosition();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_AIAction_Work_Wait_C">();
	}
	static class UBP_AIAction_Work_Wait_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_AIAction_Work_Wait_C>();
	}
};
static_assert(alignof(UBP_AIAction_Work_Wait_C) == 0x000008, "Wrong alignment on UBP_AIAction_Work_Wait_C");
static_assert(sizeof(UBP_AIAction_Work_Wait_C) == 0x000198, "Wrong size on UBP_AIAction_Work_Wait_C");

}

