#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Explosion_Missile_classes.hpp"
#include "PalSDK/BP_Explosion_Missile_parameters.hpp"


namespace PalSDK
{

// Function BP_Explosion_Missile.BP_Explosion_Missile_C.BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Missile_C::BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_Explosion_Missile_C_BndEvt__BP_Explosion_Low_Explosive_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Explosion_Missile.BP_Explosion_Missile_C.ExecuteUbergraph_BP_Explosion_Missile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Missile_C::ExecuteUbergraph_BP_Explosion_Missile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "ExecuteUbergraph_BP_Explosion_Missile");

	Params::BP_Explosion_Missile_C_ExecuteUbergraph_BP_Explosion_Missile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Explosion_Missile.BP_Explosion_Missile_C.GetEffectType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAdditionalEffectType                Effect                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Missile_C::GetEffectType(EPalAdditionalEffectType* Effect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "GetEffectType");

	Params::BP_Explosion_Missile_C_GetEffectType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect != nullptr)
		*Effect = Parms.Effect;
}


// Function BP_Explosion_Missile.BP_Explosion_Missile_C.GetEffectValue
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                                   Value                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Missile_C::GetEffectValue(int32* Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "GetEffectValue");

	Params::BP_Explosion_Missile_C_GetEffectValue Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;
}


// Function BP_Explosion_Missile.BP_Explosion_Missile_C.GetWeaponAttackType
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EPalAttackType                          AttackType                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Explosion_Missile_C::GetWeaponAttackType(EPalAttackType* AttackType)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "GetWeaponAttackType");

	Params::BP_Explosion_Missile_C_GetWeaponAttackType Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (AttackType != nullptr)
		*AttackType = Parms.AttackType;
}


// Function BP_Explosion_Missile.BP_Explosion_Missile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Explosion_Missile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Explosion_Missile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

