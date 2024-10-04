#include "PalServer/Basic.hpp"

#include "PalServer/BP_AINPC_CombatGunState_FireMove_FlameThrower_classes.hpp"
#include "PalServer/BP_AINPC_CombatGunState_FireMove_FlameThrower_parameters.hpp"


namespace PalServer
{

// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower");

	Params::BP_AINPC_CombatGunState_FireMove_FlameThrower_C_ExecuteUbergraph_BP_AINPC_CombatGunState_FireMove_FlameThrower Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_FireMove_FlameThrower.BP_AINPC_CombatGunState_FireMove_FlameThrower_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_FireMove_FlameThrower_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_FireMove_FlameThrower_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}

}

