#include "PalServer/Basic.hpp"

#include "PalServer/BP_AINPC_Combat_CommonState_BackwardTurn_classes.hpp"
#include "PalServer/BP_AINPC_Combat_CommonState_BackwardTurn_parameters.hpp"


namespace PalServer
{

// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn");

	Params::BP_AINPC_Combat_CommonState_BackwardTurn_C_ExecuteUbergraph_BP_AINPC_Combat_CommonState_BackwardTurn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateExit
// (Event, Public, BlueprintEvent)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateExit()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateExit");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AINPC_Combat_CommonState_BackwardTurn.BP_AINPC_Combat_CommonState_BackwardTurn_C.StateTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AINPC_Combat_CommonState_BackwardTurn_C::StateTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AINPC_Combat_CommonState_BackwardTurn_C", "StateTick");

	Params::BP_AINPC_Combat_CommonState_BackwardTurn_C_StateTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

