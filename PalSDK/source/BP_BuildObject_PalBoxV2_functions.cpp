#include "PalServer/Basic.hpp"

#include "PalServer/BP_BuildObject_PalBoxV2_classes.hpp"
#include "PalServer/BP_BuildObject_PalBoxV2_parameters.hpp"


namespace PalServer
{

// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ExecuteUbergraph_BP_BuildObject_PalBoxV2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_PalBoxV2_C::ExecuteUbergraph_BP_BuildObject_PalBoxV2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "ExecuteUbergraph_BP_BuildObject_PalBoxV2");

	Params::BP_BuildObject_PalBoxV2_C_ExecuteUbergraph_BP_BuildObject_PalBoxV2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.OnAvailable_BlueprintImpl
// (Event, Protected, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_PalBoxV2_C::OnAvailable_BlueprintImpl()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "OnAvailable_BlueprintImpl");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_BuildObject_PalBoxV2_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_PalBoxV2_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "ReceiveTick");

	Params::BP_BuildObject_PalBoxV2_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.UpdateVisibleAreaRange
// (Private, BlueprintCallable, BlueprintEvent)

void ABP_BuildObject_PalBoxV2_C::UpdateVisibleAreaRange()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "UpdateVisibleAreaRange");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetBaseCampPointMeshComponent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UStaticMeshComponent*             ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UStaticMeshComponent* ABP_BuildObject_PalBoxV2_C::GetBaseCampPointMeshComponent() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "GetBaseCampPointMeshComponent");

	Params::BP_BuildObject_PalBoxV2_C_GetBaseCampPointMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetFastTravelLocalTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_BuildObject_PalBoxV2_C::GetFastTravelLocalTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "GetFastTravelLocalTransform");

	Params::BP_BuildObject_PalBoxV2_C_GetFastTravelLocalTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_BuildObject_PalBoxV2.BP_BuildObject_PalBoxV2_C.GetWorkerSpawnLocalTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FTransform ABP_BuildObject_PalBoxV2_C::GetWorkerSpawnLocalTransform() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_PalBoxV2_C", "GetWorkerSpawnLocalTransform");

	Params::BP_BuildObject_PalBoxV2_C_GetWorkerSpawnLocalTransform Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

