#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_Action_Mimicry_classes.hpp"
#include "PalSDK/BP_Action_Mimicry_parameters.hpp"


namespace PalSDK
{

// Function BP_Action_Mimicry.BP_Action_Mimicry_C.ExecuteUbergraph_BP_Action_Mimicry
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Mimicry_C::ExecuteUbergraph_BP_Action_Mimicry(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Mimicry_C", "ExecuteUbergraph_BP_Action_Mimicry");

	Params::BP_Action_Mimicry_C_ExecuteUbergraph_BP_Action_Mimicry Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Mimicry.BP_Action_Mimicry_C.FindMimicMontage
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                     Montage                                                (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Mimicry_C::FindMimicMontage(class UAnimMontage** Montage)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Mimicry_C", "FindMimicMontage");

	Params::BP_Action_Mimicry_C_FindMimicMontage Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Montage != nullptr)
		*Montage = Parms.Montage;
}


// Function BP_Action_Mimicry.BP_Action_Mimicry_C.OnBeginAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Mimicry_C::OnBeginAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Mimicry_C", "OnBeginAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Mimicry.BP_Action_Mimicry_C.OnEndAction
// (Event, Public, BlueprintEvent)

void UBP_Action_Mimicry_C::OnEndAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Mimicry_C", "OnEndAction");

	UObject::ProcessEvent(Func, nullptr);
}

}

