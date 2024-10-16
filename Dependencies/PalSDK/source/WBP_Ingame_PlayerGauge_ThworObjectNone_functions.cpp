#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_PlayerGauge_ThworObjectNone_classes.hpp"
#include "PalSDK/WBP_Ingame_PlayerGauge_ThworObjectNone_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.Display
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DisplayTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_ThworObjectNone_C::Display(double DisplayTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_ThworObjectNone_C", "Display");

	Params::WBP_Ingame_PlayerGauge_ThworObjectNone_C_Display Parms{};

	Parms.DisplayTime = DisplayTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_ThworObjectNone_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_ThworObjectNone_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.OnTimer_Hide
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_ThworObjectNone_C::OnTimer_Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_ThworObjectNone_C", "OnTimer_Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_ThworObjectNone.WBP_Ingame_PlayerGauge_ThworObjectNone_C.SetDisplayMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalUIThrowObjectNoneMessageType       DisplayType                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_ThworObjectNone_C::SetDisplayMode(E_PalUIThrowObjectNoneMessageType DisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_ThworObjectNone_C", "SetDisplayMode");

	Params::WBP_Ingame_PlayerGauge_ThworObjectNone_C_SetDisplayMode Parms{};

	Parms.DisplayType = DisplayType;

	UObject::ProcessEvent(Func, &Parms);
}

}

