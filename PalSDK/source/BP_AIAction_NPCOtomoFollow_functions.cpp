#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIAction_NPCOtomoFollow_classes.hpp"
#include "PalServer/BP_AIAction_NPCOtomoFollow_parameters.hpp"


namespace PalServer
{

// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionAbort
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ActionAbort(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ActionAbort");

	Params::BP_AIAction_NPCOtomoFollow_C_ActionAbort Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ActionFinished");

	Params::BP_AIAction_NPCOtomoFollow_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ActionTick");

	Params::BP_AIAction_NPCOtomoFollow_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ExecuteUbergraph_BP_AIAction_NPCOtomoFollow
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ExecuteUbergraph_BP_AIAction_NPCOtomoFollow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ExecuteUbergraph_BP_AIAction_NPCOtomoFollow");

	Params::BP_AIAction_NPCOtomoFollow_C_ExecuteUbergraph_BP_AIAction_NPCOtomoFollow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.FindTrainerKillEnemy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Enemy                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::FindTrainerKillEnemy(class AActor** Enemy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "FindTrainerKillEnemy");

	Params::BP_AIAction_NPCOtomoFollow_C_FindTrainerKillEnemy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Enemy != nullptr)
		*Enemy = Parms.Enemy;
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF");

	Params::BP_AIAction_NPCOtomoFollow_C_OnFail_9D776B464FB7F1A972DAFDBCCA1BDFFF Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPathFollowingResult                    MovementResult                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF(EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF");

	Params::BP_AIAction_NPCOtomoFollow_C_OnSuccess_9D776B464FB7F1A972DAFDBCCA1BDFFF Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionPause
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ActionPause(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ActionPause");

	Params::BP_AIAction_NPCOtomoFollow_C_ActionPause Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_NPCOtomoFollow.BP_AIAction_NPCOtomoFollow_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_NPCOtomoFollow_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_NPCOtomoFollow_C", "ActionStart");

	Params::BP_AIAction_NPCOtomoFollow_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

