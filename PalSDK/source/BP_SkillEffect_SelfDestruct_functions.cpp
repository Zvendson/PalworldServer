#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_SelfDestruct_classes.hpp"
#include "PalServer/BP_SkillEffect_SelfDestruct_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C.ExecuteUbergraph_BP_SkillEffect_SelfDestruct
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SelfDestruct_C::ExecuteUbergraph_BP_SkillEffect_SelfDestruct(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SelfDestruct_C", "ExecuteUbergraph_BP_SkillEffect_SelfDestruct");

	Params::BP_SkillEffect_SelfDestruct_C_ExecuteUbergraph_BP_SkillEffect_SelfDestruct Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SelfDestruct.BP_SkillEffect_SelfDestruct_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_SelfDestruct_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SelfDestruct_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

