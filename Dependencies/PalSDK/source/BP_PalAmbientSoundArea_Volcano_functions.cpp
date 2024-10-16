#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_PalAmbientSoundArea_Volcano_classes.hpp"
#include "PalSDK/BP_PalAmbientSoundArea_Volcano_parameters.hpp"


namespace PalSDK
{

// Function BP_PalAmbientSoundArea_Volcano.BP_PalAmbientSoundArea_Volcano_C.GetAreaCollision
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* ABP_PalAmbientSoundArea_Volcano_C::GetAreaCollision() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalAmbientSoundArea_Volcano_C", "GetAreaCollision");

	Params::BP_PalAmbientSoundArea_Volcano_C_GetAreaCollision Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

