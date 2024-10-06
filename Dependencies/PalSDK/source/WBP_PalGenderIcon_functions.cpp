#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalGenderIcon_classes.hpp"
#include "PalServer/WBP_PalGenderIcon_parameters.hpp"


namespace PalServer
{

// Function WBP_PalGenderIcon.WBP_PalGenderIcon_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenderType                          GenderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalGenderIcon_C::Setup(EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalGenderIcon_C", "Setup");

	Params::WBP_PalGenderIcon_C_Setup Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);
}

}

