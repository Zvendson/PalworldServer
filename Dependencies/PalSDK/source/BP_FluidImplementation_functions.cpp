#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_FluidImplementation_classes.hpp"
#include "PalSDK/BP_FluidImplementation_parameters.hpp"


namespace PalSDK
{

// Function BP_FluidImplementation.BP_FluidImplementation_C.ExecuteUbergraph_BP_FluidImplementation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluidImplementation_C::ExecuteUbergraph_BP_FluidImplementation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "ExecuteUbergraph_BP_FluidImplementation");

	Params::BP_FluidImplementation_C_ExecuteUbergraph_BP_FluidImplementation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_FluidImplementation.BP_FluidImplementation_C.FindFluidController
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UBP_FluidImplementation_C::FindFluidController()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "FindFluidController");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidImplementation.BP_FluidImplementation_C.FluidTrace
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                          Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    Valid                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluidImplementation_C::FluidTrace(const struct FVector& Location, bool* Valid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "FluidTrace");

	Params::BP_FluidImplementation_C_FluidTrace Parms{};

	Parms.Location = std::move(Location);

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;
}


// Function BP_FluidImplementation.BP_FluidImplementation_C.PerBoneDraw
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             Bone_Name                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*                   Mesh_Component                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UBP_FluidImplementation_C::PerBoneDraw(class FName Bone_Name, class UMeshComponent*& Mesh_Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "PerBoneDraw");

	Params::BP_FluidImplementation_C_PerBoneDraw Parms{};

	Parms.Bone_Name = Bone_Name;
	Parms.Mesh_Component = Mesh_Component;

	UObject::ProcessEvent(Func, &Parms);

	Mesh_Component = Parms.Mesh_Component;
}


// Function BP_FluidImplementation.BP_FluidImplementation_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void UBP_FluidImplementation_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_FluidImplementation.BP_FluidImplementation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FluidImplementation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_FluidImplementation_C", "ReceiveTick");

	Params::BP_FluidImplementation_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

