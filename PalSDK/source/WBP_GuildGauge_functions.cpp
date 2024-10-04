#include "PalServer/Basic.hpp"

#include "PalServer/WBP_GuildGauge_classes.hpp"
#include "PalServer/WBP_GuildGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_GuildGauge.WBP_GuildGauge_C.ExecuteUbergraph_WBP_GuildGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::ExecuteUbergraph_WBP_GuildGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "ExecuteUbergraph_WBP_GuildGauge");

	Params::WBP_GuildGauge_C_ExecuteUbergraph_WBP_GuildGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GuildGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.Set Display Type
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalUIGuildHPGaugeDisplayType          NewDisplayType                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::Set_Display_Type(E_PalUIGuildHPGaugeDisplayType NewDisplayType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "Set Display Type");

	Params::WBP_GuildGauge_C_Set_Display_Type Parms{};

	Parms.NewDisplayType = NewDisplayType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.SetDying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_Status_Dying_C*               DyingStatus                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Enable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::SetDying(class UBP_Status_Dying_C* DyingStatus, bool Enable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "SetDying");

	Params::WBP_GuildGauge_C_SetDying Parms{};

	Parms.DyingStatus = DyingStatus;
	Parms.Enable = Enable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.SetGuildName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           GuildName                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::SetGuildName(const class FString& GuildName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "SetGuildName");

	Params::WBP_GuildGauge_C_SetGuildName Parms{};

	Parms.GuildName = std::move(GuildName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.SetHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_GuildGauge_C::SetHP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "SetHP");

	Params::WBP_GuildGauge_C_SetHP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.MaxHP = std::move(MaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.SetLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::SetLevel(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "SetLevel");

	Params::WBP_GuildGauge_C_SetLevel Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.SetNickName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::SetNickName(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "SetNickName");

	Params::WBP_GuildGauge_C_SetNickName Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildGauge.WBP_GuildGauge_C.UpdateForTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildGauge_C::UpdateForTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildGauge_C", "UpdateForTick");

	Params::WBP_GuildGauge_C_UpdateForTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

