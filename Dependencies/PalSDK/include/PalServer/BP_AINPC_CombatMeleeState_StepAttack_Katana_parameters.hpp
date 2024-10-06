#pragma once

#include "Basic.hpp"

#include "Pal_structs.hpp"


namespace PalServer::Params
{

// Function BP_AINPC_CombatMeleeState_StepAttack_Katana.BP_AINPC_CombatMeleeState_StepAttack_Katana_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana
// 0x0130 (0x0130 - 0x0000)
struct BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4[0x4];                                        // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 CallFunc_GetTargetActor_TargetActor;               // 0x0008(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat; // 0x0010(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                         Pad_18[0x8];                                       // 0x0018(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FActionDynamicParameter                K2Node_MakeStruct_ActionDynamicParameter;          // 0x0020(0x00E0)()
	class UPalActionComponent*                    CallFunc_GetBodyActionComponentRef_ActionComp;     // 0x0100(0x0008)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_AIAction_NPC_CombatBase_C*          CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1; // 0x0108(0x0008)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UPalActionBase*                         CallFunc_PlayActionParameter_ReturnValue;          // 0x0110(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                            CallFunc_GetController_ReturnValue;                // 0x0118(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APalCharacter*                          CallFunc_GetSelfActor_SelfActor;                   // 0x0120(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana) == 0x000010, "Wrong alignment on BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana");
static_assert(sizeof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana) == 0x000130, "Wrong size on BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, EntryPoint) == 0x000000, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::EntryPoint' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetTargetActor_TargetActor) == 0x000008, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetTargetActor_TargetActor' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat) == 0x000010, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, K2Node_MakeStruct_ActionDynamicParameter) == 0x000020, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::K2Node_MakeStruct_ActionDynamicParameter' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetBodyActionComponentRef_ActionComp) == 0x000100, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetBodyActionComponentRef_ActionComp' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1) == 0x000108, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetCombatAIActionRef_BPAIActionNPCCombat_1' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_PlayActionParameter_ReturnValue) == 0x000110, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_PlayActionParameter_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetController_ReturnValue) == 0x000118, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetController_ReturnValue' has a wrong offset!");
static_assert(offsetof(BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana, CallFunc_GetSelfActor_SelfActor) == 0x000120, "Member 'BP_AINPC_CombatMeleeState_StepAttack_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_StepAttack_Katana::CallFunc_GetSelfActor_SelfActor' has a wrong offset!");

}

