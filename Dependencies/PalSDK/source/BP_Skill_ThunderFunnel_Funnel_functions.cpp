#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Skill_ThunderFunnel_Funnel_classes.hpp"
#include "PalSDK/BP_Skill_ThunderFunnel_Funnel_parameters.hpp"


namespace PalSDK
{

// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel");

	Params::BP_Skill_ThunderFunnel_Funnel_C_ExecuteUbergraph_BP_Skill_ThunderFunnel_Funnel Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "FadeOutEffect");

	Params::BP_Skill_ThunderFunnel_Funnel_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.Get Bullet Rotat
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                         Rotation                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Skill_ThunderFunnel_Funnel_C::Get_Bullet_Rotat(struct FRotator* Rotation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "Get Bullet Rotat");

	Params::BP_Skill_ThunderFunnel_Funnel_C_Get_Bullet_Rotat Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Rotation != nullptr)
		*Rotation = std::move(Parms.Rotation);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.GetNearestTargetLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                          NearestTargetLocation                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::GetNearestTargetLocation(struct FVector* NearestTargetLocation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "GetNearestTargetLocation");

	Params::BP_Skill_ThunderFunnel_Funnel_C_GetNearestTargetLocation Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (NearestTargetLocation != nullptr)
		*NearestTargetLocation = std::move(Parms.NearestTargetLocation);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.InitMoveFunnelLocation
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::InitMoveFunnelLocation(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "InitMoveFunnelLocation");

	Params::BP_Skill_ThunderFunnel_Funnel_C_InitMoveFunnelLocation Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Funnel_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "ReceiveTick");

	Params::BP_Skill_ThunderFunnel_Funnel_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.SetLifeTimer
// (BlueprintCallable, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Funnel_C::SetLifeTimer()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "SetLifeTimer");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.SpawnBullet
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Skill_ThunderFunnel_Funnel_C::SpawnBullet()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "SpawnBullet");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Skill_ThunderFunnel_Funnel.BP_Skill_ThunderFunnel_Funnel_C.SpawnSkillEffect
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_SkillEffectBase_C*            SkillEffect                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_Skill_ThunderFunnel_Funnel_C::SpawnSkillEffect(class AActor* Owner_0, class ABP_SkillEffectBase_C** SkillEffect)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Skill_ThunderFunnel_Funnel_C", "SpawnSkillEffect");

	Params::BP_Skill_ThunderFunnel_Funnel_C_SpawnSkillEffect Parms{};

	Parms.Owner_0 = Owner_0;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillEffect != nullptr)
		*SkillEffect = Parms.SkillEffect;
}

}

