#include "PalServer/Basic.hpp"

#include "PalServer/WBP_StatusBuffTimerContainer_classes.hpp"
#include "PalServer/WBP_StatusBuffTimerContainer_parameters.hpp"


namespace PalServer
{

// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.ExecuteUbergraph_WBP_StatusBuffTimerContainer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusBuffTimerContainer_C::ExecuteUbergraph_WBP_StatusBuffTimerContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBuffTimerContainer_C", "ExecuteUbergraph_WBP_StatusBuffTimerContainer");

	Params::WBP_StatusBuffTimerContainer_C_ExecuteUbergraph_WBP_StatusBuffTimerContainer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_StatusBuffTimerContainer.WBP_StatusBuffTimerContainer_C.UpdateCharacterBuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParam                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StatusBuffTimerContainer_C::UpdateCharacterBuff(class UPalIndividualCharacterParameter* IndividualParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_StatusBuffTimerContainer_C", "UpdateCharacterBuff");

	Params::WBP_StatusBuffTimerContainer_C_UpdateCharacterBuff Parms{};

	Parms.IndividualParam = IndividualParam;

	UObject::ProcessEvent(Func, &Parms);
}

}

