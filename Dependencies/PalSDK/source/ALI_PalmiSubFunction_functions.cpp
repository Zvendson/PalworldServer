#include "PalSDK/Basic.hpp"

#include "PalSDK/ALI_PalmiSubFunction_classes.hpp"
#include "PalSDK/ALI_PalmiSubFunction_parameters.hpp"


namespace PalSDK
{

// Function ALI_PalmiSubFunction.ALI_PalmiSubFunction_C.LeftHandAttach
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        LeftHandAttach_0                                       (Parm, OutParm, NoDestructor)

void IALI_PalmiSubFunction_C::LeftHandAttach(const struct FPoseLink& InPose, struct FPoseLink* LeftHandAttach_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_PalmiSubFunction_C", "LeftHandAttach");

	Params::ALI_PalmiSubFunction_C_LeftHandAttach Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (LeftHandAttach_0 != nullptr)
		*LeftHandAttach_0 = std::move(Parms.LeftHandAttach_0);
}

}

