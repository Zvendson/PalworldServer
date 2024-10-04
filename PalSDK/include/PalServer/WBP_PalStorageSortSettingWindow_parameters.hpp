#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.ApplyCachedSortInfo
// 0x0088 (0x0088 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo final
{
public:
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_2;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> CallFunc_Map_Values_Values;                        // 0x0020(0x0010)(ReferenceParm, ContainsInstancedReference)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* CallFunc_Array_Get_Item;                           // 0x0030(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_2;                  // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalStorageSortElementFilterCheckBox_C*> CallFunc_Map_Values_Values_1;                      // 0x0040(0x0010)(ReferenceParm, ContainsInstancedReference)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x7];                                       // 0x0051(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortElementFilterCheckBox_C* CallFunc_Array_Get_Item_1;                         // 0x0058(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x0069(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x006A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6B[0x5];                                       // 0x006B(0x0005)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortTypeButton_C*        CallFunc_Array_Get_Item_2;                         // 0x0070(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_2;               // 0x0078(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_2;                // 0x007C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalCharacterContainerSortType                CallFunc_GetBindedSortType_SortType;               // 0x007D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x007E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue;               // 0x007F(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Array_Contains_ReturnValue_1;             // 0x0080(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x0081(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo) == 0x000088, "Wrong size on WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Loop_Counter_Variable) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_byte_Variable) == 0x00000C, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Add_IntInt_ReturnValue_1) == 0x000018, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Array_Index_Variable_2) == 0x00001C, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Array_Index_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Map_Values_Values) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Get_Item) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Length_ReturnValue) == 0x000038, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_int_Loop_Counter_Variable_2) == 0x00003C, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_int_Loop_Counter_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Map_Values_Values_1) == 0x000040, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Map_Values_Values_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Get_Item_1) == 0x000058, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Length_ReturnValue_1) == 0x000060, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Add_IntInt_ReturnValue_2) == 0x000064, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Less_IntInt_ReturnValue_1) == 0x000068, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_byte_Variable_1) == 0x000069, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, Temp_bool_Variable) == 0x00006A, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Get_Item_2) == 0x000070, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Length_ReturnValue_2) == 0x000078, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Length_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Less_IntInt_ReturnValue_2) == 0x00007C, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Less_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_GetBindedSortType_SortType) == 0x00007D, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_GetBindedSortType_SortType' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x00007E, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Contains_ReturnValue) == 0x00007F, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Contains_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, CallFunc_Array_Contains_ReturnValue_1) == 0x000080, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::CallFunc_Array_Contains_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo, K2Node_Select_Default) == 0x000081, "Member 'WBP_PalStorageSortSettingWindow_C_ApplyCachedSortInfo::K2Node_Select_Default' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature final
{
public:
	class UCommonButtonBase*                      Button;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature) == 0x000008, "Wrong size on WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature, Button) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_BndEvt__WBP_PalStorageSortSettingWindow_WBP_PalInvisibleButton_Favorite_K2Node_ComponentBoundEvent_2_CommonButtonBaseClicked__DelegateSignature::Button' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CacheSortInfo
// 0x0050 (0x0050 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CacheSortInfo final
{
public:
	TArray<EPalWorkSuitability>                   CallFunc_CollectFilteringSuitability_SuitabilityArray; // 0x0000(0x0010)(ReferenceParm)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalElementType>                       CallFunc_CollectFilteringElementType_ElementTypeArray; // 0x0018(0x0010)(ReferenceParm)
	struct FPalCharacterContainerSortInfo         K2Node_MakeStruct_PalCharacterContainerSortInfo;   // 0x0028(0x0028)()
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CacheSortInfo");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo) == 0x000050, "Wrong size on WBP_PalStorageSortSettingWindow_C_CacheSortInfo");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo, CallFunc_CollectFilteringSuitability_SuitabilityArray) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CacheSortInfo::CallFunc_CollectFilteringSuitability_SuitabilityArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo, CallFunc_IsChecked_ReturnValue) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_CacheSortInfo::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo, CallFunc_CollectFilteringElementType_ElementTypeArray) == 0x000018, "Member 'WBP_PalStorageSortSettingWindow_C_CacheSortInfo::CallFunc_CollectFilteringElementType_ElementTypeArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CacheSortInfo, K2Node_MakeStruct_PalCharacterContainerSortInfo) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_CacheSortInfo::K2Node_MakeStruct_PalCharacterContainerSortInfo' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CollectFilteringElementType
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType final
{
public:
	TArray<EPalElementType>                       ElementTypeArray;                                  // 0x0000(0x0010)(Parm, OutParm)
	TArray<EPalElementType>                       TmpElementTypeArray;                               // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalStorageSortElementFilterCheckBox_C*> CallFunc_Map_Values_Values;                        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortElementFilterCheckBox_C* CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0051(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_52[0x2];                                       // 0x0052(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType) == 0x000058, "Wrong size on WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, ElementTypeArray) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::ElementTypeArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, TmpElementTypeArray) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::TmpElementTypeArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Map_Values_Values) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_IsChecked_ReturnValue) == 0x000051, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_IsChecked_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringElementType::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CollectFilteringSuitability
// 0x0060 (0x0060 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability final
{
public:
	TArray<EPalWorkSuitability>                   SuitabilityArray;                                  // 0x0000(0x0010)(Parm, OutParm)
	TArray<EPalWorkSuitability>                   TmpSuitabilityArray;                               // 0x0010(0x0010)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C*> CallFunc_Map_Values_Values;                        // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* CallFunc_Array_Get_Item;                           // 0x0048(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_51[0x3];                                       // 0x0051(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0054(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsChecked_ReturnValue;                    // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability) == 0x000060, "Wrong size on WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, SuitabilityArray) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::SuitabilityArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, TmpSuitabilityArray) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::TmpSuitabilityArray' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Map_Values_Values) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Array_Get_Item) == 0x000048, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_Array_Add_ReturnValue) == 0x000054, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_Array_Add_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability, CallFunc_IsChecked_ReturnValue) == 0x000058, "Member 'WBP_PalStorageSortSettingWindow_C_CollectFilteringSuitability::CallFunc_IsChecked_ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToCloseButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton) == 0x000010, "Wrong size on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton, Navigation_0) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton, ReturnValue) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToCloseButton::ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToFavoriteCheckBox
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox) == 0x000010, "Wrong size on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox, Navigation_0) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox, ReturnValue) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToFavoriteCheckBox::ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToSortButton
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton) == 0x000010, "Wrong size on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton, Navigation_0) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton, ReturnValue) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortButton::ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.CustomNavi_ToSortTypeTop
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop final
{
public:
	EUINavigation                                 Navigation_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                ReturnValue;                                       // 0x0008(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop) == 0x000010, "Wrong size on WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop, Navigation_0) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop::Navigation_0' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop, ReturnValue) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_CustomNavi_ToSortTypeTop::ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.ExecuteUbergraph_WBP_PalStorageSortSettingWindow
// 0x0010 (0x0010 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UCommonButtonBase*                      K2Node_ComponentBoundEvent_Button;                 // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow) == 0x000010, "Wrong size on WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow, EntryPoint) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow, K2Node_ComponentBoundEvent_Button) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_ExecuteUbergraph_WBP_PalStorageSortSettingWindow::K2Node_ComponentBoundEvent_Button' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedElementTypeCheckBox
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox final
{
public:
	bool                                          bChecked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalElementType                               ElementType;                                       // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox) == 0x000001, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox) == 0x000002, "Wrong size on WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox, bChecked) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox::bChecked' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox, ElementType) == 0x000001, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedElementTypeCheckBox::ElementType' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedSortTypeButton
// 0x0030 (0x0030 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton final
{
public:
	class UWBP_PalStorageSortTypeButton_C*        Widget;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalCharacterContainerSortType                CallFunc_GetBindedSortType_SortType;               // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortTypeButton_C*        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton) == 0x000030, "Wrong size on WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, Widget) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::Widget' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, Temp_int_Array_Index_Variable) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_GetBindedSortType_SortType) == 0x00000C, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_GetBindedSortType_SortType' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, Temp_int_Loop_Counter_Variable) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_Array_Length_ReturnValue) == 0x000018, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_Less_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000029, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedSortTypeButton::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.OnClickedWorkSuitabilityCheckBox
// 0x0002 (0x0002 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox final
{
public:
	bool                                          bChecked;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalWorkSuitability                           WorkSuitbility;                                    // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox) == 0x000001, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox) == 0x000002, "Wrong size on WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox, bChecked) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox::bChecked' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox, WorkSuitbility) == 0x000001, "Member 'WBP_PalStorageSortSettingWindow_C_OnClickedWorkSuitabilityCheckBox::WorkSuitbility' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupElementTypeCheckBox
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox final
{
public:
	int32                                         ColumnCount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RowCount;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bChecked, EPalElementType ElementType)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalStorageSortElementFilterCheckBox_C* CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox) == 0x000098, "Wrong size on WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, ColumnCount) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::ColumnCount' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, RowCount) == 0x000004, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::RowCount' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, Temp_int_Variable) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, Temp_int_Variable_2) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Conv_IntToByte_ReturnValue) == 0x000018, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_GetValidValue_ReturnValue) == 0x000019, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00001A, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_NotEqual_ByteByte_ReturnValue) == 0x00001B, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_NotEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, Temp_int_Variable_3) == 0x000024, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000029, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_SelectFloat_ReturnValue_1) == 0x000038, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, K2Node_MakeStruct_Margin) == 0x000040, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_MakeLiteralInt_ReturnValue) == 0x000068, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x000070, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000078, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_Create_ReturnValue) == 0x000080, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, CallFunc_AddChildToGrid_ReturnValue) == 0x000088, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, K2Node_MakeStruct_Left_ImplicitCast) == 0x000090, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox, K2Node_MakeStruct_Top_ImplicitCast) == 0x000094, "Member 'WBP_PalStorageSortSettingWindow_C_SetupElementTypeCheckBox::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupSortTypeButton
// 0x0040 (0x0040 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class UWBP_PalStorageSortTypeButton_C* Widget)> K2Node_CreateDelegate_OutputDelegate;              // 0x000C(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalStorageSortTypeButton_C*        CallFunc_Array_Get_Item;                           // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D[0x3];                                       // 0x002D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_PalStorageSortTypeButton_C*> K2Node_MakeArray_Array;                            // 0x0030(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton) == 0x000040, "Wrong size on WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, K2Node_CreateDelegate_OutputDelegate) == 0x00000C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, CallFunc_Array_Get_Item) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, CallFunc_Array_Length_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, CallFunc_Less_IntInt_ReturnValue) == 0x00002C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton, K2Node_MakeArray_Array) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_SetupSortTypeButton::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.SetupWorkSuitabilityCheckBox
// 0x0098 (0x0098 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox final
{
public:
	int32                                         ColumnCount;                                       // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         RowCount;                                          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_1;                               // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_2;                               // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetValidValue_ReturnValue;                // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_Conv_IntToByte_ReturnValue_1;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsDisplayWorkSuitability_ForUI_ShouldDisplay; // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         CallFunc_GetEnumeratorValueFromIndex_ReturnValue;  // 0x001C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1D[0x3];                                       // 0x001D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Conv_ByteToInt_ReturnValue;               // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable_3;                               // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue_1;             // 0x0029(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A[0x6];                                       // 0x002A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	double                                        CallFunc_SelectFloat_ReturnValue;                  // 0x0030(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                        CallFunc_SelectFloat_ReturnValue_1;                // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0040(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TDelegate<void(bool bChecked, EPalWorkSuitability WorkSuitbility)> K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0064(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_65[0x3];                                       // 0x0065(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_MakeLiteralInt_ReturnValue;               // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APlayerController*                      CallFunc_GetLocalPlayerController_ReturnValue;     // 0x0078(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalStorageSortWorkSuitabilityFilterCheckBox_C* CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UGridSlot*                              CallFunc_AddChildToGrid_ReturnValue;               // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Left_ImplicitCast;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_MakeStruct_Top_ImplicitCast;                // 0x0094(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox) == 0x000098, "Wrong size on WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, ColumnCount) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::ColumnCount' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, RowCount) == 0x000004, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::RowCount' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, Temp_int_Variable) == 0x000008, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, Temp_int_Variable_1) == 0x00000C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::Temp_int_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, Temp_int_Variable_2) == 0x000010, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::Temp_int_Variable_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Add_IntInt_ReturnValue) == 0x000014, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Conv_IntToByte_ReturnValue) == 0x000018, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Conv_IntToByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_GetValidValue_ReturnValue) == 0x000019, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_GetValidValue_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Conv_IntToByte_ReturnValue_1) == 0x00001A, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Conv_IntToByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_IsDisplayWorkSuitability_ForUI_ShouldDisplay) == 0x00001B, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_IsDisplayWorkSuitability_ForUI_ShouldDisplay' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_GetEnumeratorValueFromIndex_ReturnValue) == 0x00001C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_GetEnumeratorValueFromIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Conv_ByteToInt_ReturnValue) == 0x000020, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Conv_ByteToInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, Temp_int_Variable_3) == 0x000024, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::Temp_int_Variable_3' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Greater_IntInt_ReturnValue) == 0x000028, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Greater_IntInt_ReturnValue_1) == 0x000029, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Greater_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_SelectFloat_ReturnValue) == 0x000030, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_SelectFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_SelectFloat_ReturnValue_1) == 0x000038, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_SelectFloat_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, K2Node_MakeStruct_Margin) == 0x000040, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Add_IntInt_ReturnValue_1) == 0x000060, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000064, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_MakeLiteralInt_ReturnValue) == 0x000068, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_MakeLiteralInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Add_IntInt_ReturnValue_2) == 0x000070, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_GetLocalPlayerController_ReturnValue) == 0x000078, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_GetLocalPlayerController_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_Create_ReturnValue) == 0x000080, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, CallFunc_AddChildToGrid_ReturnValue) == 0x000088, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::CallFunc_AddChildToGrid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, K2Node_MakeStruct_Left_ImplicitCast) == 0x000090, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::K2Node_MakeStruct_Left_ImplicitCast' has a wrong offset!");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox, K2Node_MakeStruct_Top_ImplicitCast) == 0x000094, "Member 'WBP_PalStorageSortSettingWindow_C_SetupWorkSuitabilityCheckBox::K2Node_MakeStruct_Top_ImplicitCast' has a wrong offset!");

// Function WBP_PalStorageSortSettingWindow.WBP_PalStorageSortSettingWindow_C.BP_GetDesiredFocusTarget
// 0x0008 (0x0008 - 0x0000)
struct WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget final
{
public:
	class UWidget*                                ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong alignment on WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget");
static_assert(sizeof(WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget) == 0x000008, "Wrong size on WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget");
static_assert(offsetof(WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget, ReturnValue) == 0x000000, "Member 'WBP_PalStorageSortSettingWindow_C_BP_GetDesiredFocusTarget::ReturnValue' has a wrong offset!");

}

