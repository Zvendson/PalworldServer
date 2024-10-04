#include "PalServer/Basic.hpp"

#include "PalServer/WBP_EnemyGauge_SAN_classes.hpp"
#include "PalServer/WBP_EnemyGauge_SAN_parameters.hpp"


namespace PalServer
{

// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.ExecuteUbergraph_WBP_EnemyGauge_SAN
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_SAN_C::ExecuteUbergraph_WBP_EnemyGauge_SAN(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "ExecuteUbergraph_WBP_EnemyGauge_SAN");

	Params::WBP_EnemyGauge_SAN_C_ExecuteUbergraph_WBP_EnemyGauge_SAN Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyGauge_SAN_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge_SAN.WBP_EnemyGauge_SAN_C.SetSanityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanityValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxSanityValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_SAN_C::SetSanityValue(double NowSanityValue, double MaxSanityValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_SAN_C", "SetSanityValue");

	Params::WBP_EnemyGauge_SAN_C_SetSanityValue Parms{};

	Parms.NowSanityValue = NowSanityValue;
	Parms.MaxSanityValue = MaxSanityValue;

	UObject::ProcessEvent(Func, &Parms);
}

}

