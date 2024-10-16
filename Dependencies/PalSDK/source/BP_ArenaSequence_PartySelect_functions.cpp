#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ArenaSequence_PartySelect_classes.hpp"
#include "PalSDK/BP_ArenaSequence_PartySelect_parameters.hpp"


namespace PalSDK
{

// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.EndProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::EndProcess()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "EndProcess");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.ExecuteUbergraph_BP_ArenaSequence_PartySelect
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PartySelect_C::ExecuteUbergraph_BP_ArenaSequence_PartySelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "ExecuteUbergraph_BP_ArenaSequence_PartySelect");

	Params::BP_ArenaSequence_PartySelect_C_ExecuteUbergraph_BP_ArenaSequence_PartySelect Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnArenaBreak
// (BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnArenaBreak()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnArenaBreak");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnBeginSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnBeginSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnBreakSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnBreakSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnBreakSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnConfirmBreak
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bResult                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PartySelect_C::OnConfirmBreak(bool bResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnConfirmBreak");

	Params::BP_ArenaSequence_PartySelect_C_OnConfirmBreak Parms{};

	Parms.bResult = bResult;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnEndSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnEndSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnEndSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnPartySelectBreak__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnPartySelectBreak__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnPartySelectBreak__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnPlayerTeleported
// (BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnPlayerTeleported()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnPlayerTeleported");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnTimerUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PartySelect_C::OnTimerUpdated__DelegateSignature(double Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnTimerUpdated__DelegateSignature");

	Params::BP_ArenaSequence_PartySelect_C_OnTimerUpdated__DelegateSignature Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.OnTimeup
// (BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::OnTimeup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "OnTimeup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.PrintPartySelectLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::PrintPartySelectLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "PrintPartySelectLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.SendParty
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_PartySelect_C::SendParty()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "SendParty");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.SetParty
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalArenaPlayerParty             ArenaParty                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_ArenaSequence_PartySelect_C::SetParty(const struct FPalArenaPlayerParty& ArenaParty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "SetParty");

	Params::BP_ArenaSequence_PartySelect_C_SetParty Parms{};

	Parms.ArenaParty = std::move(ArenaParty);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.TickSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PartySelect_C::TickSequence(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "TickSequence");

	Params::BP_ArenaSequence_PartySelect_C_TickSequence Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_PartySelect.BP_ArenaSequence_PartySelect_C.UpdateTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_PartySelect_C::UpdateTimer(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_PartySelect_C", "UpdateTimer");

	Params::BP_ArenaSequence_PartySelect_C_UpdateTimer Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

