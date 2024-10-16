#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_RocketLauncher_classes.hpp"
#include "PalSDK/BP_RocketLauncher_parameters.hpp"


namespace PalSDK
{

// Function BP_RocketLauncher.BP_RocketLauncher_C.ChangeTransformForRocketReload
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RocketLauncher_C::ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ChangeTransformForRocketReload");

	Params::BP_RocketLauncher_C_ChangeTransformForRocketReload Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.ChangeTransformForRocketWhenReloadIsDone
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Lotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RocketLauncher_C::ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ChangeTransformForRocketWhenReloadIsDone");

	Params::BP_RocketLauncher_C_ChangeTransformForRocketWhenReloadIsDone Parms{};

	Parms.Location = std::move(Location);
	Parms.Lotation = std::move(Lotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.ExecuteUbergraph_BP_RocketLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::ExecuteUbergraph_BP_RocketLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ExecuteUbergraph_BP_RocketLauncher");

	Params::BP_RocketLauncher_C_ExecuteUbergraph_BP_RocketLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.Get Right Hand Location
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          RightHandLocation                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::Get_Right_Hand_Location(struct FVector* RightHandLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "Get Right Hand Location");

	Params::BP_RocketLauncher_C_Get_Right_Hand_Location Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (RightHandLocation != nullptr)
		*RightHandLocation = std::move(Parms.RightHandLocation);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetAimingBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetAimingBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetAimingBlurAngle");

	Params::BP_RocketLauncher_C_GetAimingBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBackFireLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          Location                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RocketLauncher_C::GetBackFireLocation(struct FVector* Location, struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetBackFireLocation");

	Params::BP_RocketLauncher_C_GetBackFireLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Location != nullptr)
		*Location = std::move(Parms.Location);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetBlurAngle");

	Params::BP_RocketLauncher_C_GetBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetBulletClass");

	Params::BP_RocketLauncher_C_GetBulletClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetInitializeInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetInitializeInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetInitializeInterval");

	Params::BP_RocketLauncher_C_GetInitializeInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetMuzzleEffect(class UNiagaraSystem** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetMuzzleEffect");

	Params::BP_RocketLauncher_C_GetMuzzleEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          MuzzleLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetMuzzleLocation(struct FVector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetMuzzleLocation");

	Params::BP_RocketLauncher_C_GetMuzzleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetMuzzleRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RocketLauncher_C::GetMuzzleRotator(struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetMuzzleRotator");

	Params::BP_RocketLauncher_C_GetMuzzleRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.isUseRightHandAttach
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsUse                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::IsUseRightHandAttach(bool* IsUse)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "isUseRightHandAttach");

	Params::BP_RocketLauncher_C_IsUseRightHandAttach Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsUse != nullptr)
		*IsUse = Parms.IsUse;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnEndShootAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::OnEndShootAnimation(class UAnimMontage* Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnEndShootAnimation");

	Params::BP_RocketLauncher_C_OnEndShootAnimation Parms{};

	Parms.Montage = Montage;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   bulletsNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::OnReload(int32 bulletsNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnReload");

	Params::BP_RocketLauncher_C_OnReload Parms{};

	Parms.bulletsNum = bulletsNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.PlayFireSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::PlayFireSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "PlayFireSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.PlayReloadSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::PlayReloadSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "PlayReloadSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RocketLauncher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ReceiveTick");

	Params::BP_RocketLauncher_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.StopReloadSound
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::StopReloadSound()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "StopReloadSound");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetShootInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetShootInterval");

	Params::BP_RocketLauncher_C_GetShootInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnAttachWeapon");

	Params::BP_RocketLauncher_C_OnAttachWeapon Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DetachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_RocketLauncher_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnDetachWeapon");

	Params::BP_RocketLauncher_C_OnDetachWeapon Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnPullTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnReloadStart
// (Event, Public, BlueprintEvent)

void ABP_RocketLauncher_C::OnReloadStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnReloadStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RocketLauncher_C::ShootBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "ShootBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.GetLeftHandTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_RocketLauncher_C::GetLeftHandTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "GetLeftHandTransform");

	Params::BP_RocketLauncher_C_GetLeftHandTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RocketLauncher.BP_RocketLauncher_C.IsUseLeftHandAttach
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool ABP_RocketLauncher_C::IsUseLeftHandAttach() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RocketLauncher_C", "IsUseLeftHandAttach");

	Params::BP_RocketLauncher_C_IsUseLeftHandAttach Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

