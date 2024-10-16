#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "SlateCore_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.BindFromHandle
// 0x0050 (0x0050 - 0x0000)
struct WBP_InGame_Match_HPPal_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0018(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0020(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast;     // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_InGame_Match_HPPal_C_BindFromHandle");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_BindFromHandle) == 0x000050, "Wrong size on WBP_InGame_Match_HPPal_C_BindFromHandle");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000008, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_IsDead_ReturnValue) == 0x000011, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000018, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_GetHP_ReturnValue) == 0x000020, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000028, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x00002C, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000030, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000038, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000040, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_BindFromHandle, CallFunc_SetPercentForce_percent_ImplicitCast) == 0x000048, "Member 'WBP_InGame_Match_HPPal_C_BindFromHandle::CallFunc_SetPercentForce_percent_ImplicitCast' has a wrong offset!");

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.CheckState
// 0x0028 (0x0028 - 0x0000)
struct WBP_InGame_Match_HPPal_C_CheckState final
{
public:
	double                                        HPPercent;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsDead;                                            // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_CheckState) == 0x000008, "Wrong alignment on WBP_InGame_Match_HPPal_C_CheckState");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_CheckState) == 0x000028, "Wrong size on WBP_InGame_Match_HPPal_C_CheckState");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, HPPercent) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_CheckState::HPPercent' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, IsDead) == 0x000008, "Member 'WBP_InGame_Match_HPPal_C_CheckState::IsDead' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, CallFunc_LessEqual_DoubleDouble_ReturnValue) == 0x000009, "Member 'WBP_InGame_Match_HPPal_C_CheckState::CallFunc_LessEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, CallFunc_PlayAnimation_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HPPal_C_CheckState::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, CallFunc_PlayAnimation_ReturnValue_1) == 0x000018, "Member 'WBP_InGame_Match_HPPal_C_CheckState::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_CheckState, CallFunc_PlayAnimation_ReturnValue_2) == 0x000020, "Member 'WBP_InGame_Match_HPPal_C_CheckState::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.ExecuteUbergraph_WBP_InGame_Match_HPPal
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalUIDelayGaugeCalculator*             CallFunc_SpawnObject_ReturnValue;                  // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsRival;                        // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0024(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0034(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_2;                // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x0058(0x0040)(IsPlainOldData, NoDestructor)
	float                                         K2Node_Event_InDeltaTime;                          // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal) == 0x000008, "Wrong alignment on WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal) == 0x0000A0, "Wrong size on WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, EntryPoint) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, CallFunc_SpawnObject_ReturnValue) == 0x000018, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, K2Node_CustomEvent_IsRival) == 0x000020, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::K2Node_CustomEvent_IsRival' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, CallFunc_SelectColor_ReturnValue) == 0x000024, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, CallFunc_SelectColor_ReturnValue_1) == 0x000034, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, CallFunc_SelectColor_ReturnValue_2) == 0x000044, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::CallFunc_SelectColor_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, K2Node_Event_MyGeometry) == 0x000058, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, K2Node_Event_InDeltaTime) == 0x000098, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::K2Node_Event_InDeltaTime' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal, CallFunc_IsVisible_ReturnValue) == 0x00009C, "Member 'WBP_InGame_Match_HPPal_C_ExecuteUbergraph_WBP_InGame_Match_HPPal::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.On Update HP Binded
// 0x0040 (0x0040 - 0x0000)
struct WBP_InGame_Match_HPPal_C_On_Update_HP_Binded final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDead_ReturnValue;                       // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_16[0x2];                                       // 0x0016(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercent_percent_ImplicitCast;          // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded) == 0x000008, "Wrong alignment on WBP_InGame_Match_HPPal_C_On_Update_HP_Binded");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded) == 0x000040, "Wrong size on WBP_InGame_Match_HPPal_C_On_Update_HP_Binded");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, NowHP) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, NowMaxHP) == 0x000008, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000010, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_IsValid_ReturnValue) == 0x000014, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_IsDead_ReturnValue) == 0x000015, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_IsDead_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000018, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000020, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000028, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000030, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_On_Update_HP_Binded, CallFunc_SetPercent_percent_ImplicitCast) == 0x000038, "Member 'WBP_InGame_Match_HPPal_C_On_Update_HP_Binded::CallFunc_SetPercent_percent_ImplicitCast' has a wrong offset!");

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.SetIsRival
// 0x0001 (0x0001 - 0x0000)
struct WBP_InGame_Match_HPPal_C_SetIsRival final
{
public:
	bool                                          IsRival;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_SetIsRival) == 0x000001, "Wrong alignment on WBP_InGame_Match_HPPal_C_SetIsRival");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_SetIsRival) == 0x000001, "Wrong size on WBP_InGame_Match_HPPal_C_SetIsRival");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_SetIsRival, IsRival) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_SetIsRival::IsRival' has a wrong offset!");

// Function WBP_InGame_Match_HPPal.WBP_InGame_Match_HPPal_C.Tick
// 0x0048 (0x0048 - 0x0000)
struct WBP_InGame_Match_HPPal_C_Tick final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                         InDeltaTime;                                       // 0x0040(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_InGame_Match_HPPal_C_Tick) == 0x000008, "Wrong alignment on WBP_InGame_Match_HPPal_C_Tick");
static_assert(sizeof(WBP_InGame_Match_HPPal_C_Tick) == 0x000048, "Wrong size on WBP_InGame_Match_HPPal_C_Tick");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_Tick, MyGeometry) == 0x000000, "Member 'WBP_InGame_Match_HPPal_C_Tick::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_InGame_Match_HPPal_C_Tick, InDeltaTime) == 0x000040, "Member 'WBP_InGame_Match_HPPal_C_Tick::InDeltaTime' has a wrong offset!");

}

