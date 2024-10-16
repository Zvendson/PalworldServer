#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_ThrowRockBullet_classes.hpp"
#include "PalSDK/BP_SkillEffect_ThrowRockBullet_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.AddShotImpulse
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::AddShotImpulse()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "AddShotImpulse");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_ThrowRockBullet_C::BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SkillEffect_ThrowRockBullet_C_BndEvt__BP_SkillEffect_ThrowRockBullet_Sphere_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "CancelShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.Drop
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::Drop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "Drop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockBullet_C::ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet");

	Params::BP_SkillEffect_ThrowRockBullet_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.NewEventDispatcher_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::NewEventDispatcher_0__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "NewEventDispatcher_0__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockBullet_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "ReceiveEndPlay");

	Params::BP_SkillEffect_ThrowRockBullet_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockBullet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "ReceiveTick");

	Params::BP_SkillEffect_ThrowRockBullet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.SetPredictedTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::SetPredictedTarget()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "SetPredictedTarget");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.Shoot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockBullet_C::Shoot(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "Shoot");

	Params::BP_SkillEffect_ThrowRockBullet_C_Shoot Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockBullet_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "ShootBullet");

	Params::BP_SkillEffect_ThrowRockBullet_C_ShootBullet Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockBullet.BP_SkillEffect_ThrowRockBullet_C.SpawnEffect
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ThrowRockBullet_C::SpawnEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockBullet_C", "SpawnEffect");

	UObject::ProcessEvent(Func, nullptr);
}

}

