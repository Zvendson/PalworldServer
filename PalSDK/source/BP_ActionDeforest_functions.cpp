#include "PalServer/Basic.hpp"

#include "PalServer/BP_ActionDeforest_classes.hpp"
#include "PalServer/BP_ActionDeforest_parameters.hpp"


namespace PalServer
{

// Function BP_ActionDeforest.BP_ActionDeforest_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDeforest_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActionDeforest.BP_ActionDeforest_C.ExecuteUbergraph_BP_ActionDeforest
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDeforest_C::ExecuteUbergraph_BP_ActionDeforest(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_C", "ExecuteUbergraph_BP_ActionDeforest");

	Params::BP_ActionDeforest_C_ExecuteUbergraph_BP_ActionDeforest Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDeforest.BP_ActionDeforest_C.OnBeginAnimNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                             NotifyName                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ActionDeforest_C::OnBeginAnimNotify(class UAnimMontage* Montage, class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_C", "OnBeginAnimNotify");

	Params::BP_ActionDeforest_C_OnBeginAnimNotify Parms{};

	Parms.Montage = Montage;
	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActionDeforest.BP_ActionDeforest_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_ActionDeforest_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActionDeforest_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

