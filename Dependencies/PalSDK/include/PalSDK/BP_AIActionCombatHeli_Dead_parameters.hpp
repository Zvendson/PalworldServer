#pragma once

#include "Basic.hpp"


namespace PalSDK::Params
{

// Function BP_AIActionCombatHeli_Dead.BP_AIActionCombatHeli_Dead_C.ActionStart
// 0x0008 (0x0008 - 0x0000)
struct BP_AIActionCombatHeli_Dead_C_ActionStart final
{
public:
	class APawn*                                  ControlledPawn;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_Dead_C_ActionStart) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_Dead_C_ActionStart");
static_assert(sizeof(BP_AIActionCombatHeli_Dead_C_ActionStart) == 0x000008, "Wrong size on BP_AIActionCombatHeli_Dead_C_ActionStart");
static_assert(offsetof(BP_AIActionCombatHeli_Dead_C_ActionStart, ControlledPawn) == 0x000000, "Member 'BP_AIActionCombatHeli_Dead_C_ActionStart::ControlledPawn' has a wrong offset!");

// Function BP_AIActionCombatHeli_Dead.BP_AIActionCombatHeli_Dead_C.ExecuteUbergraph_BP_AIActionCombatHeli_Dead
// 0x0020 (0x0020 - 0x0000)
struct BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPalActionComponent*                    CallFunc_GetActionComponent_ReturnValue;           // 0x0008(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayAction_ReturnValue;                   // 0x0010(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  K2Node_Event_ControlledPawn;                       // 0x0018(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead) == 0x000008, "Wrong alignment on BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead");
static_assert(sizeof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead) == 0x000020, "Wrong size on BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead");
static_assert(offsetof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead, EntryPoint) == 0x000000, "Member 'BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead, CallFunc_GetActionComponent_ReturnValue) == 0x000008, "Member 'BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead::CallFunc_GetActionComponent_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead, CallFunc_PlayAction_ReturnValue) == 0x000010, "Member 'BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead::CallFunc_PlayAction_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead, K2Node_Event_ControlledPawn) == 0x000018, "Member 'BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead::K2Node_Event_ControlledPawn' has a wrong offset!");

}

