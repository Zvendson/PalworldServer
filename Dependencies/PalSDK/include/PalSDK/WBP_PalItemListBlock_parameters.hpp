#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.AddItemContainer
// 0x0028 (0x0028 - 0x0000)
struct WBP_PalItemListBlock_C_AddItemContainer final
{
public:
	class UPalItemContainer*                      TargetContainer;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableQuickMove;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreEmptySlot;                                   // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x000A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B[0x1];                                        // 0x000B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_AddItemContainer) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_AddItemContainer");
static_assert(sizeof(WBP_PalItemListBlock_C_AddItemContainer) == 0x000028, "Wrong size on WBP_PalItemListBlock_C_AddItemContainer");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, TargetContainer) == 0x000000, "Member 'WBP_PalItemListBlock_C_AddItemContainer::TargetContainer' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, IsEnableQuickMove) == 0x000008, "Member 'WBP_PalItemListBlock_C_AddItemContainer::IsEnableQuickMove' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, IgnoreEmptySlot) == 0x000009, "Member 'WBP_PalItemListBlock_C_AddItemContainer::IgnoreEmptySlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, CallFunc_IsValid_ReturnValue) == 0x00000A, "Member 'WBP_PalItemListBlock_C_AddItemContainer::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, CallFunc_Array_Length_ReturnValue) == 0x00000C, "Member 'WBP_PalItemListBlock_C_AddItemContainer::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_PalItemListBlock_C_AddItemContainer::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_PalItemListBlock_C_AddItemContainer::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_PalItemListBlock_C_AddItemContainer::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, CallFunc_Less_IntInt_ReturnValue) == 0x000020, "Member 'WBP_PalItemListBlock_C_AddItemContainer::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemContainer, CallFunc_Add_IntInt_ReturnValue) == 0x000024, "Member 'WBP_PalItemListBlock_C_AddItemContainer::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.AddItemSlot
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_AddItemSlot final
{
public:
	class UPalItemSlot*                           TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_AddItemSlot) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_AddItemSlot");
static_assert(sizeof(WBP_PalItemListBlock_C_AddItemSlot) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_AddItemSlot");
static_assert(offsetof(WBP_PalItemListBlock_C_AddItemSlot, TargetSlot) == 0x000000, "Member 'WBP_PalItemListBlock_C_AddItemSlot::TargetSlot' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ChangeItemSlotButtonClass
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_ChangeItemSlotButtonClass final
{
public:
	class UClass*                                 NewClass;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_ChangeItemSlotButtonClass) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_ChangeItemSlotButtonClass");
static_assert(sizeof(WBP_PalItemListBlock_C_ChangeItemSlotButtonClass) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_ChangeItemSlotButtonClass");
static_assert(offsetof(WBP_PalItemListBlock_C_ChangeItemSlotButtonClass, NewClass) == 0x000000, "Member 'WBP_PalItemListBlock_C_ChangeItemSlotButtonClass::NewClass' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ClearFiltering
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalItemListBlock_C_ClearFiltering final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllContents_contents;                  // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_ClearFiltering) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_ClearFiltering");
static_assert(sizeof(WBP_PalItemListBlock_C_ClearFiltering) == 0x000038, "Wrong size on WBP_PalItemListBlock_C_ClearFiltering");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalItemListBlock_C_ClearFiltering::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalItemListBlock_C_ClearFiltering::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalItemListBlock_C_ClearFiltering::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, CallFunc_GetAllContents_contents) == 0x000010, "Member 'WBP_PalItemListBlock_C_ClearFiltering::CallFunc_GetAllContents_contents' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_PalItemListBlock_C_ClearFiltering::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_PalItemListBlock_C_ClearFiltering::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_ClearFiltering, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_PalItemListBlock_C_ClearFiltering::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.CreateItemSlotWidget
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_PalItemListBlock_C_CreateItemSlotWidget final
{
public:
	class UPalItemSlot*                           TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnableQuickMove;                                 // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreEmptySlot;                                   // 0x0009(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x2];                                        // 0x000A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x001D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1E[0x2];                                       // 0x001E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0020(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0030(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0040(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x0070(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x0080(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Button)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x0090(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00A0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Create_ReturnValue;                       // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_EditCreatedSlotWidget_editedWidget;       // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_CreateItemSlotWidget) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_CreateItemSlotWidget");
static_assert(sizeof(WBP_PalItemListBlock_C_CreateItemSlotWidget) == 0x0000B8, "Wrong size on WBP_PalItemListBlock_C_CreateItemSlotWidget");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, TargetSlot) == 0x000000, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, IsEnableQuickMove) == 0x000008, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::IsEnableQuickMove' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, IgnoreEmptySlot) == 0x000009, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::IgnoreEmptySlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, CallFunc_IsEmpty_ReturnValue) == 0x00001C, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, CallFunc_IsValid_ReturnValue) == 0x00001D, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_1) == 0x000020, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_2) == 0x000030, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_3) == 0x000040, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_4) == 0x000050, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_5) == 0x000060, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_6) == 0x000070, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_7) == 0x000080, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, K2Node_CreateDelegate_OutputDelegate_8) == 0x000090, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000A0, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, CallFunc_Create_ReturnValue) == 0x0000A8, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_CreateItemSlotWidget, CallFunc_EditCreatedSlotWidget_editedWidget) == 0x0000B0, "Member 'WBP_PalItemListBlock_C_CreateItemSlotWidget::CallFunc_EditCreatedSlotWidget_editedWidget' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.EditCreatedSlotWidget
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemListBlock_C_EditCreatedSlotWidget final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           CreatedSlotWidget;                                 // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                EditedWidget;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_EditCreatedSlotWidget) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_EditCreatedSlotWidget");
static_assert(sizeof(WBP_PalItemListBlock_C_EditCreatedSlotWidget) == 0x000010, "Wrong size on WBP_PalItemListBlock_C_EditCreatedSlotWidget");
static_assert(offsetof(WBP_PalItemListBlock_C_EditCreatedSlotWidget, CreatedSlotWidget) == 0x000000, "Member 'WBP_PalItemListBlock_C_EditCreatedSlotWidget::CreatedSlotWidget' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_EditCreatedSlotWidget, EditedWidget) == 0x000008, "Member 'WBP_PalItemListBlock_C_EditCreatedSlotWidget::EditedWidget' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.ExecuteUbergraph_WBP_PalItemListBlock
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock) == 0x000004, "Wrong alignment on WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock");
static_assert(sizeof(WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock) == 0x000004, "Wrong size on WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock");
static_assert(offsetof(WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock, EntryPoint) == 0x000000, "Member 'WBP_PalItemListBlock_C_ExecuteUbergraph_WBP_PalItemListBlock::EntryPoint' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.FilteringFromItemTypeA
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_PalItemListBlock_C_FilteringFromItemTypeA final
{
public:
	TArray<EPalItemTypeA>                         DisplayTypesA;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEmptySlotDIsplay;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                        CallFunc_GetAllContents_contents;                  // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x006C(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x009E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9F[0x1];                                       // 0x009F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x00A4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemTypeA                                 CallFunc_Array_Get_Item_2;                         // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AA[0x6];                                       // 0x00AA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_FilteringFromItemTypeA) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_FilteringFromItemTypeA");
static_assert(sizeof(WBP_PalItemListBlock_C_FilteringFromItemTypeA) == 0x0000C8, "Wrong size on WBP_PalItemListBlock_C_FilteringFromItemTypeA");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, DisplayTypesA) == 0x000000, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::DisplayTypesA' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, IsEmptySlotDIsplay) == 0x000010, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::IsEmptySlotDIsplay' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, Temp_int_Array_Index_Variable) == 0x00001C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, Temp_bool_True_if_break_was_hit_Variable) == 0x000020, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Not_PreBool_ReturnValue) == 0x000028, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000030, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetAllContents_contents) == 0x000040, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetAllContents_contents' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetTargetSlot_targetSlot) == 0x000060, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_IsValid_ReturnValue) == 0x000068, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_IsEmpty_ReturnValue) == 0x000069, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetItemId_ReturnValue) == 0x00006C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Array_Length_ReturnValue_1) == 0x000094, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, Temp_int_Loop_Counter_Variable_1) == 0x000098, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Less_IntInt_ReturnValue) == 0x00009C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Less_IntInt_ReturnValue_1) == 0x00009D, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_BooleanAND_ReturnValue) == 0x00009E, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, Temp_int_Array_Index_Variable_1) == 0x0000A4, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_BooleanAND_ReturnValue_1) == 0x0000A8, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_Array_Get_Item_2) == 0x0000A9, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetItemIDManager_ReturnValue) == 0x0000B0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_GetStaticItemData_ReturnValue) == 0x0000B8, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeA, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C1, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeA::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.FilteringFromItemTypeB
// 0x00C8 (0x00C8 - 0x0000)
struct WBP_PalItemListBlock_C_FilteringFromItemTypeB final
{
public:
	TArray<EPalItemTypeB>                         DisplayItemTypesB;                                 // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEmptySlotDIsplay;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0011(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_12[0x2];                                       // 0x0012(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	TArray<class UWidget*>                        CallFunc_GetAllContents_contents;                  // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemTypeB                                 CallFunc_Array_Get_Item;                           // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_49[0x3];                                       // 0x0049(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x004C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0050(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0054(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0055(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_56[0x2];                                       // 0x0056(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item_1;                         // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0072(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_73[0x1];                                       // 0x0073(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0074(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9D[0x3];                                       // 0x009D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_2;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemIDManager*                      CallFunc_GetItemIDManager_ReturnValue;             // 0x00B0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalStaticItemDataBase*                 CallFunc_GetStaticItemData_ReturnValue;            // 0x00B8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00C1(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_FilteringFromItemTypeB) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_FilteringFromItemTypeB");
static_assert(sizeof(WBP_PalItemListBlock_C_FilteringFromItemTypeB) == 0x0000C8, "Wrong size on WBP_PalItemListBlock_C_FilteringFromItemTypeB");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, DisplayItemTypesB) == 0x000000, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::DisplayItemTypesB' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, IsEmptySlotDIsplay) == 0x000010, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::IsEmptySlotDIsplay' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, Temp_bool_True_if_break_was_hit_Variable) == 0x000011, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Not_PreBool_ReturnValue) == 0x000018, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000020, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetAllContents_contents) == 0x000030, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetAllContents_contents' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, Temp_int_Loop_Counter_Variable) == 0x000044, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Array_Length_ReturnValue_1) == 0x00004C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Add_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Less_IntInt_ReturnValue) == 0x000054, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_BooleanAND_ReturnValue) == 0x000055, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, Temp_int_Array_Index_Variable_1) == 0x000058, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, Temp_int_Loop_Counter_Variable_1) == 0x00005C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Array_Get_Item_1) == 0x000060, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetTargetSlot_targetSlot) == 0x000068, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Less_IntInt_ReturnValue_1) == 0x000070, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_IsValid_ReturnValue) == 0x000071, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_IsEmpty_ReturnValue) == 0x000072, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetItemId_ReturnValue) == 0x000074, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_BooleanAND_ReturnValue_1) == 0x00009C, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_Array_Get_Item_2) == 0x0000A8, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetItemIDManager_ReturnValue) == 0x0000B0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetItemIDManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_GetStaticItemData_ReturnValue) == 0x0000B8, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_GetStaticItemData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_IsValid_ReturnValue_1) == 0x0000C0, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_FilteringFromItemTypeB, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000C1, "Member 'WBP_PalItemListBlock_C_FilteringFromItemTypeB::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.Focus
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalItemListBlock_C_Focus final
{
public:
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemSlotButtonBase_C*           K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base; // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_Focus) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_Focus");
static_assert(sizeof(WBP_PalItemListBlock_C_Focus) == 0x000018, "Wrong size on WBP_PalItemListBlock_C_Focus");
static_assert(offsetof(WBP_PalItemListBlock_C_Focus, CallFunc_GetChildAt_ReturnValue) == 0x000000, "Member 'WBP_PalItemListBlock_C_Focus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_Focus, K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base) == 0x000008, "Member 'WBP_PalItemListBlock_C_Focus::K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_Focus, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'WBP_PalItemListBlock_C_Focus::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.GetAllItemSlotButtons
// 0x0068 (0x0068 - 0x0000)
struct WBP_PalItemListBlock_C_GetAllItemSlotButtons final
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
	class UWBP_PalItemSlotButtonBase_C*           K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base; // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_GetAllItemSlotButtons) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_GetAllItemSlotButtons");
static_assert(sizeof(WBP_PalItemListBlock_C_GetAllItemSlotButtons) == 0x000068, "Wrong size on WBP_PalItemListBlock_C_GetAllItemSlotButtons");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, SlotButtons) == 0x000000, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::SlotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, Buttons) == 0x000010, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::Buttons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_GetAllContents_contents) == 0x000030, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_GetAllContents_contents' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base) == 0x000058, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, K2Node_DynamicCast_bSuccess) == 0x000060, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetAllItemSlotButtons, CallFunc_Array_Add_ReturnValue) == 0x000064, "Member 'WBP_PalItemListBlock_C_GetAllItemSlotButtons::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.GetFocusTarget
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalItemListBlock_C_GetFocusTarget final
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
	class UWBP_PalItemSlotButtonBase_C*           K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base; // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0049(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_GetFocusTarget) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_GetFocusTarget");
static_assert(sizeof(WBP_PalItemListBlock_C_GetFocusTarget) == 0x000050, "Wrong size on WBP_PalItemListBlock_C_GetFocusTarget");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, NewParam) == 0x000000, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::NewParam' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_GetAllChildren_ReturnValue) == 0x000018, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base) == 0x000040, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::K2Node_DynamicCast_AsWBP_Pal_Item_Slot_Button_Base' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000048, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_GetFocusTarget, CallFunc_IsVisible_ReturnValue) == 0x000049, "Member 'WBP_PalItemListBlock_C_GetFocusTarget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.IsAllSlotEmpty
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalItemListBlock_C_IsAllSlotEmpty final
{
public:
	bool                                          IsALLEmpty;                                        // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0039(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_IsAllSlotEmpty) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_IsAllSlotEmpty");
static_assert(sizeof(WBP_PalItemListBlock_C_IsAllSlotEmpty) == 0x000040, "Wrong size on WBP_PalItemListBlock_C_IsAllSlotEmpty");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, IsALLEmpty) == 0x000000, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::IsALLEmpty' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000010, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_GetTargetSlot_targetSlot) == 0x000030, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_Less_IntInt_ReturnValue) == 0x000038, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_IsEmpty_ReturnValue) == 0x000039, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_IsAllSlotEmpty, CallFunc_Add_IntInt_ReturnValue) == 0x00003C, "Member 'WBP_PalItemListBlock_C_IsAllSlotEmpty::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.On Drag Detected Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_On_Drag_Detected_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_On_Drag_Detected_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_On_Drag_Detected_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_On_Drag_Detected_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_On_Drag_Detected_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_On_Drag_Detected_Internal, Widget) == 0x000000, "Member 'WBP_PalItemListBlock_C_On_Drag_Detected_Internal::Widget' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnCreatedSlotButton__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           CreatedWidget;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature, CreatedWidget) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnCreatedSlotButton__DelegateSignature::CreatedWidget' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnDragDetectedAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnDragDetectedAnyContent__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnEndHoveredAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnEndHoveredAnyContent__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnEndHoveredSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnEndHoveredSlot_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnFocusedAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnFocusedAnyContent__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnFocusedSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnFocusedSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnFocusedSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnFocusedSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnFocusedSlot_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnFocusedSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnFocusedSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnFocusedSlot_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnHoverdAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnHoverdAnyContent__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnHoveredSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnHoveredSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnHoveredSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnHoveredSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnHoveredSlot_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnHoveredSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnHoveredSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnHoveredSlot_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnLeftClickedAnyContent__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature) == 0x000010, "Wrong size on WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalItemListBlock_C_OnLeftClickedAnyContent__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnLeftClickedSlot_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal) == 0x000010, "Wrong size on WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal, PressType) == 0x000008, "Member 'WBP_PalItemListBlock_C_OnLeftClickedSlot_Internal::PressType' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnMiddleClickedAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnMiddleClickedAnyContent__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnMiddletClickedSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnMiddletClickedSlot_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRequestUse_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnRequestUse_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnRequestUse_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnRequestUse_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnRequestUse_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnRequestUse_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRequestUse_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnRequestUse_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRequestUseItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature, Button) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnRequestUseItem__DelegateSignature::Button' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRightClickedAnyContent__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature) == 0x000010, "Wrong size on WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalItemListBlock_C_OnRightClickedAnyContent__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnRightClickedSlot_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemListBlock_C_OnRightClickedSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnRightClickedSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnRightClickedSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnRightClickedSlot_Internal) == 0x000010, "Wrong size on WBP_PalItemListBlock_C_OnRightClickedSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRightClickedSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnRightClickedSlot_Internal::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemListBlock_C_OnRightClickedSlot_Internal, PressType) == 0x000008, "Member 'WBP_PalItemListBlock_C_OnRightClickedSlot_Internal::PressType' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnUnfocusedAnyContent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature");
static_assert(sizeof(WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature");
static_assert(offsetof(WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnUnfocusedAnyContent__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.OnUnfocusedSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal");
static_assert(sizeof(WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal) == 0x000008, "Wrong size on WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal");
static_assert(offsetof(WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemListBlock_C_OnUnfocusedSlot_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemListBlock.WBP_PalItemListBlock_C.SetListName
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalItemListBlock_C_SetListName final
{
public:
	class FText                                   InName;                                            // 0x0000(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
};
static_assert(alignof(WBP_PalItemListBlock_C_SetListName) == 0x000008, "Wrong alignment on WBP_PalItemListBlock_C_SetListName");
static_assert(sizeof(WBP_PalItemListBlock_C_SetListName) == 0x000018, "Wrong size on WBP_PalItemListBlock_C_SetListName");
static_assert(offsetof(WBP_PalItemListBlock_C_SetListName, InName) == 0x000000, "Member 'WBP_PalItemListBlock_C_SetListName::InName' has a wrong offset!");

}

