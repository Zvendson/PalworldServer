#include "PalServer/Basic.hpp"

#include "PalServer/BP_VisualEffect_PalEffectFadeOut_classes.hpp"
#include "PalServer/BP_VisualEffect_PalEffectFadeOut_parameters.hpp"


namespace PalServer
{

// Function BP_VisualEffect_PalEffectFadeOut.BP_VisualEffect_PalEffectFadeOut_C.ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalEffectFadeOut_C::ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeOut_C", "ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut");

	Params::BP_VisualEffect_PalEffectFadeOut_C_ExecuteUbergraph_BP_VisualEffect_PalEffectFadeOut Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_PalEffectFadeOut.BP_VisualEffect_PalEffectFadeOut_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_PalEffectFadeOut_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeOut_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_PalEffectFadeOut.BP_VisualEffect_PalEffectFadeOut_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_PalEffectFadeOut_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_PalEffectFadeOut_C", "TickVisualEffect");

	Params::BP_VisualEffect_PalEffectFadeOut_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

