#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_classes.hpp"
#include "PalSDK/BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_parameters.hpp"


namespace PalSDK
{

// Function BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana.BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana");

	Params::BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana.BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_AttackForNearSwing_Katana_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}

}

