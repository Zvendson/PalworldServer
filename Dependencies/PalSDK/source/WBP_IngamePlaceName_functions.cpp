#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngamePlaceName_classes.hpp"
#include "PalSDK/WBP_IngamePlaceName_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.AnmEvent_End
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngamePlaceName_C::AnmEvent_End()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "AnmEvent_End");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.AnmEvent_Start
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngamePlaceName_C::AnmEvent_Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "AnmEvent_Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngamePlaceName_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.DisplayRegion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RegionNameID                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngamePlaceName_C::DisplayRegion(class FName RegionNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "DisplayRegion");

	Params::WBP_IngamePlaceName_C_DisplayRegion Parms{};

	Parms.RegionNameID = RegionNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.ExecuteUbergraph_WBP_IngamePlaceName
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngamePlaceName_C::ExecuteUbergraph_WBP_IngamePlaceName(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "ExecuteUbergraph_WBP_IngamePlaceName");

	Params::WBP_IngamePlaceName_C_ExecuteUbergraph_WBP_IngamePlaceName Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngamePlaceName.WBP_IngamePlaceName_C.OnCloseTimerEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngamePlaceName_C::OnCloseTimerEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngamePlaceName_C", "OnCloseTimerEnd");

	UObject::ProcessEvent(Func, nullptr);
}

}

