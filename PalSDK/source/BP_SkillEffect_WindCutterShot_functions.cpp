#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_WindCutterShot_classes.hpp"
#include "PalServer/BP_SkillEffect_WindCutterShot_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.ExecuteUbergraph_BP_SkillEffect_WindCutterShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WindCutterShot_C::ExecuteUbergraph_BP_SkillEffect_WindCutterShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "ExecuteUbergraph_BP_SkillEffect_WindCutterShot");

	Params::BP_SkillEffect_WindCutterShot_C_ExecuteUbergraph_BP_SkillEffect_WindCutterShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnDestroyed_イベント_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           DestroyedActor                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WindCutterShot_C::OnDestroyed______________0(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "OnDestroyed_イベント_0");

	Params::BP_SkillEffect_WindCutterShot_C_OnDestroyed______________0 Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnSpawnBulletDelegate__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Bullet                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WindCutterShot_C::OnSpawnBulletDelegate__DelegateSignature(class AActor* Bullet)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "OnSpawnBulletDelegate__DelegateSignature");

	Params::BP_SkillEffect_WindCutterShot_C_OnSpawnBulletDelegate__DelegateSignature Parms{};

	Parms.Bullet = Bullet;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.OnSystemFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraComponent*                PSystem                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WindCutterShot_C::OnSystemFinished(class UNiagaraComponent* PSystem)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "OnSystemFinished");

	Params::BP_SkillEffect_WindCutterShot_C_OnSystemFinished Parms{};

	Parms.PSystem = PSystem;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SkillEffect_WindCutterShot_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.SetTargetLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          TargetLocation                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_WindCutterShot_C::SetTargetLocation(const struct FVector& TargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "SetTargetLocation");

	Params::BP_SkillEffect_WindCutterShot_C_SetTargetLocation Parms{};

	Parms.TargetLocation = std::move(TargetLocation);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_WindCutterShot.BP_SkillEffect_WindCutterShot_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_WindCutterShot_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_WindCutterShot_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}

}

