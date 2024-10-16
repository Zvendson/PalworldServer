#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_PowerBall_1_classes.hpp"
#include "PalSDK/BP_SkillEffect_PowerBall_1_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_PowerBall_1.BP_SkillEffect_PowerBall_1_C.ExecuteUbergraph_BP_SkillEffect_PowerBall_1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerBall_1_C::ExecuteUbergraph_BP_SkillEffect_PowerBall_1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerBall_1_C", "ExecuteUbergraph_BP_SkillEffect_PowerBall_1");

	Params::BP_SkillEffect_PowerBall_1_C_ExecuteUbergraph_BP_SkillEffect_PowerBall_1 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_PowerBall_1.BP_SkillEffect_PowerBall_1_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_PowerBall_1_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_PowerBall_1_C", "ReceiveTick");

	Params::BP_SkillEffect_PowerBall_1_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

