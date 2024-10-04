#include "PalServer/Basic.hpp"

#include "PalServer/BP_ArenaSequence_InBattle_classes.hpp"
#include "PalServer/BP_ArenaSequence_InBattle_parameters.hpp"


namespace PalServer
{

// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.ChangeArenaInBattleCharacterts
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBattle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::ChangeArenaInBattleCharacterts(bool InBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "ChangeArenaInBattleCharacterts");

	Params::BP_ArenaSequence_InBattle_C_ChangeArenaInBattleCharacterts Parms{};

	Parms.InBattle = InBattle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.CheckBattleEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::CheckBattleEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "CheckBattleEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.EnableMovement
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::EnableMovement()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "EnableMovement");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.ExecuteUbergraph_BP_ArenaSequence_InBattle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::ExecuteUbergraph_BP_ArenaSequence_InBattle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "ExecuteUbergraph_BP_ArenaSequence_InBattle");

	Params::BP_ArenaSequence_InBattle_C_ExecuteUbergraph_BP_ArenaSequence_InBattle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnBeginSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::OnBeginSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnBeginSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnBreakSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::OnBreakSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnBreakSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnDeadCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UBP_ArenaSequence_InBattle_C::OnDeadCharacter(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnDeadCharacter");

	Params::BP_ArenaSequence_InBattle_C_OnDeadCharacter Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnEndSequence
// (Event, Public, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::OnEndSequence()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnEndSequence");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnTimerTick__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Time                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::OnTimerTick__DelegateSignature(int32 Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnTimerTick__DelegateSignature");

	Params::BP_ArenaSequence_InBattle_C_OnTimerTick__DelegateSignature Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.OnTimeup
// (BlueprintCallable, BlueprintEvent)

void UBP_ArenaSequence_InBattle_C::OnTimeup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "OnTimeup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.SetDisableOtomoDeadReturn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::SetDisableOtomoDeadReturn(bool Disable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "SetDisableOtomoDeadReturn");

	Params::BP_ArenaSequence_InBattle_C_SetDisableOtomoDeadReturn Parms{};

	Parms.Disable = Disable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.SetInBattleControllerSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InBattle                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::SetInBattleControllerSetting(bool InBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "SetInBattleControllerSetting");

	Params::BP_ArenaSequence_InBattle_C_SetInBattleControllerSetting Parms{};

	Parms.InBattle = InBattle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ArenaSequence_InBattle.BP_ArenaSequence_InBattle_C.TickSequence
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ArenaSequence_InBattle_C::TickSequence(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ArenaSequence_InBattle_C", "TickSequence");

	Params::BP_ArenaSequence_InBattle_C_TickSequence Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

