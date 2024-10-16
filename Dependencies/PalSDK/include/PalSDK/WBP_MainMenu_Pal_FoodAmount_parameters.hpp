#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C.ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount
// 0x0048 (0x0048 - 0x0000)
struct WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0010(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0028(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0030(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_31[0x7];                                       // 0x0031(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     K2Node_DynamicCast_AsWBP_Main_Menu_Pal_Food_Amount_Icon; // 0x0038(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x3];                                       // 0x0041(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0044(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount");
static_assert(sizeof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount) == 0x000048, "Wrong size on WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, EntryPoint) == 0x000000, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_GetAllChildren_ReturnValue) == 0x000010, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_Array_Length_ReturnValue) == 0x000020, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_Array_Get_Item) == 0x000028, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_Less_IntInt_ReturnValue) == 0x000030, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, K2Node_DynamicCast_AsWBP_Main_Menu_Pal_Food_Amount_Icon) == 0x000038, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::K2Node_DynamicCast_AsWBP_Main_Menu_Pal_Food_Amount_Icon' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, K2Node_DynamicCast_bSuccess) == 0x000040, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount, CallFunc_Array_Add_ReturnValue) == 0x000044, "Member 'WBP_MainMenu_Pal_FoodAmount_C_ExecuteUbergraph_WBP_MainMenu_Pal_FoodAmount::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_MainMenu_Pal_FoodAmount.WBP_MainMenu_Pal_FoodAmount_C.SetFoodAmount
// 0x0028 (0x0028 - 0x0000)
struct WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount final
{
public:
	int32                                         FoodAmount;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_D[0x3];                                        // 0x000D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWBP_MainMenu_Pal_FoodAmountIcon_C*     CallFunc_Array_Get_Item;                           // 0x0018(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount) == 0x000008, "Wrong alignment on WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount");
static_assert(sizeof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount) == 0x000028, "Wrong size on WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, FoodAmount) == 0x000000, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::FoodAmount' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, Temp_int_Array_Index_Variable) == 0x000004, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, Temp_int_Loop_Counter_Variable) == 0x000008, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, CallFunc_Add_IntInt_ReturnValue) == 0x000010, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, CallFunc_Array_Length_ReturnValue) == 0x000014, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, CallFunc_Array_Get_Item) == 0x000018, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount, CallFunc_Less_IntInt_ReturnValue_1) == 0x000020, "Member 'WBP_MainMenu_Pal_FoodAmount_C_SetFoodAmount::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");

}

