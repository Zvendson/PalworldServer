#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_FireBlastShoot_classes.hpp"
#include "PalServer/BP_SkillEffect_FireBlastShoot_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.ExecuteUbergraph_BP_SkillEffect_FireBlastShoot
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FireBlastShoot_C::ExecuteUbergraph_BP_SkillEffect_FireBlastShoot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FireBlastShoot_C", "ExecuteUbergraph_BP_SkillEffect_FireBlastShoot");

	Params::BP_SkillEffect_FireBlastShoot_C_ExecuteUbergraph_BP_SkillEffect_FireBlastShoot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.OnDestroyed_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FireBlastShoot_C::OnDestroyed______________0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FireBlastShoot_C", "OnDestroyed_イベント_0");

	Params::BP_SkillEffect_FireBlastShoot_C_OnDestroyed______________0 Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.OnSystemFinished_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*         PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_FireBlastShoot_C::OnSystemFinished______________0(class UParticleSystemComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FireBlastShoot_C", "OnSystemFinished_イベント_0");

	Params::BP_SkillEffect_FireBlastShoot_C_OnSystemFinished______________0 Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_FireBlastShoot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FireBlastShoot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_FireBlastShoot.BP_SkillEffect_FireBlastShoot_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_FireBlastShoot_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_FireBlastShoot_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}

}

