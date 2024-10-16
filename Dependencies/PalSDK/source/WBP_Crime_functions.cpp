#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Crime_classes.hpp"
#include "PalSDK/WBP_Crime_parameters.hpp"


namespace PalSDK
{

// Function WBP_Crime.WBP_Crime_C.ClearCrimeList
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crime_C::ClearCrimeList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_C", "ClearCrimeList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crime.WBP_Crime_C.CrimeBeFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     CrimeIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Crime_C::CrimeBeFound(const TArray<class FName>& CrimeIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_C", "CrimeBeFound");

	Params::WBP_Crime_C_CrimeBeFound Parms{};

	Parms.CrimeIds = std::move(CrimeIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Crime.WBP_Crime_C.ExecuteUbergraph_WBP_Crime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_C::ExecuteUbergraph_WBP_Crime(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_C", "ExecuteUbergraph_WBP_Crime");

	Params::WBP_Crime_C_ExecuteUbergraph_WBP_Crime Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Crime.WBP_Crime_C.SetCrime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Crime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_C::SetCrime(bool Crime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_C", "SetCrime");

	Params::WBP_Crime_C_SetCrime Parms{};

	Parms.Crime = Crime;

	UObject::ProcessEvent(Func, &Parms);
}

}

