#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.AddItemContainer
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalItemScrollList_C_AddItemContainer final
{
public:
	class UPalItemContainer*                      TargetContainer;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IgnoreEmptySlot;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CreatedBlock;                                      // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                CallFunc_CreateBlock_createdBlock;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0040(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_AddItemContainer) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_AddItemContainer");
static_assert(sizeof(WBP_PalItemScrollList_C_AddItemContainer) == 0x000048, "Wrong size on WBP_PalItemScrollList_C_AddItemContainer");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, TargetContainer) == 0x000000, "Member 'WBP_PalItemScrollList_C_AddItemContainer::TargetContainer' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, DisplayName) == 0x000008, "Member 'WBP_PalItemScrollList_C_AddItemContainer::DisplayName' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, IgnoreEmptySlot) == 0x000020, "Member 'WBP_PalItemScrollList_C_AddItemContainer::IgnoreEmptySlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, CreatedBlock) == 0x000028, "Member 'WBP_PalItemScrollList_C_AddItemContainer::CreatedBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, CallFunc_GetScrollBox_ScrollBox) == 0x000030, "Member 'WBP_PalItemScrollList_C_AddItemContainer::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, CallFunc_CreateBlock_createdBlock) == 0x000038, "Member 'WBP_PalItemScrollList_C_AddItemContainer::CallFunc_CreateBlock_createdBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_AddItemContainer, CallFunc_AddChild_ReturnValue) == 0x000040, "Member 'WBP_PalItemScrollList_C_AddItemContainer::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateBlock
// 0x0108 (0x0108 - 0x0000)
struct WBP_PalItemScrollList_C_CreateBlock final
{
public:
	class UPalItemContainer*                      TargetContainer;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                   DisplayName;                                       // 0x0008(0x0018)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IgnoreEmptySlot;                                   // 0x0020(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CreatedBlock;                                      // 0x0028(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInventoryCategoryName_outName;         // 0x0038(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate;              // 0x0054(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0064(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x0074(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_3;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalPlayerRecordData*                   CallFunc_GetLocalRecordData_ReturnValue;           // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_4;            // 0x00A0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase)> K2Node_CreateDelegate_OutputDelegate_5;            // 0x00B0(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_CreateLocalItemSlot_ReturnValue;          // 0x00C0(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_6;            // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_7;            // 0x00D8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Button)> K2Node_CreateDelegate_OutputDelegate_8;            // 0x00E8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x00F8(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                CallFunc_Create_ReturnValue;                       // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_CreateBlock) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_CreateBlock");
static_assert(sizeof(WBP_PalItemScrollList_C_CreateBlock) == 0x000108, "Wrong size on WBP_PalItemScrollList_C_CreateBlock");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, TargetContainer) == 0x000000, "Member 'WBP_PalItemScrollList_C_CreateBlock::TargetContainer' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, DisplayName) == 0x000008, "Member 'WBP_PalItemScrollList_C_CreateBlock::DisplayName' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, IgnoreEmptySlot) == 0x000020, "Member 'WBP_PalItemScrollList_C_CreateBlock::IgnoreEmptySlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CreatedBlock) == 0x000028, "Member 'WBP_PalItemScrollList_C_CreateBlock::CreatedBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_IsValid_ReturnValue) == 0x000030, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_GetInventoryCategoryName_outName) == 0x000038, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_GetInventoryCategoryName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000050, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate) == 0x000054, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_1) == 0x000064, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_2) == 0x000074, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_3) == 0x000084, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_3' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_GetLocalRecordData_ReturnValue) == 0x000098, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_GetLocalRecordData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_4) == 0x0000A0, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_4' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_5) == 0x0000B0, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_5' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_CreateLocalItemSlot_ReturnValue) == 0x0000C0, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_CreateLocalItemSlot_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_6) == 0x0000C8, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_6' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_7) == 0x0000D8, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_7' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, K2Node_CreateDelegate_OutputDelegate_8) == 0x0000E8, "Member 'WBP_PalItemScrollList_C_CreateBlock::K2Node_CreateDelegate_OutputDelegate_8' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_GetLocalPlayerController_ReturnValue) == 0x0000F8, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateBlock, CallFunc_Create_ReturnValue) == 0x000100, "Member 'WBP_PalItemScrollList_C_CreateBlock::CallFunc_Create_ReturnValue' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.CreateEmptyBlock
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalItemScrollList_C_CreateEmptyBlock final
{
public:
	class UWBP_PalItemListBlock_C*                CreatedBlock;                                      // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                CallFunc_CreateBlock_createdBlock;                 // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                             CallFunc_AddChild_ReturnValue;                     // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_CreateEmptyBlock) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_CreateEmptyBlock");
static_assert(sizeof(WBP_PalItemScrollList_C_CreateEmptyBlock) == 0x000020, "Wrong size on WBP_PalItemScrollList_C_CreateEmptyBlock");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateEmptyBlock, CreatedBlock) == 0x000000, "Member 'WBP_PalItemScrollList_C_CreateEmptyBlock::CreatedBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateEmptyBlock, CallFunc_GetScrollBox_ScrollBox) == 0x000008, "Member 'WBP_PalItemScrollList_C_CreateEmptyBlock::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateEmptyBlock, CallFunc_CreateBlock_createdBlock) == 0x000010, "Member 'WBP_PalItemScrollList_C_CreateEmptyBlock::CallFunc_CreateBlock_createdBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_CreateEmptyBlock, CallFunc_AddChild_ReturnValue) == 0x000018, "Member 'WBP_PalItemScrollList_C_CreateEmptyBlock::CallFunc_AddChild_ReturnValue' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.ExecuteUbergraph_WBP_PalItemScrollList
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList) == 0x000004, "Wrong alignment on WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList");
static_assert(sizeof(WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList) == 0x000004, "Wrong size on WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList");
static_assert(offsetof(WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList, EntryPoint) == 0x000000, "Member 'WBP_PalItemScrollList_C_ExecuteUbergraph_WBP_PalItemScrollList::EntryPoint' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.FilteringBySellableItemDataMap
// 0x00D0 (0x00D0 - 0x0000)
struct WBP_PalItemScrollList_C_FilteringBySellableItemDataMap final
{
public:
	TMap<class FName, double>                     SellableItemDataMap;                               // 0x0000(0x0050)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                          IsAllNotForsale;                                   // 0x0050(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButton_Slots;               // 0x0060(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item;                           // 0x0078(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x7];                                       // 0x0081(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0088(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FPalItemId                             CallFunc_GetItemId_ReturnValue;                    // 0x0090(0x0028)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x00B8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Contains_ReturnValue;                 // 0x00B9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x00BA(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x00BB(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_BC[0x4];                                       // 0x00BC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x00C0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_SetRenderOpacity_InOpacity_ImplicitCast;  // 0x00C8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_FilteringBySellableItemDataMap");
static_assert(sizeof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap) == 0x0000D0, "Wrong size on WBP_PalItemScrollList_C_FilteringBySellableItemDataMap");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, SellableItemDataMap) == 0x000000, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::SellableItemDataMap' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, IsAllNotForsale) == 0x000050, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::IsAllNotForsale' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, Temp_int_Loop_Counter_Variable) == 0x000054, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, Temp_int_Array_Index_Variable) == 0x000058, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Add_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_GetAllItemSlotButton_Slots) == 0x000060, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_GetAllItemSlotButton_Slots' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Array_Length_ReturnValue) == 0x000070, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Array_Get_Item) == 0x000078, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Less_IntInt_ReturnValue) == 0x000080, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_GetTargetSlot_targetSlot) == 0x000088, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_GetItemId_ReturnValue) == 0x000090, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_GetItemId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_IsEmpty_ReturnValue) == 0x0000B8, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Map_Contains_ReturnValue) == 0x0000B9, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Map_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_Not_PreBool_ReturnValue) == 0x0000BA, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_BooleanOR_ReturnValue) == 0x0000BB, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_SelectFloat_ReturnValue) == 0x0000C0, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_FilteringBySellableItemDataMap, CallFunc_SetRenderOpacity_InOpacity_ImplicitCast) == 0x0000C8, "Member 'WBP_PalItemScrollList_C_FilteringBySellableItemDataMap::CallFunc_SetRenderOpacity_InOpacity_ImplicitCast' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.Focus
// 0x0020 (0x0020 - 0x0000)
struct WBP_PalItemScrollList_C_Focus final
{
public:
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_Focus) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_Focus");
static_assert(sizeof(WBP_PalItemScrollList_C_Focus) == 0x000020, "Wrong size on WBP_PalItemScrollList_C_Focus");
static_assert(offsetof(WBP_PalItemScrollList_C_Focus, CallFunc_GetScrollBox_ScrollBox) == 0x000000, "Member 'WBP_PalItemScrollList_C_Focus::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_Focus, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'WBP_PalItemScrollList_C_Focus::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_Focus, K2Node_DynamicCast_AsWBP_Pal_Item_List_Block) == 0x000010, "Member 'WBP_PalItemScrollList_C_Focus::K2Node_DynamicCast_AsWBP_Pal_Item_List_Block' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_Focus, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'WBP_PalItemScrollList_C_Focus::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetAllItemSlotButton
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalItemScrollList_C_GetAllItemSlotButton final
{
public:
	TArray<class UWBP_PalItemSlotButtonBase_C*>   Slots;                                             // 0x0000(0x0010)(Parm, OutParm, ContainsInstancedReference)
	TArray<class UWBP_PalItemSlotButtonBase_C*>   TmpSlots;                                          // 0x0010(0x0010)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalItemScrollList_C_GetAllItemSlotButton) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_GetAllItemSlotButton");
static_assert(sizeof(WBP_PalItemScrollList_C_GetAllItemSlotButton) == 0x000080, "Wrong size on WBP_PalItemScrollList_C_GetAllItemSlotButton");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, Slots) == 0x000000, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::Slots' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, TmpSlots) == 0x000010, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::TmpSlots' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_GetScrollBox_ScrollBox) == 0x000030, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_GetAllChildren_ReturnValue) == 0x000038, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_Array_Length_ReturnValue) == 0x000048, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_Less_IntInt_ReturnValue) == 0x000058, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, K2Node_DynamicCast_AsWBP_Pal_Item_List_Block) == 0x000060, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::K2Node_DynamicCast_AsWBP_Pal_Item_List_Block' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetAllItemSlotButton, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000070, "Member 'WBP_PalItemScrollList_C_GetAllItemSlotButton::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetFocusTarget
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalItemScrollList_C_GetFocusTarget final
{
public:
	class UWidget*                                Target;                                            // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_34[0x4];                                       // 0x0034(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetFocusTarget_NewParam;                  // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_GetFocusTarget) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_GetFocusTarget");
static_assert(sizeof(WBP_PalItemScrollList_C_GetFocusTarget) == 0x000060, "Wrong size on WBP_PalItemScrollList_C_GetFocusTarget");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, Target) == 0x000000, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::Target' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, Temp_int_Loop_Counter_Variable) == 0x00000C, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_GetScrollBox_ScrollBox) == 0x000018, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_GetAllChildren_ReturnValue) == 0x000020, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_Less_IntInt_ReturnValue) == 0x000040, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_IsVisible_ReturnValue) == 0x000041, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, K2Node_DynamicCast_AsWBP_Pal_Item_List_Block) == 0x000048, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::K2Node_DynamicCast_AsWBP_Pal_Item_List_Block' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_GetFocusTarget, CallFunc_GetFocusTarget_NewParam) == 0x000058, "Member 'WBP_PalItemScrollList_C_GetFocusTarget::CallFunc_GetFocusTarget_NewParam' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.GetLastHoveredSlotButton
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_GetLastHoveredSlotButton final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           SlotButton;                                        // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_GetLastHoveredSlotButton) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_GetLastHoveredSlotButton");
static_assert(sizeof(WBP_PalItemScrollList_C_GetLastHoveredSlotButton) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_GetLastHoveredSlotButton");
static_assert(offsetof(WBP_PalItemScrollList_C_GetLastHoveredSlotButton, SlotButton) == 0x000000, "Member 'WBP_PalItemScrollList_C_GetLastHoveredSlotButton::SlotButton' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.HiddenEmptySlot
// 0x0080 (0x0080 - 0x0000)
struct WBP_PalItemScrollList_C_HiddenEmptySlot final
{
public:
	bool                                          IsALLEmpty;                                        // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0028(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                K2Node_DynamicCast_AsWBP_Pal_Item_List_Block;      // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item_1;                         // 0x0068(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0070(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_HiddenEmptySlot) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_HiddenEmptySlot");
static_assert(sizeof(WBP_PalItemScrollList_C_HiddenEmptySlot) == 0x000080, "Wrong size on WBP_PalItemScrollList_C_HiddenEmptySlot");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, IsALLEmpty) == 0x000000, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::IsALLEmpty' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, Temp_int_Loop_Counter_Variable_1) == 0x000010, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Add_IntInt_ReturnValue_1) == 0x000014, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, Temp_int_Array_Index_Variable_1) == 0x000018, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_GetScrollBox_ScrollBox) == 0x000020, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_GetAllChildren_ReturnValue) == 0x000028, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, K2Node_DynamicCast_AsWBP_Pal_Item_List_Block) == 0x000048, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::K2Node_DynamicCast_AsWBP_Pal_Item_List_Block' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, K2Node_DynamicCast_bSuccess) == 0x000050, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000058, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Array_Get_Item_1) == 0x000068, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_GetTargetSlot_targetSlot) == 0x000070, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Array_Length_ReturnValue_1) == 0x000078, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_IsValid_ReturnValue) == 0x00007C, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_Less_IntInt_ReturnValue_1) == 0x00007D, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_HiddenEmptySlot, CallFunc_IsEmpty_ReturnValue) == 0x00007E, "Member 'WBP_PalItemScrollList_C_HiddenEmptySlot::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.InitializeArrowVisibility
// 0x0018 (0x0018 - 0x0000)
struct WBP_PalItemScrollList_C_InitializeArrowVisibility final
{
public:
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0000(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_GetScrollOffset_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast; // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_InitializeArrowVisibility) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_InitializeArrowVisibility");
static_assert(sizeof(WBP_PalItemScrollList_C_InitializeArrowVisibility) == 0x000018, "Wrong size on WBP_PalItemScrollList_C_InitializeArrowVisibility");
static_assert(offsetof(WBP_PalItemScrollList_C_InitializeArrowVisibility, CallFunc_GetScrollBox_ScrollBox) == 0x000000, "Member 'WBP_PalItemScrollList_C_InitializeArrowVisibility::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_InitializeArrowVisibility, CallFunc_GetScrollOffset_ReturnValue) == 0x000008, "Member 'WBP_PalItemScrollList_C_InitializeArrowVisibility::CallFunc_GetScrollOffset_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_InitializeArrowVisibility, CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast) == 0x000010, "Member 'WBP_PalItemScrollList_C_InitializeArrowVisibility::CallFunc_UpdateArrowVisibilityAndAnimation_currentOffset_ImplicitCast' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetected_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnDragDetected_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnDragDetected_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnDragDetected_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnDragDetected_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnDragDetected_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnDragDetected_Internal, Widget) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnDragDetected_Internal::Widget' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnDragDetectedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature, Widget) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnDragDetectedSlot__DelegateSignature::Widget' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnEndHovered_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnEndHovered_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnEndHovered_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnEndHovered_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnEndHovered_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnEndHovered_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnEndHovered_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnEndHoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnEndHoveredSlot__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocused_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnFocused_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnFocused_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnFocused_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnFocused_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnFocused_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnFocused_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnFocused_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnFocusedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnFocusedSlot__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHovered_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnHovered_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnHovered_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnHovered_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnHovered_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnHovered_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnHovered_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnHovered_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnHoveredSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnHoveredSlot__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClicked_Internal
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemScrollList_C_OnLeftClicked_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnLeftClicked_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnLeftClicked_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnLeftClicked_Internal) == 0x000010, "Wrong size on WBP_PalItemScrollList_C_OnLeftClicked_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnLeftClicked_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnLeftClicked_Internal::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnLeftClicked_Internal, PressType) == 0x000008, "Member 'WBP_PalItemScrollList_C_OnLeftClicked_Internal::PressType' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnLeftClickedSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalItemScrollList_C_OnLeftClickedSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClicked_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnMiddleClicked_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnMiddleClicked_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnMiddleClicked_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnMiddleClicked_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnMiddleClicked_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnMiddleClicked_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnMiddleClicked_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnMiddleClickedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnMiddleClickedSlot__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature, Button) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnRequestUseItem__DelegateSignature::Button' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRequestUseItem_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnRequestUseItem_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnRequestUseItem_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnRequestUseItem_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnRequestUseItem_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnRequestUseItem_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRequestUseItem_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnRequestUseItem_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClicked_Internal
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalItemScrollList_C_OnRightClicked_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         Temp_byte_Variable;                                // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0018(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetStackCount_ReturnValue;                // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Divide_IntInt_ReturnValue;                // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsEmpty_ReturnValue;                      // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_25[0x3];                                       // 0x0025(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_Select_Default;                             // 0x002C(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPalContainerId                        CallFunc_GetId_ReturnValue;                        // 0x0030(0x0010)(ConstParm, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnRightClicked_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnRightClicked_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnRightClicked_Internal) == 0x000048, "Wrong size on WBP_PalItemScrollList_C_OnRightClicked_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, PressType) == 0x000008, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::PressType' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, Temp_byte_Variable) == 0x000009, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_GetTargetSlot_targetSlot) == 0x000010, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, Temp_int_Variable) == 0x000018, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_GetStackCount_ReturnValue) == 0x00001C, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_GetStackCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_Divide_IntInt_ReturnValue) == 0x000020, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_Divide_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_IsEmpty_ReturnValue) == 0x000024, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_Max_ReturnValue) == 0x000028, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, K2Node_Select_Default) == 0x00002C, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_GetId_ReturnValue) == 0x000030, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_GetId_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClicked_Internal, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_PalItemScrollList_C_OnRightClicked_Internal::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnRightClickedSlot__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature) == 0x000010, "Wrong size on WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature, PressType) == 0x000008, "Member 'WBP_PalItemScrollList_C_OnRightClickedSlot__DelegateSignature::PressType' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocused_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnUnfocused_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnUnfocused_Internal) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnUnfocused_Internal");
static_assert(sizeof(WBP_PalItemScrollList_C_OnUnfocused_Internal) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnUnfocused_Internal");
static_assert(offsetof(WBP_PalItemScrollList_C_OnUnfocused_Internal, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnUnfocused_Internal::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.OnUnfocusedSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature");
static_assert(sizeof(WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature");
static_assert(offsetof(WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature, buttonBase) == 0x000000, "Member 'WBP_PalItemScrollList_C_OnUnfocusedSlot__DelegateSignature::buttonBase' has a wrong offset!");

// Function WBP_PalItemScrollList.WBP_PalItemScrollList_C.SetQuickMoveTargetContainer
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalItemScrollList_C_SetQuickMoveTargetContainer final
{
public:
	class UPalItemContainer*                      TargetContainer;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalItemScrollList_C_SetQuickMoveTargetContainer) == 0x000008, "Wrong alignment on WBP_PalItemScrollList_C_SetQuickMoveTargetContainer");
static_assert(sizeof(WBP_PalItemScrollList_C_SetQuickMoveTargetContainer) == 0x000008, "Wrong size on WBP_PalItemScrollList_C_SetQuickMoveTargetContainer");
static_assert(offsetof(WBP_PalItemScrollList_C_SetQuickMoveTargetContainer, TargetContainer) == 0x000000, "Member 'WBP_PalItemScrollList_C_SetQuickMoveTargetContainer::TargetContainer' has a wrong offset!");

}

