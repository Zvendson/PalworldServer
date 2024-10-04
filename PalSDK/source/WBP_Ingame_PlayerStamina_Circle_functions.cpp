#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Ingame_PlayerStamina_Circle_classes.hpp"
#include "PalServer/WBP_Ingame_PlayerStamina_Circle_parameters.hpp"


namespace PalServer
{

// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerStamina_Circle_C::ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle");

	Params::WBP_Ingame_PlayerStamina_Circle_C_ExecuteUbergraph_WBP_Ingame_PlayerStamina_Circle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.Finished_06A641D34FCE57CEABA661947727700A
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::Finished_06A641D34FCE57CEABA661947727700A()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "Finished_06A641D34FCE57CEABA661947727700A");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.Finished_A235210E4CFA5CD880150D987765704F
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::Finished_A235210E4CFA5CD880150D987765704F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "Finished_A235210E4CFA5CD880150D987765704F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.GetChachedSPPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Percent                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerStamina_Circle_C::GetChachedSPPercent(double* Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "GetChachedSPPercent");

	Params::WBP_Ingame_PlayerStamina_Circle_C_GetChachedSPPercent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Percent != nullptr)
		*Percent = Parms.Percent;
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.HideNotEnoughStamina
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::HideNotEnoughStamina()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "HideNotEnoughStamina");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.SetOtomoMarkVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerStamina_Circle_C::SetOtomoMarkVisible(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "SetOtomoMarkVisible");

	Params::WBP_Ingame_PlayerStamina_Circle_C_SetOtomoMarkVisible Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.SetPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerStamina_Circle_C::SetPercent(double Percent, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "SetPercent");

	Params::WBP_Ingame_PlayerStamina_Circle_C_SetPercent Parms{};

	Parms.Percent = Percent;
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.ShowNotEnoughStamina
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerStamina_Circle_C::ShowNotEnoughStamina()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "ShowNotEnoughStamina");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerStamina_Circle.WBP_Ingame_PlayerStamina_Circle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerStamina_Circle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerStamina_Circle_C", "Tick");

	Params::WBP_Ingame_PlayerStamina_Circle_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

