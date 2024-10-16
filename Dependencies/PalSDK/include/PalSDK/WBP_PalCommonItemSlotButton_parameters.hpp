#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.DraggedEvent
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_DraggedEvent final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_DraggedEvent) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_DraggedEvent");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_DraggedEvent) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_DraggedEvent");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_DraggedEvent, Widget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_DraggedEvent::Widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.ExecuteUbergraph_WBP_PalCommonItemSlotButton
// 0x00E0 (0x00E0 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 LiftNum, class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0044(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_64[0x4];                                       // 0x0064(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_2;              // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_3;              // 0x0080(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_4;              // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget_5;                       // 0x0090(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget_4;                       // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget_3;                       // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_CustomEvent_pressType;                      // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x7];                                       // 0x00A9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget_2;                       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_LiftNum;                        // 0x00C0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C4[0x4];                                       // 0x00C4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget_1;                       // 0x00C8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x00D0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00D1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D2[0x6];                                       // 0x00D2(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           K2Node_CustomEvent_widget;                         // 0x00D8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton) == 0x0000E0, "Wrong size on WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, EntryPoint) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate_4) == 0x000044, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CreateDelegate_OutputDelegate_5) == 0x000054, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_PlayAnimation_ReturnValue) == 0x000068, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_PlayAnimation_ReturnValue_1) == 0x000070, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_PlayAnimation_ReturnValue_2) == 0x000078, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_PlayAnimation_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_PlayAnimation_ReturnValue_3) == 0x000080, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_PlayAnimation_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_PlayAnimation_ReturnValue_4) == 0x000088, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_PlayAnimation_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget_5) == 0x000090, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget_5' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget_4) == 0x000098, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget_4' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget_3) == 0x0000A0, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_pressType) == 0x0000A8, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_pressType' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget_2) == 0x0000B0, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_GetTargetSlot_targetSlot) == 0x0000B8, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_LiftNum) == 0x0000C0, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_LiftNum' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget_1) == 0x0000C8, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_IsValid_ReturnValue) == 0x0000D0, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, CallFunc_IsEmpty_ReturnValue) == 0x0000D1, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton, K2Node_CustomEvent_widget) == 0x0000D8, "Member 'WBP_PalCommonItemSlotButton_C_ExecuteUbergraph_WBP_PalCommonItemSlotButton::K2Node_CustomEvent_widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.LiftedEvent
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_LiftedEvent final
{
public:
	int32                                         LiftNum;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_LiftedEvent) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_LiftedEvent");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_LiftedEvent) == 0x000010, "Wrong size on WBP_PalCommonItemSlotButton_C_LiftedEvent");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_LiftedEvent, LiftNum) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_LiftedEvent::LiftNum' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_LiftedEvent, Widget) == 0x000008, "Member 'WBP_PalCommonItemSlotButton_C_LiftedEvent::Widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayDropAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_PlayDropAnim final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_PlayDropAnim) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_PlayDropAnim");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_PlayDropAnim) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_PlayDropAnim");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_PlayDropAnim, Widget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_PlayDropAnim::Widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayFocusAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_PlayFocusAnim final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_PlayFocusAnim) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_PlayFocusAnim");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_PlayFocusAnim) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_PlayFocusAnim");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_PlayFocusAnim, Widget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_PlayFocusAnim::Widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayPushAnim
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_PlayPushAnim final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_PlayPushAnim) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_PlayPushAnim");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_PlayPushAnim) == 0x000010, "Wrong size on WBP_PalCommonItemSlotButton_C_PlayPushAnim");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_PlayPushAnim, Widget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_PlayPushAnim::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_PlayPushAnim, PressType) == 0x000008, "Member 'WBP_PalCommonItemSlotButton_C_PlayPushAnim::PressType' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.PlayUnfocusAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim, Widget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_PlayUnfocusAnim::Widget' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_RegisterButton final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_RegisterButton) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_RegisterButton");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_RegisterButton) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_RegisterButton");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_RegisterButton, Button) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_RegisterButton::Button' has a wrong offset!");

// Function WBP_PalCommonItemSlotButton.WBP_PalCommonItemSlotButton_C.RegisterItemSlotWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget final
{
public:
	class UWBP_PalItemSlotBase_C*                 ItemSlotWidget;                                    // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget) == 0x000008, "Wrong alignment on WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget");
static_assert(sizeof(WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget) == 0x000008, "Wrong size on WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget");
static_assert(offsetof(WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget, ItemSlotWidget) == 0x000000, "Member 'WBP_PalCommonItemSlotButton_C_RegisterItemSlotWidget::ItemSlotWidget' has a wrong offset!");

}

