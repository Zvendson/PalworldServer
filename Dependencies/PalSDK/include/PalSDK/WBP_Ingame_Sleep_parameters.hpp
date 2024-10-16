#pragma once

#include "Basic.hpp"

#include "Engine_structs.hpp"


namespace PalSDK::Params
{

// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.ExecuteUbergraph_WBP_Ingame_Sleep
// 0x0118 (0x0118 - 0x0000)
struct WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetNumPlayers_ReturnValue;                // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue;              // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0010(0x0050)(HasGetValueTypeHash)
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue;               // 0x0060(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_Count;                          // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_GetSleepingPlayerCount_ReturnValue;       // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         CallFunc_Conv_IntToInt64_ReturnValue_1;            // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x0078(0x0050)(HasGetValueTypeHash)
	TDelegate<void(int32 Num)>                    K2Node_CreateDelegate_OutputDelegate;              // 0x00C8(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00D8(0x0010)(ReferenceParm)
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x00E8(0x0018)()
	class UPalTimeManager*                        CallFunc_GetTimeManager_ReturnValue_1;             // 0x0100(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(int32 Num)>                    K2Node_CreateDelegate_OutputDelegate_1;            // 0x0108(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep) == 0x000008, "Wrong alignment on WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep");
static_assert(sizeof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep) == 0x000118, "Wrong size on WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, EntryPoint) == 0x000000, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_GetNumPlayers_ReturnValue) == 0x000004, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_GetNumPlayers_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_Conv_IntToInt64_ReturnValue) == 0x000008, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_Conv_IntToInt64_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_MakeStruct_FormatArgumentData) == 0x000010, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_GetTimeManager_ReturnValue) == 0x000060, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_GetTimeManager_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_CustomEvent_Count) == 0x000068, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_CustomEvent_Count' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_GetSleepingPlayerCount_ReturnValue) == 0x00006C, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_GetSleepingPlayerCount_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_Conv_IntToInt64_ReturnValue_1) == 0x000070, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_Conv_IntToInt64_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_MakeStruct_FormatArgumentData_1) == 0x000078, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_CreateDelegate_OutputDelegate) == 0x0000C8, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_MakeArray_Array) == 0x0000D8, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_Format_ReturnValue) == 0x0000E8, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, CallFunc_GetTimeManager_ReturnValue_1) == 0x000100, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::CallFunc_GetTimeManager_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep, K2Node_CreateDelegate_OutputDelegate_1) == 0x000108, "Member 'WBP_Ingame_Sleep_C_ExecuteUbergraph_WBP_Ingame_Sleep::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function WBP_Ingame_Sleep.WBP_Ingame_Sleep_C.SetSleepCount
// 0x0004 (0x0004 - 0x0000)
struct WBP_Ingame_Sleep_C_SetSleepCount final
{
public:
	int32                                         Count;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_Ingame_Sleep_C_SetSleepCount) == 0x000004, "Wrong alignment on WBP_Ingame_Sleep_C_SetSleepCount");
static_assert(sizeof(WBP_Ingame_Sleep_C_SetSleepCount) == 0x000004, "Wrong size on WBP_Ingame_Sleep_C_SetSleepCount");
static_assert(offsetof(WBP_Ingame_Sleep_C_SetSleepCount, Count) == 0x000000, "Member 'WBP_Ingame_Sleep_C_SetSleepCount::Count' has a wrong offset!");

}

