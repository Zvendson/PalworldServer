#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalBaseCampWorkerEvent_Trantrum.BP_PalBaseCampWorkerEvent_Trantrum_C
// 0x0000 (0x0098 - 0x0098)
class UBP_PalBaseCampWorkerEvent_Trantrum_C final : public UPalBaseCampWorkerEvent_Tantrum
{
public:
	class FText CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBaseCampWorkerEvent_Trantrum_C">();
	}
	static class UBP_PalBaseCampWorkerEvent_Trantrum_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBaseCampWorkerEvent_Trantrum_C>();
	}
};
static_assert(alignof(UBP_PalBaseCampWorkerEvent_Trantrum_C) == 0x000008, "Wrong alignment on UBP_PalBaseCampWorkerEvent_Trantrum_C");
static_assert(sizeof(UBP_PalBaseCampWorkerEvent_Trantrum_C) == 0x000098, "Wrong size on UBP_PalBaseCampWorkerEvent_Trantrum_C");

}

