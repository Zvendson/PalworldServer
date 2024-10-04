#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_Unique_GrassPanda_MusclePunch_classes.hpp"
#include "PalServer/BP_SkillEffect_Unique_GrassPanda_MusclePunch_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_Unique_GrassPanda_MusclePunch.BP_SkillEffect_Unique_GrassPanda_MusclePunch_C.ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_GrassPanda_MusclePunch_C", "ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch");

	Params::BP_SkillEffect_Unique_GrassPanda_MusclePunch_C_ExecuteUbergraph_BP_SkillEffect_Unique_GrassPanda_MusclePunch Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_GrassPanda_MusclePunch.BP_SkillEffect_Unique_GrassPanda_MusclePunch_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_GrassPanda_MusclePunch_C", "FadeOutEffect");

	Params::BP_SkillEffect_Unique_GrassPanda_MusclePunch_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_GrassPanda_MusclePunch.BP_SkillEffect_Unique_GrassPanda_MusclePunch_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_Unique_GrassPanda_MusclePunch_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_GrassPanda_MusclePunch_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

