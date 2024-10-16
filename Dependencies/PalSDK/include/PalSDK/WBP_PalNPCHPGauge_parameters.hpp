#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.BindFromHandle
// 0x0148 (0x0148 - 0x0000)
struct WBP_PalNPCHPGauge_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInstanceID                         CallFunc_GetIndividualID_ReturnValue;              // 0x0008(0x0030)(HasGetValueTypeHash)
	class FString                                 CallFunc_Convert_PalInstanceIDToString_ReturnValue; // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00C0(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsRarePal_ReturnValue;                    // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D1[0x7];                                       // 0x00D1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00D8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00F0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0100(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0108(0x0008)(NoDestructor)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0118(0x0008)(NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x3];                                      // 0x0121(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0124(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0128(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0138(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SetHPPercent_Force_percent_ImplicitCast;  // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_BindFromHandle");
static_assert(sizeof(WBP_PalNPCHPGauge_C_BindFromHandle) == 0x000148, "Wrong size on WBP_PalNPCHPGauge_C_BindFromHandle");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_GetIndividualID_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_GetIndividualID_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Convert_PalInstanceIDToString_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Convert_PalInstanceIDToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, K2Node_MakeArray_Array) == 0x0000C0, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_IsRarePal_ReturnValue) == 0x0000D0, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_IsRarePal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Format_ReturnValue) == 0x0000D8, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Conv_TextToString_ReturnValue) == 0x0000F0, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_GetHP_ReturnValue) == 0x000100, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000108, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000110, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000118, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000120, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000124, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000128, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000138, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_BindFromHandle, CallFunc_SetHPPercent_Force_percent_ImplicitCast) == 0x000140, "Member 'WBP_PalNPCHPGauge_C_BindFromHandle::CallFunc_SetHPPercent_Force_percent_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.ExecuteUbergraph_WBP_PalNPCHPGauge
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable;                                // 0x0014(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0015(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_1;                              // 0x0016(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_2;                              // 0x0017(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsOtomo_isOtomo;                          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              Temp_byte_Variable_3;                              // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsBaseCampPal_ReturnValue;                // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x007A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default;                             // 0x007B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(double NowSanity, double NowMaxSanity)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x007C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8D[0x3];                                       // 0x008D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle_1;           // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x00AA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ESlateVisibility                              K2Node_Select_Default_1;                           // 0x00AB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_6;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00C0(0x0008)(NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C9[0x7];                                       // 0x00C9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x00D0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge");
static_assert(sizeof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge) == 0x0000D8, "Wrong size on WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, EntryPoint) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_byte_Variable) == 0x000014, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_bool_Variable) == 0x000015, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_byte_Variable_1) == 0x000016, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_byte_Variable_2) == 0x000017, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_byte_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_GetGameSetting_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_IsOtomo_isOtomo) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_IsOtomo_isOtomo' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000021, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000024, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_2) == 0x000034, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_3) == 0x000044, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_GetPalmi_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_GetBindedHandle_targetHandle) == 0x000060, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000070, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_byte_Variable_3) == 0x000078, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_byte_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_IsBaseCampPal_ReturnValue) == 0x000079, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_IsBaseCampPal_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_IsFriend_ReturnValue) == 0x00007A, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_Select_Default) == 0x00007B, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_4) == 0x00007C, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_Not_PreBool_ReturnValue) == 0x00008C, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_5) == 0x000090, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_GetBindedHandle_targetHandle_1) == 0x0000A0, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_GetBindedHandle_targetHandle_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, Temp_bool_Variable_1) == 0x0000A8, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x0000A9, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_Not_PreBool_ReturnValue_1) == 0x0000AA, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_Select_Default_1) == 0x0000AB, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000AC, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000C0, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_K2_IsValidTimerHandle_ReturnValue_1) == 0x0000C8, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_K2_IsValidTimerHandle_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge, CallFunc_GetGameSetting_ReturnValue_1) == 0x0000D0, "Member 'WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsDead
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalNPCHPGauge_C_IsDead final
{
public:
	bool                                          IsDead_0;                                          // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_IsDead) == 0x000001, "Wrong alignment on WBP_PalNPCHPGauge_C_IsDead");
static_assert(sizeof(WBP_PalNPCHPGauge_C_IsDead) == 0x000001, "Wrong size on WBP_PalNPCHPGauge_C_IsDead");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsDead, IsDead_0) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_IsDead::IsDead_0' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsFriend
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalNPCHPGauge_C_IsFriend final
{
public:
	bool                                          IsFriend_0;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_IsFriend) == 0x000001, "Wrong alignment on WBP_PalNPCHPGauge_C_IsFriend");
static_assert(sizeof(WBP_PalNPCHPGauge_C_IsFriend) == 0x000001, "Wrong size on WBP_PalNPCHPGauge_C_IsFriend");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsFriend, IsFriend_0) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_IsFriend::IsFriend_0' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsOtomo
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalNPCHPGauge_C_IsOtomo final
{
public:
	bool                                          IsOtomo_0;                                         // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterHandle*>  CallFunc_GetAllIndividualHandle_OutArray;          // 0x0040(0x0010)(ReferenceParm)
	class UPalIndividualCharacterHandle*          CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue_1;  // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_IsOtomo) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_IsOtomo");
static_assert(sizeof(WBP_PalNPCHPGauge_C_IsOtomo) == 0x000070, "Wrong size on WBP_PalNPCHPGauge_C_IsOtomo");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, IsOtomo_0) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::IsOtomo_0' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_GetBindedHandle_targetHandle) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_IsValid_ReturnValue_1) == 0x000028, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_IsValid_ReturnValue_2) == 0x000038, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_GetAllIndividualHandle_OutArray) == 0x000040, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_GetAllIndividualHandle_OutArray' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_TryGetIndividualParameter_ReturnValue_1) == 0x000060, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_TryGetIndividualParameter_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_Less_IntInt_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_IsOtomo, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000069, "Member 'WBP_PalNPCHPGauge_C_IsOtomo::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.On Update Level Binded
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalNPCHPGauge_C_On_Update_Level_Binded final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalDatabaseCharacterParameter*         CallFunc_GetDatabaseCharacterParameter_ReturnValue; // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_HigherLevelOtomoFromTrainer_ReturnValue;  // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetLevel_ReturnValue;                     // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x2];                                       // 0x004A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_GetLevel_ReturnValue_1;                   // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_On_Update_Level_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded) == 0x000058, "Wrong size on WBP_PalNPCHPGauge_C_On_Update_Level_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, NewLevel) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::NewLevel' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetDatabaseCharacterParameter_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetDatabaseCharacterParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_HigherLevelOtomoFromTrainer_ReturnValue) == 0x00002C, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_HigherLevelOtomoFromTrainer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetLevel_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetLevel_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_Less_IntInt_ReturnValue) == 0x000034, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetGameSetting_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetPalmi_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_IsFriend_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_Not_PreBool_ReturnValue) == 0x000049, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GetLevel_ReturnValue_1) == 0x00004C, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GetLevel_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_Subtract_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000054, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Level_Binded, CallFunc_BooleanAND_ReturnValue) == 0x000055, "Member 'WBP_PalNPCHPGauge_C_On_Update_Level_Binded::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.On Update Sanity Binded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded final
{
public:
	double                                        NowSanity;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        NowMaxSanity;                                      // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded) == 0x000010, "Wrong size on WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded, NowSanity) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded::NowSanity' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded, NowMaxSanity) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded::NowMaxSanity' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnBattleModeChanged
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnBattleModeChanged final
{
public:
	bool                                          bIsBattleMode;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnBattleModeChanged) == 0x000001, "Wrong alignment on WBP_PalNPCHPGauge_C_OnBattleModeChanged");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnBattleModeChanged) == 0x000001, "Wrong size on WBP_PalNPCHPGauge_C_OnBattleModeChanged");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnBattleModeChanged, bIsBattleMode) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnBattleModeChanged::bIsBattleMode' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnDead
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnDead final
{
public:
	struct FPalDeadInfo                           DeadInfo;                                          // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnDead) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnDead");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnDead) == 0x000050, "Wrong size on WBP_PalNPCHPGauge_C_OnDead");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnDead, DeadInfo) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnDead::DeadInfo' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnDelayClose__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature) == 0x000008, "Wrong size on WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnTakeDamage
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnTakeDamage final
{
public:
	struct FPalDamageResult                       DamageResult;                                      // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnTakeDamage) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnTakeDamage");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnTakeDamage) == 0x000058, "Wrong size on WBP_PalNPCHPGauge_C_OnTakeDamage");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTakeDamage, DamageResult) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnTakeDamage::DamageResult' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTakeDamage, CallFunc_Greater_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_OnTakeDamage::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnTimer_CheckActor
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnTimer_CheckActor final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnTimer_CheckActor");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor) == 0x000018, "Wrong size on WBP_PalNPCHPGauge_C_OnTimer_CheckActor");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnTimer_CheckActor::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_OnTimer_CheckActor::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_OnTimer_CheckActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnTimer_CheckActor, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PalNPCHPGauge_C_OnTimer_CheckActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateCondition_Binded
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x0008(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded) == 0x000018, "Wrong size on WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded, CallFunc_GetUIDisplayPalCondition_outArray) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_OnUpdateCondition_Binded::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateHP_Binded
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnUpdateHP_Binded final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue; // 0x0010(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SetHPPercent_percent_ImplicitCast;        // 0x0020(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnUpdateHP_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded) == 0x000030, "Wrong size on WBP_PalNPCHPGauge_C_OnUpdateHP_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, NowHP) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, NowMaxHP) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::NowMaxHP' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::CallFunc_Divide_FixedPoint64FixedPoint64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, CallFunc_EqualEqual_DoubleDouble_ReturnValue) == 0x00001C, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::CallFunc_EqualEqual_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, CallFunc_SetHPPercent_percent_ImplicitCast) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::CallFunc_SetHPPercent_percent_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateHP_Binded, CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast) == 0x000028, "Member 'WBP_PalNPCHPGauge_C_OnUpdateHP_Binded::CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateNickName_Binded
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded) == 0x000028, "Wrong size on WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded, NewNickName) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateTalent_Binded
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded final
{
public:
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue; // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded");
static_assert(sizeof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded) == 0x000020, "Wrong size on WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded, CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded::CallFunc_CanCheckPalTalentsByInventoryItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded, CallFunc_GetBindedHandle_targetHandle) == 0x000010, "Member 'WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_OnUpdateTalent_Binded::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetupByActor
// 0x00D8 (0x00D8 - 0x0000)
struct WBP_PalNPCHPGauge_C_SetupByActor final
{
public:
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDeadInfo& DeadInfo)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsBattleMode)>           K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetBattleMode_ReturnValue;                // 0x004A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4B[0x5];                                       // 0x004B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalFlyMeshHeightCtrlComponent*         CallFunc_GetComponentByClass_ReturnValue;          // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                       CallFunc_GetImportedBounds_ReturnValue;            // 0x0068(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                                CallFunc_BreakBoxSphereBounds_Origin;              // 0x00A0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x00B8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_SetupByActor) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_SetupByActor");
static_assert(sizeof(WBP_PalNPCHPGauge_C_SetupByActor) == 0x0000D8, "Wrong size on WBP_PalNPCHPGauge_C_SetupByActor");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetPalmi_ReturnValue) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetBindedHandle_targetHandle) == 0x000038, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000040, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_IsValid_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_IsFriend_ReturnValue) == 0x000049, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetBattleMode_ReturnValue) == 0x00004A, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetBattleMode_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetComponentByClass_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetComponentByClass_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_IsValid_ReturnValue_1) == 0x000058, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_IsValid_ReturnValue_2) == 0x000059, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000060, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_GetImportedBounds_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_GetImportedBounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_Origin) == 0x0000A0, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_Origin' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_BoxExtent) == 0x0000B8, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_SphereRadius) == 0x0000D0, "Member 'WBP_PalNPCHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_SphereRadius' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Update Gauge Type
// 0x0360 (0x0360 - 0x0000)
struct WBP_PalNPCHPGauge_C_Update_Gauge_Type final
{
public:
	bool                                          Temp_bool_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 Temp_string_Variable;                              // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0018(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGroupManager*                       CallFunc_GetGroupManager_ReturnValue;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetGroupId_ReturnValue;                   // 0x0058(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalIndividualCharacterSaveParameter   CallFunc_GetSaveParameter_ReturnValue;             // 0x0068(0x02A8)(ConstParm)
	class FString                                 CallFunc_TryGetGuildName_OutGuildName;             // 0x0310(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetGuildName_ReturnValue;              // 0x0320(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_321[0x3];                                      // 0x0321(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGuid                                  CallFunc_GetSaveParameterValue_OwnerPlayerUId_ReturnValue; // 0x0324(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0334(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_Guid_ReturnValue;                 // 0x0335(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_336[0x2];                                      // 0x0336(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0338(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 K2Node_Select_Default;                             // 0x0348(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_BoolBool_ReturnValue;            // 0x0358(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_Update_Gauge_Type) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_Update_Gauge_Type");
static_assert(sizeof(WBP_PalNPCHPGauge_C_Update_Gauge_Type) == 0x000360, "Wrong size on WBP_PalNPCHPGauge_C_Update_Gauge_Type");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, Temp_bool_Variable) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, Temp_string_Variable) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::Temp_string_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetLocalizedText_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_Conv_TextToString_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetBindedHandle_targetHandle) == 0x000040, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetGroupManager_ReturnValue) == 0x000048, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetGroupManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetGroupId_ReturnValue) == 0x000058, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetGroupId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetSaveParameter_ReturnValue) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetSaveParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_TryGetGuildName_OutGuildName) == 0x000310, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_TryGetGuildName_OutGuildName' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_TryGetGuildName_ReturnValue) == 0x000320, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_TryGetGuildName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_GetSaveParameterValue_OwnerPlayerUId_ReturnValue) == 0x000324, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_GetSaveParameterValue_OwnerPlayerUId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_IsEmpty_ReturnValue) == 0x000334, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_IsValid_Guid_ReturnValue) == 0x000335, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_IsValid_Guid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_SelectString_ReturnValue) == 0x000338, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_SelectString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, K2Node_Select_Default) == 0x000348, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Update_Gauge_Type, CallFunc_NotEqual_BoolBool_ReturnValue) == 0x000358, "Member 'WBP_PalNPCHPGauge_C_Update_Gauge_Type::CallFunc_NotEqual_BoolBool_ReturnValue' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.UpdateForTick
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalNPCHPGauge_C_UpdateForTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_UpdateForTick) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_UpdateForTick");
static_assert(sizeof(WBP_PalNPCHPGauge_C_UpdateForTick) == 0x000008, "Wrong size on WBP_PalNPCHPGauge_C_UpdateForTick");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateForTick, DeltaTime) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_UpdateForTick::DeltaTime' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.UpdateWidgetPosition
// 0x01D0 (0x01D0 - 0x0000)
struct WBP_PalNPCHPGauge_C_UpdateWidgetPosition final
{
public:
	struct FVector                                TmpLocation;                                       // 0x0000(0x0018)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x6];                                       // 0x0022(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetDefaultMeshLocationZ_ReturnValue;      // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_35[0x3];                                       // 0x0035(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSkeletalMeshComponent*              CallFunc_GetMainMesh_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0078(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x0090(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_2;                          // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_2;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_2;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Add_VectorVector_ReturnValue;             // 0x00C0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFlying_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D9[0x7];                                       // 0x00D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_X;                          // 0x00E8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x00F0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x00F8(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0110(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0128(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x0140(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_3;                          // 0x0148(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_3;                          // 0x0150(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_3;                          // 0x0158(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x0160(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x0168(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x0170(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x0178(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0180(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_181[0x7];                                      // 0x0181(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue_1;                 // 0x0188(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x01A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x01A8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x01B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1B9[0x7];                                      // 0x01B9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x01C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x01C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_UpdateWidgetPosition");
static_assert(sizeof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition) == 0x0001D0, "Wrong size on WBP_PalNPCHPGauge_C_UpdateWidgetPosition");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, TmpLocation) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::TmpLocation' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetBindedHandle_targetHandle) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_IsValid_ReturnValue) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_IsValid_ReturnValue_1) == 0x000021, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000028, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetDefaultMeshLocationZ_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetDefaultMeshLocationZ_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_IsValid_ReturnValue_2) == 0x000034, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetMainMesh_ReturnValue) == 0x000038, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetMainMesh_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X) == 0x000040, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y) == 0x000048, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z) == 0x000050, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X_1) == 0x000058, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y_1) == 0x000060, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z_1) == 0x000068, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x000070, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000078, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_MakeVector_ReturnValue) == 0x000090, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X_2) == 0x0000A8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y_2) == 0x0000B0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z_2) == 0x0000B8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Add_VectorVector_ReturnValue) == 0x0000C0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Add_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_IsFlying_ReturnValue) == 0x0000D8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_IsFlying_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000E0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector2D_X) == 0x0000E8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector2D_Y) == 0x0000F0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetActorRightVector_ReturnValue) == 0x0000F8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000110, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000128, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x000140, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X_3) == 0x000148, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y_3) == 0x000150, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z_3) == 0x000158, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue) == 0x000160, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x000168, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x000170, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x000178, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_IsVisible_ReturnValue) == 0x000180, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_MakeVector_ReturnValue_1) == 0x000188, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_MakeVector_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x0001A0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x0001A8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x0001B8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Subtract_DoubleDouble_B_ImplicitCast) == 0x0001C0, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Subtract_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_UpdateWidgetPosition, CallFunc_Multiply_DoubleDouble_A_ImplicitCast) == 0x0001C8, "Member 'WBP_PalNPCHPGauge_C_UpdateWidgetPosition::CallFunc_Multiply_DoubleDouble_A_ImplicitCast' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Set Work Suitability
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalNPCHPGauge_C_Set_Work_Suitability final
{
public:
	TMap<EPalWorkSuitability, int32>              WorkSuitabilities;                                 // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_Set_Work_Suitability) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_Set_Work_Suitability");
static_assert(sizeof(WBP_PalNPCHPGauge_C_Set_Work_Suitability) == 0x000050, "Wrong size on WBP_PalNPCHPGauge_C_Set_Work_Suitability");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Set_Work_Suitability, WorkSuitabilities) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_Set_Work_Suitability::WorkSuitabilities' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetElementType
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalNPCHPGauge_C_SetElementType final
{
public:
	EPalElementType                               Type1;                                             // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               Type2;                                             // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_SetElementType) == 0x000001, "Wrong alignment on WBP_PalNPCHPGauge_C_SetElementType");
static_assert(sizeof(WBP_PalNPCHPGauge_C_SetElementType) == 0x000002, "Wrong size on WBP_PalNPCHPGauge_C_SetElementType");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetElementType, Type1) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_SetElementType::Type1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetElementType, Type2) == 0x000001, "Member 'WBP_PalNPCHPGauge_C_SetElementType::Type2' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetGender
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalNPCHPGauge_C_SetGender final
{
public:
	EPalGenderType                                GenderType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_SetGender) == 0x000001, "Wrong alignment on WBP_PalNPCHPGauge_C_SetGender");
static_assert(sizeof(WBP_PalNPCHPGauge_C_SetGender) == 0x000001, "Wrong size on WBP_PalNPCHPGauge_C_SetGender");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetGender, GenderType) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_SetGender::GenderType' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetRank
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalNPCHPGauge_C_SetRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_SetRank) == 0x000004, "Wrong alignment on WBP_PalNPCHPGauge_C_SetRank");
static_assert(sizeof(WBP_PalNPCHPGauge_C_SetRank) == 0x000004, "Wrong size on WBP_PalNPCHPGauge_C_SetRank");
static_assert(offsetof(WBP_PalNPCHPGauge_C_SetRank, Rank) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_SetRank::Rank' has a wrong offset!");

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Unbind
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalNPCHPGauge_C_Unbind final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalDamageResult& DamageResult)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(bool bIsBattleMode)>           K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalNPCHPGauge_C_Unbind) == 0x000008, "Wrong alignment on WBP_PalNPCHPGauge_C_Unbind");
static_assert(sizeof(WBP_PalNPCHPGauge_C_Unbind) == 0x000038, "Wrong size on WBP_PalNPCHPGauge_C_Unbind");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Unbind, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PalNPCHPGauge_C_Unbind::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Unbind, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalNPCHPGauge_C_Unbind::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Unbind, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000018, "Member 'WBP_PalNPCHPGauge_C_Unbind::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Unbind, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PalNPCHPGauge_C_Unbind::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalNPCHPGauge_C_Unbind, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalNPCHPGauge_C_Unbind::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

