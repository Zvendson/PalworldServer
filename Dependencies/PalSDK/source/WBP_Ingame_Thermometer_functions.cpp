#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Ingame_Thermometer_classes.hpp"
#include "PalServer/WBP_Ingame_Thermometer_parameters.hpp"


namespace PalServer
{

// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.AnmEvent_ChangeTemperature
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   TargetTenperature                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::AnmEvent_ChangeTemperature(int32 TargetTenperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "AnmEvent_ChangeTemperature");

	Params::WBP_Ingame_Thermometer_C_AnmEvent_ChangeTemperature Parms{};

	Parms.TargetTenperature = TargetTenperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.Calc Thermomater Anime Target Time
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TargetTenperature                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TargetTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::Calc_Thermomater_Anime_Target_Time(int32 TargetTenperature, double* TargetTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "Calc Thermomater Anime Target Time");

	Params::WBP_Ingame_Thermometer_C_Calc_Thermomater_Anime_Target_Time Parms{};

	Parms.TargetTenperature = TargetTenperature;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetTime != nullptr)
		*TargetTime = Parms.TargetTime;
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Thermometer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.ExecuteUbergraph_WBP_Ingame_Thermometer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::ExecuteUbergraph_WBP_Ingame_Thermometer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "ExecuteUbergraph_WBP_Ingame_Thermometer");

	Params::WBP_Ingame_Thermometer_C_ExecuteUbergraph_WBP_Ingame_Thermometer Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_Thermometer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetBodyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBodyTemperatureState                NewState                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::SetBodyState(EPalBodyTemperatureState NewState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "SetBodyState");

	Params::WBP_Ingame_Thermometer_C_SetBodyState Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetRegistRate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   HeatRegist                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   ColdRegist                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::SetRegistRate(int32 HeatRegist, int32 ColdRegist)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "SetRegistRate");

	Params::WBP_Ingame_Thermometer_C_SetRegistRate Parms{};

	Parms.HeatRegist = HeatRegist;
	Parms.ColdRegist = ColdRegist;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.SetTemperature
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewTenperature                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::SetTemperature(int32 NewTenperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "SetTemperature");

	Params::WBP_Ingame_Thermometer_C_SetTemperature Parms{};

	Parms.NewTenperature = NewTenperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_Thermometer.WBP_Ingame_Thermometer_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_Thermometer_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_Thermometer_C", "Tick");

	Params::WBP_Ingame_Thermometer_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

