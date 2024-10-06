#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetHIdeWhenZeroFlag
// 0x0001 (0x0001 - 0x0000)
struct WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag final
{
public:
	bool                                          IsHideWhenZero;                                    // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag) == 0x000001, "Wrong alignment on WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag");
static_assert(sizeof(WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag) == 0x000001, "Wrong size on WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag, IsHideWhenZero) == 0x000000, "Member 'WBP_IngameMenu_TaskMaterial_C_SetHIdeWhenZeroFlag::IsHideWhenZero' has a wrong offset!");

// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetItemNum
// 0x0060 (0x0060 - 0x0000)
struct WBP_IngameMenu_TaskMaterial_C_SetItemNum final
{
public:
	int64                                         ItemNum;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         GaugeMaxBorderNum;                                 // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Conv_Int64ToDouble_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_Int64ToText_ReturnValue;             // 0x0018(0x0018)()
	double                                        CallFunc_Conv_Int64ToDouble_ReturnValue_1;         // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_GetLinearColorValue_ReturnValue;          // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_InPercent_ImplicitCast;        // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetLinearColorValue_InTime_ImplicitCast;  // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_TaskMaterial_C_SetItemNum) == 0x000008, "Wrong alignment on WBP_IngameMenu_TaskMaterial_C_SetItemNum");
static_assert(sizeof(WBP_IngameMenu_TaskMaterial_C_SetItemNum) == 0x000060, "Wrong size on WBP_IngameMenu_TaskMaterial_C_SetItemNum");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, ItemNum) == 0x000000, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::ItemNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, GaugeMaxBorderNum) == 0x000008, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::GaugeMaxBorderNum' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_Conv_Int64ToDouble_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_Conv_Int64ToDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_Conv_Int64ToText_ReturnValue) == 0x000018, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_Conv_Int64ToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_Conv_Int64ToDouble_ReturnValue_1) == 0x000030, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_Conv_Int64ToDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x000040, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_GetLinearColorValue_ReturnValue) == 0x000044, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_GetLinearColorValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_SetPercent_InPercent_ImplicitCast) == 0x000054, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_SetPercent_InPercent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetItemNum, CallFunc_GetLinearColorValue_InTime_ImplicitCast) == 0x000058, "Member 'WBP_IngameMenu_TaskMaterial_C_SetItemNum::CallFunc_GetLinearColorValue_InTime_ImplicitCast' has a wrong offset!");

// Function WBP_IngameMenu_TaskMaterial.WBP_IngameMenu_TaskMaterial_C.SetupTexture
// 0x0008 (0x0008 - 0x0000)
struct WBP_IngameMenu_TaskMaterial_C_SetupTexture final
{
public:
	class FName                                   StaticItemId;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_IngameMenu_TaskMaterial_C_SetupTexture) == 0x000004, "Wrong alignment on WBP_IngameMenu_TaskMaterial_C_SetupTexture");
static_assert(sizeof(WBP_IngameMenu_TaskMaterial_C_SetupTexture) == 0x000008, "Wrong size on WBP_IngameMenu_TaskMaterial_C_SetupTexture");
static_assert(offsetof(WBP_IngameMenu_TaskMaterial_C_SetupTexture, StaticItemId) == 0x000000, "Member 'WBP_IngameMenu_TaskMaterial_C_SetupTexture::StaticItemId' has a wrong offset!");

}

