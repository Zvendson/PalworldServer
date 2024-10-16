#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_LightningStrike_classes.hpp"
#include "PalSDK/BP_SkillEffect_LightningStrike_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_LightningStrike.BP_SkillEffect_LightningStrike_C.DisableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_LightningStrike_C::DisableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_C", "DisableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_LightningStrike.BP_SkillEffect_LightningStrike_C.ExecuteUbergraph_BP_SkillEffect_LightningStrike
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_LightningStrike_C::ExecuteUbergraph_BP_SkillEffect_LightningStrike(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_C", "ExecuteUbergraph_BP_SkillEffect_LightningStrike");

	Params::BP_SkillEffect_LightningStrike_C_ExecuteUbergraph_BP_SkillEffect_LightningStrike Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_LightningStrike.BP_SkillEffect_LightningStrike_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_LightningStrike_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_LightningStrike_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

