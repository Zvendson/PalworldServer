#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "E_PalUIThrowObjectNoneMessageType_structs.hpp"


namespace PalServer::Params
{

// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.Display
// 0x0028 (0x0028 - 0x0000)
struct WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display final
{
public:
	double                                        DisplayTime;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0018(0x0008)(NoDestructor, HasGetValueTypeHash)
	float                                         CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display");
static_assert(sizeof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display) == 0x000028, "Wrong size on WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display, DisplayTime) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display::DisplayTime' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display, CallFunc_K2_SetTimerDelegate_Time_ImplicitCast) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display::CallFunc_K2_SetTimerDelegate_Time_ImplicitCast' has a wrong offset!");

// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.SetDisplayMode
// 0x0038 (0x0038 - 0x0000)
struct WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode final
{
public:
	E_PalUIThrowObjectNoneMessageType             DisplayType;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    CallFunc_Map_Find_Value;                           // 0x0008(0x0010)(NoDestructor)
	bool                                          CallFunc_Map_Find_ReturnValue;                     // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalizedTextFromHandle_Text;          // 0x0020(0x0018)()
};
static_assert(alignof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode) == 0x000008, "Wrong alignment on WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode");
static_assert(sizeof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode) == 0x000038, "Wrong size on WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode, DisplayType) == 0x000000, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode::DisplayType' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode, CallFunc_Map_Find_Value) == 0x000008, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode::CallFunc_Map_Find_Value' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode, CallFunc_Map_Find_ReturnValue) == 0x000018, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode::CallFunc_Map_Find_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode, CallFunc_GetLocalizedTextFromHandle_Text) == 0x000020, "Member 'WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode::CallFunc_GetLocalizedTextFromHandle_Text' has a wrong offset!");

}

