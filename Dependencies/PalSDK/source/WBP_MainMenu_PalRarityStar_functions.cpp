#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_MainMenu_PalRarityStar_classes.hpp"
#include "PalSDK/WBP_MainMenu_PalRarityStar_parameters.hpp"


namespace PalSDK
{

// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_ForceOff
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_ForceOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_ForceOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_Highlight
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_Highlight()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_Highlight");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_OffToOn
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_OffToOn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_OffToOn");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.AnmEvent_OnToOff
// (BlueprintCallable, BlueprintEvent)

void UWBP_MainMenu_PalRarityStar_C::AnmEvent_OnToOff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "AnmEvent_OnToOff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.ExecuteUbergraph_WBP_MainMenu_PalRarityStar
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalRarityStar_C::ExecuteUbergraph_WBP_MainMenu_PalRarityStar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "ExecuteUbergraph_WBP_MainMenu_PalRarityStar");

	Params::WBP_MainMenu_PalRarityStar_C_ExecuteUbergraph_WBP_MainMenu_PalRarityStar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_MainMenu_PalRarityStar.WBP_MainMenu_PalRarityStar_C.SetActiveRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsActive                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_MainMenu_PalRarityStar_C::SetActiveRank(bool IsActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_MainMenu_PalRarityStar_C", "SetActiveRank");

	Params::WBP_MainMenu_PalRarityStar_C_SetActiveRank Parms{};

	Parms.IsActive = IsActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

