#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.ExecuteUbergraph_WBP_MapPoint_Info_RespawnData
// 0x0080 (0x0080 - 0x0000)
struct WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable;                              // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             Temp_object_Variable_1;                            // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UImage*                                 CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x3];                                       // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         K2Node_CustomEvent_Rank;                           // 0x003C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0040(0x0018)()
	int32                                         CallFunc_Max_ReturnValue;                          // 0x0058(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Min_ReturnValue;                          // 0x005C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0060(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_61[0x7];                                       // 0x0061(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             K2Node_Select_Default;                             // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UImage*>                         K2Node_MakeArray_Array;                            // 0x0070(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData) == 0x000008, "Wrong alignment on WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData");
static_assert(sizeof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData) == 0x000080, "Wrong size on WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, EntryPoint) == 0x000000, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, Temp_object_Variable) == 0x000008, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::Temp_object_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Array_Length_ReturnValue) == 0x000010, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, Temp_object_Variable_1) == 0x000018, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::Temp_object_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, Temp_int_Array_Index_Variable) == 0x000020, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Add_IntInt_ReturnValue) == 0x000034, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, Temp_bool_Variable) == 0x000038, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, K2Node_CustomEvent_Rank) == 0x00003C, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::K2Node_CustomEvent_Rank' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000040, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Max_ReturnValue) == 0x000058, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Max_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Min_ReturnValue) == 0x00005C, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Min_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, CallFunc_Greater_IntInt_ReturnValue) == 0x000060, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, K2Node_Select_Default) == 0x000068, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData, K2Node_MakeArray_Array) == 0x000070, "Member 'WBP_MapPoint_Info_RespawnData_C_ExecuteUbergraph_WBP_MapPoint_Info_RespawnData::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_MapPoint_Info_RespawnData.WBP_MapPoint_Info_RespawnData_C.SetRank
// 0x0004 (0x0004 - 0x0000)
struct WBP_MapPoint_Info_RespawnData_C_SetRank final
{
public:
	int32                                         Rank;                                              // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapPoint_Info_RespawnData_C_SetRank) == 0x000004, "Wrong alignment on WBP_MapPoint_Info_RespawnData_C_SetRank");
static_assert(sizeof(WBP_MapPoint_Info_RespawnData_C_SetRank) == 0x000004, "Wrong size on WBP_MapPoint_Info_RespawnData_C_SetRank");
static_assert(offsetof(WBP_MapPoint_Info_RespawnData_C_SetRank, Rank) == 0x000000, "Member 'WBP_MapPoint_Info_RespawnData_C_SetRank::Rank' has a wrong offset!");

}

