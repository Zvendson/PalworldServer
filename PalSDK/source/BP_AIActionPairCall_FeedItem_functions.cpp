#include "PalServer/Basic.hpp"

#include "PalServer/BP_AIActionPairCall_FeedItem_classes.hpp"
#include "PalServer/BP_AIActionPairCall_FeedItem_parameters.hpp"


namespace PalServer
{

// Function BP_AIActionPairCall_FeedItem.BP_AIActionPairCall_FeedItem_C.CreatePairBehaviorActionDynamicParameter
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FActionDynamicParameter          DynamicParameter_0                                     (Parm, OutParm)

void UBP_AIActionPairCall_FeedItem_C::CreatePairBehaviorActionDynamicParameter(struct FActionDynamicParameter* DynamicParameter_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AIActionPairCall_FeedItem_C", "CreatePairBehaviorActionDynamicParameter");

	Params::BP_AIActionPairCall_FeedItem_C_CreatePairBehaviorActionDynamicParameter Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (DynamicParameter_0 != nullptr)
		*DynamicParameter_0 = std::move(Parms.DynamicParameter_0);
}

}

