#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_GameOver_Defeat.WBP_GameOver_Defeat_C.ExecuteUbergraph_WBP_GameOver_Defeat
// 0x0058 (0x0058 - 0x0000)
struct WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1; // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1; // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat) == 0x000008, "Wrong alignment on WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat");
static_assert(sizeof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat) == 0x000058, "Wrong size on WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, EntryPoint) == 0x000000, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000028, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000030, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1) == 0x000040, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1) == 0x000048, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat, CallFunc_IsValid_ReturnValue_1) == 0x000050, "Member 'WBP_GameOver_Defeat_C_ExecuteUbergraph_WBP_GameOver_Defeat::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_GameOver_Defeat.WBP_GameOver_Defeat_C.SetDeathPenaltyMode
// 0x0038 (0x0038 - 0x0000)
struct WBP_GameOver_Defeat_C_SetDeathPenaltyMode final
{
public:
	EPalOptionWorldDeathPenalty                   PenaltyMode;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x6];                                        // 0x0002(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text_1;        // 0x0020(0x0018)()
};
static_assert(alignof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode) == 0x000008, "Wrong alignment on WBP_GameOver_Defeat_C_SetDeathPenaltyMode");
static_assert(sizeof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode) == 0x000038, "Wrong size on WBP_GameOver_Defeat_C_SetDeathPenaltyMode");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode, PenaltyMode) == 0x000000, "Member 'WBP_GameOver_Defeat_C_SetDeathPenaltyMode::PenaltyMode' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode, K2Node_SwitchEnum_CmpSuccess) == 0x000001, "Member 'WBP_GameOver_Defeat_C_SetDeathPenaltyMode::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_GameOver_Defeat_C_SetDeathPenaltyMode::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDeathPenaltyMode, CallFunc_GetLocalizedTextFromHandle_Text_1) == 0x000020, "Member 'WBP_GameOver_Defeat_C_SetDeathPenaltyMode::CallFunc_GetLocalizedTextFromHandle_Text_1' has a wrong offset!");

// Function WBP_GameOver_Defeat.WBP_GameOver_Defeat_C.SetDropPalInfo
// 0x0068 (0x0068 - 0x0000)
struct WBP_GameOver_Defeat_C_SetDropPalInfo final
{
public:
	TArray<struct FPalLogInfo_DropPal>            DropPalInfo;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0022(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x0023(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalLogInfo_DropPal                    CallFunc_Array_Get_Item;                           // 0x0028(0x0018)()
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCommonCharacterSlot_C*          CallFunc_Create_ReturnValue;                       // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_WrapSizeBox_CreatedSizeBox;               // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_GameOver_Defeat_C_SetDropPalInfo) == 0x000008, "Wrong alignment on WBP_GameOver_Defeat_C_SetDropPalInfo");
static_assert(sizeof(WBP_GameOver_Defeat_C_SetDropPalInfo) == 0x000068, "Wrong size on WBP_GameOver_Defeat_C_SetDropPalInfo");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, DropPalInfo) == 0x000000, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::DropPalInfo' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Array_IsEmpty_ReturnValue) == 0x000010, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, Temp_byte_Variable) == 0x000020, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, Temp_byte_Variable_1) == 0x000021, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, Temp_bool_Variable) == 0x000022, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, K2Node_Select_Default) == 0x000023, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000048, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_Create_ReturnValue) == 0x000050, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_WrapSizeBox_CreatedSizeBox) == 0x000058, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_WrapSizeBox_CreatedSizeBox' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetDropPalInfo, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000060, "Member 'WBP_GameOver_Defeat_C_SetDropPalInfo::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

// Function WBP_GameOver_Defeat.WBP_GameOver_Defeat_C.SetRemainingTime
// 0x0020 (0x0020 - 0x0000)
struct WBP_GameOver_Defeat_C_SetRemainingTime final
{
public:
	int32                                         RemainingSecond;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0008(0x0018)()
};
static_assert(alignof(WBP_GameOver_Defeat_C_SetRemainingTime) == 0x000008, "Wrong alignment on WBP_GameOver_Defeat_C_SetRemainingTime");
static_assert(sizeof(WBP_GameOver_Defeat_C_SetRemainingTime) == 0x000020, "Wrong size on WBP_GameOver_Defeat_C_SetRemainingTime");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetRemainingTime, RemainingSecond) == 0x000000, "Member 'WBP_GameOver_Defeat_C_SetRemainingTime::RemainingSecond' has a wrong offset!");
static_assert(offsetof(WBP_GameOver_Defeat_C_SetRemainingTime, CallFunc_Conv_IntToText_ReturnValue) == 0x000008, "Member 'WBP_GameOver_Defeat_C_SetRemainingTime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");

}

