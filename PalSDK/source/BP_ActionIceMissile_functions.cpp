#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionIceMissile_classes.hpp"
#include "PalServer/BP_ActionIceMissile_parameters.hpp"


namespace PalServer
{

// Function BP_ActionIceMissile.BP_ActionIceMissile_C.ExecuteUbergraph_BP_ActionIceMissile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIceMissile_C::ExecuteUbergraph_BP_ActionIceMissile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionIceMissile_C", "ExecuteUbergraph_BP_ActionIceMissile");

	Params::BP_ActionIceMissile_C_ExecuteUbergraph_BP_ActionIceMissile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionIceMissile.BP_ActionIceMissile_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionIceMissile_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionIceMissile_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionIceMissile.BP_ActionIceMissile_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionIceMissile_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionIceMissile_C", "OnSpawnEffect");

	Params::BP_ActionIceMissile_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

