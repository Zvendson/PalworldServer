#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_DebuffNotice_classes.hpp"
#include "PalSDK/WBP_DebuffNotice_parameters.hpp"


namespace PalSDK
{

// Function WBP_DebuffNotice.WBP_DebuffNotice_C.AnmEvent_Flash
// (BlueprintCallable, BlueprintEvent)

void UWBP_DebuffNotice_C::AnmEvent_Flash()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebuffNotice_C", "AnmEvent_Flash");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_DebuffNotice.WBP_DebuffNotice_C.ExecuteUbergraph_WBP_DebuffNotice
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebuffNotice_C::ExecuteUbergraph_WBP_DebuffNotice(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebuffNotice_C", "ExecuteUbergraph_WBP_DebuffNotice");

	Params::WBP_DebuffNotice_C_ExecuteUbergraph_WBP_DebuffNotice Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_DebuffNotice.WBP_DebuffNotice_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalUIPlayerDebuffNoticeType           DebuffType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_DebuffNotice_C::Setup(E_PalUIPlayerDebuffNoticeType DebuffType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_DebuffNotice_C", "Setup");

	Params::WBP_DebuffNotice_C_Setup Parms{};

	Parms.DebuffType = DebuffType;

	UObject::ProcessEvent(Func, &Parms);
}

}

