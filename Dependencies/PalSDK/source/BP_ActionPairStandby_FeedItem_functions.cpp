#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionPairStandby_FeedItem_classes.hpp"
#include "PalSDK/BP_ActionPairStandby_FeedItem_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionPairStandby_FeedItem.BP_ActionPairStandby_FeedItem_C.OnSetCallAIAction
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPalAIActionBase*                 CallAction                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairStandby_FeedItem_C::OnSetCallAIAction(class UPalAIActionBase* CallAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairStandby_FeedItem_C", "OnSetCallAIAction");

	Params::BP_ActionPairStandby_FeedItem_C_OnSetCallAIAction Parms{};

	Parms.CallAction = CallAction;

	UObject::ProcessEvent(Func, &Parms);
}

}

