#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_WarningUI.WBP_WarningUI_C.Display Supply
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_WarningUI_C_Display_Supply final
{
public:
	struct FPalSupplyInfo                         SupplyInfo;                                        // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDataTableRowHandle                    CapsuleMsgId;                                      // 0x0060(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    MeteorMsgId;                                       // 0x0070(0x0010)(Edit, BlueprintVisible, NoDestructor)
	EPalSupplyType                                Temp_byte_Variable;                                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    Temp_struct_Variable;                              // 0x0088(0x0010)(ConstParm, NoDestructor)
	struct FDataTableRowHandle                    K2Node_Select_Default;                             // 0x0098(0x0010)(ConstParm, NoDestructor)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x00A8(0x0018)()
};
static_assert(alignof(WBP_WarningUI_C_Display_Supply) == 0x000008, "Wrong alignment on WBP_WarningUI_C_Display_Supply");
static_assert(sizeof(WBP_WarningUI_C_Display_Supply) == 0x0000C0, "Wrong size on WBP_WarningUI_C_Display_Supply");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, SupplyInfo) == 0x000000, "Member 'WBP_WarningUI_C_Display_Supply::SupplyInfo' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, CapsuleMsgId) == 0x000060, "Member 'WBP_WarningUI_C_Display_Supply::CapsuleMsgId' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, MeteorMsgId) == 0x000070, "Member 'WBP_WarningUI_C_Display_Supply::MeteorMsgId' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, Temp_byte_Variable) == 0x000080, "Member 'WBP_WarningUI_C_Display_Supply::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, Temp_struct_Variable) == 0x000088, "Member 'WBP_WarningUI_C_Display_Supply::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, K2Node_Select_Default) == 0x000098, "Member 'WBP_WarningUI_C_Display_Supply::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Display_Supply, CallFunc_GetLocalizedText_ReturnValue) == 0x0000A8, "Member 'WBP_WarningUI_C_Display_Supply::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.DisplayServerNotice
// 0x0050 (0x0050 - 0x0000)
struct WBP_WarningUI_C_DisplayServerNotice final
{
public:
	class FString                                 NoticeMessage;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    NewLocalVar;                                       // 0x0010(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0020(0x0018)()
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0038(0x0018)()
};
static_assert(alignof(WBP_WarningUI_C_DisplayServerNotice) == 0x000008, "Wrong alignment on WBP_WarningUI_C_DisplayServerNotice");
static_assert(sizeof(WBP_WarningUI_C_DisplayServerNotice) == 0x000050, "Wrong size on WBP_WarningUI_C_DisplayServerNotice");
static_assert(offsetof(WBP_WarningUI_C_DisplayServerNotice, NoticeMessage) == 0x000000, "Member 'WBP_WarningUI_C_DisplayServerNotice::NoticeMessage' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayServerNotice, NewLocalVar) == 0x000010, "Member 'WBP_WarningUI_C_DisplayServerNotice::NewLocalVar' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayServerNotice, CallFunc_Conv_StringToText_ReturnValue) == 0x000020, "Member 'WBP_WarningUI_C_DisplayServerNotice::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayServerNotice, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000038, "Member 'WBP_WarningUI_C_DisplayServerNotice::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.DisplayWarning
// 0x0160 (0x0160 - 0x0000)
struct WBP_WarningUI_C_DisplayWarning final
{
public:
	class UPalBaseCampModel*                      TargetBaseCamp;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalInvaderDatabaseRow                 ChosenInvaderData;                                 // 0x0008(0x0070)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FDataTableRowHandle                    InvaderGroupName;                                  // 0x0078(0x0010)(Edit, BlueprintVisible, NoDestructor)
	struct FDataTableRowHandle                    TitleMsgID;                                        // 0x0088(0x0010)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_99[0x7];                                       // 0x0099(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedText_ReturnValue;             // 0x00A0(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x00B8(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0108(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_1;           // 0x0118(0x0018)()
	class FText                                   CallFunc_GetLocalizedText_ReturnValue_2;           // 0x0130(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0148(0x0018)()
};
static_assert(alignof(WBP_WarningUI_C_DisplayWarning) == 0x000008, "Wrong alignment on WBP_WarningUI_C_DisplayWarning");
static_assert(sizeof(WBP_WarningUI_C_DisplayWarning) == 0x000160, "Wrong size on WBP_WarningUI_C_DisplayWarning");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, TargetBaseCamp) == 0x000000, "Member 'WBP_WarningUI_C_DisplayWarning::TargetBaseCamp' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, ChosenInvaderData) == 0x000008, "Member 'WBP_WarningUI_C_DisplayWarning::ChosenInvaderData' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, InvaderGroupName) == 0x000078, "Member 'WBP_WarningUI_C_DisplayWarning::InvaderGroupName' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, TitleMsgID) == 0x000088, "Member 'WBP_WarningUI_C_DisplayWarning::TitleMsgID' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, CallFunc_IsValid_ReturnValue) == 0x000098, "Member 'WBP_WarningUI_C_DisplayWarning::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, CallFunc_GetLocalizedText_ReturnValue) == 0x0000A0, "Member 'WBP_WarningUI_C_DisplayWarning::CallFunc_GetLocalizedText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, K2Node_MakeStruct_FormatArgumentData) == 0x0000B8, "Member 'WBP_WarningUI_C_DisplayWarning::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, K2Node_MakeArray_Array) == 0x000108, "Member 'WBP_WarningUI_C_DisplayWarning::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, CallFunc_GetLocalizedText_ReturnValue_1) == 0x000118, "Member 'WBP_WarningUI_C_DisplayWarning::CallFunc_GetLocalizedText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, CallFunc_GetLocalizedText_ReturnValue_2) == 0x000130, "Member 'WBP_WarningUI_C_DisplayWarning::CallFunc_GetLocalizedText_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_DisplayWarning, CallFunc_Format_ReturnValue) == 0x000148, "Member 'WBP_WarningUI_C_DisplayWarning::CallFunc_Format_ReturnValue' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.ExecuteUbergraph_WBP_WarningUI
// 0x0004 (0x0004 - 0x0000)
struct WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI) == 0x000004, "Wrong alignment on WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI");
static_assert(sizeof(WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI) == 0x000004, "Wrong size on WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI");
static_assert(offsetof(WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI, EntryPoint) == 0x000000, "Member 'WBP_WarningUI_C_ExecuteUbergraph_WBP_WarningUI::EntryPoint' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.OnInvaderStart
// 0x0098 (0x0098 - 0x0000)
struct WBP_WarningUI_C_OnInvaderStart final
{
public:
	struct FPalIncidentBroadcastParameter         Parameter;                                         // 0x0000(0x0090)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_OnInvaderStart) == 0x000008, "Wrong alignment on WBP_WarningUI_C_OnInvaderStart");
static_assert(sizeof(WBP_WarningUI_C_OnInvaderStart) == 0x000098, "Wrong size on WBP_WarningUI_C_OnInvaderStart");
static_assert(offsetof(WBP_WarningUI_C_OnInvaderStart, Parameter) == 0x000000, "Member 'WBP_WarningUI_C_OnInvaderStart::Parameter' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_OnInvaderStart, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000090, "Member 'WBP_WarningUI_C_OnInvaderStart::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.OnReceivedServerNotice
// 0x0010 (0x0010 - 0x0000)
struct WBP_WarningUI_C_OnReceivedServerNotice final
{
public:
	class FString                                 NoticeMessage;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_OnReceivedServerNotice) == 0x000008, "Wrong alignment on WBP_WarningUI_C_OnReceivedServerNotice");
static_assert(sizeof(WBP_WarningUI_C_OnReceivedServerNotice) == 0x000010, "Wrong size on WBP_WarningUI_C_OnReceivedServerNotice");
static_assert(offsetof(WBP_WarningUI_C_OnReceivedServerNotice, NoticeMessage) == 0x000000, "Member 'WBP_WarningUI_C_OnReceivedServerNotice::NoticeMessage' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.OnSupplyStart
// 0x0070 (0x0070 - 0x0000)
struct WBP_WarningUI_C_OnSupplyStart final
{
public:
	struct FPalSupplyInfo                         SupplyInfo;                                        // 0x0000(0x0060)(BlueprintVisible, BlueprintReadOnly, Parm)
	class APalPlayerState*                        CallFunc_GetLocalPlayerState_ReturnValue;          // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInStateByStageType_ReturnValue;         // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInStateByStageType_ReturnValue_1;       // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_OnSupplyStart) == 0x000008, "Wrong alignment on WBP_WarningUI_C_OnSupplyStart");
static_assert(sizeof(WBP_WarningUI_C_OnSupplyStart) == 0x000070, "Wrong size on WBP_WarningUI_C_OnSupplyStart");
static_assert(offsetof(WBP_WarningUI_C_OnSupplyStart, SupplyInfo) == 0x000000, "Member 'WBP_WarningUI_C_OnSupplyStart::SupplyInfo' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_OnSupplyStart, CallFunc_GetLocalPlayerState_ReturnValue) == 0x000060, "Member 'WBP_WarningUI_C_OnSupplyStart::CallFunc_GetLocalPlayerState_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_OnSupplyStart, CallFunc_IsInStateByStageType_ReturnValue) == 0x000068, "Member 'WBP_WarningUI_C_OnSupplyStart::CallFunc_IsInStateByStageType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_OnSupplyStart, CallFunc_IsInStateByStageType_ReturnValue_1) == 0x000069, "Member 'WBP_WarningUI_C_OnSupplyStart::CallFunc_IsInStateByStageType_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_OnSupplyStart, CallFunc_BooleanOR_ReturnValue) == 0x00006A, "Member 'WBP_WarningUI_C_OnSupplyStart::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.Play
// 0x0038 (0x0038 - 0x0000)
struct WBP_WarningUI_C_Play final
{
public:
	class FText                                   TitleText;                                         // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   InfoText;                                          // 0x0018(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	double                                        DisplayTime;                                       // 0x0030(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_Play) == 0x000008, "Wrong alignment on WBP_WarningUI_C_Play");
static_assert(sizeof(WBP_WarningUI_C_Play) == 0x000038, "Wrong size on WBP_WarningUI_C_Play");
static_assert(offsetof(WBP_WarningUI_C_Play, TitleText) == 0x000000, "Member 'WBP_WarningUI_C_Play::TitleText' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Play, InfoText) == 0x000018, "Member 'WBP_WarningUI_C_Play::InfoText' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_Play, DisplayTime) == 0x000030, "Member 'WBP_WarningUI_C_Play::DisplayTime' has a wrong offset!");

// Function WBP_WarningUI.WBP_WarningUI_C.RegisterEvents
// 0x0060 (0x0060 - 0x0000)
struct WBP_WarningUI_C_RegisterEvents final
{
public:
	TDelegate<void(const class FString& NoticeMessage)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalGameStateInGame*                    CallFunc_GetPalGameStateInGame_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FPalSupplyInfo& SupplyInfo)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalSupplyManager*                      CallFunc_GetSupplyManager_ReturnValue;             // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(struct FPalIncidentBroadcastParameter& Parameter)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x003C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalInvaderManager*                     CallFunc_GetInvaderManager_ReturnValue;            // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_2;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_WarningUI_C_RegisterEvents) == 0x000008, "Wrong alignment on WBP_WarningUI_C_RegisterEvents");
static_assert(sizeof(WBP_WarningUI_C_RegisterEvents) == 0x000060, "Wrong size on WBP_WarningUI_C_RegisterEvents");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_WarningUI_C_RegisterEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_GetPalGameStateInGame_ReturnValue) == 0x000010, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_GetPalGameStateInGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_WarningUI_C_RegisterEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_GetSupplyManager_ReturnValue) == 0x000030, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_GetSupplyManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_IsValid_ReturnValue_1) == 0x000038, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x00003C, "Member 'WBP_WarningUI_C_RegisterEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_GetInvaderManager_ReturnValue) == 0x000050, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_GetInvaderManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_WarningUI_C_RegisterEvents, CallFunc_IsValid_ReturnValue_2) == 0x000058, "Member 'WBP_WarningUI_C_RegisterEvents::CallFunc_IsValid_ReturnValue_2' has a wrong offset!");

}

