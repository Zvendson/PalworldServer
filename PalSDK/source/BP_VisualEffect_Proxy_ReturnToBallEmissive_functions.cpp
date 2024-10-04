#include "PalServer/Basic.hpp"

#include "PalServer/BP_VisualEffect_Proxy_ReturnToBallEmissive_classes.hpp"
#include "PalServer/BP_VisualEffect_Proxy_ReturnToBallEmissive_parameters.hpp"


namespace PalServer
{

// Function BP_VisualEffect_Proxy_ReturnToBallEmissive.BP_VisualEffect_Proxy_ReturnToBallEmissive_C.ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Proxy_ReturnToBallEmissive_C::ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_ReturnToBallEmissive_C", "ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive");

	Params::BP_VisualEffect_Proxy_ReturnToBallEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_ReturnToBallEmissive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Proxy_ReturnToBallEmissive.BP_VisualEffect_Proxy_ReturnToBallEmissive_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Proxy_ReturnToBallEmissive_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_ReturnToBallEmissive_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}

}

