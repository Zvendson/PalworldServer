#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PlayerHPGauge_classes.hpp"
#include "PalServer/WBP_PlayerHPGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "BindFromHandle");

	Params::WBP_PlayerHPGauge_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.DelayClose
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::DelayClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "DelayClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerHPGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.ExecuteUbergraph_WBP_PlayerHPGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::ExecuteUbergraph_WBP_PlayerHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "ExecuteUbergraph_WBP_PlayerHPGauge");

	Params::WBP_PlayerHPGauge_C_ExecuteUbergraph_WBP_PlayerHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.On Timer Event Check Guild
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::On_Timer_Event_Check_Guild()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "On Timer Event Check Guild");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnDelayClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::OnDelayClose__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnDelayClose__DelegateSignature");

	Params::WBP_PlayerHPGauge_C_OnDelayClose__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnDyingEnd
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::OnDyingEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnDyingEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerHPGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnTimerEvent_CheckActor
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::OnTimerEvent_CheckActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnTimerEvent_CheckActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateHP_Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerHPGauge_C::OnUpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnUpdateHP_Binded");

	Params::WBP_PlayerHPGauge_C_OnUpdateHP_Binded Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateLevel_binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::OnUpdateLevel_binded(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnUpdateLevel_binded");

	Params::WBP_PlayerHPGauge_C_OnUpdateLevel_binded Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.OnUpdateNickName_Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::OnUpdateNickName_Binded(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "OnUpdateNickName_Binded");

	Params::WBP_PlayerHPGauge_C_OnUpdateNickName_Binded Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.SetupByActor
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::SetupByActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "SetupByActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.SetupDying
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::SetupDying()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "SetupDying");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.UpdateForTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerHPGauge_C::UpdateForTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "UpdateForTick");

	Params::WBP_PlayerHPGauge_C_UpdateForTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerHPGauge.WBP_PlayerHPGauge_C.UpdateWidgetPosition
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerHPGauge_C::UpdateWidgetPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerHPGauge_C", "UpdateWidgetPosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

