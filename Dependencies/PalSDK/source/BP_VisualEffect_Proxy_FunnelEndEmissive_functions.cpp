#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_VisualEffect_Proxy_FunnelEndEmissive_classes.hpp"
#include "PalSDK/BP_VisualEffect_Proxy_FunnelEndEmissive_parameters.hpp"


namespace PalSDK
{

// Function BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C.ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_Proxy_FunnelEndEmissive_C::ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_FunnelEndEmissive_C", "ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive");

	Params::BP_VisualEffect_Proxy_FunnelEndEmissive_C_ExecuteUbergraph_BP_VisualEffect_Proxy_FunnelEndEmissive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_Proxy_FunnelEndEmissive.BP_VisualEffect_Proxy_FunnelEndEmissive_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_Proxy_FunnelEndEmissive_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_Proxy_FunnelEndEmissive_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}

}

