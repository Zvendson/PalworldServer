#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_Visitor_WaitInBaseCamp_classes.hpp"
#include "PalServer/BP_AIAction_Visitor_WaitInBaseCamp_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ActionStart");

	Params::BP_AIAction_Visitor_WaitInBaseCamp_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ActionTick");

	Params::BP_AIAction_Visitor_WaitInBaseCamp_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp");

	Params::BP_AIAction_Visitor_WaitInBaseCamp_C_ExecuteUbergraph_BP_AIAction_Visitor_WaitInBaseCamp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Visitor_WaitInBaseCamp.BP_AIAction_Visitor_WaitInBaseCamp_C.OnWaitTimeFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_Visitor_WaitInBaseCamp_C::OnWaitTimeFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Visitor_WaitInBaseCamp_C", "OnWaitTimeFinished__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}

}

