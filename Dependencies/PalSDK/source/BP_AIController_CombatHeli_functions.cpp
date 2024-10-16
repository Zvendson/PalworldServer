#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIController_CombatHeli_classes.hpp"
#include "PalSDK/BP_AIController_CombatHeli_parameters.hpp"


namespace PalSDK
{

// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.ExecuteUbergraph_BP_AIController_CombatHeli
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_CombatHeli_C::ExecuteUbergraph_BP_AIController_CombatHeli(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIController_CombatHeli_C", "ExecuteUbergraph_BP_AIController_CombatHeli");

	Params::BP_AIController_CombatHeli_C_ExecuteUbergraph_BP_AIController_CombatHeli Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.On Dead
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void ABP_AIController_CombatHeli_C::On_Dead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIController_CombatHeli_C", "On Dead");

	Params::BP_AIController_CombatHeli_C_On_Dead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIController_CombatHeli.BP_AIController_CombatHeli_C.ReceivePossess
// (Event, Protected, BlueprintEvent)
// Parameters:
// class APawn*                            PossessedPawn                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AIController_CombatHeli_C::ReceivePossess(class APawn* PossessedPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIController_CombatHeli_C", "ReceivePossess");

	Params::BP_AIController_CombatHeli_C_ReceivePossess Parms{};

	Parms.PossessedPawn = PossessedPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

