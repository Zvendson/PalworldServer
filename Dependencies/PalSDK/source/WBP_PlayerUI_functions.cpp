#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_PlayerUI_classes.hpp"
#include "PalSDK/WBP_PlayerUI_parameters.hpp"


namespace PalSDK
{

// Function WBP_PlayerUI.WBP_PlayerUI_C.Anm_Hide_Loadout
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Anm_Hide_Loadout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Anm_Hide_Loadout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Anm_Hide_PlayerGauge
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Anm_Hide_PlayerGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Anm_Hide_PlayerGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Anm_Show_Loadout
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Anm_Show_Loadout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Anm_Show_Loadout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Anm_Show_PlayerGauge
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Anm_Show_PlayerGauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Anm_Show_PlayerGauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Anm_Toggle_Highlight_Construction
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Anm_Toggle_Highlight_Construction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Anm_Toggle_Highlight_Construction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.CalcCompassRotation
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::CalcCompassRotation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "CalcCompassRotation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckArmorDurability
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::CheckArmorDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "CheckArmorDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckAutoUIHide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::CheckAutoUIHide(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "CheckAutoUIHide");

	Params::WBP_PlayerUI_C_CheckAutoUIHide Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.CheckWeaponDurability
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::CheckWeaponDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "CheckWeaponDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerUI_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.ExecuteUbergraph_WBP_PlayerUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::ExecuteUbergraph_WBP_PlayerUI(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "ExecuteUbergraph_WBP_PlayerUI");

	Params::WBP_PlayerUI_C_ExecuteUbergraph_WBP_PlayerUI Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Finished_EE570CBA4C1A6B90D4B5E88E8D12910C
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Finished_EE570CBA4C1A6B90D4B5E88E8D12910C()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Finished_EE570CBA4C1A6B90D4B5E88E8D12910C");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.InitializeWorldMapTexture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::InitializeWorldMapTexture()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "InitializeWorldMapTexture");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Is Player Gauge Should Show
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::Is_Player_Gauge_Should_Show(bool* IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Is Player Gauge Should Show");

	Params::WBP_PlayerUI_C_Is_Player_Gauge_Should_Show Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.IsPalGaugeShouldShow
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::IsPalGaugeShouldShow(bool* IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "IsPalGaugeShouldShow");

	Params::WBP_PlayerUI_C_IsPalGaugeShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.IsPlayerWeaponInfoShouldShow
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::IsPlayerWeaponInfoShouldShow(bool* IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "IsPlayerWeaponInfoShouldShow");

	Params::WBP_PlayerUI_C_IsPlayerWeaponInfoShouldShow Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.On Change Loadout
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerInventoryType                 InventoryType                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::On_Change_Loadout(EPalPlayerInventoryType InventoryType, int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "On Change Loadout");

	Params::WBP_PlayerUI_C_On_Change_Loadout Parms{};

	Parms.InventoryType = InventoryType;
	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Player SP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxSP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::On_Update_Player_SP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "On Update Player SP");

	Params::WBP_PlayerUI_C_On_Update_Player_SP Parms{};

	Parms.NowSP = std::move(NowSP);
	Parms.NowMaxSP = std::move(NowMaxSP);
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Ride Character SP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxSP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::On_Update_Ride_Character_SP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& NowMaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "On Update Ride Character SP");

	Params::WBP_PlayerUI_C_On_Update_Ride_Character_SP Parms{};

	Parms.NowSP = std::move(NowSP);
	Parms.NowMaxSP = std::move(NowMaxSP);
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.On Update Shield Max HP
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowShieldMaxHP                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::On_Update_Shield_Max_HP(const struct FFixedPoint64& NowShieldMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "On Update Shield Max HP");

	Params::WBP_PlayerUI_C_On_Update_Shield_Max_HP Parms{};

	Parms.NowShieldMaxHP = std::move(NowShieldMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnActivatedOtomo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnActivatedOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnActivatedOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnArenaSequenceStageChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Index_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnArenaSequenceStageChanged(int32 Index_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnArenaSequenceStageChanged");

	Params::WBP_PlayerUI_C_OnArenaSequenceStageChanged Parms{};

	Parms.Index_0 = Index_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnArenaSequnceStart
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalArenaSequencer*               ArenaSequencer                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnArenaSequnceStart(class UPalArenaSequencer* ArenaSequencer)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnArenaSequnceStart");

	Params::WBP_PlayerUI_C_OnArenaSequnceStart Parms{};

	Parms.ArenaSequencer = ArenaSequencer;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnCapturedPal
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalUIPalCaptureInfo             CaptureInfo                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlayerUI_C::OnCapturedPal(const struct FPalUIPalCaptureInfo& CaptureInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnCapturedPal");

	Params::WBP_PlayerUI_C_OnCapturedPal Parms{};

	Parms.CaptureInfo = std::move(CaptureInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedRegion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             RegionNameID                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnChangedRegion(const class FName& RegionNameID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnChangedRegion");

	Params::WBP_PlayerUI_C_OnChangedRegion Parms{};

	Parms.RegionNameID = RegionNameID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedTemperanture
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NextTemperature                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnChangedTemperanture(int32 NextTemperature)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnChangedTemperanture");

	Params::WBP_PlayerUI_C_OnChangedTemperanture Parms{};

	Parms.NextTemperature = NextTemperature;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedTemperatureBodyState
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalBodyTemperatureState                BodyState                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnChangedTemperatureBodyState(EPalBodyTemperatureState BodyState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnChangedTemperatureBodyState");

	Params::WBP_PlayerUI_C_OnChangedTemperatureBodyState Parms{};

	Parms.BodyState = BodyState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangedWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnChangedWeapon(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnChangedWeapon");

	Params::WBP_PlayerUI_C_OnChangedWeapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnChangeOtomo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnChangeOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnChangeOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnDamagedShield
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Damage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsShieldBroken                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnDamagedShield(int32 Damage, bool IsShieldBroken)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnDamagedShield");

	Params::WBP_PlayerUI_C_OnDamagedShield Parms{};

	Parms.Damage = Damage;
	Parms.IsShieldBroken = IsShieldBroken;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnDeactivatedOtomo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnDeactivatedOtomo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnDeactivatedOtomo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndAim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnEndAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnEndAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBuilderComponent*             BuilderComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnEndBuilding(class UPalBuilderComponent* BuilderComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnEndBuilding");

	Params::WBP_PlayerUI_C_OnEndBuilding Parms{};

	Parms.BuilderComponent = BuilderComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndCrime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CrimeInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnEndCrime(const struct FGuid& CrimeInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnEndCrime");

	Params::WBP_PlayerUI_C_OnEndCrime Parms{};

	Parms.CrimeInstance = std::move(CrimeInstance);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndLiftCampPal
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnEndLiftCampPal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnEndLiftCampPal");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnEndWanted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    CriminalHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnEndWanted(class UPalIndividualCharacterHandle* CriminalHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnEndWanted");

	Params::WBP_PlayerUI_C_OnEndWanted Parms{};

	Parms.CriminalHandle = CriminalHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnExitArena
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnExitArena()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnExitArena");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnGetoffOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnGetoffOtomo(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnGetoffOtomo");

	Params::WBP_PlayerUI_C_OnGetoffOtomo Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_PlayerUI_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnLiftCampPal
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnLiftCampPal(class APalCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnLiftCampPal");

	Params::WBP_PlayerUI_C_OnLiftCampPal Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnOtomoInflictDamage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::OnOtomoInflictDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnOtomoInflictDamage");

	Params::WBP_PlayerUI_C_OnOtomoInflictDamage Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnPlayerDamage
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPalDamageResult                 DamageResult                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::OnPlayerDamage(const struct FPalDamageResult& DamageResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnPlayerDamage");

	Params::WBP_PlayerUI_C_OnPlayerDamage Parms{};

	Parms.DamageResult = std::move(DamageResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnRadialMenuClosed
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnRadialMenuClosed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnRadialMenuClosed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnRadialMenuOpened
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnRadialMenuOpened()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnRadialMenuOpened");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnReportCrime
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    CriminalHandle                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                     CrimeIds                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_PlayerUI_C::OnReportCrime(class UPalIndividualCharacterHandle* CriminalHandle, const TArray<class FName>& CrimeIds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnReportCrime");

	Params::WBP_PlayerUI_C_OnReportCrime Parms{};

	Parms.CriminalHandle = CriminalHandle;
	Parms.CrimeIds = std::move(CrimeIds);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnResumeEffectiveLog
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnResumeEffectiveLog()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnResumeEffectiveLog");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnRideOtomo
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           RideActor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnRideOtomo(class AActor* RideActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnRideOtomo");

	Params::WBP_PlayerUI_C_OnRideOtomo Parms{};

	Parms.RideActor = RideActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnSetup
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnSetup()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnSetup");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnSetup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnStartAim
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnStartAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnStartAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnStartBuilding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalBuilderComponent*             BuilderComponent                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnStartBuilding(class UPalBuilderComponent* BuilderComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnStartBuilding");

	Params::WBP_PlayerUI_C_OnStartBuilding Parms{};

	Parms.BuilderComponent = BuilderComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnStartCrime
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                            CrimeInstance                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnStartCrime(const struct FGuid& CrimeInstance)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnStartCrime");

	Params::WBP_PlayerUI_C_OnStartCrime Parms{};

	Parms.CrimeInstance = std::move(CrimeInstance);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnTimer_CheckEquipmentDurability
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnTimer_CheckEquipmentDurability()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnTimer_CheckEquipmentDurability");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnTimer_CheckOtomoHunger
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnTimer_CheckOtomoHunger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnTimer_CheckOtomoHunger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnToggleGrapplingCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    CancelEnable                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnToggleGrapplingCancel(bool CancelEnable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnToggleGrapplingCancel");

	Params::WBP_PlayerUI_C_OnToggleGrapplingCancel Parms{};

	Parms.CancelEnable = CancelEnable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnToggleSleepPlayerBed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSleep                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnToggleSleepPlayerBed(bool IsSleep)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnToggleSleepPlayerBed");

	Params::WBP_PlayerUI_C_OnToggleSleepPlayerBed Parms{};

	Parms.IsSleep = IsSleep;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUnlockedMap
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             UnlockedRegionId                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   PlayerId                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUnlockedMap(const class FName& UnlockedRegionId, const int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUnlockedMap");

	Params::WBP_PlayerUI_C_OnUnlockedMap Parms{};

	Parms.UnlockedRegionId = UnlockedRegionId;
	Parms.PlayerId = PlayerId;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateInventoryMaxWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUpdateInventoryMaxWeight(float MaxWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateInventoryMaxWeight");

	Params::WBP_PlayerUI_C_OnUpdateInventoryMaxWeight Parms{};

	Parms.MaxWeight = MaxWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateInventoryWeight
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   NowWeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUpdateInventoryWeight(float NowWeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateInventoryWeight");

	Params::WBP_PlayerUI_C_OnUpdateInventoryWeight Parms{};

	Parms.NowWeight = NowWeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateLoadout
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalPlayerInventoryType                 NewParam2                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   NewParam                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUpdateLoadout(EPalPlayerInventoryType NewParam2, int32 NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateLoadout");

	Params::WBP_PlayerUI_C_OnUpdateLoadout Parms{};

	Parms.NewParam2 = NewParam2;
	Parms.NewParam = NewParam;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateOtomoInfo
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnUpdateOtomoInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateOtomoInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateOtomoSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    LastHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUpdateOtomoSlot(int32 SlotIndex, class UPalIndividualCharacterHandle* LastHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateOtomoSlot");

	Params::WBP_PlayerUI_C_OnUpdateOtomoSlot Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.LastHandle = LastHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::OnUpdatePlayerHp(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdatePlayerHp");

	Params::WBP_PlayerUI_C_OnUpdatePlayerHp Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHP_LowHealthEffect
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowMaxHP                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::OnUpdatePlayerHP_LowHealthEffect(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& NowMaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdatePlayerHP_LowHealthEffect");

	Params::WBP_PlayerUI_C_OnUpdatePlayerHP_LowHealthEffect Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.NowMaxHP = std::move(NowMaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdatePlayerHunger
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Current                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Last                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::OnUpdatePlayerHunger(float Current, float Last)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdatePlayerHunger");

	Params::WBP_PlayerUI_C_OnUpdatePlayerHunger Parms{};

	Parms.Current = Current;
	Parms.Last = Last;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnUpdateShieldHP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowShieldMaxHP                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowShieldHP                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_PlayerUI_C::OnUpdateShieldHP(const struct FFixedPoint64& NowShieldMaxHP, const struct FFixedPoint64& NowShieldHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnUpdateShieldHP");

	Params::WBP_PlayerUI_C_OnUpdateShieldHP Parms{};

	Parms.NowShieldMaxHP = std::move(NowShieldMaxHP);
	Parms.NowShieldHP = std::move(NowShieldHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.OnWeaponTrigger
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::OnWeaponTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "OnWeaponTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.PaintWorldMap
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::PaintWorldMap()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "PaintWorldMap");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.ResetHideUITimer
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::ResetHideUITimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "ResetHideUITimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.ResetStartCrime
// (BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::ResetStartCrime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "ResetStartCrime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.SetIsHideWeaponInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bHide                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::SetIsHideWeaponInfo(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "SetIsHideWeaponInfo");

	Params::WBP_PlayerUI_C_SetIsHideWeaponInfo Parms{};

	Parms.bHide = bHide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Setup After CreatePlayerIndividualParameter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Setup_After_CreatePlayerIndividualParameter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Setup After CreatePlayerIndividualParameter");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Should Check UIAuto Hide
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ShouldCheck                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::Should_Check_UIAuto_Hide(bool* ShouldCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Should Check UIAuto Hide");

	Params::WBP_PlayerUI_C_Should_Check_UIAuto_Hide Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldCheck != nullptr)
		*ShouldCheck = Parms.ShouldCheck;
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Show UI
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Show_UI()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Show UI");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Start Hide UITimer
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::Start_Hide_UITimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Start Hide UITimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerUI_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "Tick");

	Params::WBP_PlayerUI_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.UpdateAimVisibility
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::UpdateAimVisibility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "UpdateAimVisibility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_PlayerUI.WBP_PlayerUI_C.UpdateStaminaGaugePosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_PlayerUI_C::UpdateStaminaGaugePosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_PlayerUI_C", "UpdateStaminaGaugePosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

