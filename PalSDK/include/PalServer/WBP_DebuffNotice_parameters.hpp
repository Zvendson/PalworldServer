#pragma once

#include "Basic.hpp"

#include "E_PalUIPlayerDebuffNoticeType_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_DebuffNotice.WBP_DebuffNotice_C.ExecuteUbergraph_WBP_DebuffNotice
// 0x0010 (0x0010 - 0x0000)
struct WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice) == 0x000008, "Wrong alignment on WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice");
static_assert(sizeof(WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice) == 0x000010, "Wrong size on WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice");
static_assert(offsetof(WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice, EntryPoint) == 0x000000, "Member 'WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function WBP_DebuffNotice.WBP_DebuffNotice_C.Setup
// 0x00E8 (0x00E8 - 0x0000)
struct WBP_DebuffNotice_C_Setup final
{
public:
	E_PalUIPlayerDebuffNoticeType                 DebuffType;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_ByteToString_ReturnValue;            // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0018(0x0018)()
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value;                           // 0x0030(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0048(0x0050)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x0098(0x0010)(ReferenceParm)
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x00A8(0x0018)()
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00C0(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x00D8(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_DebuffNotice_C_Setup) == 0x000008, "Wrong alignment on WBP_DebuffNotice_C_Setup");
static_assert(sizeof(WBP_DebuffNotice_C_Setup) == 0x0000E8, "Wrong size on WBP_DebuffNotice_C_Setup");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, DebuffType) == 0x000000, "Member 'WBP_DebuffNotice_C_Setup::DebuffType' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Conv_ByteToString_ReturnValue) == 0x000008, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Conv_ByteToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Conv_StringToText_ReturnValue) == 0x000018, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Map_Find_Value) == 0x000030, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Map_Find_ReturnValue) == 0x000040, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, K2Node_MakeStruct_FormatArgumentData) == 0x000048, "Member 'WBP_DebuffNotice_C_Setup::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, K2Node_MakeArray_Array) == 0x000098, "Member 'WBP_DebuffNotice_C_Setup::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_GetLocalizedTextFromHandle_Text) == 0x0000A8, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Format_ReturnValue) == 0x0000C0, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_DebuffNotice_C_Setup, CallFunc_Conv_TextToString_ReturnValue) == 0x0000D8, "Member 'WBP_DebuffNotice_C_Setup::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");

}

