#pragma once

#include "Basic.hpp"


namespace PalServer::Params
{

// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.EditCreatedSlotWidget
// 0x0020 (0x0020 - 0x0000)
struct WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           CreatedSlotWidget;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                EditedWidget;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                               CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget) == 0x000008, "Wrong alignment on WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget");
static_assert(sizeof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget) == 0x000020, "Wrong size on WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget, CreatedSlotWidget) == 0x000000, "Member 'WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget::CreatedSlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget, EditedWidget) == 0x000008, "Member 'WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget::EditedWidget' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'WBP_EquipmentSelectListBlock_C_EditCreatedSlotWidget::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.GetAllItemSlotButtons
// 0x0080 (0x0080 - 0x0000)
struct WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons final
{
public:
	TArray<class UWBP_PalItemSlotButtonBase_C*>   SlotButtons;                                       // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_PalItemSlotButtonBase_C*>   Buttons;                                           // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllContents_contents;                  // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               K2Node_DynamicCast_AsSize_Box;                     // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base; // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons) == 0x000008, "Wrong alignment on WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons");
static_assert(sizeof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons) == 0x000080, "Wrong size on WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, SlotButtons) == 0x000000, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::SlotButtons' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, Buttons) == 0x000010, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::Buttons' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_GetAllContents_contents) == 0x000030, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_GetAllContents_contents' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_AsSize_Box) == 0x000058, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_AsSize_Box' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_GetChildAt_ReturnValue) == 0x000068, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base) == 0x000070, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_bSuccess_1) == 0x000078, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Add_ReturnValue) == 0x00007C, "Member 'WBP_EquipmentSelectListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_EquipmentSelectListBlock.WBP_EquipmentSelectListBlock_C.GetFocusTarget
// 0x0068 (0x0068 - 0x0000)
struct WBP_EquipmentSelectListBlock_C_GetFocusTarget final
{
public:
	class UWidget*                                NewParam;                                          // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class USizeBox*                               K2Node_DynamicCast_AsSize_Box;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4A[0x6];                                       // 0x004A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_EquipmentSelectListBlock_C_GetFocusTarget) == 0x000008, "Wrong alignment on WBP_EquipmentSelectListBlock_C_GetFocusTarget");
static_assert(sizeof(WBP_EquipmentSelectListBlock_C_GetFocusTarget) == 0x000068, "Wrong size on WBP_EquipmentSelectListBlock_C_GetFocusTarget");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, NewParam) == 0x000000, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, K2Node_DynamicCast_AsSize_Box) == 0x000040, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::K2Node_DynamicCast_AsSize_Box' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_IsVisible_ReturnValue) == 0x000049, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, CallFunc_GetChildAt_ReturnValue) == 0x000050, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base) == 0x000058, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_EquipmentSelectListBlock_C_GetFocusTarget, K2Node_DynamicCast_bSuccess_1) == 0x000060, "Member 'WBP_EquipmentSelectListBlock_C_GetFocusTarget::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");

}

