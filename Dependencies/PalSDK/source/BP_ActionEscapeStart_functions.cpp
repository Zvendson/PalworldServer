#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionEscapeStart_classes.hpp"
#include "PalServer/BP_ActionEscapeStart_parameters.hpp"


namespace PalServer
{

// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.ExecuteUbergraph_BP_ActionEscapeStart
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionEscapeStart_C::ExecuteUbergraph_BP_ActionEscapeStart(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "ExecuteUbergraph_BP_ActionEscapeStart");

	Params::BP_ActionEscapeStart_C_ExecuteUbergraph_BP_ActionEscapeStart Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionEscapeStart_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionEscapeStart.BP_ActionEscapeStart_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionEscapeStart_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionEscapeStart_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

