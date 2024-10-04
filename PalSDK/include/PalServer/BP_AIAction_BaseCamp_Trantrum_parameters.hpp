#pragma once

#include "Basic.hpp"

#include "AIModule_structs.hpp"
#include "Engine_structs.hpp"


namespace PalServer::Params
{

// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionFinished
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_BaseCamp_Trantrum_C_ActionFinished final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             WithResult;                                        // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCamp_Trantrum_C_ActionFinished) == 0x000008, "Wrong alignment on BP_AIAction_BaseCamp_Trantrum_C_ActionFinished");
static_assert(sizeof(BP_AIAction_BaseCamp_Trantrum_C_ActionFinished) == 0x000010, "Wrong size on BP_AIAction_BaseCamp_Trantrum_C_ActionFinished");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ActionFinished, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ActionFinished::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ActionFinished, WithResult) == 0x000008, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ActionFinished::WithResult' has a wrong offset!");

// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIAction_BaseCamp_Trantrum_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCamp_Trantrum_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIAction_BaseCamp_Trantrum_C_ActionStart");
static_assert(sizeof(BP_AIAction_BaseCamp_Trantrum_C_ActionStart) == 0x000008, "Wrong size on BP_AIAction_BaseCamp_Trantrum_C_ActionStart");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionTick
// 0x0010 (0x0010 - 0x0000)
struct BP_AIAction_BaseCamp_Trantrum_C_ActionTick final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         DeltaSeconds;                                      // 0x0008(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCamp_Trantrum_C_ActionTick) == 0x000008, "Wrong alignment on BP_AIAction_BaseCamp_Trantrum_C_ActionTick");
static_assert(sizeof(BP_AIAction_BaseCamp_Trantrum_C_ActionTick) == 0x000010, "Wrong size on BP_AIAction_BaseCamp_Trantrum_C_ActionTick");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ActionTick, ControlledPawn) == 0x000000, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ActionTick::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ActionTick, DeltaSeconds) == 0x000008, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ActionTick::DeltaSeconds' has a wrong offset!");

// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum
// 0x0068 (0x0068 - 0x0000)
struct BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0010(0x0010)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x0020(0x0008)(NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_2;                     // 0x0028(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn_1;                     // 0x0030(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	EPawnActionResult                             K2Node_Event_WithResult;                           // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_39[0x7];                                       // 0x0039(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0040(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                         K2Node_Event_DeltaSeconds;                         // 0x0048(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APalCharacter*                          K2Node_DynamicCast_AsPal_Character;                // 0x0050(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UNiagaraComponent*                      CallFunc_SpawnSystemAtLocation_ReturnValue_1;      // 0x0060(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum) == 0x000008, "Wrong alignment on BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum");
static_assert(sizeof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum) == 0x000068, "Wrong size on BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, EntryPoint) == 0x000000, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, CallFunc_SpawnSystemAtLocation_ReturnValue) == 0x000008, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::CallFunc_SpawnSystemAtLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_CreateDelegate_OutputDelegate) == 0x000010, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, CallFunc_K2_SetTimerDelegate_ReturnValue) == 0x000020, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::CallFunc_K2_SetTimerDelegate_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_Event_ControlledPawn_2) == 0x000028, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_Event_ControlledPawn_2' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_Event_ControlledPawn_1) == 0x000030, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_Event_ControlledPawn_1' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_Event_WithResult) == 0x000038, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_Event_WithResult' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_Event_ControlledPawn) == 0x000040, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_Event_ControlledPawn' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_Event_DeltaSeconds) == 0x000048, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_Event_DeltaSeconds' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_DynamicCast_AsPal_Character) == 0x000050, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_DynamicCast_AsPal_Character' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, K2Node_DynamicCast_bSuccess) == 0x000058, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum, CallFunc_SpawnSystemAtLocation_ReturnValue_1) == 0x000060, "Member 'BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum::CallFunc_SpawnSystemAtLocation_ReturnValue_1' has a wrong offset!");

}

