#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Add Player Inventory Block
// 0x0108 (0x0108 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block final
{
public:
	EPalPlayerInventoryType                       InventoryType;                                     // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CreatedBlock;                                      // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalPlayerInventoryData*                CallFunc_GetLocalInventoryData_ReturnValue;        // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetEnumeratorUserFriendlyName_ReturnValue; // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0030(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	class UPalItemContainer*                      CallFunc_TryGetContainerFromInventoryType_OutContainer; // 0x0098(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_TryGetContainerFromInventoryType_ReturnValue; // 0x00A0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A1[0x7];                                       // 0x00A1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00A8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00B8(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x7];                                       // 0x00E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetInventoryCategoryName_outName;         // 0x00E8(0x0018)()
	class UWBP_PalItemListBlock_C*                CallFunc_AddItemContainer_createdBlock;            // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block) == 0x000108, "Wrong size on WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, InventoryType) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::InventoryType' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CreatedBlock) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CreatedBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_GetLocalInventoryData_ReturnValue) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_GetLocalInventoryData_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_GetEnumeratorUserFriendlyName_ReturnValue) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_GetEnumeratorUserFriendlyName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_IsValid_ReturnValue) == 0x000028, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_Conv_StringToText_ReturnValue) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_TryGetContainerFromInventoryType_OutContainer) == 0x000098, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_TryGetContainerFromInventoryType_OutContainer' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_TryGetContainerFromInventoryType_ReturnValue) == 0x0000A0, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_TryGetContainerFromInventoryType_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, K2Node_MakeArray_Array) == 0x0000A8, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_Format_ReturnValue) == 0x0000B8, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D0, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x0000E0, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_GetInventoryCategoryName_outName) == 0x0000E8, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_GetInventoryCategoryName_outName' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block, CallFunc_AddItemContainer_createdBlock) == 0x000100, "Member 'WBP_PalPlayerInventoryScrollList_C_Add_Player_Inventory_Block::CallFunc_AddItemContainer_createdBlock' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ClearFiltering
// 0x0038 (0x0038 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_ClearFiltering final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalPlayerInventoryType>               CallFunc_Map_Keys_Keys;                            // 0x0010(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item;                           // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_ClearFiltering");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering) == 0x000038, "Wrong size on WBP_PalPlayerInventoryScrollList_C_ClearFiltering");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Map_Keys_Keys) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Array_Get_Item) == 0x000024, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Less_IntInt_ReturnValue) == 0x000025, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Map_Find_Value) == 0x000028, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ClearFiltering, CallFunc_Map_Find_ReturnValue) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_ClearFiltering::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ExecuteUbergraph_WBP_PalPlayerInventoryScrollList
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList) == 0x000004, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList) == 0x000004, "Wrong size on WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList, EntryPoint) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_ExecuteUbergraph_WBP_PalPlayerInventoryScrollList::EntryPoint' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromInventoryType
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType final
{
public:
	TArray<EPalPlayerInventoryType>               DisplayTypes;                                      // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEmptyDisplaySlot;                                // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                TopBlock;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item;                           // 0x0041(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_42[0x6];                                       // 0x0042(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0048(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Array_IsEmpty_ReturnValue;                // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue_1;                    // 0x0059(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5A[0x6];                                       // 0x005A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value;                           // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalPlayerInventoryType>               CallFunc_Map_Keys_Keys;                            // 0x0070(0x0010)(ReferenceParm)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item_1;                         // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0084(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value_1;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType) == 0x000098, "Wrong size on WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, DisplayTypes) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::DisplayTypes' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, IsEmptyDisplaySlot) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::IsEmptyDisplaySlot' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, TopBlock) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::TopBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, Temp_int_Loop_Counter_Variable) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Array_Length_ReturnValue) == 0x000024, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, Temp_int_Loop_Counter_Variable_1) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Add_IntInt_ReturnValue_1) == 0x000034, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, Temp_int_Array_Index_Variable) == 0x000038, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, Temp_int_Array_Index_Variable_1) == 0x00003C, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_IsValid_ReturnValue) == 0x000040, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Array_Get_Item) == 0x000041, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000048, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Array_IsEmpty_ReturnValue) == 0x000058, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Array_IsEmpty_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_IsValid_ReturnValue_1) == 0x000059, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_IsValid_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Map_Find_Value) == 0x000060, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Map_Find_ReturnValue) == 0x000068, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Map_Keys_Keys) == 0x000070, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Array_Get_Item_1) == 0x000080, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Array_Length_ReturnValue_1) == 0x000084, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Map_Find_Value_1) == 0x000088, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Map_Find_ReturnValue_1) == 0x000090, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType, CallFunc_Less_IntInt_ReturnValue_1) == 0x000091, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromInventoryType::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromItemTypeA
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA final
{
public:
	TArray<EPalItemTypeA>                         DisplayTypesA;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEmptySlotDIsplay;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EPalPlayerInventoryType>               CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA) == 0x000048, "Wrong size on WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, DisplayTypesA) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::DisplayTypesA' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, IsEmptySlotDIsplay) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::IsEmptySlotDIsplay' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Array_Get_Item) == 0x000034, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeA::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.FilteringFromItemTypeB
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB final
{
public:
	TArray<EPalItemTypeB>                         DisplayTypesB;                                     // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          IsEmptySlotDIsplay;                                // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<EPalPlayerInventoryType>               CallFunc_Map_Keys_Keys;                            // 0x0020(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item;                           // 0x0034(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0035(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_36[0x2];                                       // 0x0036(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value;                           // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB) == 0x000048, "Wrong size on WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, DisplayTypesB) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::DisplayTypesB' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, IsEmptySlotDIsplay) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::IsEmptySlotDIsplay' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, Temp_int_Array_Index_Variable) == 0x000014, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, Temp_int_Loop_Counter_Variable) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Map_Keys_Keys) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Array_Length_ReturnValue) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Array_Get_Item) == 0x000034, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Less_IntInt_ReturnValue) == 0x000035, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Map_Find_Value) == 0x000038, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_PalPlayerInventoryScrollList_C_FilteringFromItemTypeB::CallFunc_Map_Find_ReturnValue' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnLeftCllicked
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           buttonBase;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalItemSlotPressType                         PressType;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPalItemSlotId                         K2Node_MakeStruct_PalItemSlotId;                   // 0x001C(0x0014)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked) == 0x000030, "Wrong size on WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked, buttonBase) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked::buttonBase' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked, PressType) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked::PressType' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked, CallFunc_GetTargetSlot_targetSlot) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked, K2Node_MakeStruct_PalItemSlotId) == 0x00001C, "Member 'WBP_PalPlayerInventoryScrollList_C_OnLeftCllicked::K2Node_MakeStruct_PalItemSlotId' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnRequestOpenUseItemPanel__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature final
{
public:
	class UPalItemSlot*                           SelectedSlot;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature) == 0x000008, "Wrong size on WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature, SelectedSlot) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_OnRequestOpenUseItemPanel__DelegateSignature::SelectedSlot' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnTriedEquipSlot__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           SlotButton;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature) == 0x000008, "Wrong size on WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature, SlotButton) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot__DelegateSignature::SlotButton' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.OnTriedEquipSlot_Internal
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal) == 0x000008, "Wrong size on WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal, Widget) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_OnTriedEquipSlot_Internal::Widget' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Open Use Item Panel
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel final
{
public:
	class UWBP_PalItemSlotButtonBase_C*           Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalItemSlot*                           CallFunc_GetTargetSlot_targetSlot;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel) == 0x000010, "Wrong size on WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel, Button) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel::Button' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel, CallFunc_GetTargetSlot_targetSlot) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_Open_Use_Item_Panel::CallFunc_GetTargetSlot_targetSlot' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.ScrollToCategoryTop
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop final
{
public:
	EPalPlayerInventoryType                       TargetType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                TopFocusTarget;                                    // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox;                   // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             CallFunc_GetScrollBox_ScrollBox_1;                 // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalItemListBlock_C*                CallFunc_Map_Find_Value;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x005C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x005D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop) == 0x000060, "Wrong size on WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, TargetType) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::TargetType' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, TopFocusTarget) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::TopFocusTarget' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, Temp_int_Loop_Counter_Variable) == 0x000014, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Add_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_GetScrollBox_ScrollBox) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_GetScrollBox_ScrollBox' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_GetScrollBox_ScrollBox_1) == 0x000028, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_GetScrollBox_ScrollBox_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Map_Find_ReturnValue) == 0x000038, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000040, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Array_Length_ReturnValue) == 0x000058, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_Less_IntInt_ReturnValue) == 0x00005C, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop, CallFunc_IsVisible_ReturnValue) == 0x00005D, "Member 'WBP_PalPlayerInventoryScrollList_C_ScrollToCategoryTop::CallFunc_IsVisible_ReturnValue' has a wrong offset!");

// Function WBP_PalPlayerInventoryScrollList.WBP_PalPlayerInventoryScrollList_C.Setup
// 0x00C0 (0x00C0 - 0x0000)
struct WBP_PalPlayerInventoryScrollList_C_Setup final
{
public:
	class UPalUIInventoryModel*                   UseModel;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalItemListBlock_C*>        CallFunc_Map_Values_Values;                        // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Array_Get_Item;                           // 0x0050(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalItemSlotButtonBase_C*>   CallFunc_GetAllItemSlotButtons_slotButtons;        // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemSlotButtonBase_C*           CallFunc_Array_Get_Item_1;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_79[0x3];                                       // 0x0079(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_81[0x3];                                       // 0x0081(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* Button)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0084(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalPlayerInventoryType                       CallFunc_Array_Get_Item_2;                         // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9C[0x4];                                       // 0x009C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalItemListBlock_C*                CallFunc_Add_Player_Inventory_Block_createdBlock;  // 0x00A0(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(class UWBP_PalItemSlotButtonBase_C* buttonBase, EPalItemSlotPressType PressType)> K2Node_CreateDelegate_OutputDelegate_2;            // 0x00AC(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalPlayerInventoryScrollList_C_Setup) == 0x000008, "Wrong alignment on WBP_PalPlayerInventoryScrollList_C_Setup");
static_assert(sizeof(WBP_PalPlayerInventoryScrollList_C_Setup) == 0x0000C0, "Wrong size on WBP_PalPlayerInventoryScrollList_C_Setup");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, UseModel) == 0x000000, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::UseModel' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Array_Index_Variable) == 0x000010, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Array_Index_Variable_1) == 0x000014, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Loop_Counter_Variable_1) == 0x000018, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Add_IntInt_ReturnValue_1) == 0x00001C, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Array_Index_Variable_2) == 0x000020, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, Temp_int_Loop_Counter_Variable_2) == 0x000034, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Map_Values_Values) == 0x000038, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Add_IntInt_ReturnValue_2) == 0x000048, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Get_Item) == 0x000050, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_GetAllItemSlotButtons_slotButtons) == 0x000058, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_GetAllItemSlotButtons_slotButtons' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Length_ReturnValue_1) == 0x00007C, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Less_IntInt_ReturnValue_1) == 0x000080, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, K2Node_CreateDelegate_OutputDelegate_1) == 0x000084, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Get_Item_2) == 0x000094, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Array_Length_ReturnValue_2) == 0x000098, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Add_Player_Inventory_Block_createdBlock) == 0x0000A0, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Add_Player_Inventory_Block_createdBlock' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, CallFunc_Less_IntInt_ReturnValue_2) == 0x0000A8, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalPlayerInventoryScrollList_C_Setup, K2Node_CreateDelegate_OutputDelegate_2) == 0x0000AC, "Member 'WBP_PalPlayerInventoryScrollList_C_Setup::K2Node_CreateDelegate_OutputDelegate_2' has a wrong offset!");

}

