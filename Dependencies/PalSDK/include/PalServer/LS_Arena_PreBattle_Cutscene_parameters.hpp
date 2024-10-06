#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.ExecuteUbergraph_LS_Arena_PreBattle_Cutscene (Director BP)
// 0x0028 (0x0028 - 0x0000)
struct LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_ final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalArenaPreBattleCutsceneEvent*        K2Node_CustomEvent_PreBattleEvent;                 // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          K2Node_CustomEvent_PlayerIndex;                    // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APalArenaPreBattleCutsceneEvent*        K2Node_CustomEvent_PreBattleEvent_1;               // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          K2Node_CustomEvent_PlayerIndex_1;                  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_) == 0x000008, "Wrong alignment on LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_");
static_assert(sizeof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_) == 0x000028, "Wrong size on LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_, EntryPoint) == 0x000000, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_::EntryPoint' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_, K2Node_CustomEvent_PreBattleEvent) == 0x000008, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_::K2Node_CustomEvent_PreBattleEvent' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_, K2Node_CustomEvent_PlayerIndex) == 0x000010, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_::K2Node_CustomEvent_PlayerIndex' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_, K2Node_CustomEvent_PreBattleEvent_1) == 0x000018, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_::K2Node_CustomEvent_PreBattleEvent_1' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_, K2Node_CustomEvent_PlayerIndex_1) == 0x000020, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_ExecuteUbergraph_LS_Arena_PreBattle_Cutscene__Director_BP_::K2Node_CustomEvent_PlayerIndex_1' has a wrong offset!");

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.PreBattleEvent_Event
// 0x0010 (0x0010 - 0x0000)
struct LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event final
{
public:
	class APalArenaPreBattleCutsceneEvent*        PreBattleEvent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event) == 0x000008, "Wrong alignment on LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event");
static_assert(sizeof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event) == 0x000010, "Wrong size on LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event, PreBattleEvent) == 0x000000, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event::PreBattleEvent' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event, PlayerIndex) == 0x000008, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event::PlayerIndex' has a wrong offset!");

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.PreBattleEvent_Event_0
// 0x0010 (0x0010 - 0x0000)
struct LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0 final
{
public:
	class APalArenaPreBattleCutsceneEvent*        PreBattleEvent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPalArenaPlayerIndex                          PlayerIndex;                                       // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0) == 0x000008, "Wrong alignment on LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0");
static_assert(sizeof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0) == 0x000010, "Wrong size on LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0, PreBattleEvent) == 0x000000, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0::PreBattleEvent' has a wrong offset!");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0, PlayerIndex) == 0x000008, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_PreBattleEvent_Event_0::PlayerIndex' has a wrong offset!");

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)
// 0x0008 (0x0008 - 0x0000)
struct LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_ final
{
public:
	class APalArenaPreBattleCutsceneEvent*        PreBattleEvent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_) == 0x000008, "Wrong alignment on LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_");
static_assert(sizeof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_) == 0x000008, "Wrong size on LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_, PreBattleEvent) == 0x000000, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP_::PreBattleEvent' has a wrong offset!");

// Function LS_Arena_PreBattle_Cutscene.LS_Arena_PreBattle_Cutscene (Director BP)_C.SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene (Director BP)_0
// 0x0008 (0x0008 - 0x0000)
struct LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0 final
{
public:
	class APalArenaPreBattleCutsceneEvent*        PreBattleEvent;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0) == 0x000008, "Wrong alignment on LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0");
static_assert(sizeof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0) == 0x000008, "Wrong size on LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0");
static_assert(offsetof(LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0, PreBattleEvent) == 0x000000, "Member 'LS_Arena_PreBattle_Cutscene__Director_BP__C_SequenceEvent__ENTRYPOINTLS_Arena_PreBattle_Cutscene__Director_BP__0::PreBattleEvent' has a wrong offset!");

}

