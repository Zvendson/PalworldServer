#pragma once

#include "Basic.hpp"

#include "CommonInput_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.CreateGuideText
// 0x0030 (0x0030 - 0x0000)
struct WBP_TutorialMessage_Temp_C_CreateGuideText final
{
public:
	class FText                                   InText;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                   OutText;                                           // 0x0018(0x0018)(Parm, OutParm)
};
static_assert(alignof(WBP_TutorialMessage_Temp_C_CreateGuideText) == 0x000008, "Wrong alignment on WBP_TutorialMessage_Temp_C_CreateGuideText");
static_assert(sizeof(WBP_TutorialMessage_Temp_C_CreateGuideText) == 0x000030, "Wrong size on WBP_TutorialMessage_Temp_C_CreateGuideText");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_CreateGuideText, InText) == 0x000000, "Member 'WBP_TutorialMessage_Temp_C_CreateGuideText::InText' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_CreateGuideText, OutText) == 0x000018, "Member 'WBP_TutorialMessage_Temp_C_CreateGuideText::OutText' has a wrong offset!");

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.ExecuteUbergraph_WBP_TutorialMessage_Temp
// 0x0140 (0x0140 - 0x0000)
struct WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_IsNotEmpty_ReturnValue;             // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0018(0x0018)()
	struct FDataTableRowHandle                    K2Node_CustomEvent_TutorialMsgId;                  // 0x0030(0x0010)(NoDestructor)
	class FText                                   CallFunc_CreateGuideText_OutText;                  // 0x0040(0x0018)()
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x005C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Array_Get_Item;                           // 0x0070(0x0010)(NoDestructor)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_2;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0095(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_96[0x2];                                       // 0x0096(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result;    // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue; // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationProxyObject_Result_1;  // 0x00A8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1; // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BA[0x6];                                       // 0x00BA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue;               // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_1;             // 0x00C8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x00D0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x00D8(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x00E0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x00F0(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_4;            // 0x00F8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalGameSetting*                        CallFunc_GetGameSetting_ReturnValue_2;             // 0x0108(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_5;            // 0x0110(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_2;        // 0x0120(0x0008)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue_3;        // 0x0128(0x0008)(NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x0130(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x0138(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp) == 0x000008, "Wrong alignment on WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp");
static_assert(sizeof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp) == 0x000140, "Wrong size on WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, EntryPoint) == 0x000000, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Array_IsNotEmpty_ReturnValue) == 0x000004, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Array_IsNotEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000018, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CustomEvent_TutorialMsgId) == 0x000030, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CustomEvent_TutorialMsgId' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_CreateGuideText_OutText) == 0x000040, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_CreateGuideText_OutText' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Array_Add_ReturnValue) == 0x000058, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate_1) == 0x00005C, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Array_Get_Item) == 0x000070, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Array_IsEmpty_ReturnValue) == 0x000080, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate_2) == 0x000084, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_K2_IsValidTimerHandle_ReturnValue) == 0x000094, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_K2_IsValidTimerHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Array_RemoveItem_ReturnValue) == 0x000095, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_CreatePlayAnimationProxyObject_Result) == 0x000098, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_CreatePlayAnimationProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_CreatePlayAnimationProxyObject_ReturnValue) == 0x0000A0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_CreatePlayAnimationProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_CreatePlayAnimationProxyObject_Result_1) == 0x0000A8, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_CreatePlayAnimationProxyObject_Result_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1) == 0x0000B0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_CreatePlayAnimationProxyObject_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_IsValid_ReturnValue) == 0x0000B8, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_IsValid_ReturnValue_1) == 0x0000B9, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_GetGameSetting_ReturnValue) == 0x0000C0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_GetGameSetting_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_GetGameSetting_ReturnValue_1) == 0x0000C8, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_GetGameSetting_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Subtract_DoubleDouble_ReturnValue) == 0x0000D0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Subtract_DoubleDouble_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x0000D8, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate_3) == 0x0000E0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_K2_SetTimerDelegate_ReturnValue_1) == 0x0000F0, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_K2_SetTimerDelegate_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000F8, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_GetGameSetting_ReturnValue_2) == 0x000108, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_GetGameSetting_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, K2Node_CreateDelegate_OutputDelegate_5) == 0x000110, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_K2_SetTimerDelegate_ReturnValue_2) == 0x000120, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_K2_SetTimerDelegate_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_K2_SetTimerDelegate_ReturnValue_3) == 0x000128, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_K2_SetTimerDelegate_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_Subtract_DoubleDouble_A_ImplicitCast) == 0x000130, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_Subtract_DoubleDouble_A_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp, CallFunc_RetriggerableDelay_Duration_ImplicitCast) == 0x000138, "Member 'WBP_TutorialMessage_Temp_C_ExecuteUbergraph_WBP_TutorialMessage_Temp::CallFunc_RetriggerableDelay_Duration_ImplicitCast' has a wrong offset!");

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.On Input Method Changed
// 0x0040 (0x0040 - 0x0000)
struct WBP_TutorialMessage_Temp_C_On_Input_Method_Changed final
{
public:
	ECommonInputType                              InputType;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0008(0x0018)()
	class FText                                   CallFunc_CreateGuideText_OutText;                  // 0x0020(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed) == 0x000008, "Wrong alignment on WBP_TutorialMessage_Temp_C_On_Input_Method_Changed");
static_assert(sizeof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed) == 0x000040, "Wrong size on WBP_TutorialMessage_Temp_C_On_Input_Method_Changed");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed, InputType) == 0x000000, "Member 'WBP_TutorialMessage_Temp_C_On_Input_Method_Changed::InputType' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000008, "Member 'WBP_TutorialMessage_Temp_C_On_Input_Method_Changed::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed, CallFunc_CreateGuideText_OutText) == 0x000020, "Member 'WBP_TutorialMessage_Temp_C_On_Input_Method_Changed::CallFunc_CreateGuideText_OutText' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_On_Input_Method_Changed, CallFunc_IsValid_ReturnValue) == 0x000038, "Member 'WBP_TutorialMessage_Temp_C_On_Input_Method_Changed::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.QueueTutorial
// 0x0010 (0x0010 - 0x0000)
struct WBP_TutorialMessage_Temp_C_QueueTutorial final
{
public:
	struct FDataTableRowHandle                    TutorialMsgID;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_TutorialMessage_Temp_C_QueueTutorial) == 0x000008, "Wrong alignment on WBP_TutorialMessage_Temp_C_QueueTutorial");
static_assert(sizeof(WBP_TutorialMessage_Temp_C_QueueTutorial) == 0x000010, "Wrong size on WBP_TutorialMessage_Temp_C_QueueTutorial");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_QueueTutorial, TutorialMsgID) == 0x000000, "Member 'WBP_TutorialMessage_Temp_C_QueueTutorial::TutorialMsgID' has a wrong offset!");

// Function WBP_TutorialMessage_Temp.WBP_TutorialMessage_Temp_C.Setup
// 0x0038 (0x0038 - 0x0000)
struct WBP_TutorialMessage_Temp_C_Setup final
{
public:
	TDelegate<void(ECommonInputType bNewInputType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const struct FDataTableRowHandle& TutorialMsg)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCommonInputSubsystem*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalTutorialManager*                    CallFunc_GetTutorialManager_ReturnValue;           // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_TutorialMessage_Temp_C_Setup) == 0x000008, "Wrong alignment on WBP_TutorialMessage_Temp_C_Setup");
static_assert(sizeof(WBP_TutorialMessage_Temp_C_Setup) == 0x000038, "Wrong size on WBP_TutorialMessage_Temp_C_Setup");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_TutorialMessage_Temp_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000010, "Member 'WBP_TutorialMessage_Temp_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_Setup, CallFunc_GetLocalPlayerSubsystem_ReturnValue) == 0x000020, "Member 'WBP_TutorialMessage_Temp_C_Setup::CallFunc_GetLocalPlayerSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_Setup, CallFunc_GetTutorialManager_ReturnValue) == 0x000028, "Member 'WBP_TutorialMessage_Temp_C_Setup::CallFunc_GetTutorialManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_TutorialMessage_Temp_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_TutorialMessage_Temp_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

