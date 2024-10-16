#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalSkeletalMeshComponent_AutoRotation_classes.hpp"
#include "PalSDK/BP_PalSkeletalMeshComponent_AutoRotation_parameters.hpp"


namespace PalSDK
{

// Function BP_PalSkeletalMeshComponent_AutoRotation.BP_PalSkeletalMeshComponent_AutoRotation_C.ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSkeletalMeshComponent_AutoRotation_C::ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSkeletalMeshComponent_AutoRotation_C", "ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation");

	Params::BP_PalSkeletalMeshComponent_AutoRotation_C_ExecuteUbergraph_BP_PalSkeletalMeshComponent_AutoRotation Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_PalSkeletalMeshComponent_AutoRotation.BP_PalSkeletalMeshComponent_AutoRotation_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PalSkeletalMeshComponent_AutoRotation_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalSkeletalMeshComponent_AutoRotation_C", "ReceiveTick");

	Params::BP_PalSkeletalMeshComponent_AutoRotation_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}

}

