#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionPairStandby_FeedItem_classes.hpp"
#include "PalServer/BP_ActionPairStandby_FeedItem_parameters.hpp"


namespace PalServer
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

