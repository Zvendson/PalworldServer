#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Crime_FoundList.WBP_Crime_FoundList_C.SetCrimeName
// 0x0058 (0x0058 - 0x0000)
struct WBP_Crime_FoundList_C_SetCrimeName final
{
public:
	class FName                                   CrimeId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0030(0x0010)(NoDestructor)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0040(0x0018)()
};
static_assert(alignof(WBP_Crime_FoundList_C_SetCrimeName) == 0x000008, "Wrong alignment on WBP_Crime_FoundList_C_SetCrimeName");
static_assert(sizeof(WBP_Crime_FoundList_C_SetCrimeName) == 0x000058, "Wrong size on WBP_Crime_FoundList_C_SetCrimeName");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, CrimeId) == 0x000000, "Member 'WBP_Crime_FoundList_C_SetCrimeName::CrimeId' has a wrong offset!");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, CallFunc_Conv_NameToString_ReturnValue) == 0x000008, "Member 'WBP_Crime_FoundList_C_SetCrimeName::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, CallFunc_Concat_StrStr_ReturnValue) == 0x000018, "Member 'WBP_Crime_FoundList_C_SetCrimeName::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, CallFunc_Conv_StringToName_ReturnValue) == 0x000028, "Member 'WBP_Crime_FoundList_C_SetCrimeName::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, K2Node_MakeStruct_DataTableRowHandle) == 0x000030, "Member 'WBP_Crime_FoundList_C_SetCrimeName::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_Crime_FoundList_C_SetCrimeName, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000040, "Member 'WBP_Crime_FoundList_C_SetCrimeName::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

