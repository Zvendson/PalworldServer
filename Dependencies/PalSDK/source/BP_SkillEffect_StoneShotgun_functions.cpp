#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_StoneShotgun_classes.hpp"
#include "PalSDK/BP_SkillEffect_StoneShotgun_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.ExecuteUbergraph_BP_SkillEffect_StoneShotgun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_StoneShotgun_C::ExecuteUbergraph_BP_SkillEffect_StoneShotgun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_StoneShotgun_C", "ExecuteUbergraph_BP_SkillEffect_StoneShotgun");

	Params::BP_SkillEffect_StoneShotgun_C_ExecuteUbergraph_BP_SkillEffect_StoneShotgun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.GetBulletTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FTransform>               Result                                                 (Parm, OutParm)

void ABP_SkillEffect_StoneShotgun_C::GetBulletTransform(TArray<struct FTransform>* Result)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_StoneShotgun_C", "GetBulletTransform");

	Params::BP_SkillEffect_StoneShotgun_C_GetBulletTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = std::move(Parms.Result);
}


// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.OnAttackDelegate_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Defencer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FPalDamageInfo                   DamageInfo                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                                   HitCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              AttackerComponent                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_StoneShotgun_C::OnAttackDelegate______________0(class AActor* Defencer, const struct FPalDamageInfo& DamageInfo, int32 HitCount, class UPrimitiveComponent* AttackerComponent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_StoneShotgun_C", "OnAttackDelegate_イベント_0");

	Params::BP_SkillEffect_StoneShotgun_C_OnAttackDelegate______________0 Parms{};

	Parms.Defencer = Defencer;
	Parms.DamageInfo = std::move(DamageInfo);
	Parms.HitCount = HitCount;
	Parms.AttackerComponent = AttackerComponent;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_StoneShotgun.BP_SkillEffect_StoneShotgun_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_StoneShotgun_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_StoneShotgun_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}

}

