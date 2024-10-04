#include "PalServer/Basic.hpp"

#include "PalServer/WBP_EnemyGauge_classes.hpp"
#include "PalServer/WBP_EnemyGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_BgChange_Enemy
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_BgChange_Enemy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_BgChange_Enemy");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_BgChange_Party
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_BgChange_Party()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_BgChange_Party");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_Damage
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_Damage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_Damage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_LowHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisplay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::AnmEvent_LowHealth(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_LowHealth");

	Params::WBP_EnemyGauge_C_AnmEvent_LowHealth Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StartBattleLoop
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_StartBattleLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StartBattleLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_Starvation
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_Starvation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_Starvation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopBattleLoop
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_StopBattleLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopBattleLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopStarvation
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_StopStarvation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopStarvation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_StopWorkLoop
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_StopWorkLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_StopWorkLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.AnmEvent_WorkLoop
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::AnmEvent_WorkLoop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "AnmEvent_WorkLoop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeEnemyMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::ChangeEnemyMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeEnemyMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeFriendMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::ChangeFriendMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeFriendMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeRarePalMark
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::ChangeRarePalMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeRarePalMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ChangeStrongPalMark
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::ChangeStrongPalMark()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ChangeStrongPalMark");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.ExecuteUbergraph_WBP_EnemyGauge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::ExecuteUbergraph_WBP_EnemyGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "ExecuteUbergraph_WBP_EnemyGauge");

	Params::WBP_EnemyGauge_C_ExecuteUbergraph_WBP_EnemyGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Finished_3A40E20A4EEEDB096D18D9BCA7FB77D2");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8
// (BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Finished_5FBBBD124EDCCC07BA9CB28F5BB90BA8");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_EnemyGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.RetainCommonDetail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::RetainCommonDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "RetainCommonDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Battle Mode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBattleMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Battle_Mode(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Battle Mode");

	Params::WBP_EnemyGauge_C_Set_Battle_Mode Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Enable Talent Detail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnable                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterParameter* Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Enable_Talent_Detail(bool IsEnable, class UPalIndividualCharacterParameter* Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Enable Talent Detail");

	Params::WBP_EnemyGauge_C_Set_Enable_Talent_Detail Parms{};

	Parms.IsEnable = IsEnable;
	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Level                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    GetLevelPenalty                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Level(int32 Level, bool GetLevelPenalty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Level");

	Params::WBP_EnemyGauge_C_Set_Level Parms{};

	Parms.Level = Level;
	Parms.GetLevelPenalty = GetLevelPenalty;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Set Work Event Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    NotBattle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::Set_Work_Event_Info(class UPalIndividualCharacterHandle* Handle, bool NotBattle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Set Work Event Info");

	Params::WBP_EnemyGauge_C_Set_Work_Event_Info Parms{};

	Parms.Handle = Handle;
	Parms.NotBattle = NotBattle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetElement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetElement(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetElement");

	Params::WBP_EnemyGauge_C_SetElement Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenderType                          GenderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetGender(EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetGender");

	Params::WBP_EnemyGauge_C_SetGender Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetGuildName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewGuildName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetGuildName(const class FString& NewGuildName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetGuildName");

	Params::WBP_EnemyGauge_C_SetGuildName Parms{};

	Parms.NewGuildName = std::move(NewGuildName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetHPPercent(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHPPercent");

	Params::WBP_EnemyGauge_C_SetHPPercent Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHPPercent_Force
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Percent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetHPPercent_Force(double Percent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHPPercent_Force");

	Params::WBP_EnemyGauge_C_SetHPPercent_Force Parms{};

	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetHungryCondition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalUIConditionType>             Conditions                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EnemyGauge_C::SetHungryCondition(TArray<EPalUIConditionType>& Conditions)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetHungryCondition");

	Params::WBP_EnemyGauge_C_SetHungryCondition Parms{};

	Parms.Conditions = std::move(Conditions);

	UObject::ProcessEvent(Func, &Parms);

	Conditions = std::move(Parms.Conditions);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetLowHealthNoticeDisplayFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsDisplay                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetLowHealthNoticeDisplayFlag(bool IsDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetLowHealthNoticeDisplayFlag");

	Params::WBP_EnemyGauge_C_SetLowHealthNoticeDisplayFlag Parms{};

	Parms.IsDisplay = IsDisplay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetRank");

	Params::WBP_EnemyGauge_C_SetRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetSanityValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanityValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  MaxSanityValue                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetSanityValue(double NowSanityValue, double MaxSanityValue)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetSanityValue");

	Params::WBP_EnemyGauge_C_SetSanityValue Parms{};

	Parms.NowSanityValue = NowSanityValue;
	Parms.MaxSanityValue = MaxSanityValue;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetTargetName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                             Name_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_EnemyGauge_C::SetTargetName(const class FText& Name_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetTargetName");

	Params::WBP_EnemyGauge_C_SetTargetName Parms{};

	Parms.Name_0 = std::move(Name_0);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityBattleIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibiliy                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilityBattleIcon(ESlateVisibility Visibiliy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilityBattleIcon");

	Params::WBP_EnemyGauge_C_SetVisibilityBattleIcon Parms{};

	Parms.Visibiliy = Visibiliy;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilitySanityGauge
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibility_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilitySanityGauge(ESlateVisibility Visibility_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilitySanityGauge");

	Params::WBP_EnemyGauge_C_SetVisibilitySanityGauge Parms{};

	Parms.Visibility_0 = Visibility_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetVisibilityStrongRareMark
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ESlateVisibility                        Visibility_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::SetVisibilityStrongRareMark(ESlateVisibility Visibility_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetVisibilityStrongRareMark");

	Params::WBP_EnemyGauge_C_SetVisibilityStrongRareMark Parms{};

	Parms.Visibility_0 = Visibility_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.SetWorkSuitability
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalWorkSuitability>             Suitability                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_EnemyGauge_C::SetWorkSuitability(TArray<EPalWorkSuitability>& Suitability)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "SetWorkSuitability");

	Params::WBP_EnemyGauge_C_SetWorkSuitability Parms{};

	Parms.Suitability = std::move(Suitability);

	UObject::ProcessEvent(Func, &Parms);

	Suitability = std::move(Parms.Suitability);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.Trigger Damage Animation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_EnemyGauge_C::Trigger_Damage_Animation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "Trigger Damage Animation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.TryDisplayLowHealthNotice
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowPercent                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::TryDisplayLowHealthNotice(double NowPercent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "TryDisplayLowHealthNotice");

	Params::WBP_EnemyGauge_C_TryDisplayLowHealthNotice Parms{};

	Parms.NowPercent = NowPercent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_EnemyGauge.WBP_EnemyGauge_C.UpdateForTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EnemyGauge_C::UpdateForTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_EnemyGauge_C", "UpdateForTick");

	Params::WBP_EnemyGauge_C_UpdateForTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

