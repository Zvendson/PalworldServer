#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionPoisonShot_classes.hpp"
#include "PalServer/BP_ActionPoisonShot_parameters.hpp"


namespace PalServer
{

// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.ExecuteUbergraph_BP_ActionPoisonShot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPoisonShot_C::ExecuteUbergraph_BP_ActionPoisonShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "ExecuteUbergraph_BP_ActionPoisonShot");

	Params::BP_ActionPoisonShot_C_ExecuteUbergraph_BP_ActionPoisonShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPoisonShot_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPoisonShot_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPoisonShot_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "OnSpawnEffect");

	Params::BP_ActionPoisonShot_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.SetPredictedTarget_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionPoisonShot_C::SetPredictedTarget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "SetPredictedTarget_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPoisonShot.BP_ActionPoisonShot_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPoisonShot_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPoisonShot_C", "TickAction");

	Params::BP_ActionPoisonShot_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

