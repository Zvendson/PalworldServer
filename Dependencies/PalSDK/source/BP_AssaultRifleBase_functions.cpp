#include "PalServer/Basic.hpp"

#include "PalServer/BP_AssaultRifleBase_classes.hpp"
#include "PalServer/BP_AssaultRifleBase_parameters.hpp"


namespace PalServer
{

// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcAccuracy
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcAccuracy()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcAccuracy");

	Params::BP_AssaultRifleBase_C_CalcAccuracy Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcDPS
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcDPS()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcDPS");

	Params::BP_AssaultRifleBase_C_CalcDPS Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CalcRange
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float ABP_AssaultRifleBase_C::CalcRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CalcRange");

	Params::BP_AssaultRifleBase_C_CalcRange Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.CanShoot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    Can                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::CanShoot(bool* Can)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "CanShoot");

	Params::BP_AssaultRifleBase_C_CanShoot Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Can != nullptr)
		*Can = Parms.Can;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ExecuteUbergraph_BP_AssaultRifleBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::ExecuteUbergraph_BP_AssaultRifleBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "ExecuteUbergraph_BP_AssaultRifleBase");

	Params::BP_AssaultRifleBase_C_ExecuteUbergraph_BP_AssaultRifleBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Get Right Hand Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          RightHandLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::Get_Right_Hand_Location(struct FVector* RightHandLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "Get Right Hand Location");

	Params::BP_AssaultRifleBase_C_Get_Right_Hand_Location Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RightHandLocation != nullptr)
		*RightHandLocation = std::move(Parms.RightHandLocation);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAimingBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetAimingBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetAimingBlurAngle");

	Params::BP_AssaultRifleBase_C_GetAimingBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetAmmoClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           AmmoClass                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetAmmoClass(class UClass** AmmoClass)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetAmmoClass");

	Params::BP_AssaultRifleBase_C_GetAmmoClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AmmoClass != nullptr)
		*AmmoClass = Parms.AmmoClass;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetBlurAngle");

	Params::BP_AssaultRifleBase_C_GetBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetBulletClass");

	Params::BP_AssaultRifleBase_C_GetBulletClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetEquipSocketName
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName ABP_AssaultRifleBase_C::GetEquipSocketName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetEquipSocketName");

	Params::BP_AssaultRifleBase_C_GetEquipSocketName Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetInitializeInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetInitializeInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetInitializeInterval");

	Params::BP_AssaultRifleBase_C_GetInitializeInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleEffect(class UNiagaraSystem** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleEffect");

	Params::BP_AssaultRifleBase_C_GetMuzzleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleEffectParticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UParticleSystem*                  Particle_System                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleEffectParticle(class UParticleSystem** Particle_System)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleEffectParticle");

	Params::BP_AssaultRifleBase_C_GetMuzzleEffectParticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Particle_System != nullptr)
		*Particle_System = Parms.Particle_System;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          MuzzleLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetMuzzleLocation(struct FVector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleLocation");

	Params::BP_AssaultRifleBase_C_GetMuzzleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetMuzzleRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_AssaultRifleBase_C::GetMuzzleRotator(struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetMuzzleRotator");

	Params::BP_AssaultRifleBase_C_GetMuzzleRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetShootInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetShootInterval");

	Params::BP_AssaultRifleBase_C_GetShootInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetShotAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::GetShotAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetShotAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GetTargetPosition
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          TargetPosition_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GetTargetPosition(struct FVector* TargetPosition_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GetTargetPosition");

	Params::BP_AssaultRifleBase_C_GetTargetPosition Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (TargetPosition_0 != nullptr)
		*TargetPosition_0 = std::move(Parms.TargetPosition_0);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.GeyEjectionPortTransform
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::GeyEjectionPortTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "GeyEjectionPortTransform");

	Params::BP_AssaultRifleBase_C_GeyEjectionPortTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.Is UseEjectionPort
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    IsUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::Is_UseEjectionPort(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "Is UseEjectionPort");

	Params::BP_AssaultRifleBase_C_Is_UseEjectionPort Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnAttachWeapon");

	Params::BP_AssaultRifleBase_C_OnAttachWeapon Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DetachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnDetachWeapon");

	Params::BP_AssaultRifleBase_C_OnDetachWeapon Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnEndAim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnEndAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnEndAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnPullTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnReleaseTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnReloadStart
// (Event, Public, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnReloadStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.OnStartAim
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::OnStartAim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "OnStartAim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.PlayReloadAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::PlayReloadAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "PlayReloadAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.ShootBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_AssaultRifleBase_C::ShootBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "ShootBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.StopReloadWhenRoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_AssaultRifleBase_C::StopReloadWhenRoll(const class UPalActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "StopReloadWhenRoll");

	Params::BP_AssaultRifleBase_C_StopReloadWhenRoll Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AssaultRifleBase.BP_AssaultRifleBase_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_AssaultRifleBase_C::IsUseLeftHandAttach() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AssaultRifleBase_C", "IsUseLeftHandAttach");

	Params::BP_AssaultRifleBase_C_IsUseLeftHandAttach Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

