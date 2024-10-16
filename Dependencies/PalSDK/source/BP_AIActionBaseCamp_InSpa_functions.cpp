#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIActionBaseCamp_InSpa_classes.hpp"
#include "PalSDK/BP_AIActionBaseCamp_InSpa_parameters.hpp"


namespace PalSDK
{

// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ActionFinished
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPawnActionResult                       WithResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_InSpa_C::ActionFinished(class APawn* ControlledPawn, EPawnActionResult WithResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "ActionFinished");

	Params::BP_AIActionBaseCamp_InSpa_C_ActionFinished Parms{};

	Parms.ControlledPawn = ControlledPawn;
	Parms.WithResult = WithResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ActionStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_InSpa_C::ActionStart(class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "ActionStart");

	Params::BP_AIActionBaseCamp_InSpa_C_ActionStart Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.ExecuteUbergraph_BP_AIActionBaseCamp_InSpa
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_InSpa_C::ExecuteUbergraph_BP_AIActionBaseCamp_InSpa(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "ExecuteUbergraph_BP_AIActionBaseCamp_InSpa");

	Params::BP_AIActionBaseCamp_InSpa_C_ExecuteUbergraph_BP_AIActionBaseCamp_InSpa Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.OnFinishedImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_InSpa_C::OnFinishedImpl(class AActor* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "OnFinishedImpl");

	Params::BP_AIActionBaseCamp_InSpa_C_OnFinishedImpl Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.OnStartImpl
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_AIActionBaseCamp_InSpa_C::OnStartImpl(class AActor* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "OnStartImpl");

	Params::BP_AIActionBaseCamp_InSpa_C_OnStartImpl Parms{};

	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AIActionBaseCamp_InSpa.BP_AIActionBaseCamp_InSpa_C.GetUsingTime
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UBP_AIActionBaseCamp_InSpa_C::GetUsingTime() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionBaseCamp_InSpa_C", "GetUsingTime");

	Params::BP_AIActionBaseCamp_InSpa_C_GetUsingTime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

