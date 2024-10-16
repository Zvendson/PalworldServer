#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_VisualEffect_CameraVignette_classes.hpp"
#include "PalSDK/BP_VisualEffect_CameraVignette_parameters.hpp"


namespace PalSDK
{

// Function BP_VisualEffect_CameraVignette.BP_VisualEffect_CameraVignette_C.UpdateEffectValue
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  WeightValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_VisualEffect_CameraVignette_C::UpdateEffectValue(double WeightValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_VisualEffect_CameraVignette_C", "UpdateEffectValue");

	Params::BP_VisualEffect_CameraVignette_C_UpdateEffectValue Parms{};

	Parms.WeightValue = WeightValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

