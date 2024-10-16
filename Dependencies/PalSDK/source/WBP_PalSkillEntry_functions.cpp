#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalSkillEntry_classes.hpp"
#include "PalSDK/WBP_PalSkillEntry_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ActivateEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalSkillEntry_C::ActivateEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ActivateEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CoolFinish
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalSkillEntry_C::CoolFinish()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CoolFinish");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CoolStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalSkillEntry_C::CoolStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CoolStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   CoolRate                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::CREATEDELEGATE_PROXYFUNCTION_0(float CoolRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_PalSkillEntry_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.CoolRate = CoolRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ExecuteUbergraph_WBP_PalSkillEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::ExecuteUbergraph_WBP_PalSkillEntry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ExecuteUbergraph_WBP_PalSkillEntry");

	Params::WBP_PalSkillEntry_C_ExecuteUbergraph_WBP_PalSkillEntry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.LongPress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Start                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::LongPress(bool Start)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "LongPress");

	Params::WBP_PalSkillEntry_C_LongPress Parms{};

	Parms.Start = Start;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalSkillEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.SetSkillText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SkillName                                              (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalSkillEntry_C::SetSkillText(const class FText& SkillName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "SetSkillText");

	Params::WBP_PalSkillEntry_C_SetSkillText Parms{};

	Parms.SkillName = std::move(SkillName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Setup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActiveSkill*                  ActiveSkill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::Setup(class UPalActiveSkill* ActiveSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "Setup");

	Params::WBP_PalSkillEntry_C_Setup Parms{};

	Parms.ActiveSkill = ActiveSkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.ToggleVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsCooling                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::ToggleVisibility(bool IsCooling)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "ToggleVisibility");

	Params::WBP_PalSkillEntry_C_ToggleVisibility Parms{};

	Parms.IsCooling = IsCooling;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActiveSkill*                  ActiveSkill                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::Unbind(class UPalActiveSkill* ActiveSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "Unbind");

	Params::WBP_PalSkillEntry_C_Unbind Parms{};

	Parms.ActiveSkill = ActiveSkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalSkillEntry.WBP_PalSkillEntry_C.UpdateCoolDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Cool                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalSkillEntry_C::UpdateCoolDown(double Cool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalSkillEntry_C", "UpdateCoolDown");

	Params::WBP_PalSkillEntry_C_UpdateCoolDown Parms{};

	Parms.Cool = Cool;

	UObject::ProcessEvent(Func, &Parms);
}

}

