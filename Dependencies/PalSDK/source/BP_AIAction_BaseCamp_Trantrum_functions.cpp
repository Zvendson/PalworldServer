#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_BaseCamp_Trantrum_classes.hpp"
#include "PalSDK/BP_AIAction_BaseCamp_Trantrum_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCamp_Trantrum_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCamp_Trantrum_C", "ActionFinished");

	Params::BP_AIAction_BaseCamp_Trantrum_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCamp_Trantrum_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCamp_Trantrum_C", "ActionStart");

	Params::BP_AIAction_BaseCamp_Trantrum_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ActionTick
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCamp_Trantrum_C::ActionTick(class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCamp_Trantrum_C", "ActionTick");

	Params::BP_AIAction_BaseCamp_Trantrum_C_ActionTick Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCamp_Trantrum_C::ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCamp_Trantrum_C", "ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum");

	Params::BP_AIAction_BaseCamp_Trantrum_C_ExecuteUbergraph_BP_AIAction_BaseCamp_Trantrum Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIAction_BaseCamp_Trantrum.BP_AIAction_BaseCamp_Trantrum_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_AIAction_BaseCamp_Trantrum_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCamp_Trantrum_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

