#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_TorchStand_classes.hpp"
#include "PalServer/BP_BuildObject_TorchStand_parameters.hpp"


namespace PalServer
{

// Function BP_BuildObject_TorchStand.BP_BuildObject_TorchStand_C.ExecuteUbergraph_BP_BuildObject_TorchStand
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_TorchStand_C::ExecuteUbergraph_BP_BuildObject_TorchStand(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_TorchStand_C", "ExecuteUbergraph_BP_BuildObject_TorchStand");

	Params::BP_BuildObject_TorchStand_C_ExecuteUbergraph_BP_BuildObject_TorchStand Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_TorchStand.BP_BuildObject_TorchStand_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_TorchStand_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_TorchStand_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_TorchStand.BP_BuildObject_TorchStand_C.SetActiveLight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_TorchStand_C::SetActiveLight(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_TorchStand_C", "SetActiveLight");

	Params::BP_BuildObject_TorchStand_C_SetActiveLight Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

