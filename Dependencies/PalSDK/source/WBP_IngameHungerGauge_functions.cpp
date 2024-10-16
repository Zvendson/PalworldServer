#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_IngameHungerGauge_classes.hpp"
#include "PalSDK/WBP_IngameHungerGauge_parameters.hpp"


namespace PalSDK
{

// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.AnmEvent_Debuff
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameHungerGauge_C::AnmEvent_Debuff()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "AnmEvent_Debuff");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.AnmEvent_Normal
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameHungerGauge_C::AnmEvent_Normal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "AnmEvent_Normal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameHungerGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.ExecuteUbergraph_WBP_IngameHungerGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameHungerGauge_C::ExecuteUbergraph_WBP_IngameHungerGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "ExecuteUbergraph_WBP_IngameHungerGauge");

	Params::WBP_IngameHungerGauge_C_ExecuteUbergraph_WBP_IngameHungerGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                      NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                      MaxHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IngameHungerGauge_C::SetHunger(const struct FFixedPoint& NowHunger, const struct FFixedPoint& MaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "SetHunger");

	Params::WBP_IngameHungerGauge_C_SetHunger Parms{};

	Parms.NowHunger = std::move(NowHunger);
	Parms.MaxHunger = std::move(MaxHunger);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameHungerGauge.WBP_IngameHungerGauge_C.SetHunger_ByRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Rate                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameHungerGauge_C::SetHunger_ByRate(double Rate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameHungerGauge_C", "SetHunger_ByRate");

	Params::WBP_IngameHungerGauge_C_SetHunger_ByRate Parms{};

	Parms.Rate = Rate;

	UObject::ProcessEvent(Func, &Parms);
}

}

