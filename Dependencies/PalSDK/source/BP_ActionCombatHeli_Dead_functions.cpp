#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionCombatHeli_Dead_classes.hpp"
#include "PalSDK/BP_ActionCombatHeli_Dead_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionCombatHeli_Dead.BP_ActionCombatHeli_Dead_C.ExecuteUbergraph_BP_ActionCombatHeli_Dead
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionCombatHeli_Dead_C::ExecuteUbergraph_BP_ActionCombatHeli_Dead(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCombatHeli_Dead_C", "ExecuteUbergraph_BP_ActionCombatHeli_Dead");

	Params::BP_ActionCombatHeli_Dead_C_ExecuteUbergraph_BP_ActionCombatHeli_Dead Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionCombatHeli_Dead.BP_ActionCombatHeli_Dead_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionCombatHeli_Dead_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCombatHeli_Dead_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

