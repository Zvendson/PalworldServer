#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_TreasureBoxVisual_OilrigGoal_classes.hpp"
#include "PalSDK/BP_TreasureBoxVisual_OilrigGoal_parameters.hpp"


namespace PalSDK
{

// Function BP_TreasureBoxVisual_OilrigGoal.BP_TreasureBoxVisual_OilrigGoal_C.ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_TreasureBoxVisual_OilrigGoal_C::ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxVisual_OilrigGoal_C", "ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal");

	Params::BP_TreasureBoxVisual_OilrigGoal_C_ExecuteUbergraph_BP_TreasureBoxVisual_OilrigGoal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_TreasureBoxVisual_OilrigGoal.BP_TreasureBoxVisual_OilrigGoal_C.OnFinishOpenAnimation
// (BlueprintCallable, BlueprintEvent)

void ABP_TreasureBoxVisual_OilrigGoal_C::OnFinishOpenAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxVisual_OilrigGoal_C", "OnFinishOpenAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_TreasureBoxVisual_OilrigGoal.BP_TreasureBoxVisual_OilrigGoal_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_TreasureBoxVisual_OilrigGoal_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_TreasureBoxVisual_OilrigGoal_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

