#include "PalServer/Basic.hpp"

#include "PalServer/ALI_HumanCloth_classes.hpp"
#include "PalServer/ALI_HumanCloth_parameters.hpp"


namespace PalServer
{

// Function ALI_HumanCloth.ALI_HumanCloth_C.ClothLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        InPose                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                        ClothLayer_0                                           (Parm, OutParm, NoDestructor)

void IALI_HumanCloth_C::ClothLayer(const struct FPoseLink& InPose, struct FPoseLink* ClothLayer_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ALI_HumanCloth_C", "ClothLayer");

	Params::ALI_HumanCloth_C_ClothLayer Parms{};

	Parms.InPose = std::move(InPose);

	UObject::ProcessEvent(Func, &Parms);

	if (ClothLayer_0 != nullptr)
		*ClothLayer_0 = std::move(Parms.ClothLayer_0);
}

}

