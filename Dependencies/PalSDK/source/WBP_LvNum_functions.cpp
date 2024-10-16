#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_LvNum_classes.hpp"
#include "PalSDK/WBP_LvNum_parameters.hpp"


namespace PalSDK
{

// Function WBP_LvNum.WBP_LvNum_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LvNum_C::SetLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LvNum_C", "SetLevel");

	Params::WBP_LvNum_C_SetLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}

}

