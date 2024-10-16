#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_SolarBeam_classes.hpp"
#include "PalSDK/BP_SkillEffect_SolarBeam_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_SolarBeam.BP_SkillEffect_SolarBeam_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SolarBeam_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SolarBeam.BP_SkillEffect_SolarBeam_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_SolarBeam_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_SolarBeam.BP_SkillEffect_SolarBeam_C.ExecuteUbergraph_BP_SkillEffect_SolarBeam
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_SolarBeam_C::ExecuteUbergraph_BP_SkillEffect_SolarBeam(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_C", "ExecuteUbergraph_BP_SkillEffect_SolarBeam");

	Params::BP_SkillEffect_SolarBeam_C_ExecuteUbergraph_BP_SkillEffect_SolarBeam Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_SolarBeam.BP_SkillEffect_SolarBeam_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_SolarBeam_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_SolarBeam_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

