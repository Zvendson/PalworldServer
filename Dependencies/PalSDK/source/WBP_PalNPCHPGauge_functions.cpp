#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalNPCHPGauge_classes.hpp"
#include "PalSDK/WBP_PalNPCHPGauge_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "BindFromHandle");

	Params::WBP_PalNPCHPGauge_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.DelayClose
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::DelayClose()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "DelayClose");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.ExecuteUbergraph_WBP_PalNPCHPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::ExecuteUbergraph_WBP_PalNPCHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "ExecuteUbergraph_WBP_PalNPCHPGauge");

	Params::WBP_PalNPCHPGauge_C_ExecuteUbergraph_WBP_PalNPCHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.InitializeDetail
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::InitializeDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "InitializeDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsDead
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsDead_0                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::IsDead(bool* IsDead_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "IsDead");

	Params::WBP_PalNPCHPGauge_C_IsDead Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsDead_0 != nullptr)
		*IsDead_0 = Parms.IsDead_0;
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsFriend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsFriend_0                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::IsFriend(bool* IsFriend_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "IsFriend");

	Params::WBP_PalNPCHPGauge_C_IsFriend Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsFriend_0 != nullptr)
		*IsFriend_0 = Parms.IsFriend_0;
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.IsOtomo
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsOtomo_0                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::IsOtomo(bool* IsOtomo_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "IsOtomo");

	Params::WBP_PalNPCHPGauge_C_IsOtomo Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsOtomo_0 != nullptr)
		*IsOtomo_0 = Parms.IsOtomo_0;
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.On Update Level Binded
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::On_Update_Level_Binded(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "On Update Level Binded");

	Params::WBP_PalNPCHPGauge_C_On_Update_Level_Binded Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.On Update Sanity Binded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxSanity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::On_Update_Sanity_Binded(double NowSanity, double NowMaxSanity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "On Update Sanity Binded");

	Params::WBP_PalNPCHPGauge_C_On_Update_Sanity_Binded Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnBattleModeChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsBattleMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::OnBattleModeChanged(bool bIsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnBattleModeChanged");

	Params::WBP_PalNPCHPGauge_C_OnBattleModeChanged Parms{};

	Parms.bIsBattleMode = bIsBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnDead
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDeadInfo                     DeadInfo                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalNPCHPGauge_C::OnDead(const struct FPalDeadInfo& DeadInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnDead");

	Params::WBP_PalNPCHPGauge_C_OnDead Parms{};

	Parms.DeadInfo = std::move(DeadInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnDelayClose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                          Widget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::OnDelayClose__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnDelayClose__DelegateSignature");

	Params::WBP_PalNPCHPGauge_C_OnDelayClose__DelegateSignature Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnTakeDamage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalNPCHPGauge_C::OnTakeDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnTakeDamage");

	Params::WBP_PalNPCHPGauge_C_OnTakeDamage Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnTimer_CheckActor
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::OnTimer_CheckActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnTimer_CheckActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateCondition_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::OnUpdateCondition_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnUpdateCondition_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateHP_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalNPCHPGauge_C::OnUpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnUpdateHP_Binded");

	Params::WBP_PalNPCHPGauge_C_OnUpdateHP_Binded Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateNickName_Binded
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::OnUpdateNickName_Binded(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnUpdateNickName_Binded");

	Params::WBP_PalNPCHPGauge_C_OnUpdateNickName_Binded Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.OnUpdateTalent_Binded
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::OnUpdateTalent_Binded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "OnUpdateTalent_Binded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetupByActor
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::SetupByActor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "SetupByActor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.TimerEvent_UpdateDetail
// (BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::TimerEvent_UpdateDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "TimerEvent_UpdateDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Update Gauge Type
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::Update_Gauge_Type()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "Update Gauge Type");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.UpdateForTick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::UpdateForTick(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "UpdateForTick");

	Params::WBP_PalNPCHPGauge_C_UpdateForTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.UpdateWidgetPosition
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::UpdateWidgetPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "UpdateWidgetPosition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Set Work Suitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EPalWorkSuitability, int32>        WorkSuitabilities                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_PalNPCHPGauge_C::Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "Set Work Suitability");

	Params::WBP_PalNPCHPGauge_C_Set_Work_Suitability Parms{};

	Parms.WorkSuitabilities = std::move(WorkSuitabilities);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::SetElementType(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "SetElementType");

	Params::WBP_PalNPCHPGauge_C_SetElementType Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenderType                          GenderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::SetGender(EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "SetGender");

	Params::WBP_PalNPCHPGauge_C_SetGender Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalNPCHPGauge_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "SetRank");

	Params::WBP_PalNPCHPGauge_C_SetRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalNPCHPGauge.WBP_PalNPCHPGauge_C.Unbind
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PalNPCHPGauge_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalNPCHPGauge_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}

}

