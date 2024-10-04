#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_MimicryEncounter_classes.hpp"
#include "PalServer/BP_AIAction_MimicryEncounter_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_MimicryEncounter.BP_AIAction_MimicryEncounter_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_MimicryEncounter_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_MimicryEncounter_C", "ActionStart");

	Params::BP_AIAction_MimicryEncounter_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_MimicryEncounter.BP_AIAction_MimicryEncounter_C.ExecuteUbergraph_BP_AIAction_MimicryEncounter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_MimicryEncounter_C::ExecuteUbergraph_BP_AIAction_MimicryEncounter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_MimicryEncounter_C", "ExecuteUbergraph_BP_AIAction_MimicryEncounter");

	Params::BP_AIAction_MimicryEncounter_C_ExecuteUbergraph_BP_AIAction_MimicryEncounter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

