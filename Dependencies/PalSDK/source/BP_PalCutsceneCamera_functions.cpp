#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalCutsceneCamera_classes.hpp"
#include "PalSDK/BP_PalCutsceneCamera_parameters.hpp"


namespace PalSDK
{

// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.DisplayLoadedBossDemoWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_PalCutsceneCamera_C::DisplayLoadedBossDemoWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "DisplayLoadedBossDemoWidget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ExecuteUbergraph_BP_PalCutsceneCamera
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCutsceneCamera_C::ExecuteUbergraph_BP_PalCutsceneCamera(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "ExecuteUbergraph_BP_PalCutsceneCamera");

	Params::BP_PalCutsceneCamera_C_ExecuteUbergraph_BP_PalCutsceneCamera Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.OnComplete_42DB55244656A42BFC71E984CB1360D8
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                      UserWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_PalCutsceneCamera_C::OnComplete_42DB55244656A42BFC71E984CB1360D8(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "OnComplete_42DB55244656A42BFC71E984CB1360D8");

	Params::BP_PalCutsceneCamera_C_OnComplete_42DB55244656A42BFC71E984CB1360D8 Parms{};

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.PreSetupBossDemoCapture
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalCutsceneCamera_C::PreSetupBossDemoCapture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "PreSetupBossDemoCapture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCutsceneCamera_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "ReceiveEndPlay");

	Params::BP_PalCutsceneCamera_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCutsceneCamera_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "ReceiveTick");

	Params::BP_PalCutsceneCamera_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.StartLoadBossDemoWidgetAsync
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBossType                            BossType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalCutsceneCamera_C::StartLoadBossDemoWidgetAsync(EPalBossType BossType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "StartLoadBossDemoWidgetAsync");

	Params::BP_PalCutsceneCamera_C_StartLoadBossDemoWidgetAsync Parms{};

	Parms.BossType = BossType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalCutsceneCamera.BP_PalCutsceneCamera_C.StopBossDemoWidget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_PalCutsceneCamera_C::StopBossDemoWidget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalCutsceneCamera_C", "StopBossDemoWidget");

	UObject::ProcessEvent(Func, nullptr);
}

}

