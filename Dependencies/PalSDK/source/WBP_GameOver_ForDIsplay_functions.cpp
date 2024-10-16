#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_GameOver_ForDIsplay_classes.hpp"
#include "PalSDK/WBP_GameOver_ForDIsplay_parameters.hpp"


namespace PalSDK
{

// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.ExecuteUbergraph_WBP_GameOver_ForDIsplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::ExecuteUbergraph_WBP_GameOver_ForDIsplay(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "ExecuteUbergraph_WBP_GameOver_ForDIsplay");

	Params::WBP_GameOver_ForDIsplay_C_ExecuteUbergraph_WBP_GameOver_ForDIsplay Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnCancelAction
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnCancelAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnCancelAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnClickedRespawnButton
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnClickedRespawnButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnClickedRespawnButton");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnEndedRespawnBlockTime
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnEndedRespawnBlockTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnEndedRespawnBlockTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnFinishedClose
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnFinishedClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnFinishedClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnFinishedOpen
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnFinishedOpen()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnFinishedOpen");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GameOver_ForDIsplay_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GameOver_ForDIsplay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "Tick");

	Params::WBP_GameOver_ForDIsplay_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GameOver_ForDIsplay.WBP_GameOver_ForDIsplay_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                          ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GameOver_ForDIsplay_C::BP_GetDesiredFocusTarget() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GameOver_ForDIsplay_C", "BP_GetDesiredFocusTarget");

	Params::WBP_GameOver_ForDIsplay_C_BP_GetDesiredFocusTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

