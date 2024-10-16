#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_DarkLaser_classes.hpp"
#include "PalSDK/BP_SkillEffect_DarkLaser_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_DarkLaser.BP_SkillEffect_DarkLaser_C.EnableCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_DarkLaser_C::EnableCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_DarkLaser_C", "EnableCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_DarkLaser.BP_SkillEffect_DarkLaser_C.EndCollision
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_DarkLaser_C::EndCollision()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_DarkLaser_C", "EndCollision");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_DarkLaser.BP_SkillEffect_DarkLaser_C.ExecuteUbergraph_BP_SkillEffect_DarkLaser
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_DarkLaser_C::ExecuteUbergraph_BP_SkillEffect_DarkLaser(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_DarkLaser_C", "ExecuteUbergraph_BP_SkillEffect_DarkLaser");

	Params::BP_SkillEffect_DarkLaser_C_ExecuteUbergraph_BP_SkillEffect_DarkLaser Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_DarkLaser.BP_SkillEffect_DarkLaser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_DarkLaser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_DarkLaser_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

