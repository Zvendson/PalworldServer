#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SquadNPCSpawner_ForCampBase_classes.hpp"
#include "PalSDK/BP_SquadNPCSpawner_ForCampBase_parameters.hpp"


namespace PalSDK
{

// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.AdjustFloor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           SpaenedChara                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_ForCampBase_C::AdjustFloor(class AActor* SpaenedChara)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_ForCampBase_C", "AdjustFloor");

	Params::BP_SquadNPCSpawner_ForCampBase_C_AdjustFloor Parms{};

	Parms.SpaenedChara = SpaenedChara;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.DeleteOnePoint
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Point                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_ForCampBase_C::DeleteOnePoint(class AActor* Point)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_ForCampBase_C", "DeleteOnePoint");

	Params::BP_SquadNPCSpawner_ForCampBase_C_DeleteOnePoint Parms{};

	Parms.Point = Point;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_SquadNPCSpawner_ForCampBase_C::ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_ForCampBase_C", "ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase");

	Params::BP_SquadNPCSpawner_ForCampBase_C_ExecuteUbergraph_BP_SquadNPCSpawner_ForCampBase Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.RayAdjustFloor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_SquadNPCSpawner_ForCampBase_C::RayAdjustFloor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_ForCampBase_C", "RayAdjustFloor");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_SquadNPCSpawner_ForCampBase.BP_SquadNPCSpawner_ForCampBase_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_SquadNPCSpawner_ForCampBase_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SquadNPCSpawner_ForCampBase_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

