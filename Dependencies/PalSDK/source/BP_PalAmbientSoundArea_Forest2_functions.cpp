#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAmbientSoundArea_Forest2_classes.hpp"
#include "PalSDK/BP_PalAmbientSoundArea_Forest2_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAmbientSoundArea_Forest2.BP_PalAmbientSoundArea_Forest2_C.GetAreaCollision
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_PalAmbientSoundArea_Forest2_C::GetAreaCollision() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAmbientSoundArea_Forest2_C", "GetAreaCollision");

	Params::BP_PalAmbientSoundArea_Forest2_C_GetAreaCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

