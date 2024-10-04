#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalLoupe.WBP_PalLoupe_C.ExecuteUbergraph_WBP_PalLoupe
// 0x0024 (0x0024 - 0x0000)
struct WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowHunger, double NowMaxHunger)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe) == 0x000004, "Wrong alignment on WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe");
static_assert(sizeof(WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe) == 0x000024, "Wrong size on WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe");
static_assert(offsetof(WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe, EntryPoint) == 0x000000, "Member 'WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalLoupe_C_ExecuteUbergraph_WBP_PalLoupe::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_PalLoupe.WBP_PalLoupe_C.SetTargetPal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalLoupe_C_SetTargetPal final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLoupe_C_SetTargetPal) == 0x000008, "Wrong alignment on WBP_PalLoupe_C_SetTargetPal");
static_assert(sizeof(WBP_PalLoupe_C_SetTargetPal) == 0x000010, "Wrong size on WBP_PalLoupe_C_SetTargetPal");
static_assert(offsetof(WBP_PalLoupe_C_SetTargetPal, TargetSlot) == 0x000000, "Member 'WBP_PalLoupe_C_SetTargetPal::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_SetTargetPal, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalLoupe_C_SetTargetPal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHP
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalLoupe_C_UpdateHP final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetPercent_percent_ImplicitCast;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLoupe_C_UpdateHP) == 0x000008, "Wrong alignment on WBP_PalLoupe_C_UpdateHP");
static_assert(sizeof(WBP_PalLoupe_C_UpdateHP) == 0x000028, "Wrong size on WBP_PalLoupe_C_UpdateHP");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHP, NowHP) == 0x000000, "Member 'WBP_PalLoupe_C_UpdateHP::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHP, NowMaxHP) == 0x000008, "Member 'WBP_PalLoupe_C_UpdateHP::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHP, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PalLoupe_C_UpdateHP::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHP, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000018, "Member 'WBP_PalLoupe_C_UpdateHP::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHP, CallFunc_SetPercent_percent_ImplicitCast) == 0x000020, "Member 'WBP_PalLoupe_C_UpdateHP::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_PalLoupe.WBP_PalLoupe_C.UpdateHunger
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalLoupe_C_UpdateHunger final
{
public:
	double                                        NowHunger;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxHunger;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLoupe_C_UpdateHunger) == 0x000008, "Wrong alignment on WBP_PalLoupe_C_UpdateHunger");
static_assert(sizeof(WBP_PalLoupe_C_UpdateHunger) == 0x000018, "Wrong size on WBP_PalLoupe_C_UpdateHunger");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHunger, NowHunger) == 0x000000, "Member 'WBP_PalLoupe_C_UpdateHunger::NowHunger' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHunger, NowMaxHunger) == 0x000008, "Member 'WBP_PalLoupe_C_UpdateHunger::NowMaxHunger' has a wrong offset!");
static_assert(offsetof(WBP_PalLoupe_C_UpdateHunger, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000010, "Member 'WBP_PalLoupe_C_UpdateHunger::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");

}

