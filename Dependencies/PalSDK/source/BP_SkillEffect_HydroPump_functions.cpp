#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_HydroPump_classes.hpp"
#include "PalSDK/BP_SkillEffect_HydroPump_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_HydroPump_C::BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_HydroPump_C", "BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature");

	Params::BP_SkillEffect_HydroPump_C_BndEvt__BP_SkillEffect_HydroPump_Niagara_K2Node_ComponentBoundEvent_0_OnNiagaraSystemFinished__DelegateSignature Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_HydroPump_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_HydroPump_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_HydroPump_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_HydroPump_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.ExecuteUbergraph_BP_SkillEffect_HydroPump
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_HydroPump_C::ExecuteUbergraph_BP_SkillEffect_HydroPump(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_HydroPump_C", "ExecuteUbergraph_BP_SkillEffect_HydroPump");

	Params::BP_SkillEffect_HydroPump_C_ExecuteUbergraph_BP_SkillEffect_HydroPump Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_HydroPump.BP_SkillEffect_HydroPump_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_HydroPump_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_HydroPump_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

