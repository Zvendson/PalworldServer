#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_NPC_HasPropMonoMotion_classes.hpp"
#include "PalSDK/BP_Action_NPC_HasPropMonoMotion_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_NPC_HasPropMonoMotion_C::ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion");

	Params::BP_Action_NPC_HasPropMonoMotion_C_ExecuteUbergraph_BP_Action_NPC_HasPropMonoMotion Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_NPC_HasPropMonoMotion_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_NPC_HasPropMonoMotion.BP_Action_NPC_HasPropMonoMotion_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_NPC_HasPropMonoMotion_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_NPC_HasPropMonoMotion_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

