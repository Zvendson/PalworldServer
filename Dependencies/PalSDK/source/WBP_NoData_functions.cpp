#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_NoData_classes.hpp"
#include "PalSDK/WBP_NoData_parameters.hpp"


namespace PalSDK
{

// Function WBP_NoData.WBP_NoData_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Text                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_NoData_C::SetText(const class FText& Text)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_NoData_C", "SetText");

	Params::WBP_NoData_C_SetText Parms{};

	Parms.Text = std::move(Text);

	UObject::ProcessEvent(Func, &Parms);
}

}

