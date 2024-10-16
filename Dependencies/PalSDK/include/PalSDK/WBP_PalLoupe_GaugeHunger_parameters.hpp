#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_PalLoupe_GaugeHunger.WBP_PalLoupe_GaugeHunger_C.SetPercent
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLoupe_GaugeHunger_C_SetPercent final
{
public:
	double                                        Percent;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLoupe_GaugeHunger_C_SetPercent) == 0x000008, "Wrong alignment on WBP_PalLoupe_GaugeHunger_C_SetPercent");
static_assert(sizeof(WBP_PalLoupe_GaugeHunger_C_SetPercent) == 0x000010, "Wrong size on WBP_PalLoupe_GaugeHunger_C_SetPercent");
static_assert(offsetof(WBP_PalLoupe_GaugeHunger_C_SetPercent, Percent) == 0x000000, "Member 'WBP_PalLoupe_GaugeHunger_C_SetPercent::Percent' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_GaugeHunger_C_SetPercent, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000008, "Member 'WBP_PalLoupe_GaugeHunger_C_SetPercent::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

