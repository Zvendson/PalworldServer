#pragma once

#include "Basic.hpp"

#include "SlateCore_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Crime_Found.WBP_Crime_Found_C.ExecuteUbergraph_WBP_Crime_Found
// 0x00A0 (0x00A0 - 0x0000)
struct WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalHUDService*                         CallFunc_GetHUDService_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_Crime_FoundList_C*                 CallFunc_SpawnObject_ReturnValue;                  // 0x0010(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class FName>                           K2Node_CustomEvent_CrimeIds;                       // 0x0028(0x0010)(ConstParm, ReferenceParm)
	class FName                                   CallFunc_Array_Get_Item;                           // 0x0038(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0040(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0044(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_45[0x3];                                       // 0x0045(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0048(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0050(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result; // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimationPlayCallbackProxy*      CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue; // 0x0068(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FMargin                                K2Node_MakeStruct_Margin;                          // 0x0074(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_84[0x4];                                       // 0x0084(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0094(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_95[0x3];                                       // 0x0095(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0098(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found) == 0x000008, "Wrong alignment on WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found");
static_assert(sizeof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found) == 0x0000A0, "Wrong size on WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, EntryPoint) == 0x000000, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_GetHUDService_ReturnValue) == 0x000008, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_GetHUDService_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_SpawnObject_ReturnValue) == 0x000010, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_SpawnObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, Temp_int_Array_Index_Variable) == 0x000018, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, Temp_int_Loop_Counter_Variable) == 0x00001C, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, K2Node_CustomEvent_CrimeIds) == 0x000028, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::K2Node_CustomEvent_CrimeIds' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Array_Get_Item) == 0x000038, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Array_Length_ReturnValue) == 0x000040, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Less_IntInt_ReturnValue) == 0x000044, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_PlayAnimation_ReturnValue) == 0x000048, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, K2Node_CreateDelegate_OutputDelegate) == 0x000050, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result) == 0x000060, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_CreatePlayAnimationTimeRangeProxyObject_Result' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue) == 0x000068, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_CreatePlayAnimationTimeRangeProxyObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_IsValid_ReturnValue) == 0x000070, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, K2Node_MakeStruct_Margin) == 0x000074, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::K2Node_MakeStruct_Margin' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000088, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Array_Length_ReturnValue_1) == 0x000090, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000094, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found, CallFunc_Array_Add_ReturnValue) == 0x000098, "Member 'WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function WBP_Crime_Found.WBP_Crime_Found_C.SetCrimesFound
// 0x0010 (0x0010 - 0x0000)
struct WBP_Crime_Found_C_SetCrimesFound final
{
public:
	TArray<class FName>                           CrimeIds;                                          // 0x0000(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_Crime_Found_C_SetCrimesFound) == 0x000008, "Wrong alignment on WBP_Crime_Found_C_SetCrimesFound");
static_assert(sizeof(WBP_Crime_Found_C_SetCrimesFound) == 0x000010, "Wrong size on WBP_Crime_Found_C_SetCrimesFound");
static_assert(offsetof(WBP_Crime_Found_C_SetCrimesFound, CrimeIds) == 0x000000, "Member 'WBP_Crime_Found_C_SetCrimesFound::CrimeIds' has a wrong offset!");

}

