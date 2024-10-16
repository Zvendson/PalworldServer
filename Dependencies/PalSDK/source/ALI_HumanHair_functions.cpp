#include "PalSDK/Basic.hpp"

#include "PalSDK/ALI_HumanHair_classes.hpp"
#include "PalSDK/ALI_HumanHair_parameters.hpp"


namespace PalSDK
{

// Function ALI_HumanHair.ALI_HumanHair_C.HairLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        HairLayer_0                                            (Parm, OutParm, NoDestructor)

void IALI_HumanHair_C::HairLayer(const struct FPoseLink& InPose, struct FPoseLink* HairLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_HumanHair_C", "HairLayer");

	Params::ALI_HumanHair_C_HairLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (HairLayer_0 != nullptr)
		*HairLayer_0 = std::move(Parms.HairLayer_0);
}

}

