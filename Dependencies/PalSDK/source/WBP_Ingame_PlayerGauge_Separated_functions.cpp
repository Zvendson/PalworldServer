#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_Ingame_PlayerGauge_Separated_classes.hpp"
#include "PalSDK/WBP_Ingame_PlayerGauge_Separated_parameters.hpp"


namespace PalSDK
{

// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_ShowHideLeft(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_ShowHideLeft");

	Params::WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideLeft Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_ShowHideRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    Hide                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_ShowHideRight(bool Hide)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_ShowHideRight");

	Params::WBP_Ingame_PlayerGauge_Separated_C_AnmEvent_ShowHideRight Parms{};

	Parms.Hide = Hide;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_TriggerDamage
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_TriggerDamage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_TriggerDamage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.AnmEvent_UseBullet
// (BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::AnmEvent_UseBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "AnmEvent_UseBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.BindWeaponEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::BindWeaponEvent(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "BindWeaponEvent");

	Params::WBP_Ingame_PlayerGauge_Separated_C_BindWeaponEvent Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CalcMaxBulletNum
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   MaxBulletNum                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CalcMaxBulletNum(int32* MaxBulletNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CalcMaxBulletNum");

	Params::WBP_Ingame_PlayerGauge_Separated_C_CalcMaxBulletNum Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MaxBulletNum != nullptr)
		*MaxBulletNum = Parms.MaxBulletNum;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Infinity Weapon Detail
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Change_Infinity_Weapon_Detail(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Change Infinity Weapon Detail");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Change_Infinity_Weapon_Detail Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Change Normal Weapon Detail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGrenade                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Change_Normal_Weapon_Detail(bool IsGrenade)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Change Normal Weapon Detail");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Change_Normal_Weapon_Detail Parms{};

	Parms.IsGrenade = IsGrenade;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangeNoRideMode
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::ChangeNoRideMode()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangeNoRideMode");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangePalThrowDetail
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::ChangePalThrowDetail()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangePalThrowDetail");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ChangeRideMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Actor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::ChangeRideMode(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ChangeRideMode");

	Params::WBP_Ingame_PlayerGauge_Separated_C_ChangeRideMode Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CoolDownTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CREATEDELEGATE_PROXYFUNCTION_0(float RemainingTime, float CoolDownTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_0 Parms{};

	Parms.RemainingTime = RemainingTime;
	Parms.CoolDownTime = CoolDownTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.CREATEDELEGATE_PROXYFUNCTION_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   RemainingTime                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   CoolDownTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::CREATEDELEGATE_PROXYFUNCTION_1(float RemainingTime, float CoolDownTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::WBP_Ingame_PlayerGauge_Separated_C_CREATEDELEGATE_PROXYFUNCTION_1 Parms{};

	Parms.RemainingTime = RemainingTime;
	Parms.CoolDownTime = CoolDownTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated");

	Params::WBP_Ingame_PlayerGauge_Separated_C_ExecuteUbergraph_WBP_Ingame_PlayerGauge_Separated Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideAllWeaponInfo
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::HideAllWeaponInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideAllWeaponInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideBallName
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::HideBallName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideBallName");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.HideBulletInfo
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::HideBulletInfo()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "HideBulletInfo");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Is Require Bullet
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*                   WeaponActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRequire                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Is_Require_Bullet(class APalWeaponBase* WeaponActor, bool* IsRequire)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Is Require Bullet");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Is_Require_Bullet Parms{};

	Parms.WeaponActor = WeaponActor;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRequire != nullptr)
		*IsRequire = Parms.IsRequire;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsDummyWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsDummy                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsDummyWeapon(class APalWeaponBase* WeaponBase, bool* IsDummy)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsDummyWeapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_IsDummyWeapon Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDummy != nullptr)
		*IsDummy = Parms.IsDummy;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsInfinityWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             WeaponName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsInfinity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsInfinityWeapon(class FName WeaponName, bool* IsInfinity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsInfinityWeapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_IsInfinityWeapon Parms{};

	Parms.WeaponName = WeaponName;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInfinity != nullptr)
		*IsInfinity = Parms.IsInfinity;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsPalThrowWeapon
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsPalThrowWeapon_0                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsPalThrowWeapon(class APalWeaponBase* WeaponBase, bool* IsPalThrowWeapon_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsPalThrowWeapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_IsPalThrowWeapon Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);

	if (IsPalThrowWeapon_0 != nullptr)
		*IsPalThrowWeapon_0 = Parms.IsPalThrowWeapon_0;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsRideCharacterSPFull
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)

void UWBP_Ingame_PlayerGauge_Separated_C::IsRideCharacterSPFull()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsRideCharacterSPFull");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.IsSpecialWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSpecial                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::IsSpecialWeapon(class APalWeaponBase* WeaponBase, bool* IsSpecial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "IsSpecialWeapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_IsSpecialWeapon Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSpecial != nullptr)
		*IsSpecial = Parms.IsSpecial;
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndHPGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::OnEndHPGaugeDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnEndHPGaugeDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnEndShieldGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::OnEndShieldGaugeDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnEndShieldGaugeDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolStateUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    StartCool                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnGrapplingGunCoolStateUpdate(bool StartCool)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnGrapplingGunCoolStateUpdate");

	Params::WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolStateUpdate Parms{};

	Parms.StartCool = StartCool;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnGrapplingGunCoolTimerUpdate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Timer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CoolTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnGrapplingGunCoolTimerUpdate(double Timer, double CoolTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnGrapplingGunCoolTimerUpdate");

	Params::WBP_Ingame_PlayerGauge_Separated_C_OnGrapplingGunCoolTimerUpdate Parms{};

	Parms.Timer = Timer;
	Parms.CoolTime = CoolTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnReloadWeapon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   bulletsNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnReloadWeapon(int32 bulletsNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnReloadWeapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_OnReloadWeapon Parms{};

	Parms.bulletsNum = bulletsNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartHPGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::OnStartHPGaugeDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnStartHPGaugeDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnStartShieldGaugeDelay
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::OnStartShieldGaugeDelay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnStartShieldGaugeDelay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateBallLoadoutSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnUpdateBallLoadoutSlot(class UPalItemSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnUpdateBallLoadoutSlot");

	Params::WBP_Ingame_PlayerGauge_Separated_C_OnUpdateBallLoadoutSlot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.OnUpdateGrenadeLoadoutSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     Slot_0                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::OnUpdateGrenadeLoadoutSlot(class UPalItemSlot* Slot_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "OnUpdateGrenadeLoadoutSlot");

	Params::WBP_Ingame_PlayerGauge_Separated_C_OnUpdateGrenadeLoadoutSlot Parms{};

	Parms.Slot_0 = Slot_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.RegisterBallLoadoutEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalItemSlot*                     ItemSlot                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::RegisterBallLoadoutEvent(class UPalItemSlot* ItemSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "RegisterBallLoadoutEvent");

	Params::WBP_Ingame_PlayerGauge_Separated_C_RegisterBallLoadoutEvent Parms{};

	Parms.ItemSlot = ItemSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Set Player Hunger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  HungerRate                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Set_Player_Hunger(double HungerRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Set Player Hunger");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Set_Player_Hunger Parms{};

	Parms.HungerRate = HungerRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             BallItemID                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   DisplayNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetBallDetail(class FName BallItemID, int32 DisplayNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetBallDetail");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetBallDetail Parms{};

	Parms.BallItemID = BallItemID;
	Parms.DisplayNum = DisplayNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetBallNum
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   Num                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetBallNum(int32 Num)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetBallNum");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetBallNum Parms{};

	Parms.Num = Num;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetEnableFirstSummonPalGuide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnableFlag                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetEnableFirstSummonPalGuide(bool IsEnableFlag)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetEnableFirstSummonPalGuide");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetEnableFirstSummonPalGuide Parms{};

	Parms.IsEnableFlag = IsEnableFlag;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Bullet Info
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Setup_Bullet_Info(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Setup Bullet Info");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Setup_Bullet_Info Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Setup Delay Gauge
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::Setup_Delay_Gauge()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Setup Delay Gauge");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetupBulletGauge
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MagazineSize                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetupBulletGauge(int32 MagazineSize)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetupBulletGauge");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetupBulletGauge Parms{};

	Parms.MagazineSize = MagazineSize;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetUsableHandFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsLeftHandUsable                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsRightHandUsable                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetUsableHandFlag(bool IsLeftHandUsable, bool IsRightHandUsable)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetUsableHandFlag");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetUsableHandFlag Parms{};

	Parms.IsLeftHandUsable = IsLeftHandUsable;
	Parms.IsRightHandUsable = IsRightHandUsable;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetVisibilityShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsVisible_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetVisibilityShield(bool IsVisible_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetVisibilityShield");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetVisibilityShield Parms{};

	Parms.IsVisible_0 = IsVisible_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.SetWeaponNameText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::SetWeaponNameText(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "SetWeaponNameText");

	Params::WBP_Ingame_PlayerGauge_Separated_C_SetWeaponNameText Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Tick");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.TryUpdateMaxBullet
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::TryUpdateMaxBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "TryUpdateMaxBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Unbind Last Equiped Weapon Event
// (Private, BlueprintCallable, BlueprintEvent)

void UWBP_Ingame_PlayerGauge_Separated_C::Unbind_Last_Equiped_Weapon_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Unbind Last Equiped Weapon Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update HP
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    MaxHP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_HP(const struct FFixedPoint64& NowHP, const struct FFixedPoint64& MaxHP)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update HP");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Update_HP Parms{};

	Parms.NowHP = std::move(NowHP);
	Parms.MaxHP = std::move(MaxHP);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Now Bullet Num
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   NowBulletNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Now_Bullet_Num(int32 NowBulletNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Now Bullet Num");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Update_Now_Bullet_Num Parms{};

	Parms.NowBulletNum = NowBulletNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Weapon(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Weapon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.Update Weapon Icon
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::Update_Weapon_Icon(class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "Update Weapon Icon");

	Params::WBP_Ingame_PlayerGauge_Separated_C_Update_Weapon_Icon Parms{};

	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateMaxBulletNum
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   MaxBulletNum                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateMaxBulletNum(int32 MaxBulletNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateMaxBulletNum");

	Params::WBP_Ingame_PlayerGauge_Separated_C_UpdateMaxBulletNum Parms{};

	Parms.MaxBulletNum = MaxBulletNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdatePalInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterSlot*      TargetSlot                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdatePalInfo(class UPalIndividualCharacterSlot* TargetSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdatePalInfo");

	Params::WBP_Ingame_PlayerGauge_Separated_C_UpdatePalInfo Parms{};

	Parms.TargetSlot = TargetSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateShield
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    MaxShield                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    NowShield                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateShield(const struct FFixedPoint64& MaxShield, const struct FFixedPoint64& NowShield)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateShield");

	Params::WBP_Ingame_PlayerGauge_Separated_C_UpdateShield Parms{};

	Parms.MaxShield = std::move(MaxShield);
	Parms.NowShield = std::move(NowShield);

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_Ingame_PlayerGauge_Separated.WBP_Ingame_PlayerGauge_Separated_C.UpdateSP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFixedPoint64                    NowSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFixedPoint64                    MaxSP                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// bool                                    IsOverHeated                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Ingame_PlayerGauge_Separated_C::UpdateSP(const struct FFixedPoint64& NowSP, const struct FFixedPoint64& MaxSP, bool IsOverHeated)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_Ingame_PlayerGauge_Separated_C", "UpdateSP");

	Params::WBP_Ingame_PlayerGauge_Separated_C_UpdateSP Parms{};

	Parms.NowSP = std::move(NowSP);
	Parms.MaxSP = std::move(MaxSP);
	Parms.IsOverHeated = IsOverHeated;

	UObject::ProcessEvent(Func, &Parms);
}

}

