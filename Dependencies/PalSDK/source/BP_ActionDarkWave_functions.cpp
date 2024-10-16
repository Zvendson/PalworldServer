#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionDarkWave_classes.hpp"
#include "PalSDK/BP_ActionDarkWave_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionDarkWave.BP_ActionDarkWave_C.ExecuteUbergraph_BP_ActionDarkWave
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDarkWave_C::ExecuteUbergraph_BP_ActionDarkWave(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkWave_C", "ExecuteUbergraph_BP_ActionDarkWave");

	Params::BP_ActionDarkWave_C_ExecuteUbergraph_BP_ActionDarkWave Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDarkWave.BP_ActionDarkWave_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDarkWave_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkWave_C", "OnSpawnEffect");

	Params::BP_ActionDarkWave_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDarkWave.BP_ActionDarkWave_C.OnStartAfterAnimation
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDarkWave_C::OnStartAfterAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDarkWave_C", "OnStartAfterAnimation");

	UObject::ProcessEvent(Func, nullptr);
}

}

