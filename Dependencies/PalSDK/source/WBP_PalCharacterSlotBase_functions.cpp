#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PalCharacterSlotBase_classes.hpp"
#include "PalSDK/WBP_PalCharacterSlotBase_parameters.hpp"


namespace PalSDK
{

// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindActorEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::BindActorEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "BindActorEvent");

	Params::WBP_PalCharacterSlotBase_C_BindActorEvent Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::BindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "BindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.BindParameterEvent
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::BindParameterEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "BindParameterEvent");

	Params::WBP_PalCharacterSlotBase_C_BindParameterEvent Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.CheckTargetCondition
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::CheckTargetCondition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "CheckTargetCondition");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.ExecuteUbergraph_WBP_PalCharacterSlotBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::ExecuteUbergraph_WBP_PalCharacterSlotBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "ExecuteUbergraph_WBP_PalCharacterSlotBase");

	Params::WBP_PalCharacterSlotBase_C_ExecuteUbergraph_WBP_PalCharacterSlotBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::GetIndividualHandle(class UPalIndividualCharacterHandle** Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "GetIndividualHandle");

	Params::WBP_PalCharacterSlotBase_C_GetIndividualHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Handle != nullptr)
		*Handle = Parms.Handle;
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualParameter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterParameter* Parameter                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::GetIndividualParameter(class UPalIndividualCharacterParameter** Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "GetIndividualParameter");

	Params::WBP_PalCharacterSlotBase_C_GetIndividualParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Parameter != nullptr)
		*Parameter = Parms.Parameter;
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.GetIndividualSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::GetIndividualSlot(class UPalIndividualCharacterSlot** Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "GetIndividualSlot");

	Params::WBP_PalCharacterSlotBase_C_GetIndividualSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_0 != nullptr)
		*Slot_0 = Parms.Slot_0;
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.On Update HP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PalCharacterSlotBase_C::On_Update_HP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "On Update HP");

	Params::WBP_PalCharacterSlotBase_C_On_Update_HP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnBeginTargetCharacterEat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnBeginTargetCharacterEat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnBeginTargetCharacterEat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnBeginTargetCharacterSleep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnBeginTargetCharacterSleep__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnBeginTargetCharacterSleep__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnEndTargetCharacterEat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnEndTargetCharacterEat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnEndTargetCharacterEat__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnEndTargetCharacterSleep__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnEndTargetCharacterSleep__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnEndTargetCharacterSleep__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnFavoriteUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnFavoriteUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnFavoriteUpdated__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnNotifyBattleModeChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBattleMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnNotifyBattleModeChanged__DelegateSignature(bool IsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnNotifyBattleModeChanged__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnNotifyBattleModeChanged__DelegateSignature Parms{};

	Parms.IsBattleMode = IsBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnNotifyWorkDetail__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsWorking                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnNotifyWorkDetail__DelegateSignature(bool IsWorking)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnNotifyWorkDetail__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnNotifyWorkDetail__DelegateSignature Parms{};

	Parms.IsWorking = IsWorking;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSetEmpty__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnSetEmpty__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnSetEmpty__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSetRarity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBoss                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRare                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnSetRarity__DelegateSignature(bool IsBoss, bool IsRare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnSetRarity__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnSetRarity__DelegateSignature Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSetValidSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnSetValidSlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnSetValidSlot__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnSyncIndividualParameter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   InstanceId                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnSyncIndividualParameter(const struct FPalInstanceID& InstanceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnSyncIndividualParameter");

	Params::WBP_PalCharacterSlotBase_C_OnSyncIndividualParameter Parms{};

	Parms.InstanceId = std::move(InstanceId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetBattleModeChanged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bIsBattleMode                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnTargetBattleModeChanged(bool bIsBattleMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnTargetBattleModeChanged");

	Params::WBP_PalCharacterSlotBase_C_OnTargetBattleModeChanged Parms{};

	Parms.bIsBattleMode = bIsBattleMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetCharacterActionNotify
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnTargetCharacterActionNotify(const class UPalActionBase* Action, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnTargetCharacterActionNotify");

	Params::WBP_PalCharacterSlotBase_C_OnTargetCharacterActionNotify Parms{};

	Parms.Action = Action;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnTargetCharacterUpdateHP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnTargetCharacterUpdateHP__DelegateSignature(int64 NowHP, int64 NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnTargetCharacterUpdateHP__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnTargetCharacterUpdateHP__DelegateSignature Parms{};

	Parms.NowHP = NowHP;
	Parms.NowMaxHP = NowMaxHP;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateFavorite_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::OnUpdateFavorite_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateFavorite_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateReviveTimer__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowTimer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateReviveTimer__DelegateSignature(double NowTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateReviveTimer__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer__DelegateSignature Parms{};

	Parms.NowTimer = NowTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateReviveTimer_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NowReviveTimer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateReviveTimer_Internal(float NowReviveTimer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateReviveTimer_Internal");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateReviveTimer_Internal Parms{};

	Parms.NowReviveTimer = NowReviveTimer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateSlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot_0                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateSlot__DelegateSignature(class UPalIndividualCharacterSlot* TargetSlot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateSlot__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateSlot__DelegateSignature Parms{};

	Parms.TargetSlot_0 = TargetSlot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateSlot_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    LastHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateSlot_Internal(class UPalIndividualCharacterSlot* Slot_0, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateSlot_Internal");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateSlot_Internal Parms{};

	Parms.Slot_0 = Slot_0;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateWorkId__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            WorkId                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFixedAssign                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateWorkId__DelegateSignature(const struct FGuid& WorkId, bool IsFixedAssign)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateWorkId__DelegateSignature");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateWorkId__DelegateSignature Parms{};

	Parms.WorkId = std::move(WorkId);
	Parms.IsFixedAssign = IsFixedAssign;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.OnUpdateWorkId_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalCharacterParameterComponent*  Parameter                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::OnUpdateWorkId_Internal(class UPalCharacterParameterComponent* Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "OnUpdateWorkId_Internal");

	Params::WBP_PalCharacterSlotBase_C_OnUpdateWorkId_Internal Parms{};

	Parms.Parameter = Parameter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.RegisterCharacterIconWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_PalCharacterIconBase_C*      IconWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::RegisterCharacterIconWidget(class UWBP_PalCharacterIconBase_C** IconWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "RegisterCharacterIconWidget");

	Params::WBP_PalCharacterSlotBase_C_RegisterCharacterIconWidget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IconWidget != nullptr)
		*IconWidget = Parms.IconWidget;
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      NewTargetSlot                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::Setup(class UPalIndividualCharacterSlot* NewTargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "Setup");

	Params::WBP_PalCharacterSlotBase_C_Setup Parms{};

	Parms.NewTargetSlot = NewTargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindActorEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::UnbindActorEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "UnbindActorEvent");

	Params::WBP_PalCharacterSlotBase_C_UnbindActorEvent Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PalCharacterSlotBase_C::UnbindEvents()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "UnbindEvents");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PalCharacterSlotBase.WBP_PalCharacterSlotBase_C.UnbindParameterEvent
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    Handle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PalCharacterSlotBase_C::UnbindParameterEvent(class UPalIndividualCharacterHandle* Handle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PalCharacterSlotBase_C", "UnbindParameterEvent");

	Params::WBP_PalCharacterSlotBase_C_UnbindParameterEvent Parms{};

	Parms.Handle = Handle;

	UObject::ProcessEvent(Func, &Parms);
}

}

