#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_BreathBase_classes.hpp"
#include "PalSDK/BP_SkillEffect_BreathBase_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_BreathBase.BP_SkillEffect_BreathBase_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_BreathBase_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBase_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_BreathBase.BP_SkillEffect_BreathBase_C.ExecuteUbergraph_BP_SkillEffect_BreathBase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_BreathBase_C::ExecuteUbergraph_BP_SkillEffect_BreathBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBase_C", "ExecuteUbergraph_BP_SkillEffect_BreathBase");

	Params::BP_SkillEffect_BreathBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_BreathBase.BP_SkillEffect_BreathBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_BreathBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

