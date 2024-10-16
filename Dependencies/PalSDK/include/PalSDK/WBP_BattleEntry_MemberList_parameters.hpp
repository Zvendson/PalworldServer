#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.ExecuteUbergraph_WBP_BattleEntry_MemberList
// 0x0058 (0x0058 - 0x0000)
struct WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                 K2Node_CustomEvent_PlayerName;                     // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	int32                                         K2Node_CustomEvent_PlayLv;                         // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsHost;                         // 0x0024(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_CustomEvent_IsValid;                        // 0x0025(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_26[0x2];                                       // 0x0026(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_IntToText_ReturnValue;               // 0x0028(0x0018)()
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0040(0x0018)()
};
static_assert(alignof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList) == 0x000008, "Wrong alignment on WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList");
static_assert(sizeof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList) == 0x000058, "Wrong size on WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, EntryPoint) == 0x000000, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::EntryPoint' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, K2Node_CustomEvent_PlayerName) == 0x000010, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::K2Node_CustomEvent_PlayerName' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, K2Node_CustomEvent_PlayLv) == 0x000020, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::K2Node_CustomEvent_PlayLv' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, K2Node_CustomEvent_IsHost) == 0x000024, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::K2Node_CustomEvent_IsHost' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, K2Node_CustomEvent_IsValid) == 0x000025, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::K2Node_CustomEvent_IsValid' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, CallFunc_Conv_IntToText_ReturnValue) == 0x000028, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::CallFunc_Conv_IntToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList, CallFunc_Conv_StringToText_ReturnValue) == 0x000040, "Member 'WBP_BattleEntry_MemberList_C_ExecuteUbergraph_WBP_BattleEntry_MemberList::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetPlayerInfo
// 0x0018 (0x0018 - 0x0000)
struct WBP_BattleEntry_MemberList_C_SetPlayerInfo final
{
public:
	class FString                                 PlayerName;                                        // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	int32                                         PlayLv;                                            // 0x0010(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsHost;                                            // 0x0014(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleEntry_MemberList_C_SetPlayerInfo) == 0x000008, "Wrong alignment on WBP_BattleEntry_MemberList_C_SetPlayerInfo");
static_assert(sizeof(WBP_BattleEntry_MemberList_C_SetPlayerInfo) == 0x000018, "Wrong size on WBP_BattleEntry_MemberList_C_SetPlayerInfo");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_SetPlayerInfo, PlayerName) == 0x000000, "Member 'WBP_BattleEntry_MemberList_C_SetPlayerInfo::PlayerName' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_SetPlayerInfo, PlayLv) == 0x000010, "Member 'WBP_BattleEntry_MemberList_C_SetPlayerInfo::PlayLv' has a wrong offset!");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_SetPlayerInfo, IsHost) == 0x000014, "Member 'WBP_BattleEntry_MemberList_C_SetPlayerInfo::IsHost' has a wrong offset!");

// Function WBP_BattleEntry_MemberList.WBP_BattleEntry_MemberList_C.SetValidation
// 0x0001 (0x0001 - 0x0000)
struct WBP_BattleEntry_MemberList_C_SetValidation final
{
public:
	bool                                          IsValid;                                           // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(WBP_BattleEntry_MemberList_C_SetValidation) == 0x000001, "Wrong alignment on WBP_BattleEntry_MemberList_C_SetValidation");
static_assert(sizeof(WBP_BattleEntry_MemberList_C_SetValidation) == 0x000001, "Wrong size on WBP_BattleEntry_MemberList_C_SetValidation");
static_assert(offsetof(WBP_BattleEntry_MemberList_C_SetValidation, IsValid) == 0x000000, "Member 'WBP_BattleEntry_MemberList_C_SetValidation::IsValid' has a wrong offset!");

}

