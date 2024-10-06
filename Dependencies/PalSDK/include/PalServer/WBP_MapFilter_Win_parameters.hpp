#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ChangeFilter
// 0x0002 (0x0002 - 0x0000)
struct WBP_MapFilter_Win_C_ChangeFilter final
{
public:
	EPalLocationType                              LocationType;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapFilter_Win_C_ChangeFilter) == 0x000001, "Wrong alignment on WBP_MapFilter_Win_C_ChangeFilter");
static_assert(sizeof(WBP_MapFilter_Win_C_ChangeFilter) == 0x000002, "Wrong size on WBP_MapFilter_Win_C_ChangeFilter");
static_assert(offsetof(WBP_MapFilter_Win_C_ChangeFilter, LocationType) == 0x000000, "Member 'WBP_MapFilter_Win_C_ChangeFilter::LocationType' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ChangeFilter, IsEnable) == 0x000001, "Member 'WBP_MapFilter_Win_C_ChangeFilter::IsEnable' has a wrong offset!");

// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ExecuteUbergraph_WBP_MapFilter_Win
// 0x00B8 (0x00B8 - 0x0000)
struct WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_MapFilter_Content_C*>       K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              K2Node_CustomEvent_LocationType;                   // 0x002C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable_1;                     // 0x002D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FDataTableRowHandle>            CallFunc_Map_Values_Values;                        // 0x0030(0x0010)(ReferenceParm)
	struct FDataTableRowHandle                    CallFunc_Array_Get_Item;                           // 0x0040(0x0010)(NoDestructor)
	TArray<EPalLocationType>                      CallFunc_Map_Keys_Keys;                            // 0x0050(0x0010)(ReferenceParm)
	TDelegate<void(EPalLocationType LocationType, bool IsEnable)> K2Node_CreateDelegate_OutputDelegate;              // 0x0060(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_Array_Get_Item_1;                         // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsEnable;                       // 0x0071(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_72[0x6];                                       // 0x0072(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<EPalLocationType>                      CallFunc_Map_Keys_Keys_1;                          // 0x0078(0x0010)(ReferenceParm)
	class UWBP_MapFilter_Content_C*               CallFunc_Array_Get_Item_2;                         // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	EPalLocationType                              CallFunc_Array_Get_Item_3;                         // 0x0090(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0091(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x0092(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x0093(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue;                    // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanOR_ReturnValue_1;                  // 0x009C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x009D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9E[0x2];                                       // 0x009E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00A0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A4[0x4];                                       // 0x00A4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MapFilter_Content_C*               CallFunc_Array_Get_Item_4;                         // 0x00A8(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00B0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win) == 0x000008, "Wrong alignment on WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win");
static_assert(sizeof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win) == 0x0000B8, "Wrong size on WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, EntryPoint) == 0x000000, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, Temp_int_Array_Index_Variable) == 0x00000C, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, Temp_int_Array_Index_Variable_1) == 0x000010, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, Temp_int_Loop_Counter_Variable_1) == 0x000014, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, K2Node_MakeArray_Array) == 0x000018, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Add_IntInt_ReturnValue_1) == 0x000028, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, K2Node_CustomEvent_LocationType) == 0x00002C, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::K2Node_CustomEvent_LocationType' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, K2Node_CustomEvent_IsEnable_1) == 0x00002D, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::K2Node_CustomEvent_IsEnable_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Map_Values_Values) == 0x000030, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Map_Values_Values' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Get_Item) == 0x000040, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Map_Keys_Keys) == 0x000050, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Map_Keys_Keys' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, K2Node_CreateDelegate_OutputDelegate) == 0x000060, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Get_Item_1) == 0x000070, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, K2Node_CustomEvent_IsEnable) == 0x000071, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::K2Node_CustomEvent_IsEnable' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Map_Keys_Keys_1) == 0x000078, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Map_Keys_Keys_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Get_Item_2) == 0x000088, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Get_Item_2' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Get_Item_3) == 0x000090, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Get_Item_3' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000091, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_EqualEqual_ByteByte_ReturnValue_1) == 0x000092, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_EqualEqual_ByteByte_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_EqualEqual_ByteByte_ReturnValue_2) == 0x000093, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_EqualEqual_ByteByte_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_BooleanOR_ReturnValue) == 0x000094, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_BooleanOR_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Length_ReturnValue) == 0x000098, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_BooleanOR_ReturnValue_1) == 0x00009C, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_BooleanOR_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Less_IntInt_ReturnValue) == 0x00009D, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Length_ReturnValue_1) == 0x0000A0, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Array_Get_Item_4) == 0x0000A8, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Array_Get_Item_4' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000B0, "Member 'WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ForceFTEnable
// 0x0001 (0x0001 - 0x0000)
struct WBP_MapFilter_Win_C_ForceFTEnable final
{
public:
	bool                                          IsEnable;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapFilter_Win_C_ForceFTEnable) == 0x000001, "Wrong alignment on WBP_MapFilter_Win_C_ForceFTEnable");
static_assert(sizeof(WBP_MapFilter_Win_C_ForceFTEnable) == 0x000001, "Wrong size on WBP_MapFilter_Win_C_ForceFTEnable");
static_assert(offsetof(WBP_MapFilter_Win_C_ForceFTEnable, IsEnable) == 0x000000, "Member 'WBP_MapFilter_Win_C_ForceFTEnable::IsEnable' has a wrong offset!");

// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.OnFilterChanged__DelegateSignature
// 0x0002 (0x0002 - 0x0000)
struct WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature final
{
public:
	EPalLocationType                              FilterMap;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsEnable;                                          // 0x0001(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature) == 0x000001, "Wrong alignment on WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature");
static_assert(sizeof(WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature) == 0x000002, "Wrong size on WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature");
static_assert(offsetof(WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature, FilterMap) == 0x000000, "Member 'WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature::FilterMap' has a wrong offset!");
static_assert(offsetof(WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature, IsEnable) == 0x000001, "Member 'WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature::IsEnable' has a wrong offset!");

}

