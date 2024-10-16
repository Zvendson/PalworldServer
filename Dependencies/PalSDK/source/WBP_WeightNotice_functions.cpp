#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_WeightNotice_classes.hpp"
#include "PalSDK/WBP_WeightNotice_parameters.hpp"


namespace PalSDK
{

// Function WBP_WeightNotice.WBP_WeightNotice_C.ExecuteUbergraph_WBP_WeightNotice
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WeightNotice_C::ExecuteUbergraph_WBP_WeightNotice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WeightNotice_C", "ExecuteUbergraph_WBP_WeightNotice");

	Params::WBP_WeightNotice_C_ExecuteUbergraph_WBP_WeightNotice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_WeightNotice.WBP_WeightNotice_C.UpdateVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_WeightNotice_C::UpdateVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WeightNotice_C", "UpdateVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_WeightNotice.WBP_WeightNotice_C.UpdateWeight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WeightNotice_C::UpdateWeight(double NowWeight, double MaxWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_WeightNotice_C", "UpdateWeight");

	Params::WBP_WeightNotice_C_UpdateWeight Parms{};

	Parms.NowWeight = NowWeight;
	Parms.MaxWeight = MaxWeight;

	UObject::ProcessEvent(Func, &Parms);
}

}

