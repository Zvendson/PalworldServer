#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_DummyNavigationInvoker_classes.hpp"
#include "PalSDK/BP_DummyNavigationInvoker_parameters.hpp"


namespace PalSDK
{

// Function BP_DummyNavigationInvoker.BP_DummyNavigationInvoker_C.ExecuteUbergraph_BP_DummyNavigationInvoker
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_DummyNavigationInvoker_C::ExecuteUbergraph_BP_DummyNavigationInvoker(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_DummyNavigationInvoker_C", "ExecuteUbergraph_BP_DummyNavigationInvoker");

	Params::BP_DummyNavigationInvoker_C_ExecuteUbergraph_BP_DummyNavigationInvoker Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

