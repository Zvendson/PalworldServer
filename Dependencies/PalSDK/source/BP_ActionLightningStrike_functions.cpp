#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionLightningStrike_classes.hpp"
#include "PalSDK/BP_ActionLightningStrike_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.ExecuteUbergraph_BP_ActionLightningStrike
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionLightningStrike_C::ExecuteUbergraph_BP_ActionLightningStrike(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionLightningStrike_C", "ExecuteUbergraph_BP_ActionLightningStrike");

	Params::BP_ActionLightningStrike_C_ExecuteUbergraph_BP_ActionLightningStrike Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionLightningStrike_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionLightningStrike_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionLightningStrike_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionLightningStrike_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionLightningStrike_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionLightningStrike_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionLightningStrike.BP_ActionLightningStrike_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionLightningStrike_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionLightningStrike_C", "OnSpawnEffect");

	Params::BP_ActionLightningStrike_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

