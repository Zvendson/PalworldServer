#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.ExecuteUbergraph_WBP_IngameHungerGauge
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge) == 0x000008, "Wrong alignment on WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge");
static_assert(sizeof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge) == 0x000028, "Wrong size on WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge");
static_assert(offsetof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge, EntryPoint) == 0x000000, "Member 'WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge, CallFunc_PlayAnimation_ReturnValue_2) == 0x000018, "Member 'WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge, CallFunc_PlayAnimation_ReturnValue_3) == 0x000020, "Member 'WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");

// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameHungerGauge_C_SetHunger final
{
public:
	struct FFixedPoint                            NowHunger;                                         // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                            MaxHunger;                                         // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint                            CallFunc_Divide_FixedPointFixedPoint_ReturnValue;  // 0x0008(0x0004)(NoDestructor)
	float                                         CallFunc_Convert_FixedPointToFloat_ReturnValue;    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameHungerGauge_C_SetHunger) == 0x000004, "Wrong alignment on WBP_IngameHungerGauge_C_SetHunger");
static_assert(sizeof(WBP_IngameHungerGauge_C_SetHunger) == 0x000010, "Wrong size on WBP_IngameHungerGauge_C_SetHunger");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger, NowHunger) == 0x000000, "Member 'WBP_IngameHungerGauge_C_SetHunger::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger, MaxHunger) == 0x000004, "Member 'WBP_IngameHungerGauge_C_SetHunger::MaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger, CallFunc_Divide_FixedPointFixedPoint_ReturnValue) == 0x000008, "Member 'WBP_IngameHungerGauge_C_SetHunger::CallFunc_Divide_FixedPointFixedPoint_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger, CallFunc_Convert_FixedPointToFloat_ReturnValue) == 0x00000C, "Member 'WBP_IngameHungerGauge_C_SetHunger::CallFunc_Convert_FixedPointToFloat_ReturnValue' has a wrong offset!");

// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger_ByRate
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameHungerGauge_C_SetHunger_ByRate final
{
public:
	double                                        Rate;                                              // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameHungerGauge_C_SetHunger_ByRate) == 0x000008, "Wrong alignment on WBP_IngameHungerGauge_C_SetHunger_ByRate");
static_assert(sizeof(WBP_IngameHungerGauge_C_SetHunger_ByRate) == 0x000010, "Wrong size on WBP_IngameHungerGauge_C_SetHunger_ByRate");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger_ByRate, Rate) == 0x000000, "Member 'WBP_IngameHungerGauge_C_SetHunger_ByRate::Rate' has a wrong offset!");
static_assert(offsetof(WBP_IngameHungerGauge_C_SetHunger_ByRate, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000008, "Member 'WBP_IngameHungerGauge_C_SetHunger_ByRate::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");

}

