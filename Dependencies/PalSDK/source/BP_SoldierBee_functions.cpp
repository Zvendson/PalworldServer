#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_SoldierBee_classes.hpp"
#include "PalSDK/BP_SoldierBee_parameters.hpp"


namespace PalSDK
{

// Function BP_SoldierBee.BP_SoldierBee_C.GetHandAttachMesh
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class USkeletalMeshComponent* ABP_SoldierBee_C::GetHandAttachMesh()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_SoldierBee_C", "GetHandAttachMesh");

	Params::BP_SoldierBee_C_GetHandAttachMesh Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

