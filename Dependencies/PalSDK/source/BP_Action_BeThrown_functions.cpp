#include "PalServer/Basic.hpp"

#include "PalServer/BP_Action_BeThrown_classes.hpp"
#include "PalServer/BP_Action_BeThrown_parameters.hpp"


namespace PalServer
{

// Function BP_Action_BeThrown.BP_Action_BeThrown_C.ExecuteUbergraph_BP_Action_BeThrown
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_BeThrown_C::ExecuteUbergraph_BP_Action_BeThrown(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "ExecuteUbergraph_BP_Action_BeThrown");

	Params::BP_Action_BeThrown_C_ExecuteUbergraph_BP_Action_BeThrown Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_BeThrown.BP_Action_BeThrown_C.PlayThrownFX
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void UBP_Action_BeThrown_C::PlayThrownFX()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "PlayThrownFX");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_BeThrown.BP_Action_BeThrown_C.PlayThrownMontage
// (Event, Protected, BlueprintEvent)

void UBP_Action_BeThrown_C::PlayThrownMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_BeThrown_C", "PlayThrownMontage");

	UObject::ProcessEvent(Func, nullptr);
}

}

