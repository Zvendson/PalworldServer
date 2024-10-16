#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_PalDebugInfo.WBP_PalDebugInfo_C.ExecuteUbergraph_WBP_PalDebugInfo
// 0x00F0 (0x00F0 - 0x0000)
struct WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalGameStateInGame*                    CallFunc_GetPalGameStateInGame_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_GetWorldSaveDirectoryName_ReturnValue;    // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Left_ReturnValue;                         // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetBuildConfiguration_ReturnValue;        // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_GetDisplayVersion_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Map_Find_Value;                           // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0070(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0090(0x0018)()
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_2;              // 0x00A8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_3;              // 0x00B8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_4;              // 0x00C8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue_1;          // 0x00D8(0x0018)()
};
static_assert(alignof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo) == 0x000008, "Wrong alignment on WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo");
static_assert(sizeof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo) == 0x0000F0, "Wrong size on WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, EntryPoint) == 0x000000, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_GetPalGameStateInGame_ReturnValue) == 0x000008, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_GetPalGameStateInGame_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_GetWorldSaveDirectoryName_ReturnValue) == 0x000018, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_GetWorldSaveDirectoryName_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Left_ReturnValue) == 0x000028, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Left_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_GetBuildConfiguration_ReturnValue) == 0x000038, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_GetBuildConfiguration_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_GetDisplayVersion_ReturnValue) == 0x000048, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_GetDisplayVersion_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Map_Find_Value) == 0x000058, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Map_Find_ReturnValue) == 0x000068, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Concat_StrStr_ReturnValue) == 0x000070, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Concat_StrStr_ReturnValue_1) == 0x000080, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Conv_StringToText_ReturnValue) == 0x000090, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Concat_StrStr_ReturnValue_2) == 0x0000A8, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Concat_StrStr_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Concat_StrStr_ReturnValue_3) == 0x0000B8, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Concat_StrStr_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Concat_StrStr_ReturnValue_4) == 0x0000C8, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Concat_StrStr_ReturnValue_4' has a wrong offset!");
static_assert(offsetof(WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo, CallFunc_Conv_StringToText_ReturnValue_1) == 0x0000D8, "Member 'WBP_PalDebugInfo_C_ExecuteUbergraph_WBP_PalDebugInfo::CallFunc_Conv_StringToText_ReturnValue_1' has a wrong offset!");

}

