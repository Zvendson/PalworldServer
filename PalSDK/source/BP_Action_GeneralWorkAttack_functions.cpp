#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_GeneralWorkAttack_classes.hpp"
#include "PalServer/BP_Action_GeneralWorkAttack_parameters.hpp"


namespace PalServer
{

// Function BP_Action_GeneralWorkAttack.BP_Action_GeneralWorkAttack_C.OnSpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GeneralWorkAttack_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GeneralWorkAttack_C", "OnSpawnEffect");

	Params::BP_Action_GeneralWorkAttack_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

