#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionWaterGun_classes.hpp"
#include "PalSDK/BP_ActionWaterGun_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionWaterGun.BP_ActionWaterGun_C.ExecuteUbergraph_BP_ActionWaterGun
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaterGun_C::ExecuteUbergraph_BP_ActionWaterGun(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "ExecuteUbergraph_BP_ActionWaterGun");

	Params::BP_ActionWaterGun_C_ExecuteUbergraph_BP_ActionWaterGun Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWaterGun.BP_ActionWaterGun_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionWaterGun_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionWaterGun.BP_ActionWaterGun_C.OnSpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaterGun_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "OnSpawnEffect");

	Params::BP_ActionWaterGun_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWaterGun.BP_ActionWaterGun_C.SetBulletSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaterGun_C::SetBulletSpeed(class APalSkillEffectBase** Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "SetBulletSpeed");

	Params::BP_ActionWaterGun_C_SetBulletSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_0 != nullptr)
		*Effect_0 = Parms.Effect_0;
}


// Function BP_ActionWaterGun.BP_ActionWaterGun_C.SetHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaterGun_C::SetHomingTarget(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "SetHomingTarget");

	Params::BP_ActionWaterGun_C_SetHomingTarget Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWaterGun.BP_ActionWaterGun_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaterGun_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaterGun_C", "TickAction");

	Params::BP_ActionWaterGun_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

