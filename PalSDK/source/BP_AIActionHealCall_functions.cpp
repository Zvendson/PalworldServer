#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIActionHealCall_classes.hpp"
#include "PalServer/BP_AIActionHealCall_parameters.hpp"


namespace PalServer
{

// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ExecuteUbergraph_BP_AIActionHealCall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealCall_C::ExecuteUbergraph_BP_AIActionHealCall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealCall_C", "ExecuteUbergraph_BP_AIActionHealCall");

	Params::BP_AIActionHealCall_C_ExecuteUbergraph_BP_AIActionHealCall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealCall.BP_AIActionHealCall_C.DetermineDestination
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           MasterTrainer                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  ApproachRadius                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ResultPosition                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealCall_C::DetermineDestination(class AActor* MasterTrainer, double ApproachRadius, struct FVector* ResultPosition)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealCall_C", "DetermineDestination");

	Params::BP_AIActionHealCall_C_DetermineDestination Parms{};

	Parms.MasterTrainer = MasterTrainer;
	Parms.ApproachRadius = ApproachRadius;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultPosition != nullptr)
		*ResultPosition = std::move(Parms.ResultPosition);
}


// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealCall_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealCall_C", "ActionTick");

	Params::BP_AIActionHealCall_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionHealCall.BP_AIActionHealCall_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionHealCall_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionHealCall_C", "ActionStart");

	Params::BP_AIActionHealCall_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

