#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_CrimeList_list.WBP_CrimeList_list_C.SetCrime
// 0x0078 (0x0078 - 0x0000)
struct WBP_CrimeList_list_C_SetCrime final
{
public:
	class FName                                   CrimeId;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CrimeCount;                                        // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0010(0x0018)()
	class FString                                 CallFunc_Conv_NameToString_ReturnValue;            // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                   CallFunc_Conv_StringToName_ReturnValue;            // 0x0048(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                    K2Node_MakeStruct_DataTableRowHandle;              // 0x0050(0x0010)(NoDestructor)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0060(0x0018)()
};
static_assert(alignof(WBP_CrimeList_list_C_SetCrime) == 0x000008, "Wrong alignment on WBP_CrimeList_list_C_SetCrime");
static_assert(sizeof(WBP_CrimeList_list_C_SetCrime) == 0x000078, "Wrong size on WBP_CrimeList_list_C_SetCrime");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CrimeId) == 0x000000, "Member 'WBP_CrimeList_list_C_SetCrime::CrimeId' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CrimeCount) == 0x000008, "Member 'WBP_CrimeList_list_C_SetCrime::CrimeCount' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CallFunc_Conv_IntToText_ReturnValue) == 0x000010, "Member 'WBP_CrimeList_list_C_SetCrime::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CallFunc_Conv_NameToString_ReturnValue) == 0x000028, "Member 'WBP_CrimeList_list_C_SetCrime::CallFunc_Conv_NameToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CallFunc_Concat_StrStr_ReturnValue) == 0x000038, "Member 'WBP_CrimeList_list_C_SetCrime::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CallFunc_Conv_StringToName_ReturnValue) == 0x000048, "Member 'WBP_CrimeList_list_C_SetCrime::CallFunc_Conv_StringToName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, K2Node_MakeStruct_DataTableRowHandle) == 0x000050, "Member 'WBP_CrimeList_list_C_SetCrime::K2Node_MakeStruct_DataTableRowHandle' has a wrong offset!");
static_assert(offsetof(WBP_CrimeList_list_C_SetCrime, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000060, "Member 'WBP_CrimeList_list_C_SetCrime::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

