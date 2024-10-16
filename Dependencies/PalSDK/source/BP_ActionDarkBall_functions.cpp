#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionDarkBall_classes.hpp"
#include "PalSDK/BP_ActionDarkBall_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionDarkBall.BP_ActionDarkBall_C.ExecuteUbergraph_BP_ActionDarkBall
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDarkBall_C::ExecuteUbergraph_BP_ActionDarkBall(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkBall_C", "ExecuteUbergraph_BP_ActionDarkBall");

	Params::BP_ActionDarkBall_C_ExecuteUbergraph_BP_ActionDarkBall Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDarkBall.BP_ActionDarkBall_C.OnBreakAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDarkBall_C::OnBreakAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkBall_C", "OnBreakAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDarkBall.BP_ActionDarkBall_C.OnShoot
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionDarkBall_C::OnShoot()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkBall_C", "OnShoot");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDarkBall.BP_ActionDarkBall_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDarkBall_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkBall_C", "OnSpawnEffect");

	Params::BP_ActionDarkBall_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDarkBall.BP_ActionDarkBall_C.OnStartProcessAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDarkBall_C::OnStartProcessAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkBall_C", "OnStartProcessAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

