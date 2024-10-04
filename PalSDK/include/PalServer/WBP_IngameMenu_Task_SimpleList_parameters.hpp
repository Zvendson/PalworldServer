#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(const class FString& NewNickName)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_14[0x4];                                       // 0x0014(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWBP_MainMenu_Pal_State_C*>      K2Node_MakeArray_Array;                            // 0x0018(0x0010)(ReferenceParm, ContainsInstancedReference)
};
static_assert(alignof(WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList");
static_assert(sizeof(WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList) == 0x000028, "Wrong size on WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList, EntryPoint) == 0x000000, "Member 'WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList, K2Node_MakeArray_Array) == 0x000018, "Member 'WBP_IngameMenu_Task_SimpleList_C_ExecuteUbergraph_WBP_IngameMenu_Task_SimpleList::K2Node_MakeArray_Array' has a wrong offset!");

// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.Setup
// 0x0040 (0x0040 - 0x0000)
struct WBP_IngameMenu_Task_SimpleList_C_Setup final
{
public:
	class UPalIndividualCharacterSlot*            TargetSlot;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalIndividualCharacterHandle*          CallFunc_GetHandle_ReturnValue;                    // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetWorkerComment_outName;                 // 0x0018(0x0018)()
	TArray<EPalUIConditionType>                   CallFunc_GetUIDisplayPalCondition_outArray;        // 0x0030(0x0010)(ReferenceParm)
};
static_assert(alignof(WBP_IngameMenu_Task_SimpleList_C_Setup) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_SimpleList_C_Setup");
static_assert(sizeof(WBP_IngameMenu_Task_SimpleList_C_Setup) == 0x000040, "Wrong size on WBP_IngameMenu_Task_SimpleList_C_Setup");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_Setup, TargetSlot) == 0x000000, "Member 'WBP_IngameMenu_Task_SimpleList_C_Setup::TargetSlot' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_Setup, CallFunc_GetHandle_ReturnValue) == 0x000008, "Member 'WBP_IngameMenu_Task_SimpleList_C_Setup::CallFunc_GetHandle_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_Setup, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Task_SimpleList_C_Setup::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_Setup, CallFunc_GetWorkerComment_outName) == 0x000018, "Member 'WBP_IngameMenu_Task_SimpleList_C_Setup::CallFunc_GetWorkerComment_outName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_Setup, CallFunc_GetUIDisplayPalCondition_outArray) == 0x000030, "Member 'WBP_IngameMenu_Task_SimpleList_C_Setup::CallFunc_GetUIDisplayPalCondition_outArray' has a wrong offset!");

// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateCondition
// 0x0010 (0x0010 - 0x0000)
struct WBP_IngameMenu_Task_SimpleList_C_UpdateCondition final
{
public:
	TArray<EPalUIConditionType>                   Conditions;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(WBP_IngameMenu_Task_SimpleList_C_UpdateCondition) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_SimpleList_C_UpdateCondition");
static_assert(sizeof(WBP_IngameMenu_Task_SimpleList_C_UpdateCondition) == 0x000010, "Wrong size on WBP_IngameMenu_Task_SimpleList_C_UpdateCondition");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_UpdateCondition, Conditions) == 0x000000, "Member 'WBP_IngameMenu_Task_SimpleList_C_UpdateCondition::Conditions' has a wrong offset!");

// Function WBP_IngameMenu_Task_SimpleList.WBP_IngameMenu_Task_SimpleList_C.UpdateNickName
// 0x0028 (0x0028 - 0x0000)
struct WBP_IngameMenu_Task_SimpleList_C_UpdateNickName final
{
public:
	class FString                                 NewNickName;                                       // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0010(0x0018)()
};
static_assert(alignof(WBP_IngameMenu_Task_SimpleList_C_UpdateNickName) == 0x000008, "Wrong alignment on WBP_IngameMenu_Task_SimpleList_C_UpdateNickName");
static_assert(sizeof(WBP_IngameMenu_Task_SimpleList_C_UpdateNickName) == 0x000028, "Wrong size on WBP_IngameMenu_Task_SimpleList_C_UpdateNickName");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_UpdateNickName, NewNickName) == 0x000000, "Member 'WBP_IngameMenu_Task_SimpleList_C_UpdateNickName::NewNickName' has a wrong offset!");
static_assert(offsetof(WBP_IngameMenu_Task_SimpleList_C_UpdateNickName, CallFunc_Conv_StringToText_ReturnValue) == 0x000010, "Member 'WBP_IngameMenu_Task_SimpleList_C_UpdateNickName::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

}

