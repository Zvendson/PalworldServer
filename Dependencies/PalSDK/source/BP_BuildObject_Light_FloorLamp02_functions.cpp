#include "PalSDK/Basic.hpp"

#include "PalSDK/BP_BuildObject_Light_FloorLamp02_classes.hpp"
#include "PalSDK/BP_BuildObject_Light_FloorLamp02_parameters.hpp"


namespace PalSDK
{

// Function BP_BuildObject_Light_FloorLamp02.BP_BuildObject_Light_FloorLamp02_C.SetActiveLight
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    bActive                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_BuildObject_Light_FloorLamp02_C::SetActiveLight(bool bActive)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_BuildObject_Light_FloorLamp02_C", "SetActiveLight");

	Params::BP_BuildObject_Light_FloorLamp02_C_SetActiveLight Parms{};

	Parms.bActive = bActive;

	UObject::ProcessEvent(Func, &Parms);
}

}

