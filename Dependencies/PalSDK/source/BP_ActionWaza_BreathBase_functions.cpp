#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionWaza_BreathBase_classes.hpp"
#include "PalSDK/BP_ActionWaza_BreathBase_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.ExecuteUbergraph_BP_ActionWaza_BreathBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaza_BreathBase_C::ExecuteUbergraph_BP_ActionWaza_BreathBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "ExecuteUbergraph_BP_ActionWaza_BreathBase");

	Params::BP_ActionWaza_BreathBase_C_ExecuteUbergraph_BP_ActionWaza_BreathBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionWaza_BreathBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionWaza_BreathBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaza_BreathBase_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "OnSpawnEffect");

	Params::BP_ActionWaza_BreathBase_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.ShootBullet
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionWaza_BreathBase_C::ShootBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "ShootBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionWaza_BreathBase.BP_ActionWaza_BreathBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionWaza_BreathBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionWaza_BreathBase_C", "TickAction");

	Params::BP_ActionWaza_BreathBase_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

