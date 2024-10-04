#include "PalServer/Basic.hpp"

#include "PalServer/WBP_GuildMemberGauge_classes.hpp"
#include "PalServer/WBP_GuildMemberGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_GuildMemberGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.EnableAdditionalWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberGauge_C::EnableAdditionalWidget(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "EnableAdditionalWidget");

	Params::WBP_GuildMemberGauge_C_EnableAdditionalWidget Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.EnableName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberGauge_C::EnableName(bool IsEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "EnableName");

	Params::WBP_GuildMemberGauge_C_EnableName Parms{};

	Parms.IsEnable = IsEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.ExecuteUbergraph_WBP_GuildMemberGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberGauge_C::ExecuteUbergraph_WBP_GuildMemberGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "ExecuteUbergraph_WBP_GuildMemberGauge");

	Params::WBP_GuildMemberGauge_C_ExecuteUbergraph_WBP_GuildMemberGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_GuildMemberGauge_C::SetName(const class FString& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "SetName");

	Params::WBP_GuildMemberGauge_C_SetName Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_GuildMemberGauge.WBP_GuildMemberGauge_C.UpdateDying
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Remain                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuildMemberGauge_C::UpdateDying(double Remain, double Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_GuildMemberGauge_C", "UpdateDying");

	Params::WBP_GuildMemberGauge_C_UpdateDying Parms{};

	Parms.Remain = Remain;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}

}

