#include "PalServer/Basic.hpp"

#include "PalServer/BP_GrapplingGun_classes.hpp"
#include "PalServer/BP_GrapplingGun_parameters.hpp"


namespace PalServer
{

// Function BP_GrapplingGun.BP_GrapplingGun_C.CalcCoolTimeRate
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CoolTime                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::CalcCoolTimeRate(const struct FVector& HitLocation, double* CoolTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "CalcCoolTimeRate");

	Params::BP_GrapplingGun_C_CalcCoolTimeRate Parms{};

	Parms.HitLocation = std::move(HitLocation);

	UObject::ProcessEvent(Func, &Parms);

	if (CoolTime != nullptr)
		*CoolTime = Parms.CoolTime;
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.CalcShootStartParam
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          ShootDirection_0                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          StartLocation_0                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::CalcShootStartParam(struct FVector* ShootDirection_0, struct FVector* StartLocation_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "CalcShootStartParam");

	Params::BP_GrapplingGun_C_CalcShootStartParam Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (ShootDirection_0 != nullptr)
		*ShootDirection_0 = std::move(Parms.ShootDirection_0);

	if (StartLocation_0 != nullptr)
		*StartLocation_0 = std::move(Parms.StartLocation_0);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.EndCable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsAnimationCancel                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::EndCable(bool IsAnimationCancel)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "EndCable");

	Params::BP_GrapplingGun_C_EndCable Parms{};

	Parms.IsAnimationCancel = IsAnimationCancel;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ExecuteUbergraph_BP_GrapplingGun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::ExecuteUbergraph_BP_GrapplingGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ExecuteUbergraph_BP_GrapplingGun");

	Params::BP_GrapplingGun_C_ExecuteUbergraph_BP_GrapplingGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.GetCurrentCableLength
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// double                                  CableLength                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::GetCurrentCableLength(double* CableLength)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "GetCurrentCableLength");

	Params::BP_GrapplingGun_C_GetCurrentCableLength Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (CableLength != nullptr)
		*CableLength = Parms.CableLength;
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.IsGraplingAction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    bSuccess                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::IsGraplingAction(bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "IsGraplingAction");

	Params::BP_GrapplingGun_C_IsGraplingAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.On Grapling Action Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          HitLocation                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                                  CoolTimeRate                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::On_Grapling_Action_Start(const struct FVector& HitLocation, double CoolTimeRate)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "On Grapling Action Start");

	Params::BP_GrapplingGun_C_On_Grapling_Action_Start Parms{};

	Parms.HitLocation = std::move(HitLocation);
	Parms.CoolTimeRate = CoolTimeRate;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.OnActionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalActionBase*                   Action                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::OnActionEnd(const class UPalActionBase* Action)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "OnActionEnd");

	Params::BP_GrapplingGun_C_OnActionEnd Parms{};

	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.OnAttachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           AttachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::OnAttachWeapon(class AActor* AttachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "OnAttachWeapon");

	Params::BP_GrapplingGun_C_OnAttachWeapon Parms{};

	Parms.AttachActor = AttachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.OnDetachWeapon
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DetachActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::OnDetachWeapon(class AActor* DetachActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "OnDetachWeapon");

	Params::BP_GrapplingGun_C_OnDetachWeapon Parms{};

	Parms.DetachActor = DetachActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.OnGraplingActionEnd
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::OnGraplingActionEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "OnGraplingActionEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.OnPullTrigger
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::OnPullTrigger()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "OnPullTrigger");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.PullCable
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsEnd                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::PullCable(double DeltaTime, bool* IsEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "PullCable");

	Params::BP_GrapplingGun_C_PullCable Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEnd != nullptr)
		*IsEnd = Parms.IsEnd;
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_GrapplingGun_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ReceiveEndPlay");

	Params::BP_GrapplingGun_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ReceiveTick");

	Params::BP_GrapplingGun_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ShotCable
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::ShotCable()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ShotCable");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.ShowLine
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::ShowLine()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "ShowLine");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.Start Graplling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::Start_Graplling()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "Start Graplling");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateCable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::UpdateCable(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "UpdateCable");

	Params::BP_GrapplingGun_C_UpdateCable Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateRopeEndLocation
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::UpdateRopeEndLocation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "UpdateRopeEndLocation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.UpdateVisibleReticle
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_GrapplingGun_C::UpdateVisibleReticle()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "UpdateVisibleReticle");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_GrapplingGun.BP_GrapplingGun_C.IsShowReticle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                                    IsShow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GrapplingGun_C::IsShowReticle(bool* IsShow) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_GrapplingGun_C", "IsShowReticle");

	Params::BP_GrapplingGun_C_IsShowReticle Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (IsShow != nullptr)
		*IsShow = Parms.IsShow;
}

}

