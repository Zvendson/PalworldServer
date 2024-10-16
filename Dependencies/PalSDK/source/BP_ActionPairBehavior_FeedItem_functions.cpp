#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_ActionPairBehavior_FeedItem_classes.hpp"
#include "PalSDK/BP_ActionPairBehavior_FeedItem_parameters.hpp"


namespace PalSDK
{

// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.ExecuteUbergraph_BP_ActionPairBehavior_FeedItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::ExecuteUbergraph_BP_ActionPairBehavior_FeedItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "ExecuteUbergraph_BP_ActionPairBehavior_FeedItem");

	Params::BP_ActionPairBehavior_FeedItem_C_ExecuteUbergraph_BP_ActionPairBehavior_FeedItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.GetHumanAnime
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::GetHumanAnime(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "GetHumanAnime");

	Params::BP_ActionPairBehavior_FeedItem_C_GetHumanAnime Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;
}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionPairBehavior_FeedItem_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionPairBehavior_FeedItem.BP_ActionPairBehavior_FeedItem_C.OnCompleted
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Human                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Monster                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_ActionPairBehavior_FeedItem_C::OnCompleted(class AActor* Human, class AActor* Monster)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionPairBehavior_FeedItem_C", "OnCompleted");

	Params::BP_ActionPairBehavior_FeedItem_C_OnCompleted Parms{};

	Parms.Human = Human;
	Parms.Monster = Monster;

	UObject::ProcessEvent(Func, &Parms);
}

}

