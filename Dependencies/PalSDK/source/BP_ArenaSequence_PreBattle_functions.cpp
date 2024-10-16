#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ArenaSequence_PreBattle_classes.hpp"
#include "PalSDK/BP_ArenaSequence_PreBattle_parameters.hpp"


namespace PalSDK
{

// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ActivatePals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::ActivatePals()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "ActivatePals");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ActivateReadyUI__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::ActivateReadyUI__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "ActivateReadyUI__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ExecuteUbergraph_BP_ArenaSequence_PreBattle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PreBattle_C::ExecuteUbergraph_BP_ArenaSequence_PreBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "ExecuteUbergraph_BP_ArenaSequence_PreBattle");

	Params::BP_ArenaSequence_PreBattle_C_ExecuteUbergraph_BP_ArenaSequence_PreBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.FadeOut
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "FadeOut");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnBeginSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "OnBeginSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnCameraTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalArenaPlayerIndex                    PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PreBattle_C::OnCameraTarget(EPalArenaPlayerIndex PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "OnCameraTarget");

	Params::BP_ArenaSequence_PreBattle_C_OnCameraTarget Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnEndSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::OnEndSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "OnEndSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.OnFinishCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSkipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PreBattle_C::OnFinishCutscene(bool bIsSkipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "OnFinishCutscene");

	Params::BP_ArenaSequence_PreBattle_C_OnFinishCutscene Parms{};

	Parms.bIsSkipped = bIsSkipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.PlayCutscene
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::PlayCutscene()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "PlayCutscene");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.RideLeaderPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::RideLeaderPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "RideLeaderPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetDisableLookAtAllPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PreBattle_C::SetDisableLookAtAllPal(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "SetDisableLookAtAllPal");

	Params::BP_ArenaSequence_PreBattle_C_SetDisableLookAtAllPal Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupFormation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::SetupFormation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "SetupFormation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupLocalPlayerCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::SetupLocalPlayerCamera()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "SetupLocalPlayerCamera");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.SetupStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PreBattle_C::SetupStatus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "SetupStatus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PreBattle.BP_ArenaSequence_PreBattle_C.ToggleMutePals
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    DisableCrying                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PreBattle_C::ToggleMutePals(bool DisableCrying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PreBattle_C", "ToggleMutePals");

	Params::BP_ArenaSequence_PreBattle_C_ToggleMutePals Parms{};

	Parms.DisableCrying = DisableCrying;

	UObject::ProcessEvent(Func, &Parms);
}

}

