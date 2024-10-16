#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_SeedMine_classes.hpp"
#include "PalSDK/BP_Action_SeedMine_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_SeedMine.BP_Action_SeedMine_C.OnSpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SeedMine_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SeedMine_C", "OnSpawnEffect");

	Params::BP_Action_SeedMine_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

