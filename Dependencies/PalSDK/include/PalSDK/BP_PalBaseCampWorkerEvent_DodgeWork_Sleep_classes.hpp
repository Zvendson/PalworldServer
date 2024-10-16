#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalBaseCampWorkerEvent_DodgeWork_Sleep.BP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C
// 0x0000 (0x00B0 - 0x00B0)
class UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C final : public UPalBaseCampWorkerEvent_DodgeWork_Sleep
{
public:
	class FText CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C">();
	}
	static class UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C>();
	}
};
static_assert(alignof(UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C) == 0x000008, "Wrong alignment on UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C");
static_assert(sizeof(UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C) == 0x0000B0, "Wrong size on UBP_PalBaseCampWorkerEvent_DodgeWork_Sleep_C");

}

