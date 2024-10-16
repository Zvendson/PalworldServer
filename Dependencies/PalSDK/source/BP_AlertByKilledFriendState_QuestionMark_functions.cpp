#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_AlertByKilledFriendState_QuestionMark_classes.hpp"
#include "PalSDK/BP_AlertByKilledFriendState_QuestionMark_parameters.hpp"


namespace PalSDK
{

// Function BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C.ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AlertByKilledFriendState_QuestionMark_C::ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_QuestionMark_C", "ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark");

	Params::BP_AlertByKilledFriendState_QuestionMark_C_ExecuteUbergraph_BP_AlertByKilledFriendState_QuestionMark Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_AlertByKilledFriendState_QuestionMark.BP_AlertByKilledFriendState_QuestionMark_C.StateEnter
// (Event, Public, BlueprintEvent)

void UBP_AlertByKilledFriendState_QuestionMark_C::StateEnter()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_AlertByKilledFriendState_QuestionMark_C", "StateEnter");

	UObject::ProcessEvent(Func, nullptr);
}

}

