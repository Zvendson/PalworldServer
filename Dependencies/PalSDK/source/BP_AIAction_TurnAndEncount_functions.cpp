#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_TurnAndEncount_classes.hpp"
#include "PalSDK/BP_AIAction_TurnAndEncount_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionAbort");

	Params::BP_AIAction_TurnAndEncount_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionFinished");

	Params::BP_AIAction_TurnAndEncount_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionPause");

	Params::BP_AIAction_TurnAndEncount_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionResume");

	Params::BP_AIAction_TurnAndEncount_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionStart");

	Params::BP_AIAction_TurnAndEncount_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ActionTick");

	Params::BP_AIAction_TurnAndEncount_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_TurnAndEncount.BP_AIAction_TurnAndEncount_C.ExecuteUbergraph_BP_AIAction_TurnAndEncount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_TurnAndEncount_C::ExecuteUbergraph_BP_AIAction_TurnAndEncount(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_TurnAndEncount_C", "ExecuteUbergraph_BP_AIAction_TurnAndEncount");

	Params::BP_AIAction_TurnAndEncount_C_ExecuteUbergraph_BP_AIAction_TurnAndEncount Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

