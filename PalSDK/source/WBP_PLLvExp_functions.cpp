#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PLLvExp_classes.hpp"
#include "PalServer/WBP_PLLvExp_parameters.hpp"


namespace PalServer
{

// Function WBP_PLLvExp.WBP_PLLvExp_C.AnmEvent_Close_UI
// (BlueprintCallable, BlueprintEvent)

void UWBP_PLLvExp_C::AnmEvent_Close_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "AnmEvent_Close_UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.AnmEvent_Open_UI
// (BlueprintCallable, BlueprintEvent)

void UWBP_PLLvExp_C::AnmEvent_Open_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "AnmEvent_Open_UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.ExecuteUbergraph_WBP_PLLvExp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::ExecuteUbergraph_WBP_PLLvExp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "ExecuteUbergraph_WBP_PLLvExp");

	Params::WBP_PLLvExp_C_ExecuteUbergraph_WBP_PLLvExp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.Finished_45DAD3564BCF5FB025F120A933EEC011
// (BlueprintCallable, BlueprintEvent)

void UWBP_PLLvExp_C::Finished_45DAD3564BCF5FB025F120A933EEC011()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "Finished_45DAD3564BCF5FB025F120A933EEC011");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6
// (BlueprintCallable, BlueprintEvent)

void UWBP_PLLvExp_C::Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "Finished_D0ED7FF7495A5D9266FC3DB1824EA6F6");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PLLvExp_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.SetAddExpText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::SetAddExpText(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "SetAddExpText");

	Params::WBP_PLLvExp_C_SetAddExpText Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PLLvExp_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "Tick");

	Params::WBP_PLLvExp_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateExp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   OldExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowExpRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::UpdateExp(int64 AddExp, int64 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "UpdateExp");

	Params::WBP_PLLvExp_C_UpdateExp Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateGaugeEdgeImagePosition
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::UpdateGaugeEdgeImagePosition(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "UpdateGaugeEdgeImagePosition");

	Params::WBP_PLLvExp_C_UpdateGaugeEdgeImagePosition Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PLLvExp.WBP_PLLvExp_C.UpdateLevel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PLLvExp_C::UpdateLevel(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PLLvExp_C", "UpdateLevel");

	Params::WBP_PLLvExp_C_UpdateLevel Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}

}

