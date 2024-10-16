#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalLvExp_classes.hpp"
#include "PalSDK/WBP_PalLvExp_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalLvExp.WBP_PalLvExp_C.AnmEvent_Close_UI
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::AnmEvent_Close_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "AnmEvent_Close_UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.AnmEvent_Levelup
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::AnmEvent_Levelup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "AnmEvent_Levelup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.AnmEvent_NewMove
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWazaID                              NewWazaID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::AnmEvent_NewMove(EPalWazaID NewWazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "AnmEvent_NewMove");

	Params::WBP_PalLvExp_C_AnmEvent_NewMove Parms{};

	Parms.NewWazaID = NewWazaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.AnmEvent_Open_UI
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::AnmEvent_Open_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "AnmEvent_Open_UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.BindFromHandle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "BindFromHandle");

	Params::WBP_PalLvExp_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.BindFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "BindFromSlot");

	Params::WBP_PalLvExp_C_BindFromSlot Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.ClearAnimeTimer
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::ClearAnimeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "ClearAnimeTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.ExecuteUbergraph_WBP_PalLvExp
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::ExecuteUbergraph_WBP_PalLvExp(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "ExecuteUbergraph_WBP_PalLvExp");

	Params::WBP_PalLvExp_C_ExecuteUbergraph_WBP_PalLvExp Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.On Update Exp Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   OldExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowExpRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::On_Update_Exp_Binded(int64 AddExp, int64 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "On Update Exp Binded");

	Params::WBP_PalLvExp_C_On_Update_Exp_Binded Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.On Update Level Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::On_Update_Level_Binded(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "On Update Level Binded");

	Params::WBP_PalLvExp_C_On_Update_Level_Binded Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalLvExp_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.OnTriggerCloseAnime
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::OnTriggerCloseAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "OnTriggerCloseAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.OnTriggerLevelUpAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::OnTriggerLevelUpAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "OnTriggerLevelUpAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.OnTriggerNewMoveAnime
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::OnTriggerNewMoveAnime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "OnTriggerNewMoveAnime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.OnUpdateSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    LastHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::OnUpdateSlot(class UPalIndividualCharacterSlot* Slot_0, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "OnUpdateSlot");

	Params::WBP_PalLvExp_C_OnUpdateSlot Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.Set Exp Percent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::Set_Exp_Percent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "Set Exp Percent");

	Params::WBP_PalLvExp_C_Set_Exp_Percent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.Set Level
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::Set_Level(int32 Level)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "Set Level");

	Params::WBP_PalLvExp_C_Set_Level Parms{};

	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.SetAddExp
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalLvExp_C::SetAddExp(int64 AddExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "SetAddExp");

	Params::WBP_PalLvExp_C_SetAddExp Parms{};

	Parms.AddExp = AddExp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupCloseAnimeTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::SetupCloseAnimeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "SetupCloseAnimeTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupLevelUpAnimeTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::SetupLevelUpAnimeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "SetupLevelUpAnimeTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalLvExp.WBP_PalLvExp_C.SetupNewMoveAnimeTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalLvExp_C::SetupNewMoveAnimeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalLvExp_C", "SetupNewMoveAnimeTimer");

	UObject::ProcessEvent(Func, nullptr);
}

}

