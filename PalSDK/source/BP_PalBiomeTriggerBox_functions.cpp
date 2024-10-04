#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalBiomeTriggerBox_classes.hpp"
#include "PalServer/BP_PalBiomeTriggerBox_parameters.hpp"


namespace PalServer
{

// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ExecuteUbergraph_BP_PalBiomeTriggerBox
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ExecuteUbergraph_BP_PalBiomeTriggerBox(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ExecuteUbergraph_BP_PalBiomeTriggerBox");

	Params::BP_PalBiomeTriggerBox_C_ExecuteUbergraph_BP_PalBiomeTriggerBox Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorBeginOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ReceiveActorBeginOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveActorBeginOverlap");

	Params::BP_PalBiomeTriggerBox_C_ReceiveActorBeginOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveActorEndOverlap
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_PalBiomeTriggerBox_C::ReceiveActorEndOverlap(class AActor* OtherActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveActorEndOverlap");

	Params::BP_PalBiomeTriggerBox_C_ReceiveActorEndOverlap Parms{};

	Parms.OtherActor = OtherActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalBiomeTriggerBox.BP_PalBiomeTriggerBox_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_PalBiomeTriggerBox_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalBiomeTriggerBox_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

