#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionDigOut_classes.hpp"
#include "PalServer/BP_ActionDigOut_parameters.hpp"


namespace PalServer
{

// Function BP_ActionDigOut.BP_ActionDigOut_C.ExecuteUbergraph_BP_ActionDigOut
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDigOut_C::ExecuteUbergraph_BP_ActionDigOut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDigOut_C", "ExecuteUbergraph_BP_ActionDigOut");

	Params::BP_ActionDigOut_C_ExecuteUbergraph_BP_ActionDigOut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDigOut.BP_ActionDigOut_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDigOut_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDigOut_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDigOut.BP_ActionDigOut_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDigOut_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDigOut_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

