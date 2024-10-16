#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_LookSideMove_classes.hpp"
#include "PalSDK/BP_AIAction_LookSideMove_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionAbort");

	Params::BP_AIAction_LookSideMove_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionFinished");

	Params::BP_AIAction_LookSideMove_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionPause");

	Params::BP_AIAction_LookSideMove_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionPostTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionPostTick");

	Params::BP_AIAction_LookSideMove_C_ActionPostTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionResume");

	Params::BP_AIAction_LookSideMove_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionStart");

	Params::BP_AIAction_LookSideMove_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionTick");

	Params::BP_AIAction_LookSideMove_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ActionTickAnyThread
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ActionTickAnyThread");

	Params::BP_AIAction_LookSideMove_C_ActionTickAnyThread Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.CheckWalkable
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsRight                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Success                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          GoalPos                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::CheckWalkable(bool IsRight, bool* Success, struct FVector* GoalPos)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "CheckWalkable");

	Params::BP_AIAction_LookSideMove_C_CheckWalkable Parms{};

	Parms.IsRight = IsRight;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (GoalPos != nullptr)
		*GoalPos = std::move(Parms.GoalPos);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.ExecuteUbergraph_BP_AIAction_LookSideMove
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::ExecuteUbergraph_BP_AIAction_LookSideMove(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "ExecuteUbergraph_BP_AIAction_LookSideMove");

	Params::BP_AIAction_LookSideMove_C_ExecuteUbergraph_BP_AIAction_LookSideMove Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_LookSideMove.BP_AIAction_LookSideMove_C.OnChildActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class UPawnAction*                      Action                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_LookSideMove_C::OnChildActionFinished(class UPawnAction* Action, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_LookSideMove_C", "OnChildActionFinished");

	Params::BP_AIAction_LookSideMove_C_OnChildActionFinished Parms{};

	Parms.Action = Action;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}

}

