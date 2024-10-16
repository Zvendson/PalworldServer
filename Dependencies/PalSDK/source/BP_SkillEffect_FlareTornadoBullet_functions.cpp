#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_FlareTornadoBullet_classes.hpp"
#include "PalSDK/BP_SkillEffect_FlareTornadoBullet_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.BndEvt__BP_SkillEffect_FlareTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::BndEvt__BP_SkillEffect_FlareTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "BndEvt__BP_SkillEffect_FlareTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature");

	Params::BP_SkillEffect_FlareTornadoBullet_C_BndEvt__BP_SkillEffect_FlareTornadoBullet_AttackFilter_K2Node_ComponentBoundEvent_0_OnAttackDelegate__DelegateSignature Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.ExecuteUbergraph_BP_SkillEffect_FlareTornadoBullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::ExecuteUbergraph_BP_SkillEffect_FlareTornadoBullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "ExecuteUbergraph_BP_SkillEffect_FlareTornadoBullet");

	Params::BP_SkillEffect_FlareTornadoBullet_C_ExecuteUbergraph_BP_SkillEffect_FlareTornadoBullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "FadeOutEffect");

	Params::BP_SkillEffect_FlareTornadoBullet_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.MoveToTargetLocation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::MoveToTargetLocation(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "MoveToTargetLocation");

	Params::BP_SkillEffect_FlareTornadoBullet_C_MoveToTargetLocation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_FlareTornadoBullet_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "ReceiveTick");

	Params::BP_SkillEffect_FlareTornadoBullet_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.SetRandomValueIntoNiagaraVariable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FlareTornadoBullet_C::SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "SetRandomValueIntoNiagaraVariable");

	Params::BP_SkillEffect_FlareTornadoBullet_C_SetRandomValueIntoNiagaraVariable Parms{};

	Parms.NiagaraComp = NiagaraComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FlareTornadoBullet.BP_SkillEffect_FlareTornadoBullet_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_FlareTornadoBullet_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FlareTornadoBullet_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

