#pragma once

#include "Basic.hpp"

#include "Pal_classes.hpp"


namespace PalSDK
{

// BlueprintGeneratedClass BP_PalCharacterRankUpModel.BP_PalCharacterRankUpModel_C
// 0x0000 (0x0088 - 0x0088)
class UBP_PalCharacterRankUpModel_C final : public UPalUIPalCharacterRankUpModel
{
public:
	bool IsSelectableSlot(const class UPalIndividualCharacterSlot* Slot) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_PalCharacterRankUpModel_C">();
	}
	static class UBP_PalCharacterRankUpModel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_PalCharacterRankUpModel_C>();
	}
};
static_assert(alignof(UBP_PalCharacterRankUpModel_C) == 0x000008, "Wrong alignment on UBP_PalCharacterRankUpModel_C");
static_assert(sizeof(UBP_PalCharacterRankUpModel_C) == 0x000088, "Wrong size on UBP_PalCharacterRankUpModel_C");

}

