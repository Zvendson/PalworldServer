#include "PalServer/Basic.hpp"

#include "PalServer/WBP_PalInfo_classes.hpp"
#include "PalServer/WBP_PalInfo_parameters.hpp"


namespace PalServer
{

// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_BonusToDesc
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::AnmEvent_BonusToDesc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_BonusToDesc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_DescToBonus
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    AlreadyBonusCompleted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::AnmEvent_DescToBonus(bool AlreadyBonusCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_DescToBonus");

	Params::WBP_PalInfo_C_AnmEvent_DescToBonus Parms{};

	Parms.AlreadyBonusCompleted = AlreadyBonusCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_ForceBonus
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::AnmEvent_ForceBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_ForceBonus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_ForceDesc
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::AnmEvent_ForceDesc()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_ForceDesc");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.AnmEvent_OpenAndSetTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalUIPalInfoType                       InfoType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    AlreadyBonusCompleted                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::AnmEvent_OpenAndSetTimer(EPalUIPalInfoType InfoType, bool AlreadyBonusCompleted)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "AnmEvent_OpenAndSetTimer");

	Params::WBP_PalInfo_C_AnmEvent_OpenAndSetTimer Parms{};

	Parms.InfoType = InfoType;
	Parms.AlreadyBonusCompleted = AlreadyBonusCompleted;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.ClearPassiveList
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::ClearPassiveList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "ClearPassiveList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.Create Default Get Info
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo             CaptureInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FFPalUIPalInfoDisplayData        GetInfoData                                            (Parm, OutParm, HasGetValueTypeHash)
// bool                                    IsSuccessed                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::Create_Default_Get_Info(const struct FPalUIPalCaptureInfo& CaptureInfo, struct FFPalUIPalInfoDisplayData* GetInfoData, bool* IsSuccessed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "Create Default Get Info");

	Params::WBP_PalInfo_C_Create_Default_Get_Info Parms{};

	Parms.CaptureInfo = std::move(CaptureInfo);

	UObject::ProcessEvent(Func, &Parms);

	if (GetInfoData != nullptr)
		*GetInfoData = std::move(Parms.GetInfoData);

	if (IsSuccessed != nullptr)
		*IsSuccessed = Parms.IsSuccessed;
}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayFirstActivatedInfo
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::DisplayFirstActivatedInfo(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayFirstActivatedInfo");

	Params::WBP_PalInfo_C_DisplayFirstActivatedInfo Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayPassiveSkill
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     PassiveList                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PalInfo_C::DisplayPassiveSkill(TArray<class FName>& PassiveList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayPassiveSkill");

	Params::WBP_PalInfo_C_DisplayPassiveSkill Parms{};

	Parms.PassiveList = std::move(PassiveList);

	UObject::ProcessEvent(Func, &Parms);

	PassiveList = std::move(Parms.PassiveList);
}


// Function WBP_PalInfo.WBP_PalInfo_C.DisplayShorDesc
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CharacterID                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::DisplayShorDesc(class FName CharacterID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "DisplayShorDesc");

	Params::WBP_PalInfo_C_DisplayShorDesc Parms{};

	Parms.CharacterID = CharacterID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.ExecuteUbergraph_WBP_PalInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::ExecuteUbergraph_WBP_PalInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "ExecuteUbergraph_WBP_PalInfo");

	Params::WBP_PalInfo_C_ExecuteUbergraph_WBP_PalInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.Finished_8AC905F6491806EF04F1E58EE1398650
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::Finished_8AC905F6491806EF04F1E58EE1398650()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "Finished_8AC905F6491806EF04F1E58EE1398650");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "Finished_DDDBAAA14AFFC8A46E31C0A4BCAC3C07");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.OnDescToBonus
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::OnDescToBonus()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "OnDescToBonus");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalInfo_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.Setup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFPalUIPalInfoDisplayData        GetInfo                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PalInfo_C::Setup(const struct FFPalUIPalInfoDisplayData& GetInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "Setup");

	Params::WBP_PalInfo_C_Setup Parms{};

	Parms.GetInfo = std::move(GetInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.SetupCapturePalInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo             CaptureInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalInfo_C::SetupCapturePalInfo(const struct FPalUIPalCaptureInfo& CaptureInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "SetupCapturePalInfo");

	Params::WBP_PalInfo_C_SetupCapturePalInfo Parms{};

	Parms.CaptureInfo = std::move(CaptureInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.SetupFirstActivatedPalInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::SetupFirstActivatedPalInfo(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "SetupFirstActivatedPalInfo");

	Params::WBP_PalInfo_C_SetupFirstActivatedPalInfo Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalInfo.WBP_PalInfo_C.TryDisplayNextInfoEvent
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalInfo_C::TryDisplayNextInfoEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "TryDisplayNextInfoEvent");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalInfo.WBP_PalInfo_C.TryDIsplayStackedCharacter
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Displayed                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalInfo_C::TryDIsplayStackedCharacter(bool* Displayed)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalInfo_C", "TryDIsplayStackedCharacter");

	Params::WBP_PalInfo_C_TryDIsplayStackedCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Displayed != nullptr)
		*Displayed = Parms.Displayed;
}

}

