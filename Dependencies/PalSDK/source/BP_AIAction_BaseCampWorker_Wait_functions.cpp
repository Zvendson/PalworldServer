#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AIAction_BaseCampWorker_Wait_classes.hpp"
#include "PalSDK/BP_AIAction_BaseCampWorker_Wait_parameters.hpp"


namespace PalSDK
{

// Function BP_AIAction_BaseCampWorker_Wait.BP_AIAction_BaseCampWorker_Wait_C.OnTickForWait
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AIAction_BaseCampWorker_Wait_C::OnTickForWait(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIAction_BaseCampWorker_Wait_C", "OnTickForWait");

	Params::BP_AIAction_BaseCampWorker_Wait_C_OnTickForWait Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

