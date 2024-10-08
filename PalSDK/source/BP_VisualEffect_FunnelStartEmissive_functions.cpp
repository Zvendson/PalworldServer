#include "PalServer/Basic.hpp"

#include "PalServer/BP_VisualEffect_FunnelStartEmissive_classes.hpp"
#include "PalServer/BP_VisualEffect_FunnelStartEmissive_parameters.hpp"


namespace PalServer
{

// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_FunnelStartEmissive_C::ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_FunnelStartEmissive_C", "ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive");

	Params::BP_VisualEffect_FunnelStartEmissive_C_ExecuteUbergraph_BP_VisualEffect_FunnelStartEmissive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.ModifyEffectBySize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                Effect                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// EPalSizeType                            Size                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_FunnelStartEmissive_C::ModifyEffectBySize(class UNiagaraComponent* Effect, EPalSizeType Size)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_FunnelStartEmissive_C", "ModifyEffectBySize");

	Params::BP_VisualEffect_FunnelStartEmissive_C_ModifyEffectBySize Parms{};

	Parms.Effect = Effect;
	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_FunnelStartEmissive_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_FunnelStartEmissive_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.SetScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_FunnelStartEmissive_C::SetScale(double Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_FunnelStartEmissive_C", "SetScale");

	Params::BP_VisualEffect_FunnelStartEmissive_C_SetScale Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_FunnelStartEmissive.BP_VisualEffect_FunnelStartEmissive_C.TickVisualEffect
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_FunnelStartEmissive_C::TickVisualEffect(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_FunnelStartEmissive_C", "TickVisualEffect");

	Params::BP_VisualEffect_FunnelStartEmissive_C_TickVisualEffect Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

