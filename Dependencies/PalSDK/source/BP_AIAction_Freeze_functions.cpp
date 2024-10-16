#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_Freeze_classes.hpp"
#include "PalSDK/BP_AIAction_Freeze_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_Freeze.BP_AIAction_Freeze_C.ExecuteUbergraph_BP_AIAction_Freeze
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_Freeze_C::ExecuteUbergraph_BP_AIAction_Freeze(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_Freeze_C", "ExecuteUbergraph_BP_AIAction_Freeze");

	Params::BP_AIAction_Freeze_C_ExecuteUbergraph_BP_AIAction_Freeze Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

