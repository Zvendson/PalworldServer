#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionPowerShot_classes.hpp"
#include "PalServer/BP_ActionPowerShot_parameters.hpp"


namespace PalServer
{

// Function BP_ActionPowerShot.BP_ActionPowerShot_C.ExecuteUbergraph_BP_ActionPowerShot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPowerShot_C::ExecuteUbergraph_BP_ActionPowerShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPowerShot_C", "ExecuteUbergraph_BP_ActionPowerShot");

	Params::BP_ActionPowerShot_C_ExecuteUbergraph_BP_ActionPowerShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPowerShot.BP_ActionPowerShot_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPowerShot_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPowerShot_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPowerShot.BP_ActionPowerShot_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPowerShot_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPowerShot_C", "OnSpawnEffect");

	Params::BP_ActionPowerShot_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPowerShot.BP_ActionPowerShot_C.SetBulletSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPowerShot_C::SetBulletSpeed(class APalSkillEffectBase** Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPowerShot_C", "SetBulletSpeed");

	Params::BP_ActionPowerShot_C_SetBulletSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_0 != nullptr)
		*Effect_0 = Parms.Effect_0;
}


// Function BP_ActionPowerShot.BP_ActionPowerShot_C.SetHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPowerShot_C::SetHomingTarget(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPowerShot_C", "SetHomingTarget");

	Params::BP_ActionPowerShot_C_SetHomingTarget Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

