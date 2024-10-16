#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AINPC_CombatMeleeState_RotateForNearSwing_classes.hpp"
#include "PalSDK/BP_AINPC_CombatMeleeState_RotateForNearSwing_parameters.hpp"


namespace PalSDK
{

// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_C", "ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing");

	Params::BP_AINPC_CombatMeleeState_RotateForNearSwing_C_ExecuteUbergraph_BP_AINPC_CombatMeleeState_RotateForNearSwing Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatMeleeState_RotateForNearSwing.BP_AINPC_CombatMeleeState_RotateForNearSwing_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatMeleeState_RotateForNearSwing_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatMeleeState_RotateForNearSwing_C", "StateTick");

	Params::BP_AINPC_CombatMeleeState_RotateForNearSwing_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

