#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAIActionComposite_OtomoWorkerBase_classes.hpp"
#include "PalSDK/BP_PalAIActionComposite_OtomoWorkerBase_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAIActionComposite_OtomoWorkerBase.BP_PalAIActionComposite_OtomoWorkerBase_C.OnTickInWaitAction
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalAIActionComposite_OtomoWorkerBase_C::OnTickInWaitAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAIActionComposite_OtomoWorkerBase_C", "OnTickInWaitAction");

	Params::BP_PalAIActionComposite_OtomoWorkerBase_C_OnTickInWaitAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

