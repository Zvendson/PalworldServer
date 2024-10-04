#include "PalServer/Basic.hpp"

#include "PalServer/WBP_LoadingScreen_classes.hpp"
#include "PalServer/WBP_LoadingScreen_parameters.hpp"


namespace PalServer
{

// Function WBP_LoadingScreen.WBP_LoadingScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_LoadingScreen_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ExecuteUbergraph_WBP_LoadingScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::ExecuteUbergraph_WBP_LoadingScreen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ExecuteUbergraph_WBP_LoadingScreen");

	Params::WBP_LoadingScreen_C_ExecuteUbergraph_WBP_LoadingScreen Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.SetBgColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                     Color                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::SetBgColor(const struct FLinearColor& Color)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "SetBgColor");

	Params::WBP_LoadingScreen_C_SetBgColor Parms{};

	Parms.Color = std::move(Color);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_LoadingScreen.WBP_LoadingScreen_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Visiable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreen_C::ToggleVisibility(bool Visiable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_LoadingScreen_C", "ToggleVisibility");

	Params::WBP_LoadingScreen_C_ToggleVisibility Parms{};

	Parms.Visiable = Visiable;

	UObject::ProcessEvent(Func, &Parms);
}

}

