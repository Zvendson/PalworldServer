#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PredictedTarget_classes.hpp"
#include "PalSDK/BP_PredictedTarget_parameters.hpp"


namespace PalSDK
{

// Function BP_PredictedTarget.BP_PredictedTarget_C.ExecuteUbergraph_BP_PredictedTarget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PredictedTarget_C::ExecuteUbergraph_BP_PredictedTarget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PredictedTarget_C", "ExecuteUbergraph_BP_PredictedTarget");

	Params::BP_PredictedTarget_C_ExecuteUbergraph_BP_PredictedTarget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PredictedTarget.BP_PredictedTarget_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PredictedTarget_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PredictedTarget_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

