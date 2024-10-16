#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Coop_HealBase_classes.hpp"
#include "PalSDK/BP_Action_Coop_HealBase_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Coop_HealBase_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Coop_HealBase_C", "TickAction");

	Params::BP_Action_Coop_HealBase_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Coop_HealBase_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Coop_HealBase_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Coop_HealBase_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Coop_HealBase_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Coop_HealBase.BP_Action_Coop_HealBase_C.ExecuteUbergraph_BP_Action_Coop_HealBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Coop_HealBase_C::ExecuteUbergraph_BP_Action_Coop_HealBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Coop_HealBase_C", "ExecuteUbergraph_BP_Action_Coop_HealBase");

	Params::BP_Action_Coop_HealBase_C_ExecuteUbergraph_BP_Action_Coop_HealBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}

