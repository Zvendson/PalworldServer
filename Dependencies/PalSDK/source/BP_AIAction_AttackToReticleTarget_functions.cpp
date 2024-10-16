#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_AttackToReticleTarget_classes.hpp"
#include "PalSDK/BP_AIAction_AttackToReticleTarget_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.Tick_ObserveTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::Tick_ObserveTarget(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "Tick_ObserveTarget");

	Params::BP_AIAction_AttackToReticleTarget_C_Tick_ObserveTarget Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.Tick_FindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    TargetFound                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::Tick_FindTarget(double DeltaTime, bool* TargetFound)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "Tick_FindTarget");

	Params::BP_AIAction_AttackToReticleTarget_C_Tick_FindTarget Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetFound != nullptr)
		*TargetFound = Parms.TargetFound;
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.SetupAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::SetupAction(class APawn* ControlledPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "SetupAction");

	Params::BP_AIAction_AttackToReticleTarget_C_SetupAction Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.SetEnableReticleTargetFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::SetEnableReticleTargetFlag(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "SetEnableReticleTargetFlag");

	Params::BP_AIAction_AttackToReticleTarget_C_SetEnableReticleTargetFlag Parms{};

	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.OnTargetLost
// (BlueprintCallable, BlueprintEvent)

void UBP_AIAction_AttackToReticleTarget_C::OnTargetLost()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "OnTargetLost");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.OnTargetFound
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::OnTargetFound(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "OnTargetFound");

	Params::BP_AIAction_AttackToReticleTarget_C_OnTargetFound Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.IsTargetValid
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalCharacter*                    Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsValid                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::IsTargetValid(class APalCharacter* Target, bool* IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "IsTargetValid");

	Params::BP_AIAction_AttackToReticleTarget_C_IsTargetValid Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

	if (IsValid != nullptr)
		*IsValid = Parms.IsValid;
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.GetSkillName
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             ReturnValue                                            (Parm, OutParm, ReturnParm)

class FText UBP_AIAction_AttackToReticleTarget_C::GetSkillName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "GetSkillName");

	Params::BP_AIAction_AttackToReticleTarget_C_GetSkillName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.FinishAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_AttackToReticleTarget_C::FinishAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "FinishAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.FindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFound                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalCharacter*                    Target                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::FindTarget(bool* IsFound, class APalCharacter** Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "FindTarget");

	Params::BP_AIAction_AttackToReticleTarget_C_FindTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFound != nullptr)
		*IsFound = Parms.IsFound;

	if (Target != nullptr)
		*Target = Parms.Target;
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ExecuteUbergraph_BP_AIAction_AttackToReticleTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::ExecuteUbergraph_BP_AIAction_AttackToReticleTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "ExecuteUbergraph_BP_AIAction_AttackToReticleTarget");

	Params::BP_AIAction_AttackToReticleTarget_C_ExecuteUbergraph_BP_AIAction_AttackToReticleTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.CanFindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Result                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::CanFindTarget(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "CanFindTarget");

	Params::BP_AIAction_AttackToReticleTarget_C_CanFindTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.AddLogTargetNotFound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_AttackToReticleTarget_C::AddLogTargetNotFound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "AddLogTargetNotFound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.AddLogExecute
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_AttackToReticleTarget_C::AddLogExecute()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "AddLogExecute");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::ActionTick(class APawn* ControlledPawn_0, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "ActionTick");

	Params::BP_AIAction_AttackToReticleTarget_C_ActionTick Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::ActionStart(class APawn* ControlledPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "ActionStart");

	Params::BP_AIAction_AttackToReticleTarget_C_ActionStart Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::ActionFinished(class APawn* ControlledPawn_0, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "ActionFinished");

	Params::BP_AIAction_AttackToReticleTarget_C_ActionFinished Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_AttackToReticleTarget.BP_AIAction_AttackToReticleTarget_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_AttackToReticleTarget_C::ActionAbort(class APawn* ControlledPawn_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_AttackToReticleTarget_C", "ActionAbort");

	Params::BP_AIAction_AttackToReticleTarget_C_ActionAbort Parms{};

	Parms.ControlledPawn_0 = ControlledPawn_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

