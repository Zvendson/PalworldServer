#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_classes.hpp"
#include "PalSDK/BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_parameters.hpp"


namespace PalSDK
{

// Function BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana.BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana");

	Params::BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana.BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C", "StateTick");

	Params::BP_AINPC_CombatMeleeState_RotateForNearSwing_Katana_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

