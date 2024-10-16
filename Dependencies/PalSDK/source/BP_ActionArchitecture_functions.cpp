#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionArchitecture_classes.hpp"
#include "PalSDK/BP_ActionArchitecture_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionArchitecture.BP_ActionArchitecture_C.ExecuteUbergraph_BP_ActionArchitecture
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionArchitecture_C::ExecuteUbergraph_BP_ActionArchitecture(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionArchitecture_C", "ExecuteUbergraph_BP_ActionArchitecture");

	Params::BP_ActionArchitecture_C_ExecuteUbergraph_BP_ActionArchitecture Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionArchitecture.BP_ActionArchitecture_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionArchitecture_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionArchitecture_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionArchitecture.BP_ActionArchitecture_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionArchitecture_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionArchitecture_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

