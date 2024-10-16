#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_VisualEffect_PalOutlineFadeOut_classes.hpp"
#include "PalSDK/BP_VisualEffect_PalOutlineFadeOut_parameters.hpp"


namespace PalSDK
{

// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalOutlineFadeOut_C::ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalOutlineFadeOut_C", "ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut");

	Params::BP_VisualEffect_PalOutlineFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalOutlineFadeOut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_PalOutlineFadeOut_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalOutlineFadeOut_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_PalOutlineFadeOut_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalOutlineFadeOut_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_PalOutlineFadeOut.BP_VisualEffect_PalOutlineFadeOut_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalOutlineFadeOut_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalOutlineFadeOut_C", "TickVisualEffect");

	Params::BP_VisualEffect_PalOutlineFadeOut_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

