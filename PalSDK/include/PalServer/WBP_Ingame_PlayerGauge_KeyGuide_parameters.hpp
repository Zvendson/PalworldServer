#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Ingame_PlayerGauge_KeyGuide.WBP_Ingame_PlayerGauge_KeyGuide_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide
// 0x0038 (0x0038 - 0x0000)
struct WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value;                           // 0x0008(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
};
static_assert(alignof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide");
static_assert(sizeof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide) == 0x000038, "Wrong size on WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide");
static_assert(offsetof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide, EntryPoint) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_KeyGuide_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_KeyGuide::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

