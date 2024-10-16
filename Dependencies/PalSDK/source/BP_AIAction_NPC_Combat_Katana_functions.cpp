#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_NPC_Combat_Katana_classes.hpp"
#include "PalSDK/BP_AIAction_NPC_Combat_Katana_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ActionFinished");

	Params::BP_AIAction_NPC_Combat_Katana_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ActionPause");

	Params::BP_AIAction_NPC_Combat_Katana_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ActionResume
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ActionResume(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ActionResume");

	Params::BP_AIAction_NPC_Combat_Katana_C_ActionResume Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ActionStart");

	Params::BP_AIAction_NPC_Combat_Katana_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ActionTick");

	Params::BP_AIAction_NPC_Combat_Katana_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.AddMeleeCombatState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPal_NPC_CombatMeleeState               MeleeState                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::AddMeleeCombatState(EPal_NPC_CombatMeleeState MeleeState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "AddMeleeCombatState");

	Params::BP_AIAction_NPC_Combat_Katana_C_AddMeleeCombatState Parms{};

	Parms.MeleeState = MeleeState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.AddTimer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  CurrentTime                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::AddTimer(double* CurrentTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "AddTimer");

	Params::BP_AIAction_NPC_Combat_Katana_C_AddTimer Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentTime != nullptr)
		*CurrentTime = Parms.CurrentTime;
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.Change_NextState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPal_NPC_CombatMeleeState               Next                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::Change_NextState(EPal_NPC_CombatMeleeState Next)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "Change_NextState");

	Params::BP_AIAction_NPC_Combat_Katana_C_Change_NextState Parms{};

	Parms.Next = Next;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPC_Combat_Katana.BP_AIAction_NPC_Combat_Katana_C.ExecuteUbergraph_BP_AIAction_NPC_Combat_Katana
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPC_Combat_Katana_C::ExecuteUbergraph_BP_AIAction_NPC_Combat_Katana(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPC_Combat_Katana_C", "ExecuteUbergraph_BP_AIAction_NPC_Combat_Katana");

	Params::BP_AIAction_NPC_Combat_Katana_C_ExecuteUbergraph_BP_AIAction_NPC_Combat_Katana Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

