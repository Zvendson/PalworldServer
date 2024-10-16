#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.Anm_Open
// 0x0004 (0x0004 - 0x0000)
struct WBP_PalLvExp_List_C_Anm_Open final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_List_C_Anm_Open) == 0x000004, "Wrong alignment on WBP_PalLvExp_List_C_Anm_Open");
static_assert(sizeof(WBP_PalLvExp_List_C_Anm_Open) == 0x000004, "Wrong size on WBP_PalLvExp_List_C_Anm_Open");
static_assert(offsetof(WBP_PalLvExp_List_C_Anm_Open, Index_0) == 0x000000, "Member 'WBP_PalLvExp_List_C_Anm_Open::Index_0' has a wrong offset!");

// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.ExecuteUbergraph_WBP_PalLvExp_List
// 0x0048 (0x0048 - 0x0000)
struct WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Index;                          // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_21[0x7];                                       // 0x0021(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_PalLvExp_C*                        CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UWBP_PalLvExp_C*>                K2Node_MakeArray_Array;                            // 0x0038(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List) == 0x000008, "Wrong alignment on WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List");
static_assert(sizeof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List) == 0x000048, "Wrong size on WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, EntryPoint) == 0x000000, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, K2Node_CustomEvent_Index) == 0x000010, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::K2Node_CustomEvent_Index' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_Array_Length_ReturnValue_1) == 0x00001C, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000020, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, CallFunc_PlayAnimation_ReturnValue) == 0x000030, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List, K2Node_MakeArray_Array) == 0x000038, "Member 'WBP_PalLvExp_List_C_ExecuteUbergraph_WBP_PalLvExp_List::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_PalLvExp_List.WBP_PalLvExp_List_C.Setup
// 0x0058 (0x0058 - 0x0000)
struct WBP_PalLvExp_List_C_Setup final
{
public:
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalOtomoHolderComponentBase*           CallFunc_GetOtomoHolderComponent_ReturnValue;      // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWBP_PalLvExp_C*                        CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_OtomoPalHolderComponent_C*          K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component; // 0x0020(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UPalIndividualCharacterSlot*>    CallFunc_GetSlots_Slots;                           // 0x0030(0x0010)(ReferenceParm)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_44[0x4];                                       // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalIndividualCharacterSlot*            CallFunc_Array_Get_Item_1;                         // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0050(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_PalLvExp_List_C_Setup) == 0x000008, "Wrong alignment on WBP_PalLvExp_List_C_Setup");
static_assert(sizeof(WBP_PalLvExp_List_C_Setup) == 0x000058, "Wrong size on WBP_PalLvExp_List_C_Setup");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, Temp_int_Array_Index_Variable) == 0x000000, "Member 'WBP_PalLvExp_List_C_Setup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, Temp_int_Loop_Counter_Variable) == 0x000004, "Member 'WBP_PalLvExp_List_C_Setup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_Add_IntInt_ReturnValue) == 0x000008, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_GetOtomoHolderComponent_ReturnValue) == 0x000010, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_GetOtomoHolderComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component) == 0x000020, "Member 'WBP_PalLvExp_List_C_Setup::K2Node_DynamicCast_AsBP_Otomo_Pal_Holder_Component' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, K2Node_DynamicCast_bSuccess) == 0x000028, "Member 'WBP_PalLvExp_List_C_Setup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_GetSlots_Slots) == 0x000030, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_GetSlots_Slots' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_Array_Get_Item_1) == 0x000048, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(WBP_PalLvExp_List_C_Setup, CallFunc_Less_IntInt_ReturnValue) == 0x000050, "Member 'WBP_PalLvExp_List_C_Setup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

}

