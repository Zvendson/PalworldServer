#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionThunderBall_classes.hpp"
#include "PalSDK/BP_ActionThunderBall_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionThunderBall.BP_ActionThunderBall_C.ExecuteUbergraph_BP_ActionThunderBall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThunderBall_C::ExecuteUbergraph_BP_ActionThunderBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThunderBall_C", "ExecuteUbergraph_BP_ActionThunderBall");

	Params::BP_ActionThunderBall_C_ExecuteUbergraph_BP_ActionThunderBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionThunderBall.BP_ActionThunderBall_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionThunderBall_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThunderBall_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionThunderBall.BP_ActionThunderBall_C.OnShoot
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionThunderBall_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThunderBall_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionThunderBall.BP_ActionThunderBall_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionThunderBall_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThunderBall_C", "OnSpawnEffect");

	Params::BP_ActionThunderBall_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionThunderBall.BP_ActionThunderBall_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionThunderBall_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionThunderBall_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

