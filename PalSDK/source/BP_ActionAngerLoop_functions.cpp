#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionAngerLoop_classes.hpp"
#include "PalServer/BP_ActionAngerLoop_parameters.hpp"


namespace PalServer
{

// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.ExecuteUbergraph_BP_ActionAngerLoop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAngerLoop_C::ExecuteUbergraph_BP_ActionAngerLoop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAngerLoop_C", "ExecuteUbergraph_BP_ActionAngerLoop");

	Params::BP_ActionAngerLoop_C_ExecuteUbergraph_BP_ActionAngerLoop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionAngerLoop_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAngerLoop_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionAngerLoop_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAngerLoop_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionAngerLoop_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAngerLoop_C", "TickAction");

	Params::BP_ActionAngerLoop_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionAngerLoop.BP_ActionAngerLoop_C.カスタムイベント_0
// (BlueprintCallable, BlueprintEvent)

void UBP_ActionAngerLoop_C::_________________________0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionAngerLoop_C", "カスタムイベント_0");

	UObject::ProcessEvent(Func, nullptr);
}

}

