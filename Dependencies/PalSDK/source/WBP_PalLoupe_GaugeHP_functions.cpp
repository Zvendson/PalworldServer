#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalLoupe_GaugeHP_classes.hpp"
#include "PalSDK/WBP_PalLoupe_GaugeHP_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalLoupe_GaugeHP.WBP_PalLoupe_GaugeHP_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLoupe_GaugeHP_C::SetPercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLoupe_GaugeHP_C", "SetPercent");

	Params::WBP_PalLoupe_GaugeHP_C_SetPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}

}

