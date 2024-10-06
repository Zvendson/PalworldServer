#include "PalServer/Basic.hpp"

#include "PalServer/BP_ArenaSequence_Result_classes.hpp"
#include "PalServer/BP_ArenaSequence_Result_parameters.hpp"


namespace PalServer
{

// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.End Process
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::End_Process()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "End Process");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.ExecuteUbergraph_BP_ArenaSequence_Result
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::ExecuteUbergraph_BP_ArenaSequence_Result(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "ExecuteUbergraph_BP_ArenaSequence_Result");

	Params::BP_ArenaSequence_Result_C_ExecuteUbergraph_BP_ArenaSequence_Result Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.GetOffAllPlayer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::GetOffAllPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "GetOffAllPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.InactivateCharacter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::InactivateCharacter(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "InactivateCharacter");

	Params::BP_ArenaSequence_Result_C_InactivateCharacter Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.IsWinPlayerIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalArenaPlayerIndex                    PlayerIndex                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_ArenaSequence_Result_C::IsWinPlayerIndex(EPalArenaPlayerIndex PlayerIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "IsWinPlayerIndex");

	Params::BP_ArenaSequence_Result_C_IsWinPlayerIndex Parms{};

	Parms.PlayerIndex = PlayerIndex;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnBeginSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_Result_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "OnBeginSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnCutsceneFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::OnCutsceneFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "OnCutsceneFinish__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnDraw__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::OnDraw__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "OnDraw__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnFinishCutscene
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsSkipped                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::OnFinishCutscene(bool bIsSkipped)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "OnFinishCutscene");

	Params::BP_ArenaSequence_Result_C_OnFinishCutscene Parms{};

	Parms.bIsSkipped = bIsSkipped;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.OnWin__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           WinnerName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::OnWin__DelegateSignature(const class FString& WinnerName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "OnWin__DelegateSignature");

	Params::BP_ArenaSequence_Result_C_OnWin__DelegateSignature Parms{};

	Parms.WinnerName = std::move(WinnerName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.PlayResultMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                     AnimMontage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::PlayResultMontage(class APalCharacter* Character, class UAnimMontage* AnimMontage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "PlayResultMontage");

	Params::BP_ArenaSequence_Result_C_PlayResultMontage Parms{};

	Parms.Character = Character;
	Parms.AnimMontage = AnimMontage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.PlayResultSound
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::PlayResultSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "PlayResultSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.Set Disable Movement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::Set_Disable_Movement(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "Set Disable Movement");

	Params::BP_ArenaSequence_Result_C_Set_Disable_Movement Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.SetDisableLookAtAllPal
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::SetDisableLookAtAllPal(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "SetDisableLookAtAllPal");

	Params::BP_ArenaSequence_Result_C_SetDisableLookAtAllPal Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.SetupFormation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::SetupFormation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "SetupFormation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.StopMontages
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_Result_C::StopMontages()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "StopMontages");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_Result.BP_ArenaSequence_Result_C.ToggleLocalInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisable                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_Result_C::ToggleLocalInput(bool IsDisable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_Result_C", "ToggleLocalInput");

	Params::BP_ArenaSequence_Result_C_ToggleLocalInput Parms{};

	Parms.IsDisable = IsDisable;

	UObject::ProcessEvent(Func, &Parms);
}

}

