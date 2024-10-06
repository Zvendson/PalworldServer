#include "PalServer/Basic.hpp"

#include "PalServer/BP_SkillEffect_Unique_Alpaca_Loop_classes.hpp"
#include "PalServer/BP_SkillEffect_Unique_Alpaca_Loop_parameters.hpp"


namespace PalServer
{

// Function BP_SkillEffect_Unique_Alpaca_Loop.BP_SkillEffect_Unique_Alpaca_Loop_C.ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_Alpaca_Loop_C::ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_Alpaca_Loop_C", "ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop");

	Params::BP_SkillEffect_Unique_Alpaca_Loop_C_ExecuteUbergraph_BP_SkillEffect_Unique_Alpaca_Loop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_Alpaca_Loop.BP_SkillEffect_Unique_Alpaca_Loop_C.FadeOutEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                                  DeltaSecond                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SkillEffect_Unique_Alpaca_Loop_C::FadeOutEffect(double DeltaSecond)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_Alpaca_Loop_C", "FadeOutEffect");

	Params::BP_SkillEffect_Unique_Alpaca_Loop_C_FadeOutEffect Parms{};

	Parms.DeltaSecond = DeltaSecond;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SkillEffect_Unique_Alpaca_Loop.BP_SkillEffect_Unique_Alpaca_Loop_C.OnEndAction
// (BlueprintCallable, BlueprintEvent)

void ABP_SkillEffect_Unique_Alpaca_Loop_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SkillEffect_Unique_Alpaca_Loop_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

