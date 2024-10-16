#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_ThunderFunnel_Bullet_classes.hpp"
#include "PalSDK/BP_Skill_ThunderFunnel_Bullet_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Bullet_C::BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature");

	Params::BP_Skill_ThunderFunnel_Bullet_C_BndEvt__BP_SkillEffect_SpreadPulse_Bullet_AttackFilter_K2Node_ComponentBoundEvent_1_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Skill_ThunderFunnel_Bullet_C::BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::BP_Skill_ThunderFunnel_Bullet_C_BndEvt__BP_SkillEffect_SpreadPulse_Bullet_MovementSphereRoot_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Bullet_C::ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet");

	Params::BP_Skill_ThunderFunnel_Bullet_C_ExecuteUbergraph_BP_Skill_ThunderFunnel_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Bullet_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "FadeOutEffect");

	Params::BP_Skill_ThunderFunnel_Bullet_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.OnHitGround
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Bullet_C::OnHitGround()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "OnHitGround");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Bullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.SetDelayFadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  Delay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Bullet_C::SetDelayFadeOutEffect(double Delay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "SetDelayFadeOutEffect");

	Params::BP_Skill_ThunderFunnel_Bullet_C_SetDelayFadeOutEffect Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Bullet.BP_Skill_ThunderFunnel_Bullet_C.SetDelayFadeOutEffectInternal
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Bullet_C::SetDelayFadeOutEffectInternal()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Bullet_C", "SetDelayFadeOutEffectInternal");

	UObject::ProcessEvent(Func, nullptr);
}

}

