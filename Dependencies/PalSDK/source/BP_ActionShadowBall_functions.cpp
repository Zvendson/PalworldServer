#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionShadowBall_classes.hpp"
#include "PalSDK/BP_ActionShadowBall_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionShadowBall.BP_ActionShadowBall_C.ExecuteUbergraph_BP_ActionShadowBall
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionShadowBall_C::ExecuteUbergraph_BP_ActionShadowBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "ExecuteUbergraph_BP_ActionShadowBall");

	Params::BP_ActionShadowBall_C_ExecuteUbergraph_BP_ActionShadowBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionShadowBall.BP_ActionShadowBall_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionShadowBall_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionShadowBall.BP_ActionShadowBall_C.OnSpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionShadowBall_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "OnSpawnEffect");

	Params::BP_ActionShadowBall_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionShadowBall.BP_ActionShadowBall_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionShadowBall_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionShadowBall.BP_ActionShadowBall_C.Shoot
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionShadowBall_C::Shoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "Shoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionShadowBall.BP_ActionShadowBall_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionShadowBall_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionShadowBall_C", "TickAction");

	Params::BP_ActionShadowBall_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

