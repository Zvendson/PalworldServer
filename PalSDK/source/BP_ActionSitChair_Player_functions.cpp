#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionSitChair_Player_classes.hpp"
#include "PalServer/BP_ActionSitChair_Player_parameters.hpp"


namespace PalServer
{

// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.ExecuteUbergraph_BP_ActionSitChair_Player
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionSitChair_Player_C::ExecuteUbergraph_BP_ActionSitChair_Player(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "ExecuteUbergraph_BP_ActionSitChair_Player");

	Params::BP_ActionSitChair_Player_C_ExecuteUbergraph_BP_ActionSitChair_Player Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSitChair_Player_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionSitChair_Player.BP_ActionSitChair_Player_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionSitChair_Player_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionSitChair_Player_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

