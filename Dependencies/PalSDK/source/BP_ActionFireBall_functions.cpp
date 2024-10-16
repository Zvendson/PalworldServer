#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionFireBall_classes.hpp"
#include "PalSDK/BP_ActionFireBall_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionFireBall.BP_ActionFireBall_C.CallEffect
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSkillEffectSpawnParameter       Parameter                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UBP_ActionFireBall_C::CallEffect(const struct FSkillEffectSpawnParameter& Parameter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "CallEffect");

	Params::BP_ActionFireBall_C_CallEffect Parms{};

	Parms.Parameter = std::move(Parameter);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFireBall.BP_ActionFireBall_C.ExecuteUbergraph_BP_ActionFireBall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFireBall_C::ExecuteUbergraph_BP_ActionFireBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "ExecuteUbergraph_BP_ActionFireBall");

	Params::BP_ActionFireBall_C_ExecuteUbergraph_BP_ActionFireBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFireBall.BP_ActionFireBall_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFireBall_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "OnSpawnEffect");

	Params::BP_ActionFireBall_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionFireBall.BP_ActionFireBall_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionFireBall_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionFireBall.BP_ActionFireBall_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionFireBall_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionFireBall.BP_ActionFireBall_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionFireBall_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionFireBall_C", "TickAction");

	Params::BP_ActionFireBall_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

