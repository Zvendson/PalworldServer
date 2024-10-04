#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_Leave_TurnRun_classes.hpp"
#include "PalServer/BP_AIAction_Leave_TurnRun_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.OnSuccess_30D2F75E48B32C365F20FE998491DC93
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::OnSuccess_30D2F75E48B32C365F20FE998491DC93(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "OnSuccess_30D2F75E48B32C365F20FE998491DC93");

	Params::BP_AIAction_Leave_TurnRun_C_OnSuccess_30D2F75E48B32C365F20FE998491DC93 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.OnFail_30D2F75E48B32C365F20FE998491DC93
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::OnFail_30D2F75E48B32C365F20FE998491DC93(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "OnFail_30D2F75E48B32C365F20FE998491DC93");

	Params::BP_AIAction_Leave_TurnRun_C_OnFail_30D2F75E48B32C365F20FE998491DC93 Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.LineTraceMovePosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hit                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::LineTraceMovePosition(bool* Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "LineTraceMovePosition");

	Params::BP_AIAction_Leave_TurnRun_C_LineTraceMovePosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Hit != nullptr)
		*Hit = Parms.Hit;
}


// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.LineTrace_forFailure
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          MoveTarget                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::LineTrace_forFailure(struct FVector* MoveTarget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "LineTrace_forFailure");

	Params::BP_AIAction_Leave_TurnRun_C_LineTrace_forFailure Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MoveTarget != nullptr)
		*MoveTarget = std::move(Parms.MoveTarget);
}


// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.ExecuteUbergraph_BP_AIAction_Leave_TurnRun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::ExecuteUbergraph_BP_AIAction_Leave_TurnRun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "ExecuteUbergraph_BP_AIAction_Leave_TurnRun");

	Params::BP_AIAction_Leave_TurnRun_C_ExecuteUbergraph_BP_AIAction_Leave_TurnRun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_Leave_TurnRun.BP_AIAction_Leave_TurnRun_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Leave_TurnRun_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Leave_TurnRun_C", "ActionStart");

	Params::BP_AIAction_Leave_TurnRun_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

