#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_LightningStrike_Blast_classes.hpp"
#include "PalSDK/BP_SkillEffect_LightningStrike_Blast_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_LightningStrike_Blast.BP_SkillEffect_LightningStrike_Blast_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_LightningStrike_Blast_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_Blast_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_LightningStrike_Blast.BP_SkillEffect_LightningStrike_Blast_C.EffectTimeout
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_LightningStrike_Blast_C::EffectTimeout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_Blast_C", "EffectTimeout");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_LightningStrike_Blast.BP_SkillEffect_LightningStrike_Blast_C.ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_LightningStrike_Blast_C::ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_Blast_C", "ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast");

	Params::BP_SkillEffect_LightningStrike_Blast_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike_Blast Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_LightningStrike_Blast.BP_SkillEffect_LightningStrike_Blast_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_LightningStrike_Blast_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_Blast_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

