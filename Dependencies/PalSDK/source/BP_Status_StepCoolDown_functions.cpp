#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Status_StepCoolDown_classes.hpp"
#include "PalSDK/BP_Status_StepCoolDown_parameters.hpp"


namespace PalSDK
{

// Function BP_Status_StepCoolDown.BP_Status_StepCoolDown_C.ExecuteUbergraph_BP_Status_StepCoolDown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_StepCoolDown_C::ExecuteUbergraph_BP_Status_StepCoolDown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_StepCoolDown_C", "ExecuteUbergraph_BP_Status_StepCoolDown");

	Params::BP_Status_StepCoolDown_C_ExecuteUbergraph_BP_Status_StepCoolDown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Status_StepCoolDown.BP_Status_StepCoolDown_C.OnBeginStatus
// (Event, Public, BlueprintEvent)

void UBP_Status_StepCoolDown_C::OnBeginStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_StepCoolDown_C", "OnBeginStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Status_StepCoolDown.BP_Status_StepCoolDown_C.TickStatus
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Status_StepCoolDown_C::TickStatus(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Status_StepCoolDown_C", "TickStatus");

	Params::BP_Status_StepCoolDown_C_TickStatus Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

