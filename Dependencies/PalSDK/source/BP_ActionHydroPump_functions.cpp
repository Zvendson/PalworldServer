#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionHydroPump_classes.hpp"
#include "PalSDK/BP_ActionHydroPump_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionHydroPump.BP_ActionHydroPump_C.ExecuteUbergraph_BP_ActionHydroPump
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionHydroPump_C::ExecuteUbergraph_BP_ActionHydroPump(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionHydroPump_C", "ExecuteUbergraph_BP_ActionHydroPump");

	Params::BP_ActionHydroPump_C_ExecuteUbergraph_BP_ActionHydroPump Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionHydroPump.BP_ActionHydroPump_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionHydroPump_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionHydroPump_C", "OnSpawnEffect");

	Params::BP_ActionHydroPump_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionHydroPump.BP_ActionHydroPump_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionHydroPump_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionHydroPump_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

