#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_IceMissile_classes.hpp"
#include "PalServer/BP_SkillEffect_IceMissile_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C.ExecuteUbergraph_BP_SkillEffect_IceMissile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_C::ExecuteUbergraph_BP_SkillEffect_IceMissile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_C", "ExecuteUbergraph_BP_SkillEffect_IceMissile");

	Params::BP_SkillEffect_IceMissile_C_ExecuteUbergraph_BP_SkillEffect_IceMissile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C.OnInitialize
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceMissile_C::OnInitialize()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_C", "OnInitialize");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C.OnSpawnedChildEffect__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_IceMissile_C::OnSpawnedChildEffect__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_C", "OnSpawnedChildEffect__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_C", "ReceiveTick");

	Params::BP_SkillEffect_IceMissile_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_IceMissile.BP_SkillEffect_IceMissile_C.ShootProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_IceMissile_C::ShootProcess(double DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_IceMissile_C", "ShootProcess");

	Params::BP_SkillEffect_IceMissile_C_ShootProcess Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

