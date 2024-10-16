#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionCombatHeli_BattleMode_classes.hpp"
#include "PalSDK/BP_AIActionCombatHeli_BattleMode_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionStart");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ActionTick");

	Params::BP_AIActionCombatHeli_BattleMode_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode");

	Params::BP_AIActionCombatHeli_BattleMode_C_ExecuteUbergraph_BP_AIActionCombatHeli_BattleMode Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.FindTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                           TargetActor                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::FindTarget(class AActor** TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "FindTarget");

	Params::BP_AIActionCombatHeli_BattleMode_C_FindTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetActor != nullptr)
		*TargetActor = Parms.TargetActor;
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.IsNearTarget2D
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Distance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Near                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::IsNearTarget2D(double Distance, bool* Near)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "IsNearTarget2D");

	Params::BP_AIActionCombatHeli_BattleMode_C_IsNearTarget2D Parms{};

	Parms.Distance = Distance;

	UObject::ProcessEvent(Func, &Parms);

	if (Near != nullptr)
		*Near = Parms.Near;
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.RotateToTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionCombatHeli_BattleMode_C::RotateToTarget(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "RotateToTarget");

	Params::BP_AIActionCombatHeli_BattleMode_C_RotateToTarget Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionCombatHeli_BattleMode.BP_AIActionCombatHeli_BattleMode_C.SetMoveVelocity
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionCombatHeli_BattleMode_C::SetMoveVelocity()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionCombatHeli_BattleMode_C", "SetMoveVelocity");

	UObject::ProcessEvent(Func, nullptr);
}

}

