#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalOilrigController_classes.hpp"
#include "PalServer/BP_PalOilrigController_parameters.hpp"


namespace PalServer
{

// Function BP_PalOilrigController.BP_PalOilrigController_C.ExecuteUbergraph_BP_PalOilrigController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalOilrigController_C::ExecuteUbergraph_BP_PalOilrigController(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalOilrigController_C", "ExecuteUbergraph_BP_PalOilrigController");

	Params::BP_PalOilrigController_C_ExecuteUbergraph_BP_PalOilrigController Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalOilrigController.BP_PalOilrigController_C.OnStartCombatToAll_BP
// (Event, Public, BlueprintEvent)

void ABP_PalOilrigController_C::OnStartCombatToAll_BP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalOilrigController_C", "OnStartCombatToAll_BP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_PalOilrigController.BP_PalOilrigController_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalOilrigController_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalOilrigController_C", "ReceiveTick");

	Params::BP_PalOilrigController_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalOilrigController.BP_PalOilrigController_C.SoundStop
// (BlueprintCallable, BlueprintEvent)

void ABP_PalOilrigController_C::SoundStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalOilrigController_C", "SoundStop");

	UObject::ProcessEvent(Func, nullptr);
}

}

