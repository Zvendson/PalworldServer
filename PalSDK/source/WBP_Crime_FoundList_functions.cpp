#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Crime_FoundList_classes.hpp"
#include "PalServer/WBP_Crime_FoundList_parameters.hpp"


namespace PalServer
{

// Function WBP_Crime_FoundList.WBP_Crime_FoundList_C.SetCrimeName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CrimeId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_FoundList_C::SetCrimeName(class FName CrimeId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_FoundList_C", "SetCrimeName");

	Params::WBP_Crime_FoundList_C_SetCrimeName Parms{};

	Parms.CrimeId = CrimeId;

	UObject::ProcessEvent(Func, &Parms);
}

}

