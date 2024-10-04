#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IconPalWork_classes.hpp"
#include "PalServer/WBP_IconPalWork_parameters.hpp"


namespace PalServer
{

// Function WBP_IconPalWork.WBP_IconPalWork_C.SetSuitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWorkSuitability                     Suitability                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IconPalWork_C::SetSuitability(EPalWorkSuitability Suitability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IconPalWork_C", "SetSuitability");

	Params::WBP_IconPalWork_C_SetSuitability Parms{};

	Parms.Suitability = Suitability;

	UObject::ProcessEvent(Func, &Parms);
}

}

