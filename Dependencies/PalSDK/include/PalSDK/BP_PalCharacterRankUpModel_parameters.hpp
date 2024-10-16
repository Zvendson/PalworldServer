#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_PalCharacterRankUpModel.BP_PalCharacterRankUpModel_C.IsSelectableSlot
// 0x0010 (0x0010 - 0x0000)
struct BP_PalCharacterRankUpModel_C_IsSelectableSlot final
{
public:
	const class UPalIndividualCharacterSlot*      Slot;                                              // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0008(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsSelectableSlotInternal_ReturnValue;     // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_PalCharacterRankUpModel_C_IsSelectableSlot) == 0x000008, "Wrong alignment on BP_PalCharacterRankUpModel_C_IsSelectableSlot");
static_assert(sizeof(BP_PalCharacterRankUpModel_C_IsSelectableSlot) == 0x000010, "Wrong size on BP_PalCharacterRankUpModel_C_IsSelectableSlot");
static_assert(offsetof(BP_PalCharacterRankUpModel_C_IsSelectableSlot, Slot) == 0x000000, "Member 'BP_PalCharacterRankUpModel_C_IsSelectableSlot::Slot' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterRankUpModel_C_IsSelectableSlot, ReturnValue) == 0x000008, "Member 'BP_PalCharacterRankUpModel_C_IsSelectableSlot::ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_PalCharacterRankUpModel_C_IsSelectableSlot, CallFunc_IsSelectableSlotInternal_ReturnValue) == 0x000009, "Member 'BP_PalCharacterRankUpModel_C_IsSelectableSlot::CallFunc_IsSelectableSlotInternal_ReturnValue' has a wrong offset!");

}

