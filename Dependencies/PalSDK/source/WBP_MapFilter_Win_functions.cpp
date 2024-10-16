#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_MapFilter_Win_classes.hpp"
#include "PalSDK/WBP_MapFilter_Win_parameters.hpp"


namespace PalSDK
{

// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ChangeFilter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        LocationType                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Win_C::ChangeFilter(EPalLocationType LocationType, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Win_C", "ChangeFilter");

	Params::WBP_MapFilter_Win_C_ChangeFilter Parms{};

	Parms.LocationType = LocationType;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_MapFilter_Win_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Win_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ExecuteUbergraph_WBP_MapFilter_Win
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Win_C::ExecuteUbergraph_WBP_MapFilter_Win(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Win_C", "ExecuteUbergraph_WBP_MapFilter_Win");

	Params::WBP_MapFilter_Win_C_ExecuteUbergraph_WBP_MapFilter_Win Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.ForceFTEnable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Win_C::ForceFTEnable(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Win_C", "ForceFTEnable");

	Params::WBP_MapFilter_Win_C_ForceFTEnable Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MapFilter_Win.WBP_MapFilter_Win_C.OnFilterChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalLocationType                        FilterMap                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MapFilter_Win_C::OnFilterChanged__DelegateSignature(EPalLocationType FilterMap, bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MapFilter_Win_C", "OnFilterChanged__DelegateSignature");

	Params::WBP_MapFilter_Win_C_OnFilterChanged__DelegateSignature Parms{};

	Parms.FilterMap = FilterMap;
	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}

}

