#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffectFireBall_Impact_classes.hpp"
#include "PalSDK/BP_SkillEffectFireBall_Impact_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffectFireBall_Impact.BP_SkillEffectFireBall_Impact_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffectFireBall_Impact_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Impact_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffectFireBall_Impact.BP_SkillEffectFireBall_Impact_C.ExecuteUbergraph_BP_SkillEffectFireBall_Impact
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectFireBall_Impact_C::ExecuteUbergraph_BP_SkillEffectFireBall_Impact(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Impact_C", "ExecuteUbergraph_BP_SkillEffectFireBall_Impact");

	Params::BP_SkillEffectFireBall_Impact_C_ExecuteUbergraph_BP_SkillEffectFireBall_Impact Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffectFireBall_Impact.BP_SkillEffectFireBall_Impact_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffectFireBall_Impact_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Impact_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

