#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_FireSeed_classes.hpp"
#include "PalSDK/BP_Action_FireSeed_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_FireSeed.BP_Action_FireSeed_C.ExecuteUbergraph_BP_Action_FireSeed
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_FireSeed_C::ExecuteUbergraph_BP_Action_FireSeed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FireSeed_C", "ExecuteUbergraph_BP_Action_FireSeed");

	Params::BP_Action_FireSeed_C_ExecuteUbergraph_BP_Action_FireSeed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_FireSeed.BP_Action_FireSeed_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_FireSeed_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FireSeed_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_FireSeed.BP_Action_FireSeed_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_FireSeed_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FireSeed_C", "OnSpawnEffect");

	Params::BP_Action_FireSeed_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_FireSeed.BP_Action_FireSeed_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_FireSeed_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FireSeed_C", "TickAction");

	Params::BP_Action_FireSeed_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

