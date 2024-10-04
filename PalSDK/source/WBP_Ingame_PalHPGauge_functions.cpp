#include "PalServer/Basic.hpp"

#include "PalServer/WBP_Ingame_PalHPGauge_classes.hpp"
#include "PalServer/WBP_Ingame_PalHPGauge_parameters.hpp"


namespace PalServer
{

// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_EnableSummonPalGuide
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    EnableFlag                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_EnableSummonPalGuide(bool EnableFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_EnableSummonPalGuide");

	Params::WBP_Ingame_PalHPGauge_C_AnmEvent_EnableSummonPalGuide Parms{};

	Parms.EnableFlag = EnableFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_NextOtomo
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_NextOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_NextOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_OtomoActive
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_OtomoActive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_OtomoActive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_OtomoDeactivate
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_OtomoDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_OtomoDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_PrevOtomo
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_PrevOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_PrevOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_ThrowActivate
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_ThrowActivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_ThrowActivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.AnmEvent_ThrowOtomoDeactive
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::AnmEvent_ThrowOtomoDeactive()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "AnmEvent_ThrowOtomoDeactive");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.BindPartnerSkillCTTime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::BindPartnerSkillCTTime(class APalCharacter* Character)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "BindPartnerSkillCTTime");

	Params::WBP_Ingame_PalHPGauge_C_BindPartnerSkillCTTime Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   AddLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NowLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::CustomEvent(int32 AddLevel, int32 NowLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "CustomEvent");

	Params::WBP_Ingame_PalHPGauge_C_CustomEvent Parms{};

	Parms.AddLevel = AddLevel;
	Parms.NowLevel = NowLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.ExecuteUbergraph_WBP_Ingame_PalHPGauge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::ExecuteUbergraph_WBP_Ingame_PalHPGauge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "ExecuteUbergraph_WBP_Ingame_PalHPGauge");

	Params::WBP_Ingame_PalHPGauge_C_ExecuteUbergraph_WBP_Ingame_PalHPGauge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_1811421C440B0864689BD0B33F2F9D51
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::Finished_1811421C440B0864689BD0B33F2F9D51()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_1811421C440B0864689BD0B33F2F9D51");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_1F59E19C478A6C6286266A9C072DA24B
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::Finished_1F59E19C478A6C6286266A9C072DA24B()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_1F59E19C478A6C6286266A9C072DA24B");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Finished_9B82422440F7C97D278AB2B15E642EE3
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::Finished_9B82422440F7C97D278AB2B15E642EE3()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Finished_9B82422440F7C97D278AB2B15E642EE3");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetNextOtomoSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::GetNextOtomoSlot(class UPalIndividualCharacterSlot** Slot_0, bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "GetNextOtomoSlot");

	Params::WBP_Ingame_PalHPGauge_C_GetNextOtomoSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_0 != nullptr)
		*Slot_0 = Parms.Slot_0;

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.GetPrevOtomoSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UPalIndividualCharacterSlot*      Slot_0                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEmpty                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::GetPrevOtomoSlot(class UPalIndividualCharacterSlot** Slot_0, bool* IsEmpty)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "GetPrevOtomoSlot");

	Params::WBP_Ingame_PalHPGauge_C_GetPrevOtomoSlot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Slot_0 != nullptr)
		*Slot_0 = Parms.Slot_0;

	if (IsEmpty != nullptr)
		*IsEmpty = Parms.IsEmpty;
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.On Update Otomo Index
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::On_Update_Otomo_Index()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "On Update Otomo Index");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.On Update Otomo Slot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    LastHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::On_Update_Otomo_Slot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "On Update Otomo Slot");

	Params::WBP_Ingame_PalHPGauge_C_On_Update_Otomo_Slot Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnActivatedOtomo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnActivatedOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnActivatedOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnChangedWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::OnChangedWeapon(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnChangedWeapon");

	Params::WBP_Ingame_PalHPGauge_C_OnChangedWeapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnCoolEnd
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnCoolEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnCoolEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnCoolStart
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnCoolStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnCoolStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnCTTimeUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint                      Now                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint                      Max                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Ingame_PalHPGauge_C::OnCTTimeUpdate(const struct FFixedPoint& Now, const struct FFixedPoint& Max)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnCTTimeUpdate");

	Params::WBP_Ingame_PalHPGauge_C_OnCTTimeUpdate Parms{};

	Parms.Now = std::move(Now);
	Parms.Max = std::move(Max);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnDeactivatedOtomo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnDeactivatedOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnDeactivatedOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnDecrementedOtomo_FromController
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnDecrementedOtomo_FromController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnDecrementedOtomo_FromController");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnEndAim
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnEndAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnEndAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnIncrementedOtomo_FromController
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnIncrementedOtomo_FromController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnIncrementedOtomo_FromController");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnSetup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.OnStartAim
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::OnStartAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "OnStartAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Setup
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::Setup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Setup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Tick");

	Params::WBP_Ingame_PalHPGauge_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UnbindPartnerSkill
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::UnbindPartnerSkill()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UnbindPartnerSkill");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Update Level Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NewLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::Update_Level_Binded(int32 NewLevel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Update Level Binded");

	Params::WBP_Ingame_PalHPGauge_C_Update_Level_Binded Parms{};

	Parms.NewLevel = NewLevel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.Update Otomo List
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PalHPGauge_C::Update_Otomo_List()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "Update Otomo List");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateHP_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Ingame_PalHPGauge_C::UpdateHP_Binded(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UpdateHP_Binded");

	Params::WBP_Ingame_PalHPGauge_C_UpdateHP_Binded Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.UpdateNickName_Binded
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           NewNickName                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::UpdateNickName_Binded(const class FString& NewNickName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "UpdateNickName_Binded");

	Params::WBP_Ingame_PalHPGauge_C_UpdateNickName_Binded Parms{};

	Parms.NewNickName = std::move(NewNickName);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PalHPGauge.WBP_Ingame_PalHPGauge_C.SetElementType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalElementType                         Type1                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EPalElementType                         Type2                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PalHPGauge_C::SetElementType(EPalElementType Type1, EPalElementType Type2)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PalHPGauge_C", "SetElementType");

	Params::WBP_Ingame_PalHPGauge_C_SetElementType Parms{};

	Parms.Type1 = Type1;
	Parms.Type2 = Type2;

	UObject::ProcessEvent(Func, &Parms);
}

}

