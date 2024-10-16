#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"
#include "Engine_structs.hpp"
#include "E_PalUIGuildHPGaugeDisplayType_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.BindFromHandle
// 0x0088 (0x0088 - 0x0000)
struct WBP_PlayerHPGauge_C_BindFromHandle final
{
public:
	class UPalIndividualCharacterHandle*          TargetHandle;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1A[0x6];                                       // 0x001A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFixedPoint64                          CallFunc_GetMaxHP_withBuff_ReturnValue;            // 0x0020(0x0008)(NoDestructor)
	struct FFixedPoint64                          CallFunc_GetHP_ReturnValue;                        // 0x0028(0x0008)(NoDestructor)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue;  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1; // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0050(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x0068(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetPercentForce_percent_ImplicitCast;     // 0x0080(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_BindFromHandle) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_BindFromHandle");
static_assert(sizeof(WBP_PlayerHPGauge_C_BindFromHandle) == 0x000088, "Wrong size on WBP_PlayerHPGauge_C_BindFromHandle");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, TargetHandle) == 0x000000, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::TargetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_IsValid_ReturnValue_1) == 0x000019, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_GetMaxHP_withBuff_ReturnValue) == 0x000020, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_GetMaxHP_withBuff_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_GetHP_ReturnValue) == 0x000028, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_GetHP_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue) == 0x000030, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1) == 0x000034, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_Convert_FixedPoint64ToFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_Divide_DoubleDouble_ReturnValue) == 0x000038, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_Divide_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000050, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, K2Node_CreateDelegate_OutputDelegate_1) == 0x000058, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x000068, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_Divide_DoubleDouble_B_ImplicitCast) == 0x000070, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_Divide_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_Divide_DoubleDouble_A_ImplicitCast) == 0x000078, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_Divide_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_BindFromHandle, CallFunc_SetPercentForce_percent_ImplicitCast) == 0x000080, "Member 'WBP_PlayerHPGauge_C_BindFromHandle::CallFunc_SetPercentForce_percent_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.ExecuteUbergraph_WBP_PlayerHPGauge
// 0x0040 (0x0040 - 0x0000)
struct WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 NewLevel)>               K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge");
static_assert(sizeof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge) == 0x000040, "Wrong size on WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge");
static_assert(offsetof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge, EntryPoint) == 0x000000, "Member 'WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge, CallFunc_GetGameSetting_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.On Timer Event Check Guild
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild final
{
public:
	E_PalUIGuildHPGaugeDisplayType                Temp_byte_Variable;                                // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PalUIGuildHPGaugeDisplayType                Temp_byte_Variable_1;                              // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3[0x5];                                        // 0x0003(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x0008(0x0018)()
	class UPalGroupManager*                       CallFunc_GetGroupManager_ReturnValue;              // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class APalPlayerCharacter*                    CallFunc_GetPalmi_ReturnValue;                     // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsFriend_ReturnValue;                     // 0x0052(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_53[0x5];                                       // 0x0053(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterParameter*       CallFunc_TryGetIndividualParameter_ReturnValue;    // 0x0058(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                  CallFunc_GetGroupId_ReturnValue;                   // 0x0060(0x0010)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_PalUIGuildHPGaugeDisplayType                K2Node_Select_Default;                             // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x7];                                       // 0x0071(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_TryGetGuildName_OutGuildName;             // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetGuildName_ReturnValue;              // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_8A[0x6];                                       // 0x008A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_SelectString_ReturnValue;                 // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild");
static_assert(sizeof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild) == 0x0000A0, "Wrong size on WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, Temp_byte_Variable) == 0x000000, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, Temp_byte_Variable_1) == 0x000001, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, Temp_bool_Variable) == 0x000002, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_GetLocalizedText_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_GetGroupManager_ReturnValue) == 0x000020, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_GetGroupManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_Conv_TextToString_ReturnValue) == 0x000028, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_GetPalmi_ReturnValue) == 0x000038, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_GetPalmi_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_GetBindedHandle_targetHandle) == 0x000040, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000048, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_IsValid_ReturnValue) == 0x000050, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_IsValid_ReturnValue_1) == 0x000051, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_IsFriend_ReturnValue) == 0x000052, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_IsFriend_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_TryGetIndividualParameter_ReturnValue) == 0x000058, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_TryGetIndividualParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_GetGroupId_ReturnValue) == 0x000060, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_GetGroupId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, K2Node_Select_Default) == 0x000070, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_TryGetGuildName_OutGuildName) == 0x000078, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_TryGetGuildName_OutGuildName' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_TryGetGuildName_ReturnValue) == 0x000088, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_TryGetGuildName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_IsEmpty_ReturnValue) == 0x000089, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild, CallFunc_SelectString_ReturnValue) == 0x000090, "Member 'WBP_PlayerHPGauge_C_On_Timer_Event_Check_Guild::CallFunc_SelectString_ReturnValue' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnDelayClose__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature) == 0x000008, "Wrong size on WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnDyingEnd
// 0x0014 (0x0014 - 0x0000)
struct WBP_PlayerHPGauge_C_OnDyingEnd final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnDyingEnd) == 0x000004, "Wrong alignment on WBP_PlayerHPGauge_C_OnDyingEnd");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnDyingEnd) == 0x000014, "Wrong size on WBP_PlayerHPGauge_C_OnDyingEnd");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnDyingEnd, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnDyingEnd::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnDyingEnd, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_OnDyingEnd::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnTimerEvent_CheckActor
// 0x0020 (0x0020 - 0x0000)
struct WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor) == 0x000020, "Wrong size on WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor, CallFunc_IsValid_ReturnValue_1) == 0x000018, "Member 'WBP_PlayerHPGauge_C_OnTimerEvent_CheckActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateHP_Binded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerHPGauge_C_OnUpdateHP_Binded final
{
public:
	struct FFixedPoint64                          NowHP;                                             // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFixedPoint64                          NowMaxHP;                                          // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnUpdateHP_Binded) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_OnUpdateHP_Binded");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnUpdateHP_Binded) == 0x000010, "Wrong size on WBP_PlayerHPGauge_C_OnUpdateHP_Binded");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnUpdateHP_Binded, NowHP) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnUpdateHP_Binded::NowHP' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnUpdateHP_Binded, NowMaxHP) == 0x000008, "Member 'WBP_PlayerHPGauge_C_OnUpdateHP_Binded::NowMaxHP' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateLevel_binded
// 0x0004 (0x0004 - 0x0000)
struct WBP_PlayerHPGauge_C_OnUpdateLevel_binded final
{
public:
	int32                                         NewLevel;                                          // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnUpdateLevel_binded) == 0x000004, "Wrong alignment on WBP_PlayerHPGauge_C_OnUpdateLevel_binded");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnUpdateLevel_binded) == 0x000004, "Wrong size on WBP_PlayerHPGauge_C_OnUpdateLevel_binded");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnUpdateLevel_binded, NewLevel) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnUpdateLevel_binded::NewLevel' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateNickName_Binded
// 0x0010 (0x0010 - 0x0000)
struct WBP_PlayerHPGauge_C_OnUpdateNickName_Binded final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_OnUpdateNickName_Binded) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_OnUpdateNickName_Binded");
static_assert(sizeof(WBP_PlayerHPGauge_C_OnUpdateNickName_Binded) == 0x000010, "Wrong size on WBP_PlayerHPGauge_C_OnUpdateNickName_Binded");
static_assert(offsetof(WBP_PlayerHPGauge_C_OnUpdateNickName_Binded, NewNickName) == 0x000000, "Member 'WBP_PlayerHPGauge_C_OnUpdateNickName_Binded::NewNickName' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.SetupByActor
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_PlayerHPGauge_C_SetupByActor final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USkeletalMesh*                          CallFunc_GetSkeletalMeshAsset_ReturnValue;         // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FBoxSphereBounds                       CallFunc_GetImportedBounds_ReturnValue;            // 0x0020(0x0038)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                        CallFunc_BreakVector_X;                            // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x0068(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakBoxSphereBounds_Origin;              // 0x0070(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_BreakBoxSphereBounds_BoxExtent;           // 0x0088(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_BreakBoxSphereBounds_SphereRadius;        // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00A4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A5[0x3];                                       // 0x00A5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_VariableSet_ImportedSphereRadius_ImplicitCast; // 0x00B8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_SetupByActor) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_SetupByActor");
static_assert(sizeof(WBP_PlayerHPGauge_C_SetupByActor) == 0x0000C0, "Wrong size on WBP_PlayerHPGauge_C_SetupByActor");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_GetSkeletalMeshAsset_ReturnValue) == 0x000018, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_GetSkeletalMeshAsset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_GetImportedBounds_ReturnValue) == 0x000020, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_GetImportedBounds_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakVector_X) == 0x000058, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakVector_Y) == 0x000060, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakVector_Z) == 0x000068, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_Origin) == 0x000070, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_Origin' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_BoxExtent) == 0x000088, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_BoxExtent' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_BreakBoxSphereBounds_SphereRadius) == 0x0000A0, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_BreakBoxSphereBounds_SphereRadius' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_IsValid_ReturnValue_1) == 0x0000A4, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_Multiply_DoubleDouble_ReturnValue) == 0x0000A8, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_Multiply_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, CallFunc_Multiply_DoubleDouble_B_ImplicitCast) == 0x0000B0, "Member 'WBP_PlayerHPGauge_C_SetupByActor::CallFunc_Multiply_DoubleDouble_B_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupByActor, K2Node_VariableSet_ImportedSphereRadius_ImplicitCast) == 0x0000B8, "Member 'WBP_PlayerHPGauge_C_SetupByActor::K2Node_VariableSet_ImportedSphereRadius_ImplicitCast' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.SetupDying
// 0x0058 (0x0058 - 0x0000)
struct WBP_PlayerHPGauge_C_SetupDying final
{
public:
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalStatusBase*                         CallFunc_GetExecutionStatus_ReturnValue;           // 0x0038(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_3;                    // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UBP_Status_Dying_C*                     K2Node_DynamicCast_AsBP_Status_Dying;              // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_SetupDying) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_SetupDying");
static_assert(sizeof(WBP_PlayerHPGauge_C_SetupDying) == 0x000058, "Wrong size on WBP_PlayerHPGauge_C_SetupDying");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PlayerHPGauge_C_SetupDying::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_GetBindedHandle_targetHandle) == 0x000018, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_IsValid_ReturnValue_1) == 0x000020, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000028, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_IsValid_ReturnValue_2) == 0x000030, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_GetExecutionStatus_ReturnValue) == 0x000038, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_GetExecutionStatus_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, CallFunc_IsValid_ReturnValue_3) == 0x000040, "Member 'WBP_PlayerHPGauge_C_SetupDying::CallFunc_IsValid_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, K2Node_DynamicCast_AsBP_Status_Dying) == 0x000048, "Member 'WBP_PlayerHPGauge_C_SetupDying::K2Node_DynamicCast_AsBP_Status_Dying' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_SetupDying, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_PlayerHPGauge_C_SetupDying::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.UpdateForTick
// 0x0008 (0x0008 - 0x0000)
struct WBP_PlayerHPGauge_C_UpdateForTick final
{
public:
	double                                        DeltaTime;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_UpdateForTick) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_UpdateForTick");
static_assert(sizeof(WBP_PlayerHPGauge_C_UpdateForTick) == 0x000008, "Wrong size on WBP_PlayerHPGauge_C_UpdateForTick");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateForTick, DeltaTime) == 0x000000, "Member 'WBP_PlayerHPGauge_C_UpdateForTick::DeltaTime' has a wrong offset!");

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.UpdateWidgetPosition
// 0x0130 (0x0130 - 0x0000)
struct WBP_PlayerHPGauge_C_UpdateWidgetPosition final
{
public:
	class UPalIndividualCharacterHandle*          CallFunc_GetBindedHandle_targetHandle;             // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetActorRightVector_ReturnValue;          // 0x0018(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_TryGetIndividualActor_ReturnValue;        // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_BreakVector2D_X;                          // 0x0040(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector2D_Y;                          // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x0050(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0068(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_Multiply_VectorVector_ReturnValue;        // 0x0080(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X;                            // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y;                            // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z;                            // 0x00A8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_X_1;                          // 0x00B0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Y_1;                          // 0x00B8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_BreakVector_Z_1;                          // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue;             // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0x00D8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0x00E0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x00E8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E9[0x7];                                       // 0x00E9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_MakeVector_ReturnValue;                   // 0x00F0(0x0018)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue_1;   // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition; // 0x0110(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue; // 0x0120(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_121[0x7];                                      // 0x0121(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_Add_DoubleDouble_B_ImplicitCast;          // 0x0128(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PlayerHPGauge_C_UpdateWidgetPosition) == 0x000008, "Wrong alignment on WBP_PlayerHPGauge_C_UpdateWidgetPosition");
static_assert(sizeof(WBP_PlayerHPGauge_C_UpdateWidgetPosition) == 0x000130, "Wrong size on WBP_PlayerHPGauge_C_UpdateWidgetPosition");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_GetBindedHandle_targetHandle) == 0x000000, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_GetBindedHandle_targetHandle' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000008, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_GetActorRightVector_ReturnValue) == 0x000018, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_GetActorRightVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_TryGetIndividualActor_ReturnValue) == 0x000030, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_TryGetIndividualActor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector2D_X) == 0x000040, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector2D_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector2D_Y) == 0x000048, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector2D_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Conv_DoubleToVector_ReturnValue) == 0x000050, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Conv_DoubleToVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000068, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Multiply_VectorVector_ReturnValue) == 0x000080, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Multiply_VectorVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X) == 0x000098, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y) == 0x0000A0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z) == 0x0000A8, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_X_1) == 0x0000B0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_X_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Y_1) == 0x0000B8, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Y_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_BreakVector_Z_1) == 0x0000C0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_BreakVector_Z_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue) == 0x0000C8, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_1) == 0x0000D0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_2) == 0x0000D8, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_ReturnValue_3) == 0x0000E0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_IsVisible_ReturnValue) == 0x0000E8, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_MakeVector_ReturnValue) == 0x0000F0, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_MakeVector_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_GetLocalPlayerController_ReturnValue_1) == 0x000108, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_GetLocalPlayerController_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition) == 0x000110, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_ProjectWorldLocationToWidgetPosition_ScreenPosition' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue) == 0x000120, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_ProjectWorldLocationToWidgetPosition_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PlayerHPGauge_C_UpdateWidgetPosition, CallFunc_Add_DoubleDouble_B_ImplicitCast) == 0x000128, "Member 'WBP_PlayerHPGauge_C_UpdateWidgetPosition::CallFunc_Add_DoubleDouble_B_ImplicitCast' has a wrong offset!");

}

