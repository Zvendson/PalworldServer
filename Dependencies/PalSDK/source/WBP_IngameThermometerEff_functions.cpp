#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IngameThermometerEff_classes.hpp"
#include "PalServer/WBP_IngameThermometerEff_parameters.hpp"


namespace PalServer
{

// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.AnmEvent_Effect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temperanture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::AnmEvent_Effect(int32 Temperanture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "AnmEvent_Effect");

	Params::WBP_IngameThermometerEff_C_AnmEvent_Effect Parms{};

	Parms.Temperanture = Temperanture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.AnmEvent_Off
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameThermometerEff_C::AnmEvent_Off()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "AnmEvent_Off");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.AnmEvent_On
// (BlueprintCallable, BlueprintEvent)

void UWBP_IngameThermometerEff_C::AnmEvent_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "AnmEvent_On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.Calc Thermomater Anime Target Time
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   TargetTenperature                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  TargetTime                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::Calc_Thermomater_Anime_Target_Time(int32 TargetTenperature, double* TargetTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "Calc Thermomater Anime Target Time");

	Params::WBP_IngameThermometerEff_C_Calc_Thermomater_Anime_Target_Time Parms{};

	Parms.TargetTenperature = TargetTenperature;

	UObject::ProcessEvent(Func, &Parms);

	if (TargetTime != nullptr)
		*TargetTime = Parms.TargetTime;
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameThermometerEff_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.ExecuteUbergraph_WBP_IngameThermometerEff
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::ExecuteUbergraph_WBP_IngameThermometerEff(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "ExecuteUbergraph_WBP_IngameThermometerEff");

	Params::WBP_IngameThermometerEff_C_ExecuteUbergraph_WBP_IngameThermometerEff Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IngameThermometerEff_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.PlayTemperatureSound
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IngameThermometerEff_C::PlayTemperatureSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "PlayTemperatureSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.SetTemperanture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Temperanture                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::SetTemperanture(int32 Temperanture)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "SetTemperanture");

	Params::WBP_IngameThermometerEff_C_SetTemperanture Parms{};

	Parms.Temperanture = Temperanture;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.SetTemperantureBodyState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBodyTemperatureState                NewBodyState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::SetTemperantureBodyState(EPalBodyTemperatureState NewBodyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "SetTemperantureBodyState");

	Params::WBP_IngameThermometerEff_C_SetTemperantureBodyState Parms{};

	Parms.NewBodyState = NewBodyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IngameThermometerEff.WBP_IngameThermometerEff_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IngameThermometerEff_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IngameThermometerEff_C", "Tick");

	Params::WBP_IngameThermometerEff_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

