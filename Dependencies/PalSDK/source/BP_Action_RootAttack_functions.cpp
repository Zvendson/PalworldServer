#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_RootAttack_classes.hpp"
#include "PalSDK/BP_Action_RootAttack_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_RootAttack.BP_Action_RootAttack_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_RootAttack_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_RootAttack_C", "OnSpawnEffect");

	Params::BP_Action_RootAttack_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

