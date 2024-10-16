#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_MainMenu_Pal_WorkIconText_classes.hpp"
#include "PalSDK/WBP_MainMenu_Pal_WorkIconText_parameters.hpp"


namespace PalSDK
{

// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.AnmEvent_ForceOff
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Pal_WorkIconText_C::AnmEvent_ForceOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "AnmEvent_ForceOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.AnmEvent_OffToOn
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_Pal_WorkIconText_C::AnmEvent_OffToOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "AnmEvent_OffToOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIconText_C::ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText");

	Params::WBP_MainMenu_Pal_WorkIconText_C_ExecuteUbergraph_WBP_MainMenu_Pal_WorkIconText Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_Pal_WorkIconText.WBP_MainMenu_Pal_WorkIconText_C.SetSuitability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWorkSuitability                     Suitability                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_Pal_WorkIconText_C::SetSuitability(EPalWorkSuitability Suitability, int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_Pal_WorkIconText_C", "SetSuitability");

	Params::WBP_MainMenu_Pal_WorkIconText_C_SetSuitability Parms{};

	Parms.Suitability = Suitability;
	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}

}

