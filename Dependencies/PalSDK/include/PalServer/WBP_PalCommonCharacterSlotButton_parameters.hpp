#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_BasePal
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal) == 0x000001, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal) == 0x000001, "Wrong size on WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal, Enable) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_AnmEvent_BasePal::Enable' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.AnmEvent_ConsumePal
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal final
{
public:
	bool                                          Enable;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal) == 0x000001, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal) == 0x000001, "Wrong size on WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal, Enable) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_AnmEvent_ConsumePal::Enable' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.ExecuteUbergraph_WBP_PalCommonCharacterSlotButton
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_CustomEvent_widget_1;                       // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable_1;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue;                  // 0x0044(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_54[0x4];                                       // 0x0054(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0058(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_Enable;                         // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           CallFunc_SelectColor_ReturnValue_1;                // 0x0064(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue_2;                // 0x0078(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_CustomEvent_widget;                         // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x0088(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1; // 0x008C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2; // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton) == 0x000098, "Wrong size on WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, EntryPoint) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CustomEvent_widget_1) == 0x000028, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CustomEvent_widget_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CustomEvent_IsEnable) == 0x000030, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SelectFloat_ReturnValue) == 0x000038, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CustomEvent_Enable_1) == 0x000040, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CustomEvent_Enable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SelectColor_ReturnValue) == 0x000044, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SelectColor_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SelectFloat_ReturnValue_1) == 0x000058, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CustomEvent_Enable) == 0x000060, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CustomEvent_Enable' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SelectColor_ReturnValue_1) == 0x000064, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SelectColor_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SelectFloat_ReturnValue_2) == 0x000078, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SelectFloat_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, K2Node_CustomEvent_widget) == 0x000080, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::K2Node_CustomEvent_widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x000088, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1) == 0x00008C, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2) == 0x000090, "Member 'WBP_PalCommonCharacterSlotButton_C_ExecuteUbergraph_WBP_PalCommonCharacterSlotButton::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast_2' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayFocusAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim) == 0x000008, "Wrong size on WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim, Widget) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_PlayFocusAnim::Widget' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.PlayUnfocusAnim
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim) == 0x000008, "Wrong size on WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim, Widget) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_PlayUnfocusAnim::Widget' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_RegisterButton final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_RegisterButton) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_RegisterButton");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_RegisterButton) == 0x000008, "Wrong size on WBP_PalCommonCharacterSlotButton_C_RegisterButton");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_RegisterButton, Button) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_RegisterButton::Button' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.RegisterCharacterSlotWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget final
{
public:
	class UWBP_PalCharacterSlotBase_C*            CharacterSlotWidget;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget) == 0x000008, "Wrong size on WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget, CharacterSlotWidget) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_RegisterCharacterSlotWidget::CharacterSlotWidget' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetEnable
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_SetEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_SetEnable) == 0x000001, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_SetEnable");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_SetEnable) == 0x000001, "Wrong size on WBP_PalCommonCharacterSlotButton_C_SetEnable");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_SetEnable, IsEnable) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_SetEnable::IsEnable' has a wrong offset!");

// Function WBP_PalCommonCharacterSlotButton.WBP_PalCommonCharacterSlotButton_C.SetOverrideSize
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalCommonCharacterSlotButton_C_SetOverrideSize final
{
public:
	struct FVector2D                              NewSize;                                           // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanelSlot*                       CallFunc_SlotAsCanvasSlot_ReturnValue;             // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCommonCharacterSlotButton_C_SetOverrideSize) == 0x000008, "Wrong alignment on WBP_PalCommonCharacterSlotButton_C_SetOverrideSize");
static_assert(sizeof(WBP_PalCommonCharacterSlotButton_C_SetOverrideSize) == 0x000018, "Wrong size on WBP_PalCommonCharacterSlotButton_C_SetOverrideSize");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_SetOverrideSize, NewSize) == 0x000000, "Member 'WBP_PalCommonCharacterSlotButton_C_SetOverrideSize::NewSize' has a wrong offset!");
static_assert(offsetof(WBP_PalCommonCharacterSlotButton_C_SetOverrideSize, CallFunc_SlotAsCanvasSlot_ReturnValue) == 0x000010, "Member 'WBP_PalCommonCharacterSlotButton_C_SetOverrideSize::CallFunc_SlotAsCanvasSlot_ReturnValue' has a wrong offset!");

}

