#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_NormalBullet_NPC_classes.hpp"
#include "PalSDK/BP_NormalBullet_NPC_parameters.hpp"


namespace PalSDK
{

// Function BP_NormalBullet_NPC.BP_NormalBullet_NPC_C.GetHitEffect
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNiagaraSystem*                   NiagaraEffect                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_NormalBullet_NPC_C::GetHitEffect(class UNiagaraSystem** NiagaraEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_NormalBullet_NPC_C", "GetHitEffect");

	Params::BP_NormalBullet_NPC_C_GetHitEffect Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NiagaraEffect != nullptr)
		*NiagaraEffect = Parms.NiagaraEffect;
}

}

