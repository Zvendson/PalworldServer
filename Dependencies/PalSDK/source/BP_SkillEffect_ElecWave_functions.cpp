#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_ElecWave_classes.hpp"
#include "PalSDK/BP_SkillEffect_ElecWave_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_ElecWave.BP_SkillEffect_ElecWave_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_ElecWave_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ElecWave_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ElecWave.BP_SkillEffect_ElecWave_C.ExecuteUbergraph_BP_SkillEffect_ElecWave
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ElecWave_C::ExecuteUbergraph_BP_SkillEffect_ElecWave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ElecWave_C", "ExecuteUbergraph_BP_SkillEffect_ElecWave");

	Params::BP_SkillEffect_ElecWave_C_ExecuteUbergraph_BP_SkillEffect_ElecWave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ElecWave.BP_SkillEffect_ElecWave_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_ElecWave_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ElecWave_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_ElecWave.BP_SkillEffect_ElecWave_C.ReceiveParticleData
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FBasicParticleData>       Data                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UNiagaraSystem*                   NiagaraSystem                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                          SimulationPositionOffset                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ElecWave_C::ReceiveParticleData(const TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, const struct FVector& SimulationPositionOffset)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ElecWave_C", "ReceiveParticleData");

	Params::BP_SkillEffect_ElecWave_C_ReceiveParticleData Parms{};

	Parms.Data = std::move(Data);
	Parms.NiagaraSystem = NiagaraSystem;
	Parms.SimulationPositionOffset = std::move(SimulationPositionOffset);

	UObject::ProcessEvent(Func, &Parms);
}

}

