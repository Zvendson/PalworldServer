#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionDefenseWait_classes.hpp"
#include "PalServer/BP_ActionDefenseWait_parameters.hpp"


namespace PalServer
{

// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.ExecuteUbergraph_BP_ActionDefenseWait
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDefenseWait_C::ExecuteUbergraph_BP_ActionDefenseWait(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseWait_C", "ExecuteUbergraph_BP_ActionDefenseWait");

	Params::BP_ActionDefenseWait_C_ExecuteUbergraph_BP_ActionDefenseWait Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDefenseWait_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseWait_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDefenseWait_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseWait_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.SetupMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_ActionDefenseWait_C::SetupMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseWait_C", "SetupMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDefenseWait.BP_ActionDefenseWait_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDefenseWait_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDefenseWait_C", "TickAction");

	Params::BP_ActionDefenseWait_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

