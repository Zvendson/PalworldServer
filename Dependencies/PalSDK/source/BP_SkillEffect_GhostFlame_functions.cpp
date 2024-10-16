#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_GhostFlame_classes.hpp"
#include "PalSDK/BP_SkillEffect_GhostFlame_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.ExecuteUbergraph_BP_SkillEffect_GhostFlame
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_GhostFlame_C::ExecuteUbergraph_BP_SkillEffect_GhostFlame(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_GhostFlame_C", "ExecuteUbergraph_BP_SkillEffect_GhostFlame");

	Params::BP_SkillEffect_GhostFlame_C_ExecuteUbergraph_BP_SkillEffect_GhostFlame Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.Explosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_GhostFlame_C::Explosion()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_GhostFlame_C", "Explosion");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_GhostFlame.BP_SkillEffect_GhostFlame_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_GhostFlame_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_GhostFlame_C", "ReceiveTick");

	Params::BP_SkillEffect_GhostFlame_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

