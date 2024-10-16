#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_AcidRain_classes.hpp"
#include "PalSDK/BP_Action_AcidRain_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_AcidRain.BP_Action_AcidRain_C.ExecuteUbergraph_BP_Action_AcidRain
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_AcidRain_C::ExecuteUbergraph_BP_Action_AcidRain(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_AcidRain_C", "ExecuteUbergraph_BP_Action_AcidRain");

	Params::BP_Action_AcidRain_C_ExecuteUbergraph_BP_Action_AcidRain Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_AcidRain.BP_Action_AcidRain_C.OnSpawnEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APalSkillEffectBase*              Effect_0                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_AcidRain_C::OnSpawnEffect(class APalSkillEffectBase* Effect_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_AcidRain_C", "OnSpawnEffect");

	Params::BP_Action_AcidRain_C_OnSpawnEffect Parms{};

	Parms.Effect_0 = Effect_0;

	UObject::ProcessEvent(Func, &Parms);
}

}

