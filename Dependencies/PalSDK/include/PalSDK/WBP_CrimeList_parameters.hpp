#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_CrimeList.WBP_CrimeList_C.SetCrimeList
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_CrimeList_C_SetCrimeList final
{
public:
	TArray<class FName>                           CrimeList;                                         // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class FName, int32>                      CrimeCountList;                                    // 0x0010(0x0050)(Edit, BlueprintVisible)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0060(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0064(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x006C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6D[0x3];                                       // 0x006D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0070(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0078(0x0004)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x007C(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0084(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_CrimeList_list_C*                  CallFunc_SpawnObject_ReturnValue;                  // 0x0098(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00B0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B4[0x4];                                       // 0x00B4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           CallFunc_Map_Keys_Keys;                            // 0x00B8(0x0010)(ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item_1;                         // 0x00C8(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Map_Find_Value;                           // 0x00D4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x00D8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00D9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DA[0x2];                                       // 0x00DA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Map_Find_Value_1;                         // 0x00DC(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue_1;                   // 0x00E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_E1[0x3];                                       // 0x00E1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_2;                 // 0x00E4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_CrimeList_C_SetCrimeList) == 0x000008, "Wrong alignment on WBP_CrimeList_C_SetCrimeList");
static_assert(sizeof(WBP_CrimeList_C_SetCrimeList) == 0x0000E8, "Wrong size on WBP_CrimeList_C_SetCrimeList");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CrimeList) == 0x000000, "Member 'WBP_CrimeList_C_SetCrimeList::CrimeList' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CrimeCountList) == 0x000010, "Member 'WBP_CrimeList_C_SetCrimeList::CrimeCountList' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, Temp_int_Array_Index_Variable) == 0x000060, "Member 'WBP_CrimeList_C_SetCrimeList::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Array_Length_ReturnValue) == 0x000064, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, Temp_int_Loop_Counter_Variable) == 0x000068, "Member 'WBP_CrimeList_C_SetCrimeList::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Less_IntInt_ReturnValue) == 0x00006C, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Add_IntInt_ReturnValue) == 0x000070, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, Temp_int_Array_Index_Variable_1) == 0x000074, "Member 'WBP_CrimeList_C_SetCrimeList::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, Temp_int_Variable) == 0x000078, "Member 'WBP_CrimeList_C_SetCrimeList::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Array_Get_Item) == 0x00007C, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, K2Node_MakeStruct_Margin) == 0x000084, "Member 'WBP_CrimeList_C_SetCrimeList::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_SpawnObject_ReturnValue) == 0x000098, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, Temp_int_Loop_Counter_Variable_1) == 0x0000A0, "Member 'WBP_CrimeList_C_SetCrimeList::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x0000A8, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000B0, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Map_Keys_Keys) == 0x0000B8, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Array_Get_Item_1) == 0x0000C8, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Array_Length_ReturnValue_1) == 0x0000D0, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Map_Find_Value) == 0x0000D4, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Map_Find_ReturnValue) == 0x0000D8, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000D9, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Map_Find_Value_1) == 0x0000DC, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Map_Find_Value_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Map_Find_ReturnValue_1) == 0x0000E0, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Map_Find_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetCrimeList, CallFunc_Add_IntInt_ReturnValue_2) == 0x0000E4, "Member 'WBP_CrimeList_C_SetCrimeList::CallFunc_Add_IntInt_ReturnValue_2' has a wrong offset!");

// Function WBP_CrimeList.WBP_CrimeList_C.SetPrizeMoney
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_CrimeList_C_SetPrizeMoney final
{
public:
	int32                                         Money;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetBindedOriginalText_ReturnValue;        // 0x0010(0x0018)()
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0028(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0078(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0088(0x0018)()
};
static_assert(alignof(WBP_CrimeList_C_SetPrizeMoney) == 0x000008, "Wrong alignment on WBP_CrimeList_C_SetPrizeMoney");
static_assert(sizeof(WBP_CrimeList_C_SetPrizeMoney) == 0x0000A0, "Wrong size on WBP_CrimeList_C_SetPrizeMoney");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, Money) == 0x000000, "Member 'WBP_CrimeList_C_SetPrizeMoney::Money' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_CrimeList_C_SetPrizeMoney::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, CallFunc_GetBindedOriginalText_ReturnValue) == 0x000010, "Member 'WBP_CrimeList_C_SetPrizeMoney::CallFunc_GetBindedOriginalText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, K2Node_MakeStruct_FormatArgumentData) == 0x000028, "Member 'WBP_CrimeList_C_SetPrizeMoney::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, K2Node_MakeArray_Array) == 0x000078, "Member 'WBP_CrimeList_C_SetPrizeMoney::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_C_SetPrizeMoney, CallFunc_Format_ReturnValue) == 0x000088, "Member 'WBP_CrimeList_C_SetPrizeMoney::CallFunc_Format_ReturnValue' has a wrong offset!");

}

