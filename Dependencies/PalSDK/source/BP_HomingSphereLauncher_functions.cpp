#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_HomingSphereLauncher_classes.hpp"
#include "PalSDK/BP_HomingSphereLauncher_parameters.hpp"


namespace PalSDK
{

// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ChangeTransformForRocketReload
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Rotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HomingSphereLauncher_C::ChangeTransformForRocketReload(const struct FVector& Location, const struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ChangeTransformForRocketReload");

	Params::BP_HomingSphereLauncher_C_ChangeTransformForRocketReload Parms{};

	Parms.Location = std::move(Location);
	Parms.Rotation = std::move(Rotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ChangeTransformForRocketWhenReloadIsDone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                         Lotation                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HomingSphereLauncher_C::ChangeTransformForRocketWhenReloadIsDone(const struct FVector& Location, const struct FRotator& Lotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ChangeTransformForRocketWhenReloadIsDone");

	Params::BP_HomingSphereLauncher_C_ChangeTransformForRocketWhenReloadIsDone Parms{};

	Parms.Location = std::move(Location);
	Parms.Lotation = std::move(Lotation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ClearAttackTarget
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HomingSphereLauncher_C::ClearAttackTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ClearAttackTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.CustomEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                                   bulletsNum                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::CustomEvent(int32 bulletsNum)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "CustomEvent");

	Params::BP_HomingSphereLauncher_C_CustomEvent Parms{};

	Parms.bulletsNum = bulletsNum;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ExecuteUbergraph_BP_HomingSphereLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::ExecuteUbergraph_BP_HomingSphereLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ExecuteUbergraph_BP_HomingSphereLauncher");

	Params::BP_HomingSphereLauncher_C_ExecuteUbergraph_BP_HomingSphereLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetAimingBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetAimingBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetAimingBlurAngle");

	Params::BP_HomingSphereLauncher_C_GetAimingBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetAttackTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalCharacter*                    Target                                                 (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetAttackTarget(class APalCharacter** Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetAttackTarget");

	Params::BP_HomingSphereLauncher_C_GetAttackTarget Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Target != nullptr)
		*Target = Parms.Target;
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetBlurAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Angle                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetBlurAngle(double* Angle)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetBlurAngle");

	Params::BP_HomingSphereLauncher_C_GetBlurAngle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Angle != nullptr)
		*Angle = Parms.Angle;
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetBulletClass
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UClass*                           NewParam                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetBulletClass(class UClass** NewParam)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetBulletClass");

	Params::BP_HomingSphereLauncher_C_GetBulletClass Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetMuzzleLocation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          MuzzleLocation                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetMuzzleLocation(struct FVector* MuzzleLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetMuzzleLocation");

	Params::BP_HomingSphereLauncher_C_GetMuzzleLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (MuzzleLocation != nullptr)
		*MuzzleLocation = std::move(Parms.MuzzleLocation);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetMuzzleRotator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotator                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_HomingSphereLauncher_C::GetMuzzleRotator(struct FRotator* Rotator)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetMuzzleRotator");

	Params::BP_HomingSphereLauncher_C_GetMuzzleRotator Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotator != nullptr)
		*Rotator = std::move(Parms.Rotator);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetMuzzleTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       Transform                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetMuzzleTransform(struct FTransform* Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetMuzzleTransform");

	Params::BP_HomingSphereLauncher_C_GetMuzzleTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetShootTransformList
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  BaseAnglePitch                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BaseAngleYaw                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  BlurAngle                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>               ShootTransformList                                     (Parm, OutParm)

void ABP_HomingSphereLauncher_C::GetShootTransformList(double BaseAnglePitch, double BaseAngleYaw, double BlurAngle, TArray<struct FTransform>* ShootTransformList)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetShootTransformList");

	Params::BP_HomingSphereLauncher_C_GetShootTransformList Parms{};

	Parms.BaseAnglePitch = BaseAnglePitch;
	Parms.BaseAngleYaw = BaseAngleYaw;
	Parms.BlurAngle = BlurAngle;

	UObject::ProcessEvent(Func, &Parms);

	if (ShootTransformList != nullptr)
		*ShootTransformList = std::move(Parms.ShootTransformList);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.OnLaunchPalSphere__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::OnLaunchPalSphere__DelegateSignature(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "OnLaunchPalSphere__DelegateSignature");

	Params::BP_HomingSphereLauncher_C_OnLaunchPalSphere__DelegateSignature Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.OnReleaseTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_HomingSphereLauncher_C::OnReleaseTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "OnReleaseTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_HomingSphereLauncher_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.GetShootInterval
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  Time                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_HomingSphereLauncher_C::GetShootInterval(double* Time)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "GetShootInterval");

	Params::BP_HomingSphereLauncher_C_GetShootInterval Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Time != nullptr)
		*Time = Parms.Time;
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.OnShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_HomingSphereLauncher_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_HomingSphereLauncher.BP_HomingSphereLauncher_C.ShootBullet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_HomingSphereLauncher_C::ShootBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_HomingSphereLauncher_C", "ShootBullet");

	UObject::ProcessEvent(Func, nullptr);
}

}

