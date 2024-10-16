#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_InGame_Match_Win_classes.hpp"
#include "PalSDK/WBP_InGame_Match_Win_parameters.hpp"


namespace PalSDK
{

// Function WBP_InGame_Match_Win.WBP_InGame_Match_Win_C.ExecuteUbergraph_WBP_InGame_Match_Win
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_InGame_Match_Win_C::ExecuteUbergraph_WBP_InGame_Match_Win(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_Win_C", "ExecuteUbergraph_WBP_InGame_Match_Win");

	Params::WBP_InGame_Match_Win_C_ExecuteUbergraph_WBP_InGame_Match_Win Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_InGame_Match_Win.WBP_InGame_Match_Win_C.SetWinner
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             InText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_InGame_Match_Win_C::SetWinner(const class FText& InText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_InGame_Match_Win_C", "SetWinner");

	Params::WBP_InGame_Match_Win_C_SetWinner Parms{};

	Parms.InText = std::move(InText);

	UObject::ProcessEvent(Func, &Parms);
}

}

