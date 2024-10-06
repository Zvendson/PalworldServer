#include "PalServer/Basic.hpp"

#include "PalServer/BP_VisualEffect_CameraBase_classes.hpp"
#include "PalServer/BP_VisualEffect_CameraBase_parameters.hpp"


namespace PalServer
{

// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.ExecuteUbergraph_BP_VisualEffect_CameraBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraBase_C::ExecuteUbergraph_BP_VisualEffect_CameraBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "ExecuteUbergraph_BP_VisualEffect_CameraBase");

	Params::BP_VisualEffect_CameraBase_C_ExecuteUbergraph_BP_VisualEffect_CameraBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.OnBeginVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_CameraBase_C::OnBeginVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "OnBeginVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.OnEndVisualEffect
// (Event, Public, BlueprintEvent)

void UBP_VisualEffect_CameraBase_C::OnEndVisualEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "OnEndVisualEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.UpdateEffectValue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  WeightValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraBase_C::UpdateEffectValue(double WeightValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "UpdateEffectValue");

	Params::BP_VisualEffect_CameraBase_C_UpdateEffectValue Parms{};

	Parms.WeightValue = WeightValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.カスタムイベント_FadeIIn
// (BlueprintCallable, BlueprintEvent)

void UBP_VisualEffect_CameraBase_C::_________________________FadeIIn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "カスタムイベント_FadeIIn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_VisualEffect_CameraBase.BP_VisualEffect_CameraBase_C.カスタムイベント_FadeOut
// (BlueprintCallable, BlueprintEvent)

void UBP_VisualEffect_CameraBase_C::_________________________FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraBase_C", "カスタムイベント_FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}

}

