#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_Unique_Alpaca_Tackle_classes.hpp"
#include "PalServer/BP_Action_Unique_Alpaca_Tackle_parameters.hpp"


namespace PalServer
{

// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle");

	Params::BP_Action_Unique_Alpaca_Tackle_C_ExecuteUbergraph_BP_Action_Unique_Alpaca_Tackle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_Alpaca_Tackle_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnCompletedEndMontage
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_Unique_Alpaca_Tackle_C::OnCompletedEndMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnCompletedEndMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Unique_Alpaca_Tackle_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.OnMontageNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::OnMontageNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "OnMontageNotify");

	Params::BP_Action_Unique_Alpaca_Tackle_C_OnMontageNotify Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Unique_Alpaca_Tackle.BP_Action_Unique_Alpaca_Tackle_C.TickAction
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Unique_Alpaca_Tackle_C::TickAction(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Unique_Alpaca_Tackle_C", "TickAction");

	Params::BP_Action_Unique_Alpaca_Tackle_C_TickAction Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

