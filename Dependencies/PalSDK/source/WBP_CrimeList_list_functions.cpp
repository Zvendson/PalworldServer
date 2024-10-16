#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CrimeList_list_classes.hpp"
#include "PalSDK/WBP_CrimeList_list_parameters.hpp"


namespace PalSDK
{

// Function WBP_CrimeList_list.WBP_CrimeList_list_C.SetCrime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CrimeId                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   CrimeCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CrimeList_list_C::SetCrime(class FName CrimeId, int32 CrimeCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CrimeList_list_C", "SetCrime");

	Params::WBP_CrimeList_list_C_SetCrime Parms{};

	Parms.CrimeId = CrimeId;
	Parms.CrimeCount = CrimeCount;

	UObject::ProcessEvent(Func, &Parms);
}

}

