#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionCommandToPal_classes.hpp"
#include "PalSDK/BP_ActionCommandToPal_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionCommandToPal_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCommandToPal_C", "TickAction");

	Params::BP_ActionCommandToPal_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionCommandToPal_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCommandToPal_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionCommandToPal_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCommandToPal_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionCommandToPal.BP_ActionCommandToPal_C.ExecuteUbergraph_BP_ActionCommandToPal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionCommandToPal_C::ExecuteUbergraph_BP_ActionCommandToPal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionCommandToPal_C", "ExecuteUbergraph_BP_ActionCommandToPal");

	Params::BP_ActionCommandToPal_C_ExecuteUbergraph_BP_ActionCommandToPal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

