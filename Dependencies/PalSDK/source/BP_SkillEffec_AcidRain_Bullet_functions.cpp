#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffec_AcidRain_Bullet_classes.hpp"
#include "PalSDK/BP_SkillEffec_AcidRain_Bullet_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffec_AcidRain_Bullet_C::BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffec_AcidRain_Bullet_C", "BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");

	Params::BP_SkillEffec_AcidRain_Bullet_C_BndEvt__BP_SkillEffec_AcidRain_Bullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffec_AcidRain_Bullet_C::ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffec_AcidRain_Bullet_C", "ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet");

	Params::BP_SkillEffec_AcidRain_Bullet_C_ExecuteUbergraph_BP_SkillEffec_AcidRain_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffec_AcidRain_Bullet_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffec_AcidRain_Bullet_C", "FadeOutEffect");

	Params::BP_SkillEffec_AcidRain_Bullet_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffec_AcidRain_Bullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffec_AcidRain_Bullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffec_AcidRain_Bullet.BP_SkillEffec_AcidRain_Bullet_C.SetRandomValueIntoNiagaraVariable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffec_AcidRain_Bullet_C::SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffec_AcidRain_Bullet_C", "SetRandomValueIntoNiagaraVariable");

	Params::BP_SkillEffec_AcidRain_Bullet_C_SetRandomValueIntoNiagaraVariable Parms{};

	Parms.NiagaraComp = NiagaraComp;

	UObject::ProcessEvent(Func, &Parms);
}

}

