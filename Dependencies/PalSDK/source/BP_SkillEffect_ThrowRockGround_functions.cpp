#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_ThrowRockGround_classes.hpp"
#include "PalSDK/BP_SkillEffect_ThrowRockGround_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C.ExecuteUbergraph_BP_SkillEffect_ThrowRockGround
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_ThrowRockGround_C::ExecuteUbergraph_BP_SkillEffect_ThrowRockGround(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockGround_C", "ExecuteUbergraph_BP_SkillEffect_ThrowRockGround");

	Params::BP_SkillEffect_ThrowRockGround_C_ExecuteUbergraph_BP_SkillEffect_ThrowRockGround Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_ThrowRockGround.BP_SkillEffect_ThrowRockGround_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_ThrowRockGround_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_ThrowRockGround_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

