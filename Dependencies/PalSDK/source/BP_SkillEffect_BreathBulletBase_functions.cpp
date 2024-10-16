#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffect_BreathBulletBase_classes.hpp"
#include "PalSDK/BP_SkillEffect_BreathBulletBase_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C.ExecuteUbergraph_BP_SkillEffect_BreathBulletBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_BreathBulletBase_C::ExecuteUbergraph_BP_SkillEffect_BreathBulletBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBulletBase_C", "ExecuteUbergraph_BP_SkillEffect_BreathBulletBase");

	Params::BP_SkillEffect_BreathBulletBase_C_ExecuteUbergraph_BP_SkillEffect_BreathBulletBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_BreathBulletBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBulletBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_BreathBulletBase.BP_SkillEffect_BreathBulletBase_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_BreathBulletBase_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_BreathBulletBase_C", "ReceiveTick");

	Params::BP_SkillEffect_BreathBulletBase_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

