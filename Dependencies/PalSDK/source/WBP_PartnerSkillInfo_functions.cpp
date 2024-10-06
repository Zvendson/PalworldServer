#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PartnerSkillInfo_classes.hpp"
#include "PalServer/WBP_PartnerSkillInfo_parameters.hpp"


namespace PalServer
{

// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.AnmEvent_HideShow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Override                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::AnmEvent_HideShow(bool Hide_0, bool Override)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "AnmEvent_HideShow");

	Params::WBP_PartnerSkillInfo_C_AnmEvent_HideShow Parms{};

	Parms.Hide_0 = Hide_0;
	Parms.Override = Override;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.CanRideCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    CanRide                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::CanRideCharacter(bool* CanRide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "CanRideCharacter");

	Params::WBP_PartnerSkillInfo_C_CanRideCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CanRide != nullptr)
		*CanRide = Parms.CanRide;
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Change Ride Key Guide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Ride                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Change_Ride_Key_Guide(bool Ride)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Change Ride Key Guide");

	Params::WBP_PartnerSkillInfo_C_Change_Ride_Key_Guide Parms{};

	Parms.Ride = Ride;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Check Partner Skill Unlocked Timer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::Check_Partner_Skill_Unlocked_Timer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Check Partner Skill Unlocked Timer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.EndExecuteAnmTimer
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::EndExecuteAnmTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "EndExecuteAnmTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ExecuteUbergraph_WBP_PartnerSkillInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::ExecuteUbergraph_WBP_PartnerSkillInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ExecuteUbergraph_WBP_PartnerSkillInfo");

	Params::WBP_PartnerSkillInfo_C_ExecuteUbergraph_WBP_PartnerSkillInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Get Partner Skill Name Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                             SkillNameText                                          (Parm, OutParm)

void UWBP_PartnerSkillInfo_C::Get_Partner_Skill_Name_Text(class FText* SkillNameText)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Get Partner Skill Name Text");

	Params::WBP_PartnerSkillInfo_C_Get_Partner_Skill_Name_Text Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (SkillNameText != nullptr)
		*SkillNameText = std::move(Parms.SkillNameText);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetOtomoPalHolder
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UBP_OtomoPalHolderComponent_C*    OtomoPalHolder                                         (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::GetOtomoPalHolder(class UBP_OtomoPalHolderComponent_C** OtomoPalHolder)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "GetOtomoPalHolder");

	Params::WBP_PartnerSkillInfo_C_GetOtomoPalHolder Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OtomoPalHolder != nullptr)
		*OtomoPalHolder = Parms.OtomoPalHolder;
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.GetPartnerSkillParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalPartnerSkillParameterComponent*PartnerSkillParameter                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::GetPartnerSkillParameter(class UPalPartnerSkillParameterComponent** PartnerSkillParameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "GetPartnerSkillParameter");

	Params::WBP_PartnerSkillInfo_C_GetPartnerSkillParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (PartnerSkillParameter != nullptr)
		*PartnerSkillParameter = Parms.PartnerSkillParameter;
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Hide
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::Hide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Hide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnActivateOtomo
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::OnActivateOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnActivateOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnInactiveOtomo
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::OnInactiveOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnInactiveOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStartCoop
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::OnStartCoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnStartCoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.OnStopCoop
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::OnStopCoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "OnStopCoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ReleaseInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::ReleaseInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ReleaseInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.SetupDisplay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::SetupDisplay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "SetupDisplay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Should Show UI
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ShouldShow                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::Should_Show_UI(bool* ShouldShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Should Show UI");

	Params::WBP_PartnerSkillInfo_C_Should_Show_UI Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldShow != nullptr)
		*ShouldShow = Parms.ShouldShow;
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Show Effect Time
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::Show_Effect_Time()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Show Effect Time");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowCoolDownTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::ShowCoolDownTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ShowCoolDownTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ShowSkillExecuteAnm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsExcuting                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::ShowSkillExecuteAnm(bool IsExcuting)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ShowSkillExecuteAnm");

	Params::WBP_PartnerSkillInfo_C_ShowSkillExecuteAnm Parms{};

	Parms.IsExcuting = IsExcuting;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.ToggleCoopText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShowOriginal                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PartnerSkillInfo_C::ToggleCoopText(bool ShowOriginal)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "ToggleCoopText");

	Params::WBP_PartnerSkillInfo_C_ToggleCoopText Parms{};

	Parms.ShowOriginal = ShowOriginal;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.TriggerInput
// (BlueprintCallable, BlueprintEvent)

void UWBP_PartnerSkillInfo_C::TriggerInput()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "TriggerInput");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Cool Down Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                      Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                      Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PartnerSkillInfo_C::Update_Cool_Down_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Update Cool Down Time");

	Params::WBP_PartnerSkillInfo_C_Update_Cool_Down_Time Parms{};

	Parms.Now = std::move(Now);
	Parms.Max = std::move(Max);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PartnerSkillInfo.WBP_PartnerSkillInfo_C.Update Effect Time
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                      Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                      Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PartnerSkillInfo_C::Update_Effect_Time(const struct FFixedPoint& Now, const struct FFixedPoint& Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PartnerSkillInfo_C", "Update Effect Time");

	Params::WBP_PartnerSkillInfo_C_Update_Effect_Time Parms{};

	Parms.Now = std::move(Now);
	Parms.Max = std::move(Max);

	UObject::ProcessEvent(Func, &Parms);
}

}

