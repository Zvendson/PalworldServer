#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AINPC_CombatGunState_MeleeAttack_classes.hpp"
#include "PalSDK/BP_AINPC_CombatGunState_MeleeAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_MeleeAttack_C::ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack");

	Params::BP_AINPC_CombatGunState_MeleeAttack_C_ExecuteUbergraph_BP_AINPC_CombatGunState_MeleeAttack Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_CombatGunState_MeleeAttack.BP_AINPC_CombatGunState_MeleeAttack_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_CombatGunState_MeleeAttack_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_CombatGunState_MeleeAttack_C", "StateTick");

	Params::BP_AINPC_CombatGunState_MeleeAttack_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

