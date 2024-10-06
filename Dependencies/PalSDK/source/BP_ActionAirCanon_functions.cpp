#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionAirCanon_classes.hpp"
#include "PalServer/BP_ActionAirCanon_parameters.hpp"


namespace PalServer
{

// Function BP_ActionAirCanon.BP_ActionAirCanon_C.ExecuteUbergraph_BP_ActionAirCanon
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::ExecuteUbergraph_BP_ActionAirCanon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "ExecuteUbergraph_BP_ActionAirCanon");

	Params::BP_ActionAirCanon_C_ExecuteUbergraph_BP_ActionAirCanon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionAirCanon_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "OnSpawnEffect");

	Params::BP_ActionAirCanon_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.SetBulletSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::SetBulletSpeed(class APalSkillEffectBase** Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "SetBulletSpeed");

	Params::BP_ActionAirCanon_C_SetBulletSpeed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Effect_0 != nullptr)
		*Effect_0 = Parms.Effect_0;
}


// Function BP_ActionAirCanon.BP_ActionAirCanon_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAirCanon_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAirCanon_C", "TickAction");

	Params::BP_ActionAirCanon_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

