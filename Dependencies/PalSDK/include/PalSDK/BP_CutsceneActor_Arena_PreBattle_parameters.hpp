#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C.ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle
// 0x0020 (0x0020 - 0x0000)
struct BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalCutsceneBindParameter*              K2Node_Event_BindParameter;                        // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPalCutsceneArenaPreBattleBindParameter* K2Node_DynamicCast_AsPal_Cutscene_Arena_Pre_Battle_Bind_Parameter; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle) == 0x000008, "Wrong alignment on BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle");
static_assert(sizeof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle) == 0x000020, "Wrong size on BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle");
static_assert(offsetof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle, EntryPoint) == 0x000000, "Member 'BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle, K2Node_Event_BindParameter) == 0x000008, "Member 'BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle::K2Node_Event_BindParameter' has a wrong offset!");
static_assert(offsetof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle, K2Node_DynamicCast_AsPal_Cutscene_Arena_Pre_Battle_Bind_Parameter) == 0x000010, "Member 'BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle::K2Node_DynamicCast_AsPal_Cutscene_Arena_Pre_Battle_Bind_Parameter' has a wrong offset!");
static_assert(offsetof(BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle, K2Node_DynamicCast_bSuccess) == 0x000018, "Member 'BP_CutsceneActor_Arena_PreBattle_C_ExecuteUbergraph_BP_CutsceneActor_Arena_PreBattle::K2Node_DynamicCast_bSuccess' has a wrong offset!");

// Function BP_CutsceneActor_Arena_PreBattle.BP_CutsceneActor_Arena_PreBattle_C.SetBindParameter
// 0x0008 (0x0008 - 0x0000)
struct BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter final
{
public:
	class UPalCutsceneBindParameter*              BindParameter;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter) == 0x000008, "Wrong alignment on BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter");
static_assert(sizeof(BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter) == 0x000008, "Wrong size on BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter");
static_assert(offsetof(BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter, BindParameter) == 0x000000, "Member 'BP_CutsceneActor_Arena_PreBattle_C_SetBindParameter::BindParameter' has a wrong offset!");

}

