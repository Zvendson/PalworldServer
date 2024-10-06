#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalServer
{

// BlueprintGeneratedClass BP_UIOtomoListModel.BP_UIOtomoListModel_C
// 0x0000 (0x0048 - 0x0048)
class UBP_UIOtomoListModel_C final : public UPalUIOtomoListModel
{
public:
	void GetCurrentPageSlots(TArray<class UPalIndividualCharacterSlot*>* OutSlots) const;
	int32 GetSlotCountInPage() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_UIOtomoListModel_C">();
	}
	static class UBP_UIOtomoListModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_UIOtomoListModel_C>();
	}
};
static_assert(alignof(UBP_UIOtomoListModel_C) == 0x000008, "Wrong alignment on UBP_UIOtomoListModel_C");
static_assert(sizeof(UBP_UIOtomoListModel_C) == 0x000048, "Wrong size on UBP_UIOtomoListModel_C");

}

