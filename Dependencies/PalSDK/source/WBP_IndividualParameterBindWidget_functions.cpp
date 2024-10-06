#include "PalServer/Basic.hpp"

#include "PalServer/WBP_IndividualParameterBindWidget_classes.hpp"
#include "PalServer/WBP_IndividualParameterBindWidget_parameters.hpp"


namespace PalServer
{

// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Bind Event
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* TargetParam                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::Bind_Event(class UPalIndividualCharacterParameter* TargetParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Bind Event");

	Params::WBP_IndividualParameterBindWidget_C_Bind_Event Parms{};

	Parms.TargetParam = TargetParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromHandle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::BindFromHandle(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "BindFromHandle");

	Params::WBP_IndividualParameterBindWidget_C_BindFromHandle Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.BindFromSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::BindFromSlot(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "BindFromSlot");

	Params::WBP_IndividualParameterBindWidget_C_BindFromSlot Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.ExecuteUbergraph_WBP_IndividualParameterBindWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::ExecuteUbergraph_WBP_IndividualParameterBindWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "ExecuteUbergraph_WBP_IndividualParameterBindWidget");

	Params::WBP_IndividualParameterBindWidget_C_ExecuteUbergraph_WBP_IndividualParameterBindWidget Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.GetBindedHandle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::GetBindedHandle(class UPalIndividualCharacterHandle** TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "GetBindedHandle");

	Params::WBP_IndividualParameterBindWidget_C_GetBindedHandle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetHandle != nullptr)
		*TargetHandle = Parms.TargetHandle;
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Hunger Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Last                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Hunger_Internal(float Current, float Last)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Hunger Internal");

	Params::WBP_IndividualParameterBindWidget_C_On_Update_Hunger_Internal Parms{};

	Parms.Current = Current;
	Parms.Last = Last;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Level Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Level_Internal(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Level Internal");

	Params::WBP_IndividualParameterBindWidget_C_On_Update_Level_Internal Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.On Update Trainer Level Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::On_Update_Trainer_Level_Internal(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "On Update Trainer Level Internal");

	Params::WBP_IndividualParameterBindWidget_C_On_Update_Trainer_Level_Internal Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnCheckCondition_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnCheckCondition_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnCheckCondition_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateActiveSkill__DelegateSignature
// (Public, Delegate, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<EPalWazaID>                      ActiveSkills                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::OnUpdateActiveSkill__DelegateSignature(TArray<EPalWazaID>& ActiveSkills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateActiveSkill__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateActiveSkill__DelegateSignature Parms{};

	Parms.ActiveSkills = std::move(ActiveSkills);

	UObject::ProcessEvent(Func, &Parms);

	ActiveSkills = std::move(Parms.ActiveSkills);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateBuff__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateBuff__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateBuff__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateBuff_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateBuff_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateBuff_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateCondition__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateCondition__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateCondition__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   OldExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowExpRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateExp__DelegateSignature(int64 AddExp, int64 OldExp, double NowExpRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateExp__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateExp__DelegateSignature Parms{};

	Parms.AddExp = AddExp;
	Parms.OldExp = OldExp;
	Parms.NowExpRate = NowExpRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateExp_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int64                                   AddExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                                   NowExp                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateExp_Internal(int64 AddExp, int64 NowExp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateExp_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateExp_Internal Parms{};

	Parms.AddExp = AddExp;
	Parms.NowExp = NowExp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateFavorite__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateFavorite__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateFavorite__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateFavorite_Internal
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateFavorite_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateFavorite_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHP__DelegateSignature(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHP__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateHP__DelegateSignature Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHP_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHP_Internal(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHP_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateHP_Internal Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateHunger__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowHunger                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxHunger                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateHunger__DelegateSignature(double NowHunger, double NowMaxHunger)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateHunger__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateHunger__DelegateSignature Parms{};

	Parms.NowHunger = NowHunger;
	Parms.NowMaxHunger = NowMaxHunger;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateLevel__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateLevel__DelegateSignature(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateLevel__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateLevel__DelegateSignature Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredSkill__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* Individual_Parameter                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalWazaID                              WazaID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateMasteredSkill__DelegateSignature(class UPalIndividualCharacterParameter* Individual_Parameter, EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateMasteredSkill__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateMasteredSkill__DelegateSignature Parms{};

	Parms.Individual_Parameter = Individual_Parameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateMasteredWaza_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterParameter* IndividualParameter                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalWazaID                              WazaID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateMasteredWaza_Internal(class UPalIndividualCharacterParameter* IndividualParameter, EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateMasteredWaza_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateMasteredWaza_Internal Parms{};

	Parms.IndividualParameter = IndividualParameter;
	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateNickName__DelegateSignature(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateNickName__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateNickName__DelegateSignature Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateNickName_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateNickName_Internal(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateNickName_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateNickName_Internal Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  NowSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  NowMaxSanity                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSanity__DelegateSignature(double NowSanity, double NowMaxSanity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSanity__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateSanity__DelegateSignature Parms{};

	Parms.NowSanity = NowSanity;
	Parms.NowMaxSanity = NowMaxSanity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSanity_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NowSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OldSanity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSanity_Internal(float NowSanity, float OldSanity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSanity_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateSanity_Internal Parms{};

	Parms.NowSanity = NowSanity;
	Parms.OldSanity = OldSanity;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSoulRank__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSoulRank__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSoulRank__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSoulRank_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSoulRank_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSoulRank_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxSP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSP__DelegateSignature(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSP__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateSP__DelegateSignature Parms{};

	Parms.NowSP = std::move(NowSP);
	Parms.NowMaxSP = std::move(NowMaxSP);
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateSP_Internal
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxSP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateSP_Internal(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateSP_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateSP_Internal Parms{};

	Parms.NowSP = std::move(NowSP);
	Parms.NowMaxSP = std::move(NowMaxSP);
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateStatusPoint__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateStatusPoint__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateStatusPoint__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateStatusPoint_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateStatusPoint_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateStatusPoint_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateTalent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateTalent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateTalent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateTalent_Internal
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::OnUpdateTalent_Internal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateTalent_Internal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWaza_Internal
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalWazaID                              WazaID                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::OnUpdateWaza_Internal(EPalWazaID WazaID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateWaza_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateWaza_Internal Parms{};

	Parms.WazaID = WazaID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWorkSuitabilityOption__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalWorkSuitabilityPreferenceInfoInfo                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IndividualParameterBindWidget_C::OnUpdateWorkSuitabilityOption__DelegateSignature(const struct FPalWorkSuitabilityPreferenceInfo& Info)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateWorkSuitabilityOption__DelegateSignature");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption__DelegateSignature Parms{};

	Parms.Info = std::move(Info);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.OnUpdateWorkSuitabilityOption_Internal
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalWorkSuitabilityPreferenceInfoNewWorkSuitabilityOption                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::OnUpdateWorkSuitabilityOption_Internal(const struct FPalWorkSuitabilityPreferenceInfo& NewWorkSuitabilityOption)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "OnUpdateWorkSuitabilityOption_Internal");

	Params::WBP_IndividualParameterBindWidget_C_OnUpdateWorkSuitabilityOption_Internal Parms{};

	Parms.NewWorkSuitabilityOption = std::move(NewWorkSuitabilityOption);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Set Work Suitability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<EPalWorkSuitability, int32>        WorkSuitabilities                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_IndividualParameterBindWidget_C::Set_Work_Suitability(const TMap<EPalWorkSuitability, int32>& WorkSuitabilities)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Set Work Suitability");

	Params::WBP_IndividualParameterBindWidget_C_Set_Work_Suitability Parms{};

	Parms.WorkSuitabilities = std::move(WorkSuitabilities);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetElementType(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetElementType");

	Params::WBP_IndividualParameterBindWidget_C_SetElementType Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetFoodAmount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   FoodAmount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetFoodAmount(int32 FoodAmount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetFoodAmount");

	Params::WBP_IndividualParameterBindWidget_C_SetFoodAmount Parms{};

	Parms.FoodAmount = FoodAmount;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetGender
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalGenderType                          GenderType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetGender(EPalGenderType GenderType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetGender");

	Params::WBP_IndividualParameterBindWidget_C_SetGender Parms{};

	Parms.GenderType = GenderType;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetPassiveSkill
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                     PassiveSkills                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_IndividualParameterBindWidget_C::SetPassiveSkill(TArray<class FName>& PassiveSkills)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetPassiveSkill");

	Params::WBP_IndividualParameterBindWidget_C_SetPassiveSkill Parms{};

	Parms.PassiveSkills = std::move(PassiveSkills);

	UObject::ProcessEvent(Func, &Parms);

	PassiveSkills = std::move(Parms.PassiveSkills);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetRank");

	Params::WBP_IndividualParameterBindWidget_C_SetRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsBoss                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRare                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetRarity(bool IsBoss, bool IsRare)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetRarity");

	Params::WBP_IndividualParameterBindWidget_C_SetRarity Parms{};

	Parms.IsBoss = IsBoss;
	Parms.IsRare = IsRare;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SetSoulRank
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Rank                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SetSoulRank(int32 Rank)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SetSoulRank");

	Params::WBP_IndividualParameterBindWidget_C_SetSoulRank Parms{};

	Parms.Rank = Rank;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.SyncBind
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalInstanceID                   InstanceId                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_IndividualParameterBindWidget_C::SyncBind(const struct FPalInstanceID& InstanceId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "SyncBind");

	Params::WBP_IndividualParameterBindWidget_C_SyncBind Parms{};

	Parms.InstanceId = std::move(InstanceId);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.Unbind
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::Unbind()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "Unbind");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_IndividualParameterBindWidget.WBP_IndividualParameterBindWidget_C.UnbindEvent
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_IndividualParameterBindWidget_C::UnbindEvent()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_IndividualParameterBindWidget_C", "UnbindEvent");

	UObject::ProcessEvent(Func, nullptr);
}

}

