#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_NPC_RelaxBase_classes.hpp"
#include "PalServer/BP_AIAction_NPC_RelaxBase_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionAbort");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionFinished");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionPause");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionPostTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionPostTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionPostTick");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionPostTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionResume");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionStart");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ActionTickAnyThread
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ActionTickAnyThread(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ActionTickAnyThread");

	Params::BP_AIAction_NPC_RelaxBase_C_ActionTickAnyThread Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.CancelDefaultAction
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_RelaxBase_C::CancelDefaultAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "CancelDefaultAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.ExecuteUbergraph_BP_AIAction_NPC_RelaxBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::ExecuteUbergraph_BP_AIAction_NPC_RelaxBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "ExecuteUbergraph_BP_AIAction_NPC_RelaxBase");

	Params::BP_AIAction_NPC_RelaxBase_C_ExecuteUbergraph_BP_AIAction_NPC_RelaxBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.PlayDefaultAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_RelaxBase_C::PlayDefaultAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "PlayDefaultAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SelfIsLeader
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsLeader_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::SelfIsLeader(bool* IsLeader_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SelfIsLeader");

	Params::BP_AIAction_NPC_RelaxBase_C_SelfIsLeader Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsLeader_0 != nullptr)
		*IsLeader_0 = Parms.IsLeader_0;
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SetSightSkipFlag
// (BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_RelaxBase_C::SetSightSkipFlag()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SetSightSkipFlag");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.SoundEvent
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          EmitLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_RelaxBase_C::SoundEvent(const struct FVector& EmitLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "SoundEvent");

	Params::BP_AIAction_NPC_RelaxBase_C_SoundEvent Parms{};

	Parms.EmitLocation = std::move(EmitLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_RelaxBase.BP_AIAction_NPC_RelaxBase_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_AIAction_NPC_RelaxBase_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_RelaxBase_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

