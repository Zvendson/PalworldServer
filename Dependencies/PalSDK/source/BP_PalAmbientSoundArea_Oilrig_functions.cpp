#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAmbientSoundArea_Oilrig_classes.hpp"
#include "PalSDK/BP_PalAmbientSoundArea_Oilrig_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAmbientSoundArea_Oilrig.BP_PalAmbientSoundArea_Oilrig_C.GetAreaCollision
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_PalAmbientSoundArea_Oilrig_C::GetAreaCollision() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAmbientSoundArea_Oilrig_C", "GetAreaCollision");

	Params::BP_PalAmbientSoundArea_Oilrig_C_GetAreaCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

