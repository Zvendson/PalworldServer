#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CrimeList_classes.hpp"
#include "PalSDK/WBP_CrimeList_parameters.hpp"


namespace PalSDK
{

// Function WBP_CrimeList.WBP_CrimeList_C.RemoveAllCrime
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CrimeList_C::RemoveAllCrime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CrimeList_C", "RemoveAllCrime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CrimeList.WBP_CrimeList_C.SetCrimeList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     CrimeList                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_CrimeList_C::SetCrimeList(TArray<class FName>& CrimeList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CrimeList_C", "SetCrimeList");

	Params::WBP_CrimeList_C_SetCrimeList Parms{};

	Parms.CrimeList = std::move(CrimeList);

	UObject::ProcessEvent(Func, &Parms);

	CrimeList = std::move(Parms.CrimeList);
}


// Function WBP_CrimeList.WBP_CrimeList_C.SetPrizeMoney
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Money                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CrimeList_C::SetPrizeMoney(int32 Money)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CrimeList_C", "SetPrizeMoney");

	Params::WBP_CrimeList_C_SetPrizeMoney Parms{};

	Parms.Money = Money;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CrimeList.WBP_CrimeList_C.SortCrime
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_CrimeList_C::SortCrime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CrimeList_C", "SortCrime");

	UObject::ProcessEvent(Func, nullptr);
}

}

