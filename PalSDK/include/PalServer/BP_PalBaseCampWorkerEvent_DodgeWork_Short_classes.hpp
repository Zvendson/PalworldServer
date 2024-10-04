#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_PalBaseCampWorkerEvent_DodgeWork_Short.BP_PalBaseCampWorkerEvent_DodgeWork_Short_C
// 0x0000 (0x00A0 - 0x00A0)
class UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C final : public UPalBaseCampWorkerEvent_DodgeWork_Short
{
public:
	class FText CreateNotifyMessageText(const class FText& LocalizedFormatText, class APalCharacter* Character);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalBaseCampWorkerEvent_DodgeWork_Short_C">();
	}
	static class UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C>();
	}
};
static_assert(alignof(UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C) == 0x000008, "Wrong alignment on UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C");
static_assert(sizeof(UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C) == 0x0000A0, "Wrong size on UBP_PalBaseCampWorkerEvent_DodgeWork_Short_C");

}

