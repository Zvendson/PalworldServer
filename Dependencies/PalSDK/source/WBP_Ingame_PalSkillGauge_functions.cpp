#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_PalSkillGauge_classes.hpp"
#include "PalSDK/WBP_Ingame_PalSkillGauge_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_CoolDown
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_CoolDown()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_CoolDown");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_CoolDownComplated
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_CoolDownComplated()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_CoolDownComplated");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_InputHold
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_InputHold()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_InputHold");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_InputRelease
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_InputRelease()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_InputRelease");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_Lock
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_Lock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_Lock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_SkillEnable
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_SkillEnable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_SkillEnable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_StartSkill
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_StartSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_StartSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_Unlock
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_Unlock()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_Unlock");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.AnmEvent_UsingSkill
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    TogglePlay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::AnmEvent_UsingSkill(bool TogglePlay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "AnmEvent_UsingSkill");

	Params::WBP_Ingame_PalSkillGauge_C_AnmEvent_UsingSkill Parms{};

	Parms.TogglePlay = TogglePlay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ClearIcon
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::ClearIcon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ClearIcon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ExecuteUbergraph_WBP_Ingame_PalSkillGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::ExecuteUbergraph_WBP_Ingame_PalSkillGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ExecuteUbergraph_WBP_Ingame_PalSkillGauge");

	Params::WBP_Ingame_PalSkillGauge_C_ExecuteUbergraph_WBP_Ingame_PalSkillGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Hide Key Guide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Hide_Key_Guide(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Hide Key Guide");

	Params::WBP_Ingame_PalSkillGauge_C_Hide_Key_Guide Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.OnInputMethodChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// ECommonInputType                        bNewInputType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::OnInputMethodChanged(ECommonInputType bNewInputType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "OnInputMethodChanged");

	Params::WBP_Ingame_PalSkillGauge_C_OnInputMethodChanged Parms{};

	Parms.bNewInputType = bNewInputType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Cool Down Gauge Percent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Set_Cool_Down_Gauge_Percent(double Now, double Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Cool Down Gauge Percent");

	Params::WBP_Ingame_PalSkillGauge_C_Set_Cool_Down_Gauge_Percent Parms{};

	Parms.Now = Now;
	Parms.Max = Max;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Gauge Percent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Gauge_Percent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Gauge Percent");

	Params::WBP_Ingame_PalSkillGauge_C_Set_Skill_Gauge_Percent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             SkillNameText                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Name(const class FText& SkillNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Name");

	Params::WBP_Ingame_PalSkillGauge_C_Set_Skill_Name Parms{};

	Parms.SkillNameText = std::move(SkillNameText);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Set Skill Name Locked
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::Set_Skill_Name_Locked()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Set Skill Name Locked");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.Setup Icon Texture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalSkillGauge_C::Setup_Icon_Texture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "Setup Icon Texture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalSkillGauge.WBP_Ingame_PalSkillGauge_C.ShowFlyKeyGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Show                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalSkillGauge_C::ShowFlyKeyGuide(bool Show)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalSkillGauge_C", "ShowFlyKeyGuide");

	Params::WBP_Ingame_PalSkillGauge_C_ShowFlyKeyGuide Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);
}

}

