#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBaseCampWorkerEvent_Sick.BP_PalBaseCampWorkerEvent_Sick_C
// 0x0000 (0x0090 - 0x0090)
class UBP_PalBaseCampWorkerEvent_Sick_C final : public UPalBaseCampWorkerEvent_Sick
{
public:
	class FText CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBaseCampWorkerEvent_Sick_C">();
	}
	static class UBP_PalBaseCampWorkerEvent_Sick_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBaseCampWorkerEvent_Sick_C>();
	}
};
static_assert(alignof(UBP_PalBaseCampWorkerEvent_Sick_C) == 0x000008, "Wrong alignment on UBP_PalBaseCampWorkerEvent_Sick_C");
static_assert(sizeof(UBP_PalBaseCampWorkerEvent_Sick_C) == 0x000090, "Wrong size on UBP_PalBaseCampWorkerEvent_Sick_C");

}

