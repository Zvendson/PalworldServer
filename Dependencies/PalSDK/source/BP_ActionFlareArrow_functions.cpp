#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionFlareArrow_classes.hpp"
#include "PalSDK/BP_ActionFlareArrow_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.BulletHasShooted
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFlareArrow_C::BulletHasShooted(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "BulletHasShooted");

	Params::BP_ActionFlareArrow_C_BulletHasShooted Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.ExecuteUbergraph_BP_ActionFlareArrow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFlareArrow_C::ExecuteUbergraph_BP_ActionFlareArrow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "ExecuteUbergraph_BP_ActionFlareArrow");

	Params::BP_ActionFlareArrow_C_ExecuteUbergraph_BP_ActionFlareArrow Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionFlareArrow_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFlareArrow_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "OnSpawnEffect");

	Params::BP_ActionFlareArrow_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.SetBulletSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFlareArrow_C::SetBulletSpeed(class APalSkillEffectBase** Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "SetBulletSpeed");

	Params::BP_ActionFlareArrow_C_SetBulletSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_0 != nullptr)
		*Effect_0 = Parms.Effect_0;
}


// Function BP_ActionFlareArrow.BP_ActionFlareArrow_C.SpawnBullet
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionFlareArrow_C::SpawnBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFlareArrow_C", "SpawnBullet");

	UObject::ProcessEvent(Func, nullptr);
}

}

