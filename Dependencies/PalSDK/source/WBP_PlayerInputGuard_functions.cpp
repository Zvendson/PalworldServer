#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PlayerInputGuard_classes.hpp"
#include "PalServer/WBP_PlayerInputGuard_parameters.hpp"


namespace PalServer
{

// Function WBP_PlayerInputGuard.WBP_PlayerInputGuard_C.ExecuteUbergraph_WBP_PlayerInputGuard
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerInputGuard_C::ExecuteUbergraph_WBP_PlayerInputGuard(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInputGuard_C", "ExecuteUbergraph_WBP_PlayerInputGuard");

	Params::WBP_PlayerInputGuard_C_ExecuteUbergraph_WBP_PlayerInputGuard Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerInputGuard.WBP_PlayerInputGuard_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerInputGuard_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerInputGuard_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}

}

