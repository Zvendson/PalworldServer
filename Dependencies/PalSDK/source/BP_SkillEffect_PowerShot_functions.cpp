#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_PowerShot_classes.hpp"
#include "PalSDK/BP_SkillEffect_PowerShot_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_C::BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature");

	Params::BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_AttackFilter_K2Node_ComponentBoundEvent_2_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_SkillEffect_PowerShot_C::BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_SkillEffect_PowerShot_C_BndEvt__BP_SkillEffect_PowerShot_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.CancelShoot
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_PowerShot_C::CancelShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "CancelShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ExecuteUbergraph_BP_SkillEffect_PowerShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_C::ExecuteUbergraph_BP_SkillEffect_PowerShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "ExecuteUbergraph_BP_SkillEffect_PowerShot");

	Params::BP_SkillEffect_PowerShot_C_ExecuteUbergraph_BP_SkillEffect_PowerShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "FadeOutEffect");

	Params::BP_SkillEffect_PowerShot_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_PowerShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "ReceiveTick");

	Params::BP_SkillEffect_PowerShot_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerShot.BP_SkillEffect_PowerShot_C.ShootBullet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerShot_C::ShootBullet(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerShot_C", "ShootBullet");

	Params::BP_SkillEffect_PowerShot_C_ShootBullet Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}

}

