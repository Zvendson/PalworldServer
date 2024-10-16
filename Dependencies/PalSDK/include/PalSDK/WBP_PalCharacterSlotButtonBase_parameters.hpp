#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.BindButtonEvents
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_BindButtonEvents final
{
public:
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate;              // 0x0000(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UCommonButtonBase* Button)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_3;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents) == 0x000004, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_BindButtonEvents");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents) == 0x000048, "Wrong size on WBP_PalCharacterSlotButtonBase_C_BindButtonEvents");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000024, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000034, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_BindButtonEvents, CallFunc_IsValid_ReturnValue_1) == 0x000044, "Member 'WBP_PalCharacterSlotButtonBase_C_BindButtonEvents::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.ExecuteUbergraph_WBP_PalCharacterSlotButtonBase
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      CallFunc_RegisterButton_button;                    // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotBase_C*            CallFunc_RegisterCharacterSlotWidget_characterSlotWidget; // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent_1;                       // 0x0018(0x0008)(NoDestructor)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0020(0x0008)(NoDestructor)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase) == 0x000028, "Wrong size on WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase, EntryPoint) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase, CallFunc_RegisterButton_button) == 0x000008, "Member 'WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase::CallFunc_RegisterButton_button' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase, CallFunc_RegisterCharacterSlotWidget_characterSlotWidget) == 0x000010, "Member 'WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase::CallFunc_RegisterCharacterSlotWidget_characterSlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase, K2Node_Event_InFocusEvent_1) == 0x000018, "Member 'WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase::K2Node_Event_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase, K2Node_Event_InFocusEvent) == 0x000020, "Member 'WBP_PalCharacterSlotButtonBase_C_ExecuteUbergraph_WBP_PalCharacterSlotButtonBase::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Focus
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_Focus final
{
public:
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_Focus) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_Focus");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_Focus) == 0x000001, "Wrong size on WBP_PalCharacterSlotButtonBase_C_Focus");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_Focus, CallFunc_IsValid_ReturnValue) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_Focus::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetIsSlotSync
// 0x0001 (0x0001 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync final
{
public:
	bool                                          WaitingSync;                                       // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync) == 0x000001, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync) == 0x000001, "Wrong size on WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync, WaitingSync) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_GetIsSlotSync::WaitingSync' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.GetTargetSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_GetTargetSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_GetTargetSlot) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_GetTargetSlot");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_GetTargetSlot) == 0x000010, "Wrong size on WBP_PalCharacterSlotButtonBase_C_GetTargetSlot");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_GetTargetSlot, TargetSlot) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_GetTargetSlot::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_GetTargetSlot, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotButtonBase_C_GetTargetSlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnAddedToFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath) == 0x000004, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnAddedToFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClicked_Internal
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         Temp_byte_Variable_1;                              // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x5];                                        // 0x000B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetOwningPlayer_ReturnValue;              // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsInputKeyDown_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         K2Node_Select_Default;                             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal) == 0x000020, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, Button) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::Button' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, Temp_bool_Variable) == 0x000008, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, Temp_byte_Variable) == 0x000009, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, Temp_byte_Variable_1) == 0x00000A, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, CallFunc_GetOwningPlayer_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::CallFunc_GetOwningPlayer_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, CallFunc_IsInputKeyDown_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::CallFunc_IsInputKeyDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal, K2Node_Select_Default) == 0x000019, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClicked_Internal::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnClickedButton__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature) == 0x000010, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalCharacterSlotButtonBase_C_OnClickedButton__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragDetected
// 0x0110 (0x0110 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnDragDetected final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDragDropOperation*                     CallFunc_CreateDragDropOperation_ReturnValue;      // 0x00E0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00E8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_MakeLiteralByte_ReturnValue;              // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F1[0x7];                                       // 0x00F1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCommonCharacterSlotButton_C*    CallFunc_Create_ReturnValue;                       // 0x00F8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_GetTargetSlot_targetSlot;                 // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0108(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0109(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnDragDetected");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected) == 0x000110, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnDragDetected");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, MyGeometry) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, PointerEvent) == 0x000040, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, Operation) == 0x0000D8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::Operation' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_CreateDragDropOperation_ReturnValue) == 0x0000E0, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_CreateDragDropOperation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000E8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_MakeLiteralByte_ReturnValue) == 0x0000F0, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_MakeLiteralByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_Create_ReturnValue) == 0x0000F8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_GetTargetSlot_targetSlot) == 0x000100, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_IsValid_ReturnValue) == 0x000108, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragDetected, CallFunc_IsEmpty_ReturnValue) == 0x000109, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragDetected::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDragged__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDragged__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDrop
// 0x00F8 (0x00F8 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnDrop final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          PointerEvent;                                      // 0x0040(0x0098)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UDragDropOperation*                     Operation;                                         // 0x00D8(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x00E0(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0x00E8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00F0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnDrop) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnDrop");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnDrop) == 0x0000F8, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnDrop");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, MyGeometry) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, PointerEvent) == 0x000040, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::PointerEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, Operation) == 0x0000D8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::Operation' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, ReturnValue) == 0x0000E0, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base) == 0x0000E8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDrop, K2Node_DynamicCast_bSuccess) == 0x0000F0, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDrop::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnDropped__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnDropped__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnFocusedWidget__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnFocusedWidget__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal, Button) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnHovered_Internal::Button' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnHoveredButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnHoveredButton__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonDown
// 0x0268 (0x0268 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0248(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown) == 0x000268, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonDown::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnMouseButtonUp
// 0x0320 (0x0320 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0190(0x00B8)()
	struct FKey                                   CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x0248(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0260(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_261[0x7];                                      // 0x0261(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0268(0x00B8)()
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp) == 0x000320, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, MyGeometry) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, MouseEvent) == 0x000040, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, ReturnValue) == 0x0000D8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, CallFunc_Handled_ReturnValue) == 0x000190, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, CallFunc_PointerEvent_GetEffectingButton_ReturnValue) == 0x000248, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::CallFunc_PointerEvent_GetEffectingButton_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000260, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp, CallFunc_Unhandled_ReturnValue) == 0x000268, "Member 'WBP_PalCharacterSlotButtonBase_C_OnMouseButtonUp::CallFunc_Unhandled_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnPreviewMouseButtonDown
// 0x0300 (0x0300 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0040)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0040(0x0098)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00D8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Unhandled_ReturnValue;                    // 0x0190(0x00B8)()
	struct FEventReply                            CallFunc_DetectDragIfPressed_ReturnValue;          // 0x0248(0x00B8)()
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown) == 0x000300, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown, MyGeometry) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown, MouseEvent) == 0x000040, "Member 'WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown, ReturnValue) == 0x0000D8, "Member 'WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown, CallFunc_Unhandled_ReturnValue) == 0x000190, "Member 'WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown::CallFunc_Unhandled_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown, CallFunc_DetectDragIfPressed_ReturnValue) == 0x000248, "Member 'WBP_PalCharacterSlotButtonBase_C_OnPreviewMouseButtonDown::CallFunc_DetectDragIfPressed_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRemovedFromFocusPath
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath) == 0x000004, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath, InFocusEvent) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnRemovedFromFocusPath::InFocusEvent' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnRightClickedButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnRightClickedButton__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnSlotSync__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      SelfButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature, SelfButton) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnSlotSync__DelegateSignature::SelfButton' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnFocusedWidget__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnUnFocusedWidget__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal, Button) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnUnhovered_Internal::Button' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.OnUnhoveredButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_OnUnhoveredButton__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_RegisterButton final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_RegisterButton) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_RegisterButton");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_RegisterButton) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_RegisterButton");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_RegisterButton, Button) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_RegisterButton::Button' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.RegisterCharacterSlotWidget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget final
{
public:
	class UWBP_PalCharacterSlotBase_C*            CharacterSlotWidget;                               // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget) == 0x000008, "Wrong size on WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget, CharacterSlotWidget) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_RegisterCharacterSlotWidget::CharacterSlotWidget' has a wrong offset!");

// Function WBP_PalCharacterSlotButtonBase.WBP_PalCharacterSlotButtonBase_C.Setup
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterSlotButtonBase_C_Setup final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterSlotButtonBase_C_Setup) == 0x000008, "Wrong alignment on WBP_PalCharacterSlotButtonBase_C_Setup");
static_assert(sizeof(WBP_PalCharacterSlotButtonBase_C_Setup) == 0x000010, "Wrong size on WBP_PalCharacterSlotButtonBase_C_Setup");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_Setup, TargetSlot) == 0x000000, "Member 'WBP_PalCharacterSlotButtonBase_C_Setup::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterSlotButtonBase_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterSlotButtonBase_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

