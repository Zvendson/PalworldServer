#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionCombatHeli_Dead_classes.hpp"
#include "PalSDK/BP_AIActionCombatHeli_Dead_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionCombatHeli_Dead.BP_AIActionCombatHeli_Dead_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_Dead_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_Dead_C", "ActionStart");

	Params::BP_AIActionCombatHeli_Dead_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_Dead.BP_AIActionCombatHeli_Dead_C.ExecuteUbergraph_BP_AIActionCombatHeli_Dead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_Dead_C::ExecuteUbergraph_BP_AIActionCombatHeli_Dead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_Dead_C", "ExecuteUbergraph_BP_AIActionCombatHeli_Dead");

	Params::BP_AIActionCombatHeli_Dead_C_ExecuteUbergraph_BP_AIActionCombatHeli_Dead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

