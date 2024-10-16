#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAmbientSoundArea_Cave_classes.hpp"
#include "PalSDK/BP_PalAmbientSoundArea_Cave_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAmbientSoundArea_Cave.BP_PalAmbientSoundArea_Cave_C.GetAreaCollision
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_PalAmbientSoundArea_Cave_C::GetAreaCollision() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAmbientSoundArea_Cave_C", "GetAreaCollision");

	Params::BP_PalAmbientSoundArea_Cave_C_GetAreaCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

