#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionSolarBeam_classes.hpp"
#include "PalSDK/BP_ActionSolarBeam_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionSolarBeam.BP_ActionSolarBeam_C.ExecuteUbergraph_BP_ActionSolarBeam
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSolarBeam_C::ExecuteUbergraph_BP_ActionSolarBeam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSolarBeam_C", "ExecuteUbergraph_BP_ActionSolarBeam");

	Params::BP_ActionSolarBeam_C_ExecuteUbergraph_BP_ActionSolarBeam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSolarBeam.BP_ActionSolarBeam_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSolarBeam_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSolarBeam_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSolarBeam.BP_ActionSolarBeam_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSolarBeam_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSolarBeam_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

