#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIActionPairCallBase_classes.hpp"
#include "PalServer/BP_AIActionPairCallBase_parameters.hpp"


namespace PalServer
{

// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ActionStart");

	Params::BP_AIActionPairCallBase_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ActionTick");

	Params::BP_AIActionPairCallBase_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.CreatePairBehaviorActionDynamicParameter
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionDynamicParameter          DynamicParameter_0                                     (Parm, OutParm)

void UBP_AIActionPairCallBase_C::CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "CreatePairBehaviorActionDynamicParameter");

	Params::BP_AIActionPairCallBase_C_CreatePairBehaviorActionDynamicParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicParameter_0 != nullptr)
		*DynamicParameter_0 = std::move(Parms.DynamicParameter_0);
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.ExecuteUbergraph_BP_AIActionPairCallBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionPairCallBase_C::ExecuteUbergraph_BP_AIActionPairCallBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "ExecuteUbergraph_BP_AIActionPairCallBase");

	Params::BP_AIActionPairCallBase_C_ExecuteUbergraph_BP_AIActionPairCallBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.OnFinish
// (BlueprintCallable, BlueprintEvent)

void UBP_AIActionPairCallBase_C::OnFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "OnFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AIActionPairCallBase.BP_AIActionPairCallBase_C.OnStartPair
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_AIActionPairCallBase_C::OnStartPair()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCallBase_C", "OnStartPair");

	UObject::ProcessEvent(Func, nullptr);
}

}

