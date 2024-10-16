#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionMudShot_classes.hpp"
#include "PalSDK/BP_ActionMudShot_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionMudShot.BP_ActionMudShot_C.ExecuteUbergraph_BP_ActionMudShot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionMudShot_C::ExecuteUbergraph_BP_ActionMudShot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "ExecuteUbergraph_BP_ActionMudShot");

	Params::BP_ActionMudShot_C_ExecuteUbergraph_BP_ActionMudShot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionMudShot.BP_ActionMudShot_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionMudShot_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionMudShot.BP_ActionMudShot_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionMudShot_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionMudShot.BP_ActionMudShot_C.OnSpawnEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionMudShot_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "OnSpawnEffect");

	Params::BP_ActionMudShot_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionMudShot.BP_ActionMudShot_C.SetPredictedTarget_0
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_ActionMudShot_C::SetPredictedTarget_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "SetPredictedTarget_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionMudShot.BP_ActionMudShot_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionMudShot_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionMudShot_C", "TickAction");

	Params::BP_ActionMudShot_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

