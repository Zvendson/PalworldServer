#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Crime_Found_classes.hpp"
#include "PalSDK/WBP_Crime_Found_parameters.hpp"


namespace PalSDK
{

// Function WBP_Crime_Found.WBP_Crime_Found_C.ClearFoundList
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crime_Found_C::ClearFoundList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Found_C", "ClearFoundList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crime_Found.WBP_Crime_Found_C.ExecuteUbergraph_WBP_Crime_Found
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crime_Found_C::ExecuteUbergraph_WBP_Crime_Found(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Found_C", "ExecuteUbergraph_WBP_Crime_Found");

	Params::WBP_Crime_Found_C_ExecuteUbergraph_WBP_Crime_Found Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Crime_Found.WBP_Crime_Found_C.Finished_DEA8290E42785E70DA2914B20F7C172E
// (BlueprintCallable, BlueprintEvent)

void UWBP_Crime_Found_C::Finished_DEA8290E42785E70DA2914B20F7C172E()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Found_C", "Finished_DEA8290E42785E70DA2914B20F7C172E");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Crime_Found.WBP_Crime_Found_C.SetCrimesFound
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     CrimeIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Crime_Found_C::SetCrimesFound(const TArray<class FName>& CrimeIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Crime_Found_C", "SetCrimesFound");

	Params::WBP_Crime_Found_C_SetCrimesFound Parms{};

	Parms.CrimeIds = std::move(CrimeIds);

	UObject::ProcessEvent(Func, &Parms);
}

}

