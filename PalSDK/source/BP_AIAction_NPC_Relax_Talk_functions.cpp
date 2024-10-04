#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_NPC_Relax_Talk_classes.hpp"
#include "PalServer/BP_AIAction_NPC_Relax_Talk_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionAbort");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionFinished");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionPause");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionPostTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionPostTick");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionPostTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionResume");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ActionStart");

	Params::BP_AIAction_NPC_Relax_Talk_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Relax_Talk_C::ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk");

	Params::BP_AIAction_NPC_Relax_Talk_C_ExecuteUbergraph_BP_AIAction_NPC_Relax_Talk Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.GetMemberID
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FPalInstanceID>           OutList                                                (Parm, OutParm)

void UBP_AIAction_NPC_Relax_Talk_C::GetMemberID(TArray<struct FPalInstanceID>* OutList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "GetMemberID");

	Params::BP_AIAction_NPC_Relax_Talk_C_GetMemberID Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutList != nullptr)
		*OutList = std::move(Parms.OutList);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.PlayDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_Talk_C::PlayDefaultAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "PlayDefaultAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_Relax_Talk.BP_AIAction_NPC_Relax_Talk_C.StopAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_Relax_Talk_C::StopAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Relax_Talk_C", "StopAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

