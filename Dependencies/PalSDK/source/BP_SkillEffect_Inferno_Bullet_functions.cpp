#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_Inferno_Bullet_classes.hpp"
#include "PalSDK/BP_SkillEffect_Inferno_Bullet_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_Bullet_C::ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet");

	Params::BP_SkillEffect_Inferno_Bullet_C_ExecuteUbergraph_BP_SkillEffect_Inferno_Bullet Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.Explosion
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_Bullet_C::Explosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "Explosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_Bullet_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "FadeOutEffect");

	Params::BP_SkillEffect_Inferno_Bullet_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.InitializeEffect
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_Bullet_C::InitializeEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "InitializeEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.OnEndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_Bullet_C::OnEndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "OnEndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.OnExplosion
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_Bullet_C::OnExplosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "OnExplosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Inferno_Bullet_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_Inferno_Bullet.BP_SkillEffect_Inferno_Bullet_C.SetRandomValueIntoNiagaraVariable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                NiagaraComp                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Inferno_Bullet_C::SetRandomValueIntoNiagaraVariable(class UNiagaraComponent* NiagaraComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Inferno_Bullet_C", "SetRandomValueIntoNiagaraVariable");

	Params::BP_SkillEffect_Inferno_Bullet_C_SetRandomValueIntoNiagaraVariable Parms{};

	Parms.NiagaraComp = NiagaraComp;

	UObject::ProcessEvent(Func, &Parms);
}

}

