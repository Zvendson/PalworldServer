#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_CapturedCage_classes.hpp"
#include "PalSDK/BP_Action_CapturedCage_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_CapturedCage.BP_Action_CapturedCage_C.ExecuteUbergraph_BP_Action_CapturedCage
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_CapturedCage_C::ExecuteUbergraph_BP_Action_CapturedCage(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_CapturedCage_C", "ExecuteUbergraph_BP_Action_CapturedCage");

	Params::BP_Action_CapturedCage_C_ExecuteUbergraph_BP_Action_CapturedCage Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_CapturedCage.BP_Action_CapturedCage_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_CapturedCage_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_CapturedCage_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

