#include "PalSDK/Basic.hpp"

#include "PalSDK/WBP_CaptureReticle_classes.hpp"
#include "PalSDK/WBP_CaptureReticle_parameters.hpp"


namespace PalSDK
{

// Function WBP_CaptureReticle.WBP_CaptureReticle_C.CalcCaptureSuccessRate
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<double>                          RateArray                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// double                                  SuccessRate                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::CalcCaptureSuccessRate(TArray<double>& RateArray, double* SuccessRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "CalcCaptureSuccessRate");

	Params::WBP_CaptureReticle_C_CalcCaptureSuccessRate Parms{};

	Parms.RateArray = std::move(RateArray);

	UObject::ProcessEvent(Func, &Parms);

	RateArray = std::move(Parms.RateArray);

	if (SuccessRate != nullptr)
		*SuccessRate = Parms.SuccessRate;
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ChangeSeqence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EPalCaptureReticleSeqence               NewSeqence                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::ChangeSeqence(EPalCaptureReticleSeqence NewSeqence)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "ChangeSeqence");

	Params::WBP_CaptureReticle_C_ChangeSeqence Parms{};

	Parms.NewSeqence = NewSeqence;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.DisplayCaptureFailedLog
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::DisplayCaptureFailedLog(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "DisplayCaptureFailedLog");

	Params::WBP_CaptureReticle_C_DisplayCaptureFailedLog Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ExecuteUbergraph_WBP_CaptureReticle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::ExecuteUbergraph_WBP_CaptureReticle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "ExecuteUbergraph_WBP_CaptureReticle");

	Params::WBP_CaptureReticle_C_ExecuteUbergraph_WBP_CaptureReticle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.FindTargetCharacter
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalMonsterCharacter*             TargetMonster                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::FindTargetCharacter(class APalMonsterCharacter** TargetMonster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "FindTargetCharacter");

	Params::WBP_CaptureReticle_C_FindTargetCharacter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetMonster != nullptr)
		*TargetMonster = Parms.TargetMonster;
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Get Display Rate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   CaptureItemActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalMonsterCharacter*             TargetMonster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                                  Rate                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsSneakBonus                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::Get_Display_Rate(class APalWeaponBase* CaptureItemActor, class APalMonsterCharacter* TargetMonster, double* Rate, bool* IsSneakBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "Get Display Rate");

	Params::WBP_CaptureReticle_C_Get_Display_Rate Parms{};

	Parms.CaptureItemActor = CaptureItemActor;
	Parms.TargetMonster = TargetMonster;

	UObject::ProcessEvent(Func, &Parms);

	if (Rate != nullptr)
		*Rate = Parms.Rate;

	if (IsSneakBonus != nullptr)
		*IsSneakBonus = Parms.IsSneakBonus;
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.IsBonusEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          baseLocation                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APalMonsterCharacter*             TargeActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    Enabled                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::IsBonusEnabled(const struct FVector& baseLocation, class APalMonsterCharacter* TargeActor, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "IsBonusEnabled");

	Params::WBP_CaptureReticle_C_IsBonusEnabled Parms{};

	Parms.baseLocation = std::move(baseLocation);
	Parms.TargeActor = TargeActor;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.On Change Weapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   Weapon                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::On_Change_Weapon(class APalWeaponBase* Weapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "On Change Weapon");

	Params::WBP_CaptureReticle_C_On_Change_Weapon Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.On Shake Ball
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PalCaptureBodyBase_C*         ShakedBody                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::On_Shake_Ball(class ABP_PalCaptureBodyBase_C* ShakedBody)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "On Shake Ball");

	Params::WBP_CaptureReticle_C_On_Shake_Ball Parms{};

	Parms.ShakedBody = ShakedBody;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnBouncedBall
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// E_PalCaptureSphereBouncedReason         ReasonType                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnBouncedBall(E_PalCaptureSphereBouncedReason ReasonType, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnBouncedBall");

	Params::WBP_CaptureReticle_C_OnBouncedBall Parms{};

	Parms.ReasonType = ReasonType;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnFailedCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// EPalSphereCaptureFailedReason           FailedReason                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnFailedCapture(class UPalIndividualCharacterHandle* TargetHandle, EPalSphereCaptureFailedReason FailedReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnFailedCapture");

	Params::WBP_CaptureReticle_C_OnFailedCapture Parms{};

	Parms.TargetHandle = TargetHandle;
	Parms.FailedReason = FailedReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnFailedPercentWidgetClear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_CaptureFailedPercent_C*      SelfWidget                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnFailedPercentWidgetClear(class UWBP_CaptureFailedPercent_C* SelfWidget)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnFailedPercentWidgetClear");

	Params::WBP_CaptureReticle_C_OnFailedPercentWidgetClear Parms{};

	Parms.SelfWidget = SelfWidget;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWBP_CaptureReticle_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnInitialized");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnPassingJudge
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   PhaseCount                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnPassingJudge(int32 PhaseCount, class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnPassingJudge");

	Params::WBP_CaptureReticle_C_OnPassingJudge Parms{};

	Parms.PhaseCount = PhaseCount;
	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnSetup_AfterCreatedPlayer
// (Event, Public, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureReticle_C::OnSetup_AfterCreatedPlayer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnSetup_AfterCreatedPlayer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnStartedCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           CreatedBodyActor                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                                    IsBonus                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnStartedCapture(class AActor* CreatedBodyActor, class UPalIndividualCharacterHandle* TargetHandle, bool IsBonus)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnStartedCapture");

	Params::WBP_CaptureReticle_C_OnStartedCapture Parms{};

	Parms.CreatedBodyActor = CreatedBodyActor;
	Parms.TargetHandle = TargetHandle;
	Parms.IsBonus = IsBonus;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnSuccessedCapture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalIndividualCharacterHandle*    TargetHandle                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnSuccessedCapture(class UPalIndividualCharacterHandle* TargetHandle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnSuccessedCapture");

	Params::WBP_CaptureReticle_C_OnSuccessedCapture Parms{};

	Parms.TargetHandle = TargetHandle;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.OnThrowCaptureWeapon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::OnThrowCaptureWeapon(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "OnThrowCaptureWeapon");

	Params::WBP_CaptureReticle_C_OnThrowCaptureWeapon Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.RegisterWeaponEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalWeaponBase*                   NewWeapon                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::RegisterWeaponEvent(class APalWeaponBase* NewWeapon)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "RegisterWeaponEvent");

	Params::WBP_CaptureReticle_C_RegisterWeaponEvent Parms{};

	Parms.NewWeapon = NewWeapon;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Set Display Capture Rate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalMonsterCharacter*             TargetMonster                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class APalWeaponBase*                   WeaponBase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::Set_Display_Capture_Rate(class APalMonsterCharacter* TargetMonster, class APalWeaponBase* WeaponBase)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "Set Display Capture Rate");

	Params::WBP_CaptureReticle_C_Set_Display_Capture_Rate Parms{};

	Parms.TargetMonster = TargetMonster;
	Parms.WeaponBase = WeaponBase;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.SetupAfterPlayerSpawned
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureReticle_C::SetupAfterPlayerSpawned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "SetupAfterPlayerSpawned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.ShouldReticleDIsplay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ShouldDisplay                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::ShouldReticleDIsplay(bool* ShouldDisplay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "ShouldReticleDIsplay");

	Params::WBP_CaptureReticle_C_ShouldReticleDIsplay Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldDisplay != nullptr)
		*ShouldDisplay = Parms.ShouldDisplay;
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                                   InDeltaTime                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "Tick");

	Params::WBP_CaptureReticle_C_Tick Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.Unregister Weapon Event
// (Public, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureReticle_C::Unregister_Weapon_Event()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "Unregister Weapon Event");

	UObject::ProcessEvent(Func, nullptr);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.UpdateFailedWidgets
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_CaptureReticle_C::UpdateFailedWidgets(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "UpdateFailedWidgets");

	Params::WBP_CaptureReticle_C_UpdateFailedWidgets Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function WBP_CaptureReticle.WBP_CaptureReticle_C.UpdateSecondStepWidgetPosition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UWBP_CaptureReticle_C::UpdateSecondStepWidgetPosition()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("WBP_CaptureReticle_C", "UpdateSecondStepWidgetPosition");

	UObject::ProcessEvent(Func, nullptr);
}

}

