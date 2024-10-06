#include "PalServer/Basic.hpp"

#include "PalServer/BP_Explosion_RocketLauncher_classes.hpp"
#include "PalServer/BP_Explosion_RocketLauncher_parameters.hpp"


namespace PalServer
{

// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_Explosion_RocketLauncher_C_BndEvt__BP_Explosion_PenguinLauncher_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.ExecuteUbergraph_BP_Explosion_RocketLauncher
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::ExecuteUbergraph_BP_Explosion_RocketLauncher(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "ExecuteUbergraph_BP_Explosion_RocketLauncher");

	Params::BP_Explosion_RocketLauncher_C_ExecuteUbergraph_BP_Explosion_RocketLauncher Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAdditionalEffectType                Effect                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::GetEffectType(EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "GetEffectType");

	Params::BP_Explosion_RocketLauncher_C_GetEffectType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;
}


// Function BP_Explosion_RocketLauncher.BP_Explosion_RocketLauncher_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_RocketLauncher_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_RocketLauncher_C", "GetEffectValue");

	Params::BP_Explosion_RocketLauncher_C_GetEffectValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}

}

