#include "PalServer/Basic.hpp"

#include "PalServer/BP_PalIncidentCamera_classes.hpp"
#include "PalServer/BP_PalIncidentCamera_parameters.hpp"


namespace PalServer
{

// Function BP_PalIncidentCamera.BP_PalIncidentCamera_C.SetCameraTransform
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                       Transform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_PalIncidentCamera_C::SetCameraTransform(const struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_PalIncidentCamera_C", "SetCameraTransform");

	Params::BP_PalIncidentCamera_C_SetCameraTransform Parms{};

	Parms.Transform = std::move(Transform);

	UObject::ProcessEvent(Func, &Parms);
}

}

