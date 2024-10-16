#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalGenderIcon.WBP_PalGenderIcon_C.Setup
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalGenderIcon_C_Setup final
{
public:
	EPalGenderType                                GenderType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalGenderIcon_C_Setup) == 0x000001, "Wrong alignment on WBP_PalGenderIcon_C_Setup");
static_assert(sizeof(WBP_PalGenderIcon_C_Setup) == 0x000002, "Wrong size on WBP_PalGenderIcon_C_Setup");
static_assert(offsetof(WBP_PalGenderIcon_C_Setup, GenderType) == 0x000000, "Member 'WBP_PalGenderIcon_C_Setup::GenderType' has a wrong offset!");
static_assert(offsetof(WBP_PalGenderIcon_C_Setup, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_PalGenderIcon_C_Setup::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}

