#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SkillEffectFireBall_Charge_classes.hpp"
#include "PalSDK/BP_SkillEffectFireBall_Charge_parameters.hpp"


namespace PalSDK
{

// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ExecuteUbergraph_BP_SkillEffectFireBall_Charge
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectFireBall_Charge_C::ExecuteUbergraph_BP_SkillEffectFireBall_Charge(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Charge_C", "ExecuteUbergraph_BP_SkillEffectFireBall_Charge");

	Params::BP_SkillEffectFireBall_Charge_C_ExecuteUbergraph_BP_SkillEffectFireBall_Charge Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectFireBall_Charge_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Charge_C", "ReceiveActorBeginOverlap");

	Params::BP_SkillEffectFireBall_Charge_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffectFireBall_Charge_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Charge_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffectFireBall_Charge.BP_SkillEffectFireBall_Charge_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffectFireBall_Charge_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffectFireBall_Charge_C", "ReceiveTick");

	Params::BP_SkillEffectFireBall_Charge_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

