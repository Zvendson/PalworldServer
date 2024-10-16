#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalGenusCategoryIcon_classes.hpp"
#include "PalSDK/WBP_PalGenusCategoryIcon_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalGenusCategoryIcon.WBP_PalGenusCategoryIcon_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenusCategoryType                   Category                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGenusCategoryIcon_C::Setup(EPalGenusCategoryType Category)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGenusCategoryIcon_C", "Setup");

	Params::WBP_PalGenusCategoryIcon_C_Setup Parms{};

	Parms.Category = Category;

	UObject::ProcessEvent(Func, &Parms);
}

}

