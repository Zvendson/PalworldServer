#pragma once

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterContainer
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterScrollList_C_AddCharacterContainer final
{
public:
	class UPalIndividualCharacterContainer*       Container;                                         // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      CallFunc_CreateSlotWidget_createdSlotButton;       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_AddCharacterContainer) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_AddCharacterContainer");
static_assert(sizeof(WBP_PalCharacterScrollList_C_AddCharacterContainer) == 0x000030, "Wrong size on WBP_PalCharacterScrollList_C_AddCharacterContainer");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, Container) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::Container' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, CallFunc_Array_Get_Item) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, CallFunc_CreateSlotWidget_createdSlotButton) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::CallFunc_CreateSlotWidget_createdSlotButton' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000024, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterContainer, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterScrollList_C_AddCharacterContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterSlot
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterScrollList_C_AddCharacterSlot final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      CallFunc_CreateSlotWidget_createdSlotButton;       // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_AddCharacterSlot) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_AddCharacterSlot");
static_assert(sizeof(WBP_PalCharacterScrollList_C_AddCharacterSlot) == 0x000010, "Wrong size on WBP_PalCharacterScrollList_C_AddCharacterSlot");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlot, TargetSlot) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlot::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlot, CallFunc_CreateSlotWidget_createdSlotButton) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlot::CallFunc_CreateSlotWidget_createdSlotButton' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddCharacterSlots
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalCharacterScrollList_C_AddCharacterSlots final
{
public:
	TArray<class UPalIndividualCharacterSlot*>    TargetSlots;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_AddCharacterSlots) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_AddCharacterSlots");
static_assert(sizeof(WBP_PalCharacterScrollList_C_AddCharacterSlots) == 0x000030, "Wrong size on WBP_PalCharacterScrollList_C_AddCharacterSlots");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, TargetSlots) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::TargetSlots' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddCharacterSlots, CallFunc_Add_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_PalCharacterScrollList_C_AddCharacterSlots::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.AddSlotButtonToScrollList
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlotButton;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWrapBoxSlot*                           CallFunc_AddChildToWrapBox_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList");
static_assert(sizeof(WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList) == 0x000010, "Wrong size on WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList, CreatedSlotButton) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList::CreatedSlotButton' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList, CallFunc_AddChildToWrapBox_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_AddSlotButtonToScrollList::CallFunc_AddChildToWrapBox_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.BindButtonEvents
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalCharacterScrollList_C_BindButtonEvents final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlotButton;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0028(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0038(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0048(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalCharacterSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0058(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_BindButtonEvents) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_BindButtonEvents");
static_assert(sizeof(WBP_PalCharacterScrollList_C_BindButtonEvents) == 0x000068, "Wrong size on WBP_PalCharacterScrollList_C_BindButtonEvents");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, CreatedSlotButton) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::CreatedSlotButton' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_2) == 0x000028, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_3) == 0x000038, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_4) == 0x000048, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_BindButtonEvents, K2Node_CreateDelegate_OutputDelegate_5) == 0x000058, "Member 'WBP_PalCharacterScrollList_C_BindButtonEvents::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ChangeChildrenPadding
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterScrollList_C_ChangeChildrenPadding final
{
public:
	struct FVector2D                              Padding_0;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_ChangeChildrenPadding) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_ChangeChildrenPadding");
static_assert(sizeof(WBP_PalCharacterScrollList_C_ChangeChildrenPadding) == 0x000010, "Wrong size on WBP_PalCharacterScrollList_C_ChangeChildrenPadding");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ChangeChildrenPadding, Padding_0) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_ChangeChildrenPadding::Padding_0' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.CreateSlotWidget
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterScrollList_C_CreateSlotWidget final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlotButton;                                 // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalCharacterSlotButtonBase_C*      CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_CreateSlotWidget) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_CreateSlotWidget");
static_assert(sizeof(WBP_PalCharacterScrollList_C_CreateSlotWidget) == 0x000020, "Wrong size on WBP_PalCharacterScrollList_C_CreateSlotWidget");
static_assert(offsetof(WBP_PalCharacterScrollList_C_CreateSlotWidget, TargetSlot) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_CreateSlotWidget::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_CreateSlotWidget, CreatedSlotButton) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_CreateSlotWidget::CreatedSlotButton' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_CreateSlotWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_CreateSlotWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_CreateSlotWidget, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_CreateSlotWidget::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.ExecuteUbergraph_WBP_PalCharacterScrollList
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_CharacterScrollListBlock_C*        CallFunc_Create_ReturnValue;                       // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList");
static_assert(sizeof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList) == 0x000028, "Wrong size on WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList, EntryPoint) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList, CallFunc_GetScrollBox_ScrollBox) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList, CallFunc_Create_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList, CallFunc_AddChild_ReturnValue) == 0x000020, "Member 'WBP_PalCharacterScrollList_C_ExecuteUbergraph_WBP_PalCharacterScrollList::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.FocusPreviousButton
// 0x0070 (0x0070 - 0x0000)
struct WBP_PalCharacterScrollList_C_FocusPreviousButton final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      RootSlotButton;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         FindedIndex;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TmpCount;                                          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_IntInt_ReturnValue;              // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Find_ReturnValue;                   // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3C[0x4];                                       // 0x003C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1; // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_FocusPreviousButton) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_FocusPreviousButton");
static_assert(sizeof(WBP_PalCharacterScrollList_C_FocusPreviousButton) == 0x000070, "Wrong size on WBP_PalCharacterScrollList_C_FocusPreviousButton");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, RootSlotButton) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::RootSlotButton' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, FindedIndex) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::FindedIndex' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, TmpCount) == 0x00000C, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::TmpCount' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, Temp_int_Variable) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, Temp_int_Variable_1) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_NotEqual_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_NotEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Greater_IntInt_ReturnValue) == 0x00001D, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Subtract_IntInt_ReturnValue_1) == 0x000020, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Subtract_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000024, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_GetAllChildren_ReturnValue) == 0x000028, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Array_Find_ReturnValue) == 0x000038, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Array_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Less_IntInt_ReturnValue) == 0x000048, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base) == 0x000050, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_IsVisible_ReturnValue) == 0x000059, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1) == 0x000060, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, K2Node_DynamicCast_bSuccess_1) == 0x000068, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_IsVisible_ReturnValue_1) == 0x000069, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusPreviousButton, CallFunc_Array_LastIndex_ReturnValue) == 0x00006C, "Member 'WBP_PalCharacterScrollList_C_FocusPreviousButton::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.FocusToTopContent
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_FocusToTopContent final
{
public:
	class UWidget*                                CallFunc_GetTopFocusTarget_Widget;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_FocusToTopContent) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_FocusToTopContent");
static_assert(sizeof(WBP_PalCharacterScrollList_C_FocusToTopContent) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_FocusToTopContent");
static_assert(offsetof(WBP_PalCharacterScrollList_C_FocusToTopContent, CallFunc_GetTopFocusTarget_Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_FocusToTopContent::CallFunc_GetTopFocusTarget_Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.Get All Children
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterScrollList_C_Get_All_Children final
{
public:
	TArray<class UWidget*>                        Widgets;                                           // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_Get_All_Children) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_Get_All_Children");
static_assert(sizeof(WBP_PalCharacterScrollList_C_Get_All_Children) == 0x000020, "Wrong size on WBP_PalCharacterScrollList_C_Get_All_Children");
static_assert(offsetof(WBP_PalCharacterScrollList_C_Get_All_Children, Widgets) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_Get_All_Children::Widgets' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_Get_All_Children, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_Get_All_Children::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.GetTopFocusTarget
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalCharacterScrollList_C_GetTopFocusTarget final
{
public:
	class UWidget*                                Widget;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalCharacterSlotButtonBase_C*      K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_HasAnyChildren_ReturnValue;               // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x2];                                       // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_GetTopFocusTarget) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_GetTopFocusTarget");
static_assert(sizeof(WBP_PalCharacterScrollList_C_GetTopFocusTarget) == 0x000048, "Wrong size on WBP_PalCharacterScrollList_C_GetTopFocusTarget");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_IsValid_ReturnValue_1) == 0x000011, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_IsVisible_ReturnValue) == 0x000034, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base) == 0x000038, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::K2Node_DynamicCast_AsWBP_Pal_Character_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_HasAnyChildren_ReturnValue) == 0x000041, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_HasAnyChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_GetTopFocusTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PalCharacterScrollList_C_GetTopFocusTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.On Right Clicked Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal, buttonBase) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_On_Right_Clicked_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnCreatedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      CreatedSlot;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature, CreatedSlot) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnCreatedSlot__DelegateSignature::CreatedSlot' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnFocused_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnFocused_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnFocused_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnFocused_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnFocused_Internal) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnFocused_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnFocused_Internal, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnFocused_Internal::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnFocusedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnFocusedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnHovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnHovered_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnHovered_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnHovered_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnHovered_Internal) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnHovered_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnHovered_Internal, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnHovered_Internal::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnHoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnHoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnLeftClicked_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnLeftClicked_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnLeftClicked_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnLeftClicked_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnLeftClicked_Internal) == 0x000010, "Wrong size on WBP_PalCharacterScrollList_C_OnLeftClicked_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnLeftClicked_Internal, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnLeftClicked_Internal::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnLeftClicked_Internal, PressType) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_OnLeftClicked_Internal::PressType' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnLeftClickedSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_OnLeftClickedSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnRightClickedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnRightClickedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnfocused_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnUnfocused_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnUnfocused_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnUnfocused_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnUnfocused_Internal) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnUnfocused_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnUnfocused_Internal, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnUnfocused_Internal::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnfocusedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnUnfocusedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnhovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnUnhovered_Internal final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnUnhovered_Internal) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnUnhovered_Internal");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnUnhovered_Internal) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnUnhovered_Internal");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnUnhovered_Internal, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnUnhovered_Internal::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.OnUnhoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_OnUnhoveredSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalCharacterScrollList.WBP_PalCharacterScrollList_C.RemoveChild
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalCharacterScrollList_C_RemoveChild final
{
public:
	class UWBP_PalCharacterSlotButtonBase_C*      TargetChild;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0008(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Array_RemoveItem_ReturnValue;             // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalCharacterScrollList_C_RemoveChild) == 0x000008, "Wrong alignment on WBP_PalCharacterScrollList_C_RemoveChild");
static_assert(sizeof(WBP_PalCharacterScrollList_C_RemoveChild) == 0x000020, "Wrong size on WBP_PalCharacterScrollList_C_RemoveChild");
static_assert(offsetof(WBP_PalCharacterScrollList_C_RemoveChild, TargetChild) == 0x000000, "Member 'WBP_PalCharacterScrollList_C_RemoveChild::TargetChild' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_RemoveChild, CallFunc_GetAllChildren_ReturnValue) == 0x000008, "Member 'WBP_PalCharacterScrollList_C_RemoveChild::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalCharacterScrollList_C_RemoveChild, CallFunc_Array_RemoveItem_ReturnValue) == 0x000018, "Member 'WBP_PalCharacterScrollList_C_RemoveChild::CallFunc_Array_RemoveItem_ReturnValue' has a wrong offset!");

}

