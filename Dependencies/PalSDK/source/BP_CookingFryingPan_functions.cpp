#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_CookingFryingPan_classes.hpp"
#include "PalSDK/BP_CookingFryingPan_parameters.hpp"


namespace PalSDK
{

// Function BP_CookingFryingPan.BP_CookingFryingPan_C.ExecuteUbergraph_BP_CookingFryingPan
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CookingFryingPan_C::ExecuteUbergraph_BP_CookingFryingPan(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CookingFryingPan_C", "ExecuteUbergraph_BP_CookingFryingPan");

	Params::BP_CookingFryingPan_C_ExecuteUbergraph_BP_CookingFryingPan Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_CookingFryingPan.BP_CookingFryingPan_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_CookingFryingPan_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_CookingFryingPan_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

